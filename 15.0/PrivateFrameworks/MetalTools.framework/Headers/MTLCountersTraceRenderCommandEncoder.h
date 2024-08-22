// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLCOUNTERSTRACERENDERCOMMANDENCODER_H
#define MTLCOUNTERSTRACERENDERCOMMANDENCODER_H



#import "MTLCountersTraceCommandEncoder.h"

@interface MTLCountersTraceRenderCommandEncoder : MTLCountersTraceCommandEncoder



-(id)init:(struct BinaryBuffer *)arg0 ;
-(void)dispatchThreadsPerTile:(struct ? )arg0 ;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchIndexBuffer:(id)arg1 patchIndexBufferOffset:(NSUInteger)arg2 controlPointIndexBuffer:(id)arg3 controlPointIndexBufferOffset:(NSUInteger)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(NSUInteger)arg6 ;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSUInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexType:(NSUInteger)arg1 indexBuffer:(id)arg2 indexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5 ;
-(void)drawPatches:(NSUInteger)arg0 patchIndexBuffer:(id)arg1 patchIndexBufferOffset:(NSUInteger)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(NSUInteger)arg4 ;
-(void)drawPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseInstance:(NSUInteger)arg6 ;
-(void)drawPrimitives:(NSUInteger)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 afterStages:(NSUInteger)arg2 beforeStages:(NSUInteger)arg3 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 afterStages:(NSUInteger)arg1 beforeStages:(NSUInteger)arg2 ;
-(void)setBlendColorRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setCullMode:(NSUInteger)arg0 ;
-(void)setDepthBias:(float)arg0 slopeScale:(float)arg1 clamp:(float)arg2 ;
-(void)setDepthClipMode:(NSUInteger)arg0 ;
-(void)setDepthStencilState:(id)arg0 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setFragmentBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setFragmentSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setFragmentSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFragmentTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFrontFacingWinding:(NSUInteger)arg0 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setScissorRect:(struct ? )arg0 ;
-(void)setScissorRects:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setStencilFrontReferenceValue:(unsigned int)arg0 backReferenceValue:(unsigned int)arg1 ;
-(void)setStencilReferenceValue:(unsigned int)arg0 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setTessellationFactorBuffer:(id)arg0 offset:(NSUInteger)arg1 instanceStride:(NSUInteger)arg2 ;
-(void)setTessellationFactorScale:(float)arg0 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setTileBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setTileSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setTileSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setTileTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setTriangleFillMode:(NSUInteger)arg0 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setVertexBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setVertexSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setVertexSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVertexTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setViewport:(struct ? )arg0 ;
-(void)setViewports:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setVisibilityResultMode:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(void)updateFence:(id)arg0 afterStages:(NSUInteger)arg1 ;
-(void)useHeap:(id)arg0 ;
-(void)useHeap:(id)arg0 stages:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 stages:(NSUInteger)arg3 ;
-(void)waitForFence:(id)arg0 beforeStages:(NSUInteger)arg1 ;


@end


#endif