// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSACCELERATIONSTRUCTURE_H
#define MTLTOOLSACCELERATIONSTRUCTURE_H

@class NSString, MTLAccelerationStructureDescriptor;
@protocol MTLAccelerationStructureSPI, MTLBuffer, MTLDevice, MTLHeap;


#import "MTLToolsResource.h"
#import "MTLToolsBuffer.h"

@interface MTLToolsAccelerationStructure : MTLToolsResource <MTLAccelerationStructureSPI>

 {
    MTLToolsBuffer *_toolsBuffer;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer;
@property (readonly, nonatomic) NSUInteger bufferOffset;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTLAccelerationStructureDescriptor *descriptor;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) NSUInteger resourceOptions;
@property (readonly, nonatomic) NSUInteger size;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger uniqueIdentifier;


-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)dealloc;


@end


#endif