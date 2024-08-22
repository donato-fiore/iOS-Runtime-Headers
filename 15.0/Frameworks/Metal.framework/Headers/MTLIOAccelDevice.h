// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELDEVICE_H
#define MTLIOACCELDEVICE_H

@class MTLDevice;
@protocol OS_dispatch_queue, OS_dispatch_source, MTLDeviceSPI;


#import "MTLIOMemoryInfo.h"

@interface MTLIOAccelDevice : MTLDevice {
    *__IOAccelDevice _deviceRef;
    *__IOAccelShared _sharedRef;
    ? _storageCreateParams;
    *MTLIOAccelCommandBufferStoragePool _commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    NSUInteger _textureRam;
    NSUInteger _videoRam;
    NSUInteger _sharedMemorySize;
    unsigned int _accelID;
    uint8_t _numCommandBuffers;
    NSUInteger _segmentByteThreshold;
    MTLIOAccelBufferHeap _bufferHeaps;
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
    NSObject<OS_dispatch_queue> *_device_pool_cleanup_queue;
    NSObject<OS_dispatch_source> *_device_pool_cleanup_source;
    BOOL _device_pool_cleanup_scheduled;
    unsigned int _fenceAllocatedCount;
    unsigned int _fenceMaximumCount;
    unsigned int _fenceBitmapSearchStart;
    unsigned int _fenceBitmapCount;
    *NSUInteger _fenceAllocationBitmap;
    NSUInteger _registryID;
    id<MTLDeviceSPI> *_deviceWrapper;
}


@property (readonly) unsigned int acceleratorPort; // ivar: _acceleratorPort
@property (readonly) NSUInteger currentAllocatedSize;
@property (readonly) NSUInteger dedicatedMemorySize;
@property (readonly) BOOL hasUnifiedMemory;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) *id hwResourcePools;
@property (readonly) MTLIOMemoryInfo *memoryInfo;
@property (readonly) int numCommandBuffers;
@property (readonly) NSUInteger recommendedMaxWorkingSetSize;
@property (readonly) NSUInteger registryID;
@property (readonly) NSUInteger sharedMemorySize;
@property (readonly) BOOL supportLazyInitialization;
@property (readonly) BOOL supportPriorityBand;
@property (readonly) BOOL supportsVertexAmplification;


+(void)registerDevices;
-(BOOL)lazyInitialize;
-(BOOL)setResourcesPurgeableState:(*id)arg0 newState:(NSUInteger)arg1 oldState:(*NSUInteger)arg2 count:(int)arg3 ;
-(BOOL)supportsVertexAmplificationCount:(NSUInteger)arg0 ;
-(NSUInteger)maxBufferLength;
-(id)_deviceWrapper;
-(id)akPrivateResourceListPool;
-(id)akResourceListPool;
-(id)allocBufferSubDataWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 alignment:(NSUInteger)arg2 heapIndex:(*short)arg3 bufferIndex:(*short)arg4 bufferOffset:(*NSUInteger)arg5 ;
-(id)indirectArgumentBufferDecodingData;
-(id)initWithAcceleratorPort:(unsigned int)arg0 ;
-(id)newAccelerationStructureWithBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg0 ;
-(id)newCommandQueueWithDescriptor:(id)arg0 ;
-(id)newEvent;
-(id)newFence;
-(id)newIndirectArgumentBufferLayoutWithStructType:(id)arg0 ;
-(id)newIndirectArgumentEncoderWithLayout:(id)arg0 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg0 maxCommandCount:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(short)heapIndexWithOptions:(NSUInteger)arg0 ;
-(struct __IOAccelDevice *)deviceRef;
-(struct __IOAccelShared *)sharedRef;
-(unsigned int)initialKernelCommandShmemSize;
-(unsigned int)initialSegmentListShmemSize;
-(void)_addResource:(id)arg0 ;
-(void)_purgeDevice;
-(void)_removeResource:(id)arg0 ;
-(void)_setDeviceWrapper:(id)arg0 ;
-(void)dealloc;
-(void)deallocBufferSubData:(id)arg0 heapIndex:(short)arg1 bufferIndex:(short)arg2 bufferOffset:(NSUInteger)arg3 length:(NSUInteger)arg4 ;
-(void)kickCleanupQueue;
-(void)releaseFenceIndex:(unsigned int)arg0 ;
-(void)setComputePipelineStateCommandShmemSize:(unsigned int)arg0 ;
-(void)setHwResourcePool:(*id)arg0 count:(int)arg1 ;
-(void)setIndirectArgumentBufferDecodingData:(id)arg0 ;
-(void)setSegmentListShmemSize:(unsigned int)arg0 ;
-(void)updateResourcePoolPurgeability;


@end


#endif