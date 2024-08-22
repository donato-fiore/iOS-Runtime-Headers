// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGRENDERPIPELINESTATE_H
#define MTLDEBUGRENDERPIPELINESTATE_H

@class MTLRenderPipelineDescriptor, MTLMeshRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;


#import "MTLToolsRenderPipelineState.h"

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {
    NSUInteger _maxVertexCount;
    NSUInteger _maxInstanceCount;
    NSUInteger _maxPatchCount;
    NSUInteger _rasterSampleCount;
    NSUInteger _colorPixelFormat;
    NSUInteger _depthPixelFormat;
    NSUInteger _stencilPixelFormat;
    NSUInteger _vertexDescriptorLayoutCount;
    ? _vertexDescriptorLayouts;
    BOOL _threadgroupSizeMatchesTileSize;
}


@property (readonly, nonatomic) NSUInteger attachmentWriteMask; // ivar: _attachmentWriteMask
@property (readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) MTLMeshRenderPipelineDescriptor *meshDescriptor; // ivar: _meshDescriptor
@property (readonly, getter=isMeshShaderPipeline) BOOL meshShaderPipeline;
@property (readonly, nonatomic) BOOL rasterizationEnabled;
@property (readonly, nonatomic) MTLRenderPipelineReflection *reflection; // ivar: _reflection
@property (readonly, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // ivar: _tileDescriptor


-(BOOL)isAncestorOf:(id)arg0 ;
-(BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg0 ;
-(id)_findMasterStruct:(id)arg0 includeImageBlockData:(BOOL)arg1 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)fragmentFunctionHandleWithFunction:(id)arg0 ;
-(id)functionHandleToDebugFunctionHandle:(id)arg0 parentFunction:(id)arg1 stage:(NSUInteger)arg2 ;
-(id)functionHandleWithFunction:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)functionHandleWithFunction:(id)arg0 stage:(NSUInteger)arg1 selector:(SEL)arg2 ;
-(id)getParameter:(id)arg0 ;
-(id)initWithPipelineState:(id)arg0 reflection:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithPipelineState:(id)arg0 reflection:(id)arg1 parent:(id)arg2 meshDescriptor:(id)arg3 ;
-(id)initWithPipelineState:(id)arg0 reflection:(id)arg1 parent:(id)arg2 tileDescriptor:(id)arg3 ;
-(id)meshFunctionHandleWithFunction:(id)arg0 ;
-(id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 withStage:(NSUInteger)arg1 selector:(SEL)arg2 ;
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
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 selector:(SEL)arg2 ;
-(id)objectFunctionHandleWithFunction:(id)arg0 ;
-(id)outputImageBlockData;
-(id)tileFunctionHandleWithFunction:(id)arg0 ;
-(id)validateBinaryFunctions:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)vertexFunctionHandleWithFunction:(id)arg0 ;
-(void)_updateCachedMeshPipelineState;
-(void)_updateCachedPipelineState;
-(void)_updateCachedTilePipelineState;
-(void)_validateThreadgroupSize:(struct ? *)arg0 stage:(NSUInteger)arg1 context:(struct _MTLMessageContext *)arg2 ;
-(void)dealloc;
-(void)validateHandleForSetFunction:(id)arg0 ;


@end


#endif