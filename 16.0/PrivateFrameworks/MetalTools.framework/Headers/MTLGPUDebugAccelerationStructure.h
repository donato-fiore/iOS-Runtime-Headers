// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGACCELERATIONSTRUCTURE_H
#define MTLGPUDEBUGACCELERATIONSTRUCTURE_H

@class NSString;
@protocol MTLGPUDebugResource, MTLAccelerationStructure, MTLDevice, MTLHeap;


#import "MTLToolsAccelerationStructure.h"

@interface MTLGPUDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLGPUDebugResource>

 {
    NSUInteger _gpuIdentifier;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (retain, nonatomic) NSObject<MTLAccelerationStructure> *baseObject;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly) NSUInteger protectionOptions;
@property (readonly) NSUInteger resourceOptions;
@property int responsibleProcess;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger underlyingGPUAddress;
@property (readonly) NSUInteger unfilteredResourceOptions;


-(NSUInteger)handleForOffset:(NSUInteger)arg0 ;
-(id)initWithAccelerationStructure:(id)arg0 device:(id)arg1 ;
-(id)initWithAccelerationStructure:(id)arg0 heap:(id)arg1 ;
-(void)_setupIdentifier;
-(void)useWithComputeEncoder:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useWithRenderEncoder:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;


@end


#endif