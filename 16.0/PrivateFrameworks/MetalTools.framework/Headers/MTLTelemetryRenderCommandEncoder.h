// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTELEMETRYRENDERCOMMANDENCODER_H
#define MTLTELEMETRYRENDERCOMMANDENCODER_H

@class NSMutableSet, NSMutableDictionary;


#import "MTLToolsRenderCommandEncoder.h"
#import "MTLTelemetryDevice.h"
#import "MTLTelemetryCommandBuffer.h"
#import "MTLTelemetryRenderPipelineState.h"

@interface MTLTelemetryRenderCommandEncoder : MTLToolsRenderCommandEncoder {
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    unsigned int _reDraws;
    NSMutableSet *_anisoFragmentSamplers;
    NSMutableDictionary *_clippedMip2DFragmentTextures;
    MTLTelemetryRenderPipelineState *_telemetryPipeline;
}




-(id)initWithRenderCommandEncoder:(id)arg0 parent:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithRenderCommandEncoder:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 ;
-(void)accumDrawWithType:(NSUInteger)arg0 indexType:(NSUInteger)arg1 primitiveType:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4 ;
-(void)accumScissorRectTelemetry:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)accumViewportTelemetry:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexType:(NSUInteger)arg1 indexBuffer:(id)arg2 indexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5 ;
-(void)drawPrimitives:(NSUInteger)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)endEncoding;
-(void)initTelemetryWithDescriptor:(id)arg0 commandBuffer:(id)arg1 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 afterStages:(NSUInteger)arg2 beforeStages:(NSUInteger)arg3 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 afterStages:(NSUInteger)arg1 beforeStages:(NSUInteger)arg2 ;
-(void)setDepthClipMode:(NSUInteger)arg0 ;
-(void)setDepthStencilState:(id)arg0 ;
-(void)setFragmentSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setFragmentSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setFragmentSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFragmentTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setScissorRect:(struct ? )arg0 ;
-(void)setScissorRects:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setViewport:(struct ? )arg0 ;
-(void)setViewports:(struct ? *)arg0 count:(NSUInteger)arg1 ;


@end


#endif