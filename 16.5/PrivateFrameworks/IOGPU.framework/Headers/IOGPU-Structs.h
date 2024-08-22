typedef struct IOGPUKernelCommandSignalOrWaitEventArgs {
    unsigned int field0;
    unsigned int field1;
    NSUInteger field2;
} IOGPUKernelCommandSignalOrWaitEventArgs;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __IOGPUDevice {
    __CFRuntimeBase field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    os_unfair_lock_s field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    IOGPUDeviceCommPage field15;
    IOGPUClientSharedGlobalRO field16;
    id field17;
    unk field18;
    os_unfair_lock_s field19;
    shmemlog_list field20;
    NSUInteger field21;
    NSUInteger field22;
    NSUInteger field23;
    IOGPUDeviceConfigData field24;
} __IOGPUDevice;

typedef struct IOGPUClientSharedRO {
} // Error Processing Struct Fields

typedef struct __IOGPUResource {
    __CFRuntimeBase field0;
    __IOGPUDevice field1;
    void field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned int field5;
    unsigned int field6;
    NSUInteger field7;
    NSUInteger field8;
    IOGPUClientSharedRO field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
} __IOGPUResource;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct ? {
} // Error Processing Struct Fields

typedef struct IOGPUNewResourceData {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    unsigned char field6;
    unsigned char field7;
    unsigned char field8;
    unsigned char field9;
    unsigned int field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    unsigned int field14;
    unk field15;
    ? field16;
    ? field17;
} IOGPUNewResourceData;

typedef struct IOGPUNewResourceArgs {
    IOGPUNewResourceData field0;
} IOGPUNewResourceArgs;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct IOGPUResourceInfo {
    __IOSurface iosurface;
    BOOL resourceSize;
    BOOL iosurfaceField;
    unsigned int resourceID;
} IOGPUResourceInfo;

typedef struct _IOGPUMetalResource {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct MTLResourceID {
    NSUInteger field0;
} MTLResourceID;

typedef struct MTLDispatch {
    MTLDispatch field0;
    id field1;
    unk field2;
} MTLDispatch;

typedef struct MTLSyncDispatch {
    MTLSyncDispatch field0;
    id field1;
    unk field2;
} MTLSyncDispatch;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct IOGPUMetalCommandBufferResourceInfo {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    id field4;
    IOGPUResourceInfo field5;
} IOGPUMetalCommandBufferResourceInfo;

typedef struct IOGPUSegmentResourceDescriptorGroup {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
} IOGPUSegmentResourceDescriptorGroup;

typedef struct IOGPUResourceList {
    unsigned int field0;
    unsigned int field1;
    NSUInteger field2;
    unk field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    IOGPUSegmentResourceDescriptorGroup field12;
    NSUInteger field13;
    NSUInteger field14;
    unsigned int field15;
    unsigned int field16;
    unsigned int field17;
    unsigned int field18;
    unsigned int field19;
    unsigned int field20;
    unsigned int field21;
    unk field22;
    void field23;
} IOGPUResourceList;

typedef struct IOGPUMetalCommandBufferStoragePool {
    gpuStorageQueue field0;
    os_unfair_lock_s field1;
    int field2;
    int field3;
    id field4;
} IOGPUMetalCommandBufferStoragePool;

typedef struct IOGPUMetalCommandBufferStorage {
} // Error Processing Struct Fields

typedef struct IOGPUMetalCommandBufferSidebandBuffer {
    id field0;
    char * field1;
    char * field2;
    char * field3;
} IOGPUMetalCommandBufferSidebandBuffer;

typedef struct IOGPUSegmentListHeader {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
    IOGPUSegmentResourceListHeader field3;
} IOGPUSegmentListHeader;

typedef struct IOGPUSegmentResourceListHeader {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    IOGPUSegmentResourceDescriptorGroup field7;
} IOGPUSegmentResourceListHeader;

typedef struct IOGPUCommandQueueCommandBufferArgs {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unk field3;
    id field4;
    unk field5;
    NSUInteger field6;
    unk field7;
    id field8;
    unk field9;
    NSUInteger field10;
    unsigned int field11;
} IOGPUCommandQueueCommandBufferArgs;

typedef struct __IOGPUCommandQueue {
} // Error Processing Struct Fields

typedef struct MTLIOCommandQueueCommand {
} // Error Processing Struct Fields

typedef struct MTLIOCommandQueueCommandList {
} // Error Processing Struct Fields

typedef struct __IOGPUIOCommandQueue {
} // Error Processing Struct Fields

typedef struct IOGPUDeviceCommPage {
} // Error Processing Struct Fields

typedef struct IOGPUClientSharedGlobalRO {
} // Error Processing Struct Fields

typedef struct _s_shmemlog_ {
} // Error Processing Struct Fields

typedef struct shmemlog_list {
    _s_shmemlog_ field0;
} shmemlog_list;

typedef struct IOGPUDeviceConfigData {
    unsigned int field0;
    unsigned int field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    unsigned int field10;
} IOGPUDeviceConfigData;

typedef struct IndirectArgumentBufferCapabilities {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} IndirectArgumentBufferCapabilities;

typedef struct MTLTargetDeviceArch {
    NSUInteger field0;
    unsigned int field1;
    char * field2;
} MTLTargetDeviceArch;

typedef struct MTLPipelineCollection {
} // Error Processing Struct Fields

typedef struct MTLLibraryContainer {
} // Error Processing Struct Fields

typedef struct MTLCompilerConnectionManager {
    unk field0;
    BOOL field1;
    int field2;
} MTLCompilerConnectionManager;

typedef struct MTLPipelineLibraryBuilder {
    id field0;
    id field1;
} MTLPipelineLibraryBuilder;

typedef struct once_flag {
    NSUInteger __state_;
} once_flag;

typedef struct MDB_env {
} // Error Processing Struct Fields

typedef struct MTLArchiveMapDB {
    MDB_env field0;
    unsigned int field1;
    BOOL field2;
    BOOL field3;
} MTLArchiveMapDB;

typedef struct MTLArchiveUsageDB {
    MDB_env field0;
    unsigned int field1;
    BOOL field2;
    BOOL field3;
} MTLArchiveUsageDB;

typedef struct gpuStorageQueue {
} // Error Processing Struct Fields

typedef struct IOGPUMetalSuballocator {
} // Error Processing Struct Fields

typedef struct _IOGPUMetalDeviceShmemPrivate {
} // Error Processing Struct Fields

typedef struct shmemPoolQueue {
    id tqh_first;
    id IOGPUMetalDeviceShmem;
} shmemPoolQueue;

typedef struct _IOGPUMetalDeviceShmemPoolPrivate {
    shmemPoolQueue queue;
    os_unfair_lock_s lock;
    int count;
    Class shmemClass;
    id device;
    unsigned int IOGPUMetalDevice;
    int shmemSize;
} _IOGPUMetalDeviceShmemPoolPrivate;

typedef struct MTLRangeAllocatorElement {
} // Error Processing Struct Fields

typedef struct MTLRangeAllocator {
    MTLRangeAllocatorElement elements;
    unsigned int numElements;
    NSUInteger capacity;
    NSUInteger capacityIncrement;
    NSUInteger defaultAlignmentMask;
} MTLRangeAllocator;

typedef struct MTLIndirectCommandBufferHeader {
    NSUInteger headerSize;
    unsigned int commandTypes;
    BOOL inheritPipelineState;
    BOOL inheritBuffers;
    unsigned char maxVertexBufferBindCount;
    unsigned char maxFragmentBufferBindCount;
    unsigned char maxKernelBufferBindCount;
    unsigned char maxObjectBufferBindCount;
    unsigned char maxMeshBufferBindCount;
    BOOL supportRayTracing;
    NSUInteger size;
} MTLIndirectCommandBufferHeader;

typedef struct _IOGPUMetalResourcePrivate {
} // Error Processing Struct Fields

typedef struct _IOGPUMetalResourceQueue {
    id tqh_first;
    id IOGPUMetalPooledResource;
} _IOGPUMetalResourceQueue;

typedef struct _IOGPUMetalResourcePoolPrivate {
    _IOGPUMetalResourceQueue volatileQueue;
    _IOGPUMetalResourceQueue nonvolatileQueue;
    os_unfair_lock_s lock;
    int count;
} _IOGPUMetalResourcePoolPrivate;

typedef struct MTLIOCommand {
} // Error Processing Struct Fields

typedef struct MTLIOCommandList {
    MTLIOCommand field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    os_unfair_lock_s field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    id field9;
    id field10;
    id field11;
    id field12;
} MTLIOCommandList;

typedef struct MTLIODispatch {
    MTLIODispatch field0;
    id field1;
    unk field2;
} MTLIODispatch;

typedef struct __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>> {
    id __value_;
} __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>>;

typedef struct vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> {
    id __begin_;
    id __end_;
    __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>> __end_cap_;
} vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>>;

typedef struct IOGPUIOKernelCommandListHeader {
    unsigned int field0;
    unsigned int field1;
} IOGPUIOKernelCommandListHeader;

