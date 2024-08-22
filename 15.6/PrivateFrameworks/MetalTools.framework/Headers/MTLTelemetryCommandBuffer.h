// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTELEMETRYCOMMANDBUFFER_H
#define MTLTELEMETRYCOMMANDBUFFER_H



#import "MTLToolsCommandBuffer.h"
#import "MTLTelemetryDevice.h"

@interface MTLTelemetryCommandBuffer : MTLToolsCommandBuffer {
    *MTLTelemetryEncoderCountRec encoderCount;
    *MTLTelemetryStatisticUIRec attachmentCount;
    *MTLTelemetryStatisticUIRec textureBindCount;
    *MTLTelemetryStatisticUIRec parallellRenderEncoderDistribution;
    *MTLTelemetryStatisticUIRec renderTargetArrayLengthDistribution;
    *MTLTelemetryViewportDistributionRec viewportDistribution;
    *MTLTelemetryScissorRectDistributionRec scissorRectDistribution;
    *MTLTelemetryDrawDistributionRec drawDistribution;
    *MTLTelemetryDispatchDistributionRec dispatchDistribution;
    unsigned int cbDraws;
    unsigned int cbDispatches;
    unsigned int cbBlits;
    unsigned int cbMemoryBarriers;
    *MTLTelemetryStatisticUIRec renderEncoderDrawCallDistribution;
    *MTLTelemetryStatisticUIRec computeEncoderDispatchDistribution;
    *MTLTelemetryStatisticUIRec blitEncoderBlitDistribution;
    unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> renderTargetMap;
    unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution>>> blitMap;
    *MTLTelemetryAnisoClippedCountsRec anisoClippedCounts;
    unsigned int depthClipModeClampCount;
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryKernelStateRec _initKernelState;
}




-(id)blitCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDescriptor:(id)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 commandQueue:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)renderCommandEncoderWithDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)initDistributions;
-(void)mergeDistributions;
-(void)postCompletionHandlers;


@end


#endif