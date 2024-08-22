// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGINDIRECTRENDERCOMMAND_H
#define MTLDEBUGINDIRECTRENDERCOMMAND_H

@class MTLIndirectCommandBufferDescriptor;
@protocol MTLIndirectCommandBufferSPI, MTLIndirectCommandBuffer;


#import "MTLToolsIndirectRenderCommand.h"

@interface MTLDebugIndirectRenderCommand : MTLToolsIndirectRenderCommand {
    MTLIndirectCommandBufferDescriptor *_desc;
    NSUInteger _index;
    id<MTLIndirectCommandBufferSPI> *_iCB;
}


@property (readonly) NSUInteger index;
@property (readonly) NSObject<MTLIndirectCommandBuffer> *indirectCommandBuffer;


-(id)initWithBaseObject:(id)arg0 descriptor:(id)arg1 indexCount:(NSUInteger)arg2 indirectCommandBuffer:(id)arg3 ;
-(void)dealloc;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 tessellationFactorBuffer:(id)arg9 tessellationFactorBufferOffset:(NSUInteger)arg10 tessellationFactorBufferInstanceStride:(NSUInteger)arg11 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseInstance:(NSUInteger)arg6 tessellationFactorBuffer:(id)arg7 tessellationFactorBufferOffset:(NSUInteger)arg8 tessellationFactorBufferInstanceStride:(NSUInteger)arg9 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif