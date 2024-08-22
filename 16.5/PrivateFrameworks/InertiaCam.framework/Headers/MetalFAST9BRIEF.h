// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef METALFAST9BRIEF_H
#define METALFAST9BRIEF_H

@protocol MTLLibrary, MTLFunction, MTLComputePipelineState, MTLSamplerState, MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PipelineStatePromise.h"

@interface MetalFAST9BRIEF : NSObject {
    id<MTLLibrary> *_library;
    id<MTLFunction> *_response4MapKernel;
    id<MTLFunction> *_suppress4MapKernel;
    id<MTLFunction> *_compute4HistogramKernel;
    id<MTLFunction> *_responseMapKernel;
    id<MTLFunction> *_suppressMapKernel;
    id<MTLFunction> *_computeHistogramKernel;
    id<MTLFunction> *_histogramThresholdKernel;
    id<MTLFunction> *_cumulativeSumSimpleKernel;
    id<MTLFunction> *_compactMPSBuffersKernel;
    id<MTLComputePipelineState> *_histogramThresholdPipelineState;
    id<MTLComputePipelineState> *_cumulativeSumSimplePipelineState;
    id<MTLComputePipelineState> *_compactMPSBuffersPipelineState;
    id<MTLFunction> *_listKeypointsSimpleKernel;
    id<MTLFunction> *_listKeypointsKernel;
    id<MTLFunction> *_listKeypoints2Kernel;
    id<MTLFunction> *_listKeypoints3Kernel;
    id<MTLComputePipelineState> *_listKeypointsSimplePipelineState;
    id<MTLComputePipelineState> *_listKeypointsPipelineState;
    id<MTLComputePipelineState> *_listKeypoints2PipelineState;
    id<MTLComputePipelineState> *_listKeypoints3PipelineState;
    id<MTLFunction> *_refineKeypointKernel;
    id<MTLFunction> *_extractORBKernel;
    id<MTLFunction> *_boxBlurKernel;
    id<MTLFunction> *_boxBlurKernel_R8;
    id<MTLComputePipelineState> *_refineKeypointPipelineState;
    id<MTLComputePipelineState> *_extractORBPipelineState;
    id<MTLComputePipelineState> *_boxBlurPipelineState;
    id<MTLComputePipelineState> *_boxBlurR8PipelineState;
    id<MTLFunction> *_gaussianishBlurKernel;
    id<MTLSamplerState> *_clampedLinearNonNormSamplerState;
    PipelineStatePromise *_pipelineStates;
    *__CVMetalTextureCache _textureCache;
}


@property (readonly, retain) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, retain) NSObject<MTLCommandQueue> *queue; // ivar: _queue


+(id)_createMTLBufferFromRectRegionsDesiredKeypoints:(id)arg0 device:(id)arg1 storageMode:(NSUInteger)arg2 maxAllowedDescriptors:(*NSUInteger)arg3 ;
+(id)_createMTLBufferFromRects:(id)arg0 device:(id)arg1 storageMode:(NSUInteger)arg2 maxRectWidth:(*NSUInteger)arg3 maxRectHeight:(*NSUInteger)arg4 ;
-(BOOL)didFinishInitializationWithTimeout:(CGFloat)arg0 ;
-(id)_textureFromPixelBuffer:(struct __CVBuffer *)arg0 forcedMetalPixelFormat:(NSUInteger)arg1 forcedWidthDivisior:(int)arg2 ;
-(id)init;
-(struct __CVMetalTextureCache *)textureCache;
-(void)ORBDescriptorsFromPixelBuffer_metal:(id)arg0 inputBuffer:(struct __CVBuffer *)arg1 descriptorBuffer:(id)arg2 refinedKeypointsBuffer:(id)arg3 responseBuffer:(id)arg4 cumulativeKeypointsPerRegionBuffer:(id)arg5 intermediateBuffers:(id)arg6 ;
-(void)_ORBDescriptorsFromTextures_part1_metal:(id)arg0 inputTexture_RGBA8Uint:(id)arg1 inputTexture_R8Unorm:(id)arg2 responseBuffer:(id)arg3 cumulativeKeypointsPerRegionBuffer:(id)arg4 intermediateBuffers:(id)arg5 ;
-(void)_ORBDescriptorsFromTextures_part2_metal:(id)arg0 inputTexture_RGBA8Uint:(id)arg1 inputTexture_R8Unorm:(id)arg2 descriptorBuffer:(id)arg3 refinedKeypointsBuffer:(id)arg4 cumulativeKeypointsPerRegionBuffer:(id)arg5 intermediateBuffers:(id)arg6 keypointCount:(int)arg7 ;
-(void)_boxBlur_metal:(id)arg0 inputImageTexture:(id)arg1 boxBlurredTexture:(id)arg2 ;
-(void)_computeResponseMap_metal:(id)arg0 inputTexture:(id)arg1 outputTexture:(id)arg2 garbagePixelCount:(unsigned int)arg3 ;
-(void)_cumulativeSum_metal:(id)arg0 expectedPointsBuffer:(id)arg1 cumulativePointsBuffer:(id)arg2 regionCountBuffer:(id)arg3 keypointCountBuffer:(id)arg4 regionCount:(NSUInteger)arg5 ;
-(void)_extractORB_metal:(id)arg0 boxBlurredTexture:(id)arg1 keypointLocationsBuffer:(id)arg2 outputORBDescriptorBuffer:(id)arg3 keypointCountBuffer:(id)arg4 keypointCount:(NSUInteger)arg5 ;
-(void)_gaussianishBlur_metal:(id)arg0 inputTexture:(id)arg1 outputTexture:(id)arg2 offset:(struct CGPoint )arg3 ;
-(void)_generateHistograms_metal:(id)arg0 suppressedTexture:(id)arg1 tileBuffer:(id)arg2 desiredKeypointCountsBuffer:(id)arg3 thresholdsBuffer:(id)arg4 histogramBuffer:(id)arg5 thresholdRangeBuffer:(id)arg6 keypointsAtChosenThresholdBuffer:(id)arg7 truncatedRegionsBuffer:(id)arg8 tileCount:(NSUInteger)arg9 maxTileHeight:(NSUInteger)arg10 ;
-(void)_listKeypoints2_metal:(id)arg0 suppressedResponseMapTexture:(id)arg1 tileBuffer:(id)arg2 tileCountBuffer:(id)arg3 tileCount:(NSUInteger)arg4 thresholdsBuffer:(id)arg5 cumulativePointsBuffer:(id)arg6 keypointLocationsBuffer:(id)arg7 keypointResponsesBuffer:(id)arg8 maxRegionHeight:(CGFloat)arg9 ;
-(void)_listKeypoints3_metal:(id)arg0 suppressedResponseMapTexture:(id)arg1 tileBuffer:(id)arg2 tileCountBuffer:(id)arg3 tileCount:(NSUInteger)arg4 thresholdsBuffer:(id)arg5 cumulativePointsBuffer:(id)arg6 keypointLocationsBuffer:(id)arg7 keypointResponsesBuffer:(id)arg8 maxRegionHeight:(CGFloat)arg9 maxRegionWidth:(CGFloat)arg10 ;
-(void)_listKeypointsSimple_metal:(id)arg0 suppressedResponseMapTexture:(id)arg1 tileBuffer:(id)arg2 tileCountBuffer:(id)arg3 tileCount:(NSUInteger)arg4 thresholdsBuffer:(id)arg5 cumulativePointsBuffer:(id)arg6 keypointLocationsBuffer:(id)arg7 keypointResponsesBuffer:(id)arg8 desiredKeypointsBuffer:(id)arg9 indexBuffer:(id)arg10 ;
-(void)_refineKeypoints_metal:(id)arg0 inputImageTexture:(id)arg1 keypointLocationsBuffer:(id)arg2 refinedLocationsBuffer:(id)arg3 keypointCountBuffer:(id)arg4 keypointCount:(NSUInteger)arg5 debugIntermediatesBuffer:(id)arg6 cumulativePointsBuffer:(id)arg7 tileCountBuffer:(id)arg8 ;
-(void)_suppressResponseMap_metal:(id)arg0 unsuppressedTexture:(id)arg1 suppressedTexture:(id)arg2 garbagePixelCount:(unsigned int)arg3 ;
-(void)dealloc;


@end


#endif