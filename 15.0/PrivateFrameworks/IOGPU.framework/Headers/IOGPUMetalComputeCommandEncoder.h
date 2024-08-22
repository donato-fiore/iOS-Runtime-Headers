// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOGPUMETALCOMPUTECOMMANDENCODER_H
#define IOGPUMETALCOMPUTECOMMANDENCODER_H



#import "IOGPUMetalCommandEncoder.h"

@interface IOGPUMetalComputeCommandEncoder : IOGPUMetalCommandEncoder



-(*void)getBufferContentsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)getType;
-(id)getComputePipelineState;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)setAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFunctionTable:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFunctionTables:(*id)arg0 withRange:(struct _NSRange )arg1 ;
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