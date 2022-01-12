// system includes
#include <stdint.h>

#define SCREEN_WIDTH  400
#define SCREEN_HEIGHT 240

enum Status {
    GAME_OVER,
    RUNNING,
    EXIT
};

struct Vector2
{
	float x, y;
};

struct Food
{
	uint32_t color;
	struct Vector2 position;
} food;

struct Snake
{
	uint32_t lenght;
	uint32_t color;
	struct Vector2 positions[1000];
	struct Vector2 headPositon;
	uint8_t dx;
	uint8_t dy;
	uint8_t speed;
} snake;

struct Game
{
	uint32_t clrClear;
	uint32_t wallColor;
	uint32_t score;
	uint32_t highscore;
	enum Status status;
	double drawTime;
	C3D_RenderTarget* top;
	C3D_RenderTarget* bottom;
	C2D_TextBuf dynamicBuf;
	C2D_Text scoreText[4];
} game;