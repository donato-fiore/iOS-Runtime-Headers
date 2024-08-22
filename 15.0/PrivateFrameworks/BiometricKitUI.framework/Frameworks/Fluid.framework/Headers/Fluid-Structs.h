typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct FLSpringParameters {
    CGFloat dampingRatio;
    CGFloat dampingRatioSmoothing;
    CGFloat response;
    CGFloat responseSmoothing;
} FLSpringParameters;

typedef struct FLSimpleSpringState {
    CGFloat position;
    CGFloat velocity;
} FLSimpleSpringState;

typedef struct FLSimpleSpring {
    FLSimpleSpringState state;
    CGFloat mass;
    CGFloat stiffness;
    CGFloat damping;
    CGFloat anchor;
    CGFloat stablePositionThreshold;
    CGFloat stableVelocityThreshold;
} FLSimpleSpring;

typedef struct FLCompoundSpring {
    FLSimpleSpringState state;
    FLSimpleSpring stiffness;
    FLSimpleSpring damping;
    FLSimpleSpring dampingRatio;
    FLSimpleSpring response;
    FLSimpleSpring anchor;
    BOOL usesDampingRatioResponse;
    CGFloat stablePositionThreshold;
    CGFloat stableVelocityThreshold;
} FLCompoundSpring;

