typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSUInteger size;
    NSUInteger align;
} ?;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct MPSKernelDAG {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<MPSKernelDAG> {
    MPSKernelDAG __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<MPSKernelDAG>;

typedef struct __compressed_pair<const std::vector<long> *, std::default_delete<const std::vector<long>>> {
    void field0;
} __compressed_pair<const std::vector<long> *, std::default_delete<const std::vector<long>>>;

typedef struct unique_ptr<const std::vector<long>, std::default_delete<const std::vector<long>>> {
    __compressed_pair<const std::vector<long> *, std::default_delete<const std::vector<long>>> field0;
} unique_ptr<const std::vector<long>, std::default_delete<const std::vector<long>>>;

typedef struct MPSDimensionSlice {
    NSUInteger field0;
    NSUInteger field1;
} MPSDimensionSlice;

typedef struct MPSImageCoordinate {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} MPSImageCoordinate;

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct MPSKernelInfo {
} // Error Processing Struct Fields

typedef struct MPSDeviceSpecificInfo {
    MPSKernelInfo field0;
    unk field1;
    NSUInteger field2;
} MPSDeviceSpecificInfo;

typedef struct MPSLibraryInfo {
    int field0;
    unsigned int field1;
    char * field2;
    unk field3;
    MPSDeviceSpecificInfo field4;
    MPSDeviceSpecificInfo field5;
    MPSDeviceSpecificInfo field6;
    MPSDeviceSpecificInfo field7;
    MPSDeviceSpecificInfo field8;
    MPSDeviceSpecificInfo field9;
    MPSDeviceSpecificInfo field10;
    MPSDeviceSpecificInfo field11;
    MPSDeviceSpecificInfo field12;
    MPSDeviceSpecificInfo field13;
    MPSDeviceSpecificInfo field14;
    MPSDeviceSpecificInfo field15;
    MPSDeviceSpecificInfo field16;
    MPSDeviceSpecificInfo field17;
    MPSDeviceSpecificInfo field18;
    MPSDeviceSpecificInfo field19;
    MPSDeviceSpecificInfo field20;
    MPSDeviceSpecificInfo field21;
    MPSDeviceSpecificInfo field22;
    MPSDeviceSpecificInfo field23;
    MPSDeviceSpecificInfo field24;
    MPSDeviceSpecificInfo field25;
    MPSDeviceSpecificInfo field26;
    MPSDeviceSpecificInfo field27;
    MPSDeviceSpecificInfo field28;
    MPSDeviceSpecificInfo field29;
    MPSDeviceSpecificInfo field30;
    MPSDeviceSpecificInfo field31;
    MPSDeviceSpecificInfo field32;
    MPSDeviceSpecificInfo field33;
    MPSDeviceSpecificInfo field34;
    MPSDeviceSpecificInfo field35;
    MPSDeviceSpecificInfo field36;
    MPSDeviceSpecificInfo field37;
    MPSDeviceSpecificInfo field38;
    MPSDeviceSpecificInfo field39;
    MPSDeviceSpecificInfo field40;
    MPSDeviceSpecificInfo field41;
    MPSDeviceSpecificInfo field42;
    MPSDeviceSpecificInfo field43;
} MPSLibraryInfo;

typedef struct __cxx_atomic_impl<void *, std::__cxx_atomic_base_impl<void *>> {
    uint8_t __a_value;
    void field1;
} __cxx_atomic_impl<void *, std::__cxx_atomic_base_impl<void *>>;

typedef struct atomic<void *> {
    __cxx_atomic_impl<void *, std::__cxx_atomic_base_impl<void *>> __a_;
} atomic<void *>;

typedef struct MPSAutoBuffer {
    atomic<void *> _buffer;
    NSUInteger _requestedSize;
    id _device;
    id <MTLDevice>;
    ? _cache;
} MPSAutoBuffer;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct ResourceListNode {
    unk field0;
    ResourceListNode field1;
} ResourceListNode;

typedef struct MPSStateTextureInfo {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
} MPSStateTextureInfo;

typedef struct HeapNode {
} // Error Processing Struct Fields

typedef struct CacheFrame {
    CacheFrame field0;
    ResourceNode field1;
    HeapNodeBlock field2;
} CacheFrame;

typedef struct ResourceNode {
} // Error Processing Struct Fields

typedef struct HeapNodeBlock {
} // Error Processing Struct Fields

typedef struct MPSAutoCache {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> {
    uint8_t __a_value;
    NSInteger field1;
} __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>>;

typedef struct atomic<long> {
    __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> __a_;
} atomic<long>;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct MPSPixelInfo {
    BOOL pixelFormat;
    BOOL chunkSize;
    BOOL chunkWidth;
    BOOL chunkHeight;
    BOOL pixelStyle;
    BOOL colorModel;
    BOOL bitDepth;
    BOOL isSigned;
    BOOL isClamped;
    BOOL isInteger;
    BOOL canFilter;
    BOOL canRender;
    BOOL canWrite;
    BOOL canMultisample;
    BOOL isSupported;
    BOOL isCompressed;
    BOOL chunkSizePlane2;
    BOOL log2MinAlignment;
    BOOL featureChannelFormat;
    BOOL _padding;
} MPSPixelInfo;

typedef struct __cxx_atomic_impl<id<MTLTexture>, std::__cxx_atomic_base_impl<id<MTLTexture>>> {
    uint8_t __a_value;
    id field1;
} __cxx_atomic_impl<id<MTLTexture>, std::__cxx_atomic_base_impl<id<MTLTexture>>>;

typedef struct atomic<id<MTLTexture>> {
    __cxx_atomic_impl<id<MTLTexture>, std::__cxx_atomic_base_impl<id<MTLTexture>>> __a_;
} atomic<id<MTLTexture>>;

typedef struct MPSAutoTexture {
    atomic<id<MTLTexture>> _texture;
    ? _resourceSize;
    NSUInteger _rowBytes;
    MPSPixelInfo _pixelInfo;
    unk ;
    ? _subTex;
    ? ;
    unsigned char _type;
    unsigned char _twiddled;
} MPSAutoTexture;

typedef struct MPSDevice {
} // Error Processing Struct Fields

typedef struct UserBufferBindingData_s {
    id userBoundBuffer;
    BOOL <MTLBuffer>;
    void userBoundBuffer_set;
    NSUInteger userBoundBytes;
    BOOL userBoundBytes_length;
    NSUInteger userBoundBytes_set;
} UserBufferBindingData_s;

typedef struct MPSCommandBufferDescriptor {
    NSUInteger encoderCount;
    NSUInteger producedValues;
} MPSCommandBufferDescriptor;

