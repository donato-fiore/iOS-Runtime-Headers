// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALDEVICE_H
#define IOGPUMETALDEVICE_H

@class MTLDevice;
@protocol OS_dispatch_queue, OS_dispatch_source, MTLDeviceSPI;


#import "IOGPUMetalDeviceShmemPool.h"
#import "IOGPUMemoryInfo.h"

@interface IOGPUMetalDevice : MTLDevice {
    *__IOGPUDevice _deviceRef;
    ? _storageCreateParams;
    *IOGPUMetalCommandBufferStoragePool _commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    NSUInteger _textureRam;
    NSUInteger _videoRam;
    NSUInteger _sharedMemorySize;
    unsigned int _accelID;
    NSUInteger _segmentByteThreshold;
    IOGPUMetalDeviceShmemPool *_ioKernelCommandListShmemPool;
    BOOL _disableGPUIO;
    *IOGPUMetalSuballocator _buffer_suballocator;
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
    NSObject<OS_dispatch_queue> *_device_pool_cleanup_queue;
    NSObject<OS_dispatch_source> *_device_pool_cleanup_source;
    os_unfair_lock_s _device_pool_cleanup_lock;
    BOOL _device_pool_cleanup_scheduled;
    BOOL _device_pool_cleanup_requested;
    NSUInteger _registryID;
    id<MTLDeviceSPI> *_deviceWrapper;
}


@property (readonly) unsigned int acceleratorPort; // ivar: _acceleratorPort
@property (readonly) NSUInteger currentAllocatedSize;
@property (readonly) NSUInteger dedicatedMemorySize;
@property (readonly) BOOL hasUnifiedMemory;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) *id hwResourcePools;
@property (readonly) IOGPUMemoryInfo *memoryInfo;
@property (readonly) int numCommandBuffers; // ivar: _numCommandBuffers
@property (readonly) NSUInteger recommendedMaxWorkingSetSize;
@property (readonly) NSUInteger registryID;
@property (readonly) NSUInteger sharedMemorySize;
@property (readonly) BOOL supportPriorityBand;
@property (readonly) BOOL supportsVertexAmplification;


+(void)registerDevices;
+(void)registerService:(unsigned int)arg0 ;
-(BOOL)supportsVertexAmplificationCount:(NSUInteger)arg0 ;
-(NSUInteger)maxBufferLength;
-(id)_deviceWrapper;
-(id)akPrivateResourceListPool;
-(id)akResourceListPool;
-(id)allocBufferSubDataWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 alignment:(NSUInteger)arg2 heapIndex:(*short)arg3 bufferIndex:(*short)arg4 bufferOffset:(*NSUInteger)arg5 ;
-(id)allocBufferSubDataWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 alignment:(NSUInteger)arg2 heapIndex:(*short)arg3 bufferIndex:(*short)arg4 bufferOffset:(*NSUInteger)arg5 parentAddress:(NSUInteger)arg6 parentLength:(NSUInteger)arg7 ;
-(id)indirectArgumentBufferDecodingData;
-(id)initWithAcceleratorPort:(unsigned int)arg0 ;
-(id)initWithAcceleratorPort:(unsigned int)arg0 options:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithBuffer:(id)arg0 offset:(NSUInteger)arg1 resourceIndex:(NSUInteger)arg2 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg0 ;
-(id)newCommandQueueWithDescriptor:(id)arg0 ;
-(id)newEvent;
-(id)newFence;
-(id)newIOCommandQueueWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newIOHandleWithURL:(id)arg0 compressionMethod:(NSInteger)arg1 error:(*id)arg2 ;
-(id)newIOHandleWithURL:(id)arg0 compressionType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)newIOHandleWithURL:(id)arg0 error:(*id)arg1 ;
-(id)newIndirectArgumentBufferLayoutWithStructType:(id)arg0 ;
-(id)newIndirectArgumentEncoderWithLayout:(id)arg0 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg0 maxCommandCount:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newLateEvalEvent;
-(id)newUncachedIOHandleWithURL:(id)arg0 compressionType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)newUncachedIOHandleWithURL:(id)arg0 error:(*id)arg1 ;
-(struct __IOGPUDevice *)deviceRef;
-(unsigned int)cmdBufArgsSize;
-(unsigned int)initialDebugBufferShmemSize;
-(unsigned int)initialIOKernelCommandListShmemSize;
-(unsigned int)initialKernelCommandShmemSize;
-(unsigned int)initialSegmentListShmemSize;
-(unsigned int)initialSidebandShmemSize;
-(void)_addResource:(id)arg0 ;
-(void)_purgeDevice;
-(void)_removeResource:(id)arg0 ;
-(void)_setDeviceWrapper:(id)arg0 ;
-(void)dealloc;
-(void)deallocBufferSubData:(id)arg0 heapIndex:(short)arg1 bufferIndex:(short)arg2 bufferOffset:(NSUInteger)arg3 length:(NSUInteger)arg4 ;
-(void)setComputePipelineStateCommandShmemSize:(unsigned int)arg0 ;
-(void)setHwResourcePool:(*id)arg0 count:(int)arg1 ;
-(void)setIndirectArgumentBufferDecodingData:(id)arg0 ;
-(void)setSegmentListShmemSize:(unsigned int)arg0 ;


@end


#endif