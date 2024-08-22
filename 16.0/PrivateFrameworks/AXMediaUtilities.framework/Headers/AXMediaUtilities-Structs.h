typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct CGImageMetadata {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct vImage_Buffer {
    void field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
} vImage_Buffer;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> {
    id __value_;
} __compressed_pair<NSString *__strong *, std::allocator<NSString *>>;

typedef struct vector<NSString *, std::allocator<NSString *>> {
    id __begin_;
    id __end_;
    __compressed_pair<NSString *__strong *, std::allocator<NSString *>> __end_cap_;
} vector<NSString *, std::allocator<NSString *>>;

typedef struct ? {
    CGFloat values;
    CGFloat scaleMinimum;
    CGFloat scaleMaximum;
    CGFloat valueMinimum;
    CGFloat valueMaximum;
    CGFloat count;
} ?;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<CGImage> {
    CGImage field0;
    __shared_weak_count field1;
} shared_ptr<CGImage>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct OpaqueCMTimebase {
} // Error Processing Struct Fields

typedef struct OpaqueFigCaptureSession {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct FigRemoteOperation {
    int field0;
    int field1;
    NSUInteger field2;
    __CFString field3;
    unk field4;
    ? field5;
    ? field6;
    ? field7;
    ? field8;
    ? field9;
} FigRemoteOperation;

typedef struct FigLocalQueueMessage {
    int field0;
    unk field1;
    ? field2;
    ? field3;
} FigLocalQueueMessage;

typedef struct remoteQueueReceiverOpaque {
} // Error Processing Struct Fields

typedef struct localQueueOpaque {
} // Error Processing Struct Fields

typedef struct _LXLexicon {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>>;

typedef struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> __end_cap_;
} vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct CVNLPCaptionHandler {
} // Error Processing Struct Fields

