// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLIOACCELRENDERCOMMANDENCODER_H
#define MTLIOACCELRENDERCOMMANDENCODER_H



#import "MTLIOAccelCommandEncoder.h"

@interface MTLIOAccelRenderCommandEncoder : MTLIOAccelCommandEncoder



-(*void)getFragmentBufferContentsAtIndex:(NSUInteger)arg0 ;
-(*void)getVertexBufferContentsAtIndex:(NSUInteger)arg0 ;
-(BOOL)isMemorylessRender;
-(NSUInteger)getType;
-(id)getRenderPipelineState;
-(id)initWithCommandBuffer:(id)arg0 descriptor:(id)arg1 ;
-(void)bindEmulationArguments;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 afterStages:(NSUInteger)arg2 beforeStages:(NSUInteger)arg3 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 afterStages:(NSUInteger)arg1 beforeStages:(NSUInteger)arg2 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setColorStoreActionOptions:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDepthCleared;
-(void)setDepthClipModeSPI:(NSUInteger)arg0 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setDepthStoreActionOptions:(NSUInteger)arg0 ;
-(void)setEmulationFragmentBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setEmulationFragmentSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setEmulationFragmentTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setEmulationVertexBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setEmulationVertexSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setEmulationVertexTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFragmentIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setFragmentTexture:(id)arg0 atTextureIndex:(NSUInteger)arg1 samplerState:(id)arg2 atSamplerIndex:(NSUInteger)arg3 ;
-(void)setFragmentVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setMeshAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setStencilCleared;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreActionOptions:(NSUInteger)arg0 ;
-(void)setTileIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setTileVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVertexAmplificationCount:(NSUInteger)arg0 viewMappings:(struct ? *)arg1 ;
-(void)setVertexIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVertexVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)textureBarrier;
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