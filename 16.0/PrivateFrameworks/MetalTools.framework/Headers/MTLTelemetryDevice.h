// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTELEMETRYDEVICE_H
#define MTLTELEMETRYDEVICE_H

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;


#import "MTLToolsDevice.h"

@interface MTLTelemetryDevice : MTLToolsDevice {
    *MTLTelemetryCommandBufferCounttRec commandBufferDistribution;
    *MTLTelemetryEncoderDistributionRec encoderDistribution;
    *MTLTelemetryStatisticUIRec parallellRenderEncoderDistribution;
    *MTLTelemetryStatisticUIRec attachmentCount;
    *MTLTelemetryStatisticUIRec textureBindCount;
    *MTLTelemetryStatisticUIRec renderTargetArrayLengthDistribution;
    *MTLTelemetryViewportDistributionRec viewportDistribution;
    *MTLTelemetryScissorRectDistributionRec scissorRectDistribution;
    unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> renderTargetMap;
    *MTLTelemetryBufferDistributionRec bufferDistribution;
    unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution>>> textureMap;
    *MTLTelemetrySamplerDistributionRec samplerDistribution;
    unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec>>> renderPipeUsageMap;
    unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec>>> renderFuncUsageMap;
    *MTLTelemetryRenderPipelineDistributionRec renderPipelineDistribution;
    unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>> vtxStatDistributionMap;
    unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>> fragStatDistributionMap;
    *MTLTelemetryDepthStateDistributionRec depthStateDistribution;
    *MTLTelemetryStencilStateDistributionRec frontFaceStencilStateDistribution;
    *MTLTelemetryStencilStateDistributionRec backFaceStencilStateDistribution;
    *MTLTelemetryStatisticUIRec depthClipModeClampDistribution;
    unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec>>> computePipeUsageMap;
    unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryKernelUsageRec>>> kernelUsageMap;
    *MTLTelemetryComputePipelineDistributionRec computePipelineDistribution;
    unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>> computeStatDistributionMap;
    *MTLTelemetryStatisticUIRec commandBufferDispatchDistribution;
    *MTLTelemetryStatisticUIRec computeEncoderDispatchDistribution;
    *MTLTelemetryStatisticUIRec commandBufferDrawCallDistribution;
    *MTLTelemetryStatisticUIRec renderEncoderDrawCallDistribution;
    *MTLTelemetryDrawDistributionRec drawDistribution;
    *MTLTelemetryDispatchDistributionRec dispatchDistribution;
    unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution>>> blitMap;
    *MTLTelemetryStatisticUIRec commandBufferBlitDistribution;
    *MTLTelemetryStatisticUIRec blitEncoderBlitDistribution;
    *MTLTelemetryStatisticUIRec commandBufferMemoryBarrierDistribution;
    *MTLTelemetryKernelDistributionRec kernelDistribution;
    *MTLTelemetryAnisoClippedCountsRec anisoClippedCounts;
    NSObject<OS_dispatch_queue> *queue;
    mach_timebase_info timebase;
    CGFloat _timerScale;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _isGLMTL;
    MTLTelemetrySupportQueryStatRec supportQuery;
}


@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (readonly, nonatomic) NSObject<OS_os_log> *telemetryLog; // ivar: _telemetryLog


-(BOOL)enableTelemetry;
-(BOOL)supportsFeatureSet:(NSUInteger)arg0 ;
-(BOOL)supportsTextureSampleCount:(NSUInteger)arg0 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)newBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newBufferWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 deallocator:(id)arg3 ;
-(id)newBufferWithDescriptor:(id)arg0 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newCommandQueue;
-(id)newCommandQueueWithDescriptor:(id)arg0 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(NSUInteger)arg0 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg0 error:(*id)arg1 ;
-(id)newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg0 ;
-(id)newHeapWithDescriptor:(id)arg0 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newSamplerStateWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 iosurface:(struct __IOSurface *)arg1 plane:(NSUInteger)arg2 ;
-(struct ? )heapBufferSizeAndAlignWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(struct ? )heapTextureSizeAndAlignWithDescriptor:(id)arg0 ;
-(void)_newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)emitFeatureQueryUsage;
-(void)emitTelemetry;
-(void)initDistributions;
-(void)newComputePipelineStateWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg0 completionHandler:(id)arg1 ;
-(void)newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setGLMode:(BOOL)arg0 ;
-(void)setTimerInterval:(CGFloat)arg0 ;
-(void)startTimerWithInterval:(CGFloat)arg0 ;


@end


#endif