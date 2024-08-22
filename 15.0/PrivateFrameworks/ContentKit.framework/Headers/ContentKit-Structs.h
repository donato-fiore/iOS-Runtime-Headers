typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct _predicateFlags {
    BOOL _evaluationBlocked;
    BOOL _reservedPredicateFlags;
} _predicateFlags;

typedef struct archive_entry {
} // Error Processing Struct Fields

typedef struct archive {
} // Error Processing Struct Fields

typedef struct CLLocationCoordinate2D {
    CGFloat field0;
    CGFloat field1;
} CLLocationCoordinate2D;

typedef struct _WFContentSlice {
    NSUInteger startIndex;
    NSUInteger endIndex;
} _WFContentSlice;

typedef struct magic_set {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

