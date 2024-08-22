// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOUNTERSCOMPUTECOMMANDENCODER_H
#define MTLCOUNTERSCOMPUTECOMMANDENCODER_H



#import "MTLToolsComputeCommandEncoder.h"
#import "MTLCountersTraceComputeCommandEncoder.h"

@interface MTLCountersComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    BOOL _APITimingEnabled;
    MTLCountersTraceComputeCommandEncoder *_traceEncoder;
}




-(id)initWithComputeCommandEncoder:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)dealloc;
-(void)dispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerThreadgroup:(struct ? )arg2 ;
-(void)dispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 ;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setImageBlockWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setLabel:(id)arg0 ;
-(void)setSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setStageInRegion:(struct ? )arg0 ;
-(void)setStageInRegionWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 ;
-(void)setTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
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