// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGPUDEBUGRENDERPIPELINESTATE_H
#define MTLGPUDEBUGRENDERPIPELINESTATE_H

@class MTLRenderPipelineReflection, NSMutableArray, NSArray;


#import "MTLToolsRenderPipelineState.h"
#import "MTLGPUDebugImageData.h"
#import "MTLGPUDebugBuffer.h"

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineReflection *_internalReflection;
    MTLRenderPipelineReflection *_userReflection;
    MTLGPUDebugImageData *_vertexFunctionData;
    MTLGPUDebugImageData *_fragmentFunctionData;
    MTLGPUDebugImageData *_tileFunctionData;
    NSMutableArray *_retainedFunctions;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
}


@property (readonly, nonatomic) NSArray *binaryFunctionData; // ivar: _binaryFunctionData
@property (readonly, nonatomic) MTLGPUDebugBuffer *fragmentConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *fragmentFunctionData;
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;
@property (readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *tileConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *tileFunctionData;
@property (readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *vertexConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *vertexFunctionData;


-(id)functionHandleWithFunction:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)initWithRenderPipelineState:(id)arg0 descriptor:(id)arg1 unwrappedDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 pipelineOptions:(NSUInteger)arg5 ;
-(id)initWithRenderPipelineState:(id)arg0 tileDescriptor:(id)arg1 reflection:(id)arg2 device:(id)arg3 ;
-(id)initWithRenderPipelineState:(id)arg0 vertexBinaryFunctions:(id)arg1 fragmentBinaryFunctions:(id)arg2 tileBinaryFunctions:(id)arg3 withState:(id)arg4 device:(id)arg5 ;
-(id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 fragmentAdditionalBinaryFunctions:(id)arg1 error:(*id)arg2 ;
-(id)newTileIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)unwrapBinaryFunctions:(id)arg0 ;
-(void)_initConstantsBuffer:(id)arg0 device:(id)arg1 ;
-(void)dealloc;
-(void)releaseReflection;


@end


#endif