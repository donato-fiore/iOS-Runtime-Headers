// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOGPUMETALHEAP_H
#define IOGPUMETALHEAP_H

@class MTLHeap, IOGPUMetalDevice<MTLDevice>, NSString;
@protocol MTLDevice;


#import "IOGPUMetalResource.h"

@interface IOGPUMetalHeap : MTLHeap {
    IOGPUMetalResource *_resource;
    IOGPUMetalDevice<MTLDevice> *_device;
    MTLRangeAllocator _allocator;
    _opaque_pthread_mutex_t _mutex;
    NSUInteger _size;
}


@property (readonly) NSUInteger cpuCacheMode;
@property (readonly) NSUInteger currentAllocatedSize;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hazardTrackingMode;
@property (copy) NSString *label;
@property (readonly) NSUInteger resourceOptions;
@property (readonly) NSUInteger size;
@property (readonly) NSUInteger storageMode;
@property (readonly) NSInteger type;
@property (readonly) NSUInteger unfilteredResourceOptions;
@property (readonly) NSUInteger usedSize;


-(NSUInteger)gpuAddress;
-(NSUInteger)maxAvailableSizeWithAlignment:(NSUInteger)arg0 ;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 size:(NSUInteger)arg1 options:(NSUInteger)arg2 args:(struct IOGPUNewResourceArgs *)arg3 argsSize:(unsigned int)arg4 ;
-(id)initWithDevice:(id)arg0 size:(NSUInteger)arg1 options:(NSUInteger)arg2 args:(struct IOGPUNewResourceArgs *)arg3 argsSize:(unsigned int)arg4 desc:(id)arg5 ;
-(id)newSubResourceAtOffset:(NSUInteger)arg0 withLength:(NSUInteger)arg1 alignment:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(id)newSubResourceWithLength:(NSUInteger)arg0 alignment:(NSUInteger)arg1 options:(NSUInteger)arg2 offset:(*NSUInteger)arg3 ;
-(void)dealloc;
-(void)deallocHeapSubResource;
-(void)unpinMemoryAtOffset:(NSUInteger)arg0 withLength:(NSUInteger)arg1 ;


@end


#endif