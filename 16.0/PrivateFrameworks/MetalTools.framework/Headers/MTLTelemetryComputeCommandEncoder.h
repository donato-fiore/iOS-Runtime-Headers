// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTELEMETRYCOMPUTECOMMANDENCODER_H
#define MTLTELEMETRYCOMPUTECOMMANDENCODER_H



#import "MTLToolsComputeCommandEncoder.h"
#import "MTLTelemetryDevice.h"
#import "MTLTelemetryCommandBuffer.h"

@interface MTLTelemetryComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    unsigned int _ceDispatches;
}




-(id)initWithComputeCommandEncoder:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)accumDispatchDistribution:(NSUInteger)arg0 threadgroupsPerGrid:(struct ? )arg1 threadsPerThreadgroup:(struct ? )arg2 threadsPerGrid:(struct ? )arg3 ;
-(void)dispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerThreadgroup:(struct ? )arg2 ;
-(void)dispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 ;
-(void)endEncoding;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 ;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif