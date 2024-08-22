// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGINDIRECTRENDERCOMMAND_H
#define MTLGPUDEBUGINDIRECTRENDERCOMMAND_H



#import "MTLToolsIndirectRenderCommand.h"

@interface MTLGPUDebugIndirectRenderCommand : MTLToolsIndirectRenderCommand {
    NSUInteger _commandIndex;
}




-(id)initWithIndirectRenderCommand:(id)arg0 commandIndex:(NSUInteger)arg1 indirectCommandBuffer:(id)arg2 ;
-(void)dealloc;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 tessellationFactorBuffer:(id)arg9 tessellationFactorBufferOffset:(NSUInteger)arg10 tessellationFactorBufferInstanceStride:(NSUInteger)arg11 ;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif