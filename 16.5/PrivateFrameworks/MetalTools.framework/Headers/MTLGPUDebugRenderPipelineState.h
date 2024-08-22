// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    MTLGPUDebugImageData *_objectFunctionData;
    MTLGPUDebugImageData *_meshFunctionData;
    NSMutableArray *_retainedFunctions;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
}


@property (readonly, nonatomic) NSArray *binaryFunctionData; // ivar: _binaryFunctionData
@property (readonly, nonatomic) MTLGPUDebugBuffer *fragmentConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *fragmentFunctionData;
@property (readonly, nonatomic) int fragmentMaxCallStackDepth; // ivar: _fragmentMaxCallStackDepth
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;
@property (readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *meshConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *meshFunctionData;
@property (readonly, nonatomic) int meshMaxCallStackDepth; // ivar: _meshMaxCallStackDepth
@property (readonly, nonatomic) MTLGPUDebugBuffer *objectConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *objectFunctionData;
@property (readonly, nonatomic) int objectMaxCallStackDepth; // ivar: _objectMaxCallStackDepth
@property (readonly, nonatomic) MTLGPUDebugBuffer *tileConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *tileFunctionData;
@property (readonly, nonatomic) int tileMaxCallStackDepth; // ivar: _tileMaxCallStackDepth
@property (readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *vertexConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugImageData *vertexFunctionData;
@property (readonly, nonatomic) int vertexMaxCallStackDepth; // ivar: _vertexMaxCallStackDepth


-(id)functionHandleWithFunction:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)initWithRenderPipelineState:(id)arg0 descriptor:(id)arg1 unwrappedDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 pipelineOptions:(NSUInteger)arg5 ;
-(id)initWithRenderPipelineState:(id)arg0 meshDescriptor:(id)arg1 unwrappedDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 pipelineOptions:(NSUInteger)arg5 ;
-(id)initWithRenderPipelineState:(id)arg0 tileDescriptor:(id)arg1 reflection:(id)arg2 device:(id)arg3 ;
-(id)initWithRenderPipelineState:(id)arg0 vertexBinaryFunctions:(id)arg1 fragmentBinaryFunctions:(id)arg2 tileBinaryFunctions:(id)arg3 objectBinaryFunctions:(id)arg4 meshBinaryFunctions:(id)arg5 withState:(id)arg6 device:(id)arg7 ;
-(id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newMeshIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newObjectIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 fragmentAdditionalBinaryFunctions:(id)arg1 error:(*id)arg2 ;
-(id)newTileIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)arg0 ;
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