// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGCOMPUTEPIPELINESTATE_H
#define MTLGPUDEBUGCOMPUTEPIPELINESTATE_H

@class MTLComputePipelineReflection, NSMutableArray, NSArray;


#import "MTLToolsComputePipelineState.h"
#import "MTLGPUDebugImageData.h"
#import "MTLGPUDebugBuffer.h"

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState {
    MTLGPUDebugImageData *_kernelFunctionData;
    MTLComputePipelineReflection *_internalReflection;
    MTLComputePipelineReflection *_userReflection;
    NSUInteger _constantOffset;
    unsigned int _threadgroupArgumentOffset;
    unsigned int _activeThreadgroupMask;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
    NSMutableArray *_retainedFunctions;
}


@property (readonly, nonatomic) NSArray *binaryFunctionData; // ivar: _binaryFunctionData
@property (readonly, nonatomic) NSUInteger constantOffset;
@property (readonly, nonatomic) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;
@property (readonly, nonatomic) MTLComputePipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLGPUDebugImageData *kernelFunctionData;
@property (readonly) NSUInteger staticThreadgroupMemoryLength;
@property (readonly, nonatomic) MTLComputePipelineReflection *userReflection;


-(id)functionHandleWithFunction:(id)arg0 ;
-(id)initWithComputePipelineState:(id)arg0 binaryFunctions:(id)arg1 withState:(id)arg2 device:(id)arg3 ;
-(id)initWithComputePipelineState:(id)arg0 descriptor:(id)arg1 unwrappedDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 ;
-(void)_initConstantsBuffer:(id)arg0 device:(id)arg1 ;
-(void)dealloc;
-(void)releaseReflection;


@end


#endif