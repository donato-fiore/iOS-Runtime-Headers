// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELCOMPUTECOMMANDENCODER_H
#define MTLIOACCELCOMPUTECOMMANDENCODER_H



#import "MTLIOAccelCommandEncoder.h"

@interface MTLIOAccelComputeCommandEncoder : MTLIOAccelCommandEncoder



-(*void)getBufferContentsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)getType;
-(id)getComputePipelineState;
-(void)bindEmulationArguments;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)setEmulationBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setEmulationSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setEmulationTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)updateFence:(id)arg0 ;
-(void)useHeap:(id)arg0 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif