typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Arc4State {
    unsigned int field0;
    unsigned int field1;
    char * field2;
} Arc4State;

typedef struct GKTriangle {
} // Error Processing Struct Fields

typedef struct Obstacle {
    unk field0;
} Obstacle;

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct SphericalObstacle {
    unk _vptr$Obstacle;
    float radius;
    Vec3 center;
    int _seenFrom;
} SphericalObstacle;

typedef struct GKCDecisionNode {
} // Error Processing Struct Fields

typedef struct GKCDecisionTree {
} // Error Processing Struct Fields

typedef struct GKCMonteCarloStrategist {
    id field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
    BOOL field4;
    BOOL field5;
} GKCMonteCarloStrategist;

typedef struct GKQuad {
} // Error Processing Struct Fields

typedef struct GKSimpleVehicle {
    unk _vptr$AbstractLocalSpace;
    Vec3 _side;
    Vec3 _up;
    Vec3 _forward;
    Vec3 _position;
    float WanderSide;
    float WanderUp;
    Vec3 hisPositionAtNearestApproach;
    Vec3 ourPositionAtNearestApproach;
    BOOL gaudyPursuitAnnotation;
    int serialNumber;
    float _mass;
    float _radius;
    float _speed;
    float _maxForce;
    float _maxSpeed;
    float _curvature;
    Vec3 _lastForward;
    Vec3 _lastPosition;
    Vec3 _smoothedPosition;
    float _smoothedCurvature;
    Vec3 _smoothedAcceleration;
    BOOL m_rightHanded;
} GKSimpleVehicle;

typedef struct float2 {
    float field0;
    float field1;
} float2;

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct GKBox {
} // Error Processing Struct Fields

typedef struct PolylinePathway {
} // Error Processing Struct Fields

typedef struct mersenne_twister_engine<unsigned long long, 64UL, 312UL, 156UL, 31UL, 13043109905998158313ULL, 29UL, 6148914691236517205ULL, 17UL, 8202884508482404352ULL, 37UL, 18444473444759240704ULL, 43UL, 6364136223846793005ULL> {
    NSUInteger __x_;
    NSUInteger __i_;
} mersenne_twister_engine<unsigned long long, 64UL, 312UL, 156UL, 31UL, 13043109905998158313ULL, 29UL, 6148914691236517205ULL, 17UL, 8202884508482404352ULL, 37UL, 18444473444759240704ULL, 43UL, 6364136223846793005ULL>;

