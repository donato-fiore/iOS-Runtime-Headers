typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

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

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL contentStateDidChange;
    BOOL updatePrepared;
    BOOL updateApplied;
    BOOL updateCompleted;
    BOOL clientSettingsUpdated;
    BOOL didActivate;
    BOOL willDeactivateWithError;
    BOOL didInvalidate;
    BOOL clientDidConnect;
} ?;

typedef struct FBProcessTimes {
    CGFloat beginUserCPUElapsedTime;
    CGFloat beginSystemCPUElapsedTime;
    CGFloat beginIdleCPUElapsedTime;
    CGFloat beginApplicationCPUElapsedTime;
} FBProcessTimes;

