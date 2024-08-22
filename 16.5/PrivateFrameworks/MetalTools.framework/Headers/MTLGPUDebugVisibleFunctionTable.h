// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLGPUDEBUGVISIBLEFUNCTIONTABLE_H
#define MTLGPUDEBUGVISIBLEFUNCTIONTABLE_H

@class NSString;
@protocol MTLGPUDebugResource, MTLBuffer, MTLVisibleFunctionTable, MTLDevice, MTLHeap;


#import "MTLToolsVisibleFunctionTable.h"

@interface MTLGPUDebugVisibleFunctionTable : MTLToolsVisibleFunctionTable <MTLGPUDebugResource>

 {
    NSUInteger _gpuIdentifier;
    id<MTLBuffer> *_handleBuffer;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (retain, nonatomic) NSObject<MTLVisibleFunctionTable> *baseObject;
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
-(id)initWithVisibleFunctionTable:(id)arg0 descriptor:(id)arg1 computePipeline:(id)arg2 ;
-(id)initWithVisibleFunctionTable:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(id)initWithVisibleFunctionTable:(id)arg0 descriptor:(id)arg1 renderPipeline:(id)arg2 ;
-(void)_setupCommon;
-(void)dealloc;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)useWithComputeEncoder:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useWithRenderEncoder:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;


@end


#endif