// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLINDIRECTRENDERCOMMAND_H
#define _MTLINDIRECTRENDERCOMMAND_H

@class NSString;
@protocol MTLIndirectRenderCommandSPI;

#import <Foundation/Foundation.h>


@interface _MTLIndirectRenderCommand : NSObject <MTLIndirectRenderCommandSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)getFragmentBufferAtIndex:(NSUInteger)arg0 ;
-(*void)getMeshBufferAtIndex:(NSUInteger)arg0 ;
-(*void)getObjectBufferAtIndex:(NSUInteger)arg0 ;
-(*void)getVertexBufferAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)getCommandType;
-(NSUInteger)getOptimizedStatus;
-(NSUInteger)getPipelineStateUniqueIdentifier;
-(id)drawArguments;
-(id)drawIndexedArguments;
-(id)drawIndexedPatchesArguments;
-(id)drawPatchesArguments;
-(id)getTessellationFactorArguments;
-(struct ? *)drawMeshArguments;
-(void)clearBarrier;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 tessellationFactorBuffer:(id)arg9 tessellationFactorBufferOffset:(NSUInteger)arg10 tessellationFactorBufferInstanceStride:(NSUInteger)arg11 ;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 tessellationFactorBuffer:(id)arg9 tessellationFactorBufferOffset:(NSUInteger)arg10 tessellationFactorBufferInstanceStride:(NSUInteger)arg11 tessellationFactorBufferScale:(float)arg12 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawMeshThreadgroups:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)drawMeshThreads:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)drawPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseInstance:(NSUInteger)arg6 tessellationFactorBuffer:(id)arg7 tessellationFactorBufferOffset:(NSUInteger)arg8 tessellationFactorBufferInstanceStride:(NSUInteger)arg9 ;
-(void)drawPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseInstance:(NSUInteger)arg6 tessellationFactorBuffer:(id)arg7 tessellationFactorBufferOffset:(NSUInteger)arg8 tessellationFactorBufferInstanceStride:(NSUInteger)arg9 tessellationFactorBufferScale:(float)arg10 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)reset;
-(void)setBarrier;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMeshBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif