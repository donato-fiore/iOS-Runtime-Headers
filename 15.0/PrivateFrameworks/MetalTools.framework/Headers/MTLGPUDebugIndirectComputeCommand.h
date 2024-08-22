// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGINDIRECTCOMPUTECOMMAND_H
#define MTLGPUDEBUGINDIRECTCOMPUTECOMMAND_H



#import "MTLToolsIndirectComputeCommand.h"

@interface MTLGPUDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {
    NSUInteger _commandIndex;
}




-(id)initWithIndirectComputeCommand:(id)arg0 commandIndex:(NSUInteger)arg1 indirectCommandBuffer:(id)arg2 ;
-(void)clearBarrier;
-(void)concurrentDispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)concurrentDispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dealloc;
-(void)reset;
-(void)setBarrier;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setKernelBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setStageInRegion:(struct ? )arg0 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif