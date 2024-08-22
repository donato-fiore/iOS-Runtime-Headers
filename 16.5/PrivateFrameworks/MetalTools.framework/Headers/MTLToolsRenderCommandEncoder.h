// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSRENDERCOMMANDENCODER_H
#define MTLTOOLSRENDERCOMMANDENCODER_H

@class NSString;
@protocol MTLRenderCommandEncoderSPI, MTLDevice;


#import "MTLToolsCommandEncoder.h"

@interface MTLToolsRenderCommandEncoder : MTLToolsCommandEncoder <MTLRenderCommandEncoderSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) NSUInteger tileHeight;
@property (readonly) NSUInteger tileWidth;


-(BOOL)isMemorylessRender;
-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)initWithRenderCommandEncoder:(id)arg0 parent:(id)arg1 ;
-(id)initWithRenderCommandEncoder:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 ;
-(void)addSplitHandler:(id)arg0 ;
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
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 afterStages:(NSUInteger)arg2 beforeStages:(NSUInteger)arg3 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 afterStages:(NSUInteger)arg1 beforeStages:(NSUInteger)arg2 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)setAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 stage:(NSUInteger)arg2 ;
-(void)setAlphaTestReferenceValue:(float)arg0 ;
-(void)setBlendColorRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3 ;
-(void)setClipPlane:(float)arg0 p2:(float)arg1 p3:(float)arg2 p4:(float)arg3 atIndex:(NSUInteger)arg4 ;
-(void)setColorResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 atIndex:(NSUInteger)arg4 ;
-(void)setColorResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 atIndex:(NSUInteger)arg4 yInvert:(BOOL)arg5 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setColorStoreActionOptions:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setCommandDataCorruptModeSPI:(NSUInteger)arg0 ;
-(void)setCullMode:(NSUInteger)arg0 ;
-(void)setDepthBias:(float)arg0 slopeScale:(float)arg1 clamp:(float)arg2 ;
-(void)setDepthCleared;
-(void)setDepthClipMode:(NSUInteger)arg0 ;
-(void)setDepthClipModeSPI:(NSUInteger)arg0 ;
-(void)setDepthResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 ;
-(void)setDepthResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 yInvert:(BOOL)arg4 ;
-(void)setDepthStencilState:(id)arg0 ;
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
-(void)setFrontFacingWinding:(NSUInteger)arg0 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 stage:(NSUInteger)arg2 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 stage:(NSUInteger)arg2 ;
-(void)setLineWidth:(float)arg0 ;
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
-(void)setPointSize:(float)arg0 ;
-(void)setPrimitiveRestartEnabled:(BOOL)arg0 ;
-(void)setPrimitiveRestartEnabled:(BOOL)arg0 index:(NSUInteger)arg1 ;
-(void)setProvokingVertexMode:(NSUInteger)arg0 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setScissorRect:(struct ? )arg0 ;
-(void)setScissorRects:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setStencilCleared;
-(void)setStencilFrontReferenceValue:(unsigned int)arg0 backReferenceValue:(unsigned int)arg1 ;
-(void)setStencilReferenceValue:(unsigned int)arg0 ;
-(void)setStencilResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 ;
-(void)setStencilResolveTexture:(id)arg0 slice:(NSUInteger)arg1 depthPlane:(NSUInteger)arg2 level:(NSUInteger)arg3 yInvert:(BOOL)arg4 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreActionOptions:(NSUInteger)arg0 ;
-(void)setTessellationFactorBuffer:(id)arg0 offset:(NSUInteger)arg1 instanceStride:(NSUInteger)arg2 ;
-(void)setTessellationFactorScale:(float)arg0 ;
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
-(void)setTriangleFillMode:(NSUInteger)arg0 ;
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
-(void)setViewport:(struct ? )arg0 ;
-(void)setViewportTransformEnabled:(BOOL)arg0 ;
-(void)setViewports:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setVisibilityResultMode:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 stage:(NSUInteger)arg2 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 stage:(NSUInteger)arg2 ;
-(void)updateFence:(id)arg0 afterStages:(NSUInteger)arg1 ;
-(void)useHeap:(id)arg0 ;
-(void)useHeap:(id)arg0 stages:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useRenderPipelineState:(id)arg0 ;
-(void)useRenderPipelineStates:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResourceGroup:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 stages:(NSUInteger)arg3 ;
-(void)waitForFence:(id)arg0 beforeStages:(NSUInteger)arg1 ;


@end


#endif