typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

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

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

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

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CAPropertyInfo {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    SEL field3;
    char * field4;
    __CFString field5;
} _CAPropertyInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct Buckets {
    NSInteger shortCount;
    NSInteger mediumCount;
    NSInteger longCount;
    CGFloat shortDuration;
    CGFloat mediumDuration;
    CGFloat longDuration;
    int defaultBucketIsNotShort;
} Buckets;

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

typedef struct PXViewSpecDescriptor {
    NSInteger field0;
    NSUInteger field1;
    CGSize field2;
} PXViewSpecDescriptor;

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

typedef struct AudioStreamBasicDescription {
    CGFloat field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} AudioStreamBasicDescription;

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct CAStreamBasicDescription {
    CGFloat field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} CAStreamBasicDescription;

typedef struct AudioBufferList {
} // Error Processing Struct Fields

typedef struct AUOutputBL {
    CAStreamBasicDescription field0;
    char * field1;
    AudioBufferList field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
} AUOutputBL;

typedef struct SMPTETime {
    short field0;
    short field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    short field5;
    short field6;
    short field7;
    short field8;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat field0;
    NSUInteger field1;
    CGFloat field2;
    NSUInteger field3;
    SMPTETime field4;
    unsigned int field5;
    unsigned int field6;
} AudioTimeStamp;

typedef struct AUTimestampGenerator {
    AudioTimeStamp field0;
    CGFloat field1;
    CGFloat field2;
    AudioTimeStamp field3;
    AudioTimeStamp field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    CGFloat field9;
    CGFloat field10;
    BOOL field11;
} AUTimestampGenerator;

typedef struct DspLibBiquad {
} // Error Processing Struct Fields

typedef struct LkFsMeasure {
} // Error Processing Struct Fields

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct timeval {
    NSInteger tv_sec;
    int tv_usec;
} timeval;

typedef struct rusage {
    timeval ru_utime;
    timeval ru_stime;
    NSInteger ru_maxrss;
    NSInteger ru_ixrss;
    NSInteger ru_idrss;
    NSInteger ru_isrss;
    NSInteger ru_minflt;
    NSInteger ru_majflt;
    NSInteger ru_nswap;
    NSInteger ru_inblock;
    NSInteger ru_oublock;
    NSInteger ru_msgsnd;
    NSInteger ru_msgrcv;
    NSInteger ru_nsignals;
    NSInteger ru_nvcsw;
    NSInteger ru_nivcsw;
} rusage;

typedef struct OpaqueFigPlaybackItem {
} // Error Processing Struct Fields

typedef struct OpaqueCMTimebase {
} // Error Processing Struct Fields

typedef struct OpaqueFigCPEProtector {
} // Error Processing Struct Fields

typedef struct opaqueMTAudioProcessingTap {
} // Error Processing Struct Fields

typedef struct OpaqueFigPlayer {
} // Error Processing Struct Fields

typedef struct DurationTriplet {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} DurationTriplet;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct in_addr {
    unsigned int field0;
} in_addr;

typedef struct sockaddr_in {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    in_addr field3;
    char field4;
} sockaddr_in;

typedef struct __SCNetworkReachability {
} // Error Processing Struct Fields

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct CLLocationCoordinate2D {
    CGFloat field0;
    CGFloat field1;
} CLLocationCoordinate2D;

