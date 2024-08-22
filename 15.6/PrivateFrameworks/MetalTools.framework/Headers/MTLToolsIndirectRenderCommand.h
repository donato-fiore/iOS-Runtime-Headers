// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSINDIRECTRENDERCOMMAND_H
#define MTLTOOLSINDIRECTRENDERCOMMAND_H

@class NSString;
@protocol MTLIndirectRenderCommandSPI;


#import "MTLToolsObject.h"

@interface MTLToolsIndirectRenderCommand : MTLToolsObject <MTLIndirectRenderCommandSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)getFragmentBufferAtIndex:(NSUInteger)arg0 ;
-(*void)getVertexBufferAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)getCommandType;
-(NSUInteger)getOptimizedStatus;
-(NSUInteger)getPipelineStateUniqueIdentifier;
-(id)drawArguments;
-(id)drawIndexedArguments;
-(id)drawIndexedPatchesArguments;
-(id)drawPatchesArguments;
-(id)getTessellationFactorArguments;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 tessellationFactorBuffer:(id)arg9 tessellationFactorBufferOffset:(NSUInteger)arg10 tessellationFactorBufferInstanceStride:(NSUInteger)arg11 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseInstance:(NSUInteger)arg6 tessellationFactorBuffer:(id)arg7 tessellationFactorBufferOffset:(NSUInteger)arg8 tessellationFactorBufferInstanceStride:(NSUInteger)arg9 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)reset;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif