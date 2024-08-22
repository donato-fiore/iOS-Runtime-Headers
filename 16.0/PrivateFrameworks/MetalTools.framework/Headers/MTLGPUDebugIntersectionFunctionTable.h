// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGINTERSECTIONFUNCTIONTABLE_H
#define MTLGPUDEBUGINTERSECTIONFUNCTIONTABLE_H

@class NSString;
@protocol MTLGPUDebugResource, MTLBuffer, MTLIntersectionFunctionTable, MTLDevice, MTLHeap;


#import "MTLToolsIntersectionFunctionTable.h"
#import "MTLGPUDebugComputePipelineState.h"
#import "MTLGPUDebugRenderPipelineState.h"

@interface MTLGPUDebugIntersectionFunctionTable : MTLToolsIntersectionFunctionTable <MTLGPUDebugResource>

 {
    NSUInteger _gpuIdentifier;
    NSUInteger _functionCount;
    MTLGPUDebugComputePipelineState *_computePipelineState;
    MTLGPUDebugRenderPipelineState *_renderPipelineState;
    id<MTLBuffer> *_handleBuffer;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (retain, nonatomic) NSObject<MTLIntersectionFunctionTable> *baseObject;
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
-(id)initWithIntersectionFunctionTable:(id)arg0 device:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithIntersectionFunctionTable:(id)arg0 device:(id)arg1 descriptor:(id)arg2 computePipelineState:(id)arg3 ;
-(id)initWithIntersectionFunctionTable:(id)arg0 device:(id)arg1 descriptor:(id)arg2 renderPipelineState:(id)arg3 ;
-(void)_setupIdentifier;
-(void)dealloc;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setFunction:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFunctions:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)useWithComputeEncoder:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useWithRenderEncoder:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;


@end


#endif