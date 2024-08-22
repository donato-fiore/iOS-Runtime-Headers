typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ct_green_tea_logger_s {
} // Error Processing Struct Fields

typedef struct _xmlSAXHandler {
} // Error Processing Struct Fields

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct _xmlParserInput {
} // Error Processing Struct Fields

typedef struct _xmlParserCtxt {
} // Error Processing Struct Fields

typedef struct _xmlError {
    int field0;
    int field1;
    char * field2;
    int field3;
    char * field4;
    int field5;
    char * field6;
    char * field7;
    char * field8;
    int field9;
    int field10;
    void field11;
    void field12;
} _xmlError;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

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

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct OpaqueCMClock {
} // Error Processing Struct Fields

typedef struct OpaqueFigVideoTarget {
} // Error Processing Struct Fields

typedef struct OpaqueFigPlayerInterstitialCoordinator {
} // Error Processing Struct Fields

typedef struct OpaqueFigPlayer {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct OpaqueFigPlaybackItem {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSDirectionalEdgeInsets;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CATransform3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGFloat field15;
} CATransform3D;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

