// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGRENDERCOMMANDENCODER_H
#define MTLDEBUGRENDERCOMMANDENCODER_H

@class NSMutableSet, MTLDepthStencilDescriptor, MTLRenderPassDescriptor;
@protocol MTLRenderPipelineState, MTLDepthStencilState;


#import "MTLToolsRenderCommandEncoder.h"
#import "MTLDebugCommandBuffer.h"

@interface MTLDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder {
    unsigned int _dirtyBits;
    BOOL _openGLModeEnabled;
    *? _vertexBuiltinArguments;
    ? _attachmentInfo;
    id<MTLRenderPipelineState> *_previousRenderPipelineStateWithWritesToImageBlock;
    NSUInteger _resolvedRasterSampleCount;
    ? _vertexBuffers;
    ? _vertexTextures;
    ? _vertexSamplers;
    ? _fragmentBuffers;
    ? _fragmentTextures;
    ? _fragmentSamplers;
    ? _tileBuffers;
    ? _tileTextures;
    ? _tileSamplers;
    ? _threadgroupMemoryArguments;
    ? _objectBuffers;
    ? _objectTextures;
    ? _objectSamplers;
    ? _objectThreadgroupMemoryLengths;
    ? _meshBuffers;
    ? _meshTextures;
    ? _meshSamplers;
    unsigned int _encoderState;
    unsigned int _unknownStoreActions;
    *void _visibilityOffsets;
    vector<MTLViewport, std::allocator<MTLViewport>> _viewports;
    vector<MTLScissorRect, std::allocator<MTLScissorRect>> _scissorRects;
    NSUInteger _amplificationMode;
    NSUInteger _amplificationValue;
    NSUInteger _vertexAmplificationCount;
    deque<id, std::allocator<id>> _updatedFences;
    NSMutableSet *_storingRenderTargets;
    MTLDebugCommandBuffer *_commandBuffer;
    NSUInteger _maxVertexBuffers;
    ? _objectThreadsPerTG;
    ? _meshThreadsPerTG;
}


@property (readonly, nonatomic) NSUInteger attachmentWriteMask; // ivar: _attachmentWriteMask
@property (readonly, nonatomic) unsigned int backStencilRef; // ivar: _backStencilRef
@property (readonly, nonatomic) float blendColorAlpha; // ivar: _blendColorAlpha
@property (readonly, nonatomic) float blendColorBlue; // ivar: _blendColorBlue
@property (readonly, nonatomic) float blendColorGreen; // ivar: _blendColorGreen
@property (readonly, nonatomic) float blendColorRed; // ivar: _blendColorRed
@property (readonly, nonatomic) NSUInteger cullMode; // ivar: _cullMode
@property (readonly, nonatomic) MTLDepthStencilDescriptor *defaultDepthStencilDescriptor; // ivar: _defaultDepthStencilDescriptor
@property (readonly, nonatomic) float depthBias; // ivar: _depthBias
@property (readonly, nonatomic) float depthBiasClamp; // ivar: _depthBiasClamp
@property (readonly, nonatomic) float depthBiasSlopeScale; // ivar: _depthBiasSlopeScale
@property (readonly, nonatomic) NSUInteger depthClipMode; // ivar: _depthClipMode
@property (readonly, nonatomic) NSObject<MTLDepthStencilState> *depthStencilState; // ivar: _depthStencilState
@property (readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSUInteger frontFacingWinding; // ivar: _frontFacingWinding
@property (readonly, nonatomic) unsigned int frontStencilRef; // ivar: _frontStencilRef
@property (readonly) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) float lineWidth; // ivar: _lineWidth
@property (readonly, nonatomic) NSUInteger peakPerSampleStorage; // ivar: _peakPerSampleStorage
@property (readonly, nonatomic) NSObject<MTLRenderPipelineState> *renderPipelineState; // ivar: _renderPipelineState
@property (readonly, nonatomic) NSUInteger resolvedSampleCount; // ivar: _resolvedSampleCount
@property (readonly, nonatomic) ? scissorRect;
@property (readonly, nonatomic) *void scissorRects;
@property (readonly, nonatomic) ? tessellationFactorBufferArgument; // ivar: _tessellationFactorBufferArgument
@property (readonly, nonatomic) NSUInteger tessellationFactorBufferInstanceStride; // ivar: _tessellationFactorBufferInstanceStride
@property (readonly, nonatomic) float tessellationFactorScale; // ivar: _tessellationFactorScale
@property (readonly, nonatomic) NSUInteger triangleFillMode; // ivar: _triangleFillMode
@property (readonly, nonatomic) ? viewport;
@property (readonly, nonatomic) *void viewports;
@property (readonly, nonatomic) NSUInteger visibilityResultMode; // ivar: _visibilityResultMode
@property (readonly, nonatomic) NSUInteger visibilityResultOffset; // ivar: _visibilityResultOffset
@property (readonly) NSUInteger width; // ivar: _width


-(id)description;
-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithRenderCommandEncoder:(id)arg0 parallelRenderCommandEncoder:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithRenderCommandEncoder:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 ;
-(void)_dispatchThreadsPerTile:(struct ? )arg0 inRegion:(struct ? *)arg1 withRenderTargetArrayIndex:(*unsigned int)arg2 ;
-(void)_init;
-(void)_setDefaults;
-(void)_validateAllFunctionArguments:(struct _MTLMessageContext *)arg0 ;
-(void)dealloc;
-(void)dispatchThreadsPerTile:(struct ? )arg0 ;
-(void)dispatchThreadsPerTile:(struct ? )arg0 inRegion:(struct ? )arg1 ;
-(void)dispatchThreadsPerTile:(struct ? )arg0 inRegion:(struct ? )arg1 withRenderTargetArrayIndex:(unsigned int)arg2 ;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchIndexBuffer:(id)arg1 patchIndexBufferOffset:(NSUInteger)arg2 controlPointIndexBuffer:(id)arg3 controlPointIndexBufferOffset:(NSUInteger)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(NSUInteger)arg6 ;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexType:(NSUInteger)arg1 indexBuffer:(id)arg2 indexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5 ;
-(void)drawMeshThreadgroups:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerObjectThreadgroup:(struct ? )arg2 threadsPerMeshThreadgroup:(struct ? )arg3 ;
-(void)drawMeshThreads:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)drawPatches:(NSUInteger)arg0 patchIndexBuffer:(id)arg1 patchIndexBufferOffset:(NSUInteger)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(NSUInteger)arg4 ;
-(void)drawPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseInstance:(NSUInteger)arg6 ;
-(void)drawPrimitives:(NSUInteger)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)endEncoding;
-(void)endEncoding_private;
-(void)enumerateFragmentBuffersUsingBlock:(id)arg0 ;
-(void)enumerateFragmentSamplersUsingBlock:(id)arg0 ;
-(void)enumerateFragmentTexturesUsingBlock:(id)arg0 ;
-(void)enumerateThreadgroupMemoryUsingBlock:(id)arg0 ;
-(void)enumerateTileBuffersUsingBlock:(id)arg0 ;
-(void)enumerateTileSamplersUsingBlock:(id)arg0 ;
-(void)enumerateTileTexturesUsingBlock:(id)arg0 ;
-(void)enumerateVertexBuffersUsingBlock:(id)arg0 ;
-(void)enumerateVertexSamplersUsingBlock:(id)arg0 ;
-(void)enumerateVertexTexturesUsingBlock:(id)arg0 ;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned int)arg0 lastBatch:(unsigned int)arg1 filterIndex:(unsigned int)arg2 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 afterStages:(NSUInteger)arg2 beforeStages:(NSUInteger)arg3 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 afterStages:(NSUInteger)arg1 beforeStages:(NSUInteger)arg2 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)setAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 maxBuffers:(NSUInteger)arg2 buffers:(struct ? *)arg3 buffersLength:(NSUInteger)arg4 stage:(NSUInteger)arg5 ;
-(void)setColorResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 atIndex:(NSUInteger)arg4 ;
-(void)setColorResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 yInvert:(BOOL)arg4 atIndex:(NSUInteger)arg5 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setColorStoreActionOptions:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDepthResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 ;
-(void)setDepthResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 yInvert:(BOOL)arg4 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setDepthStoreActionOptions:(NSUInteger)arg0 ;
-(void)setFragmentAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setFragmentBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setFragmentSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setFragmentSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 lodBias:(float)arg3 atIndex:(NSUInteger)arg4 ;
-(void)setFragmentSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setFragmentSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFragmentTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentTexture:(id)arg0 atTextureIndex:(NSUInteger)arg1 samplerState:(id)arg2 atSamplerIndex:(NSUInteger)arg3 ;
-(void)setFragmentTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFragmentVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 maxBuffers:(NSUInteger)arg2 buffers:(struct ? *)arg3 buffersLength:(NSUInteger)arg4 stage:(NSUInteger)arg5 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 maxBuffers:(NSUInteger)arg2 buffers:(struct ? *)arg3 buffersLength:(NSUInteger)arg4 stage:(NSUInteger)arg5 ;
-(void)setMeshAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMeshBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setMeshBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMeshIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setMeshSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setMeshSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setMeshSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setMeshTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setMeshVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setObjectBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setObjectSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setObjectSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setObjectTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setObjectThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setStencilFrontReferenceValue:(unsigned int)arg0 backReferenceValue:(unsigned int)arg1 ;
-(void)setStencilReferenceValue:(unsigned int)arg0 ;
-(void)setStencilResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 ;
-(void)setStencilResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 yInvert:(BOOL)arg4 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreActionOptions:(NSUInteger)arg0 ;
-(void)setTessellationFactorBuffer:(id)arg0 offset:(NSUInteger)arg1 instanceStride:(NSUInteger)arg2 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setTileBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setTileSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setTileSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setTileSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setTileTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setTileVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setTransformFeedbackState:(NSUInteger)arg0 ;
-(void)setTriangleFrontFillMode:(NSUInteger)arg0 backFillMode:(NSUInteger)arg1 ;
-(void)setVertexAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexAmplificationCount:(NSUInteger)arg0 viewMappings:(struct ? *)arg1 ;
-(void)setVertexAmplificationMode:(NSUInteger)arg0 value:(NSUInteger)arg1 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setVertexBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVertexSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setVertexSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 lodBias:(float)arg3 atIndex:(NSUInteger)arg4 ;
-(void)setVertexSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setVertexSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVertexTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVertexVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 maxBuffers:(NSUInteger)arg2 buffers:(struct ? *)arg3 buffersLength:(NSUInteger)arg4 stage:(NSUInteger)arg5 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 maxBuffers:(NSUInteger)arg2 buffers:(struct ? *)arg3 buffersLength:(NSUInteger)arg4 stage:(NSUInteger)arg5 ;
-(void)textureBarrier;
-(void)updateFence:(id)arg0 afterStages:(NSUInteger)arg1 ;
-(void)updatePipelineData;
-(void)useHeap:(id)arg0 ;
-(void)useHeap:(id)arg0 stages:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 stages:(NSUInteger)arg3 ;
-(void)validateCommonDrawErrors:(NSUInteger)arg0 ;
-(void)validateCommonDrawErrors:(NSUInteger)arg0 instanceCount:(NSUInteger)arg1 baseInstance:(NSUInteger)arg2 maxVertexID:(NSUInteger)arg3 ;
-(void)validateDrawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 function:(char *)arg6 ;
-(void)validateDrawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 function:(char *)arg4 ;
-(void)validateFramebufferWithRenderPipelineState:(id)arg0 context:(struct _MTLMessageContext *)arg1 ;
-(void)validateFunctionTableUseResource:(id)arg0 stages:(NSUInteger)arg1 context:(struct _MTLMessageContext *)arg2 selectorName:(id)arg3 ;
-(void)waitForFence:(id)arg0 beforeStages:(NSUInteger)arg1 ;


@end


#endif