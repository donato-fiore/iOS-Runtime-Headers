// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOGPUMETALACCELERATIONSTRUCTURE_H
#define IOGPUMETALACCELERATIONSTRUCTURE_H

@class IOGPUMetalBuffer<MTLBuffer>, NSString, MTLAccelerationStructureDescriptor;
@protocol MTLAccelerationStructureSPI, MTLDevice, MTLHeap;


#import "IOGPUMetalResource.h"

@interface IOGPUMetalAccelerationStructure : IOGPUMetalResource <MTLAccelerationStructureSPI>

 {
    IOGPUMetalBuffer<MTLBuffer> *_buffer;
    NSUInteger _bufferOffset;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly, nonatomic) IOGPUMetalBuffer<MTLBuffer> *buffer;
@property (readonly, nonatomic) NSUInteger bufferOffset;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTLAccelerationStructureDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger resourceIndex; // ivar: _resourceIndex
@property (readonly) NSUInteger resourceOptions;
@property (readonly, nonatomic) NSUInteger size;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger uniqueIdentifier;


-(id)initWithBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)initWithBuffer:(id)arg0 offset:(NSUInteger)arg1 resourceIndex:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif