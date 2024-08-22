typedef struct _NSZone {
} // Error Processing Struct Fields

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

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct CGDataProvider {
} // Error Processing Struct Fields

typedef struct __IOHIDServiceClient {
} // Error Processing Struct Fields

typedef struct __IOHIDEventSystemClient {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct OpaqueFigPlaybackItem {
} // Error Processing Struct Fields

typedef struct OpaqueFigAsset {
} // Error Processing Struct Fields

typedef struct OpaqueFigFormatReader {
} // Error Processing Struct Fields

typedef struct OpaqueFigMutableComposition {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct OpaqueVTCompressionSession {
} // Error Processing Struct Fields

typedef struct HMIVideoEncoderDataRate {
    NSInteger field0;
    NSInteger field1;
} HMIVideoEncoderDataRate;

typedef struct GreedyClusterer {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<homeai::clustering::GreedyClusterer> {
    GreedyClusterer __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<homeai::clustering::GreedyClusterer>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct opaqueCMBufferQueue {
} // Error Processing Struct Fields

typedef struct OpaqueVTDecompressionSession {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat dx;
    CGFloat dy;
} CGVector;

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * field0;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * field0;
    char * field1;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> field2;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> {
    void field0;
} __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>>;

typedef struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> {
    void field0;
    void field1;
    __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> field2;
} vector<cv::Point_<float>, std::allocator<cv::Point_<float>>>;

typedef struct Mat {
} // Error Processing Struct Fields

typedef struct vector<cv::Mat, std::allocator<cv::Mat>> {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

