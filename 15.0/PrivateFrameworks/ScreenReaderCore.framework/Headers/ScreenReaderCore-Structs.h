typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ProcessSerialNumber {
    unsigned int field0;
    unsigned int field1;
} ProcessSerialNumber;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct ? {
    CGFloat horizontal;
    CGFloat vertical;
} ?;

typedef struct SCRCMathAverageValue {
    unsigned int samples;
    CGFloat fifo;
    int fifoIndex;
    CGFloat sum;
    CGFloat average;
    CGFloat current;
} SCRCMathAverageValue;

typedef struct SCRCFingerState {
    NSUInteger identifier;
    NSInteger xDirection;
    NSInteger yDirection;
    SCRCMathAverageValue normalizedVelocityPerSample;
    SCRCMathAverageValue deltaXPerSample;
    SCRCMathAverageValue deltaYPerSample;
    SCRCMathAverageValue distancePerSample;
    CGFloat distanceTraveledWithInertiaApplied;
    BOOL dragStalled;
    NSInteger type;
    CGPoint startTouchPoint;
    CGPoint mostRecentTouchPoint;
    CGPoint lastDownPoint;
    CGFloat pressure;
    CGFloat altitude;
    CGFloat azimuth;
} SCRCFingerState;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __CFRunLoopTimer {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

