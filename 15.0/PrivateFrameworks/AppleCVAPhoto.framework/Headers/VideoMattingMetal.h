// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOMATTINGMETAL_H
#define VIDEOMATTINGMETAL_H

@class MPSImageGuidedFilter, MPSImageBox, MPSImageAreaMin, MPSImageGaussianBlur, NSData;
@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLCommandQueue, MTLComputePipelineState, OS_dispatch_semaphore, MTLTexture, MTLResourceGroupSPI, OS_dispatch_queue;


#import "ImageSaverRegistrator.h"
#import "CVAFilterBox.h"
#import "CVAFilterHybridResampling.h"
#import "CVAFilterGuided.h"
#import "CVAFilterRenderStagelight.h"
#import "CVAFilterColorAlphaToFgBg.h"
#import "CVAFilterRenderComposite.h"
#import "CVAFilterDistanceTransform.h"
#import "CVAFilterDiffusion.h"
#import "CVAFilterInfimumConvolution.h"
#import "CVAPhotoMTLRingBuffer.h"
#import "CVAFilterMaskedVariableBlur.h"

@interface VideoMattingMetal : ImageSaverRegistrator {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_defaultLibrary;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    id<MTLCommandQueue> *_commandQueue;
    *void _metalContext;
    BOOL _mattingUsesPostprocessing;
    BOOL _renderingUsesPostprocessing;
    BOOL _enableInfConvolution;
    int _lastCommittedCommand;
    int _width;
    int _height;
    int _width2;
    int _height2;
    float _renderingDisparityBlurRadius;
    float _renderingLensFocalLength_mm;
    BOOL _useTemporalConfidence;
    CVAFilterBox *_boxFilter;
    CVAFilterHybridResampling *_hybridResampler;
    MPSImageGuidedFilter *_guidedFilter;
    CVAFilterGuided *_cvaGuidedFilter;
    CVAFilterRenderStagelight *_stagelightFilter;
    CVAFilterColorAlphaToFgBg *_colorAlphaToFgBg;
    CVAFilterRenderComposite *_renderComposite;
    CVAFilterDistanceTransform *_distanceTransform;
    BOOL _doDisparityDiffusion;
    CVAFilterDiffusion *_diffusion;
    CVAFilterInfimumConvolution *_infConvolution;
    float _infConvolutionScale;
    float _gammaExponent;
    id<MTLComputePipelineState> *_diffusionMapKernel;
    id<MTLComputePipelineState> *_fillBackgroundDisparityKernel;
    id<MTLComputePipelineState> *_fillBackgroundDisparityKernel_faceMask;
    id<MTLComputePipelineState> *_disparityConfidenceMaskKernel;
    id<MTLComputePipelineState> *_disparityMasksKernel;
    id<MTLComputePipelineState> *_disparityIsValidKernel;
    id<MTLComputePipelineState> *_domainTransformXKernel;
    id<MTLComputePipelineState> *_domainTransformYKernel;
    id<MTLComputePipelineState> *_edgeAwareFillXKernel;
    id<MTLComputePipelineState> *_edgeAwareFillYKernel;
    id<MTLComputePipelineState> *_invalidDisparityMaskKernel;
    id<MTLComputePipelineState> *_bgFillXKernel;
    id<MTLComputePipelineState> *_bgFillYKernel;
    id<MTLComputePipelineState> *_internalDisparityToCanonicalDisparityKernel;
    id<MTLComputePipelineState> *_disparityDecimateKernel;
    id<MTLComputePipelineState> *_alphaFillKernel;
    id<MTLComputePipelineState> *_disparityCleanupKernel;
    id<MTLComputePipelineState> *_disparityCleanupKernel_firstFrame;
    id<MTLComputePipelineState> *_simpleConfidenceKernel;
    id<MTLComputePipelineState> *_updateConfidenceAndLastValidDisparityKernel;
    id<MTLComputePipelineState> *_updateConfidenceAndLastValidDisparityKernel_useTemporalConfidence;
    id<MTLComputePipelineState> *_roughDisparityKernel;
    id<MTLComputePipelineState> *_temporalDisparityFilterKernel;
    id<MTLComputePipelineState> *_temporalDisparityFilterKernel_fallbackToInvalid;
    id<MTLComputePipelineState> *_renderingDisparityDeweightKernel;
    CVAPhotoMTLRingBuffer *_disparityConfig;
    id<MTLComputePipelineState> *_renderingDisparityFillAndFilterKernel;
    CompositeConfig _noiseConfig;
    CVAFilterMaskedVariableBlur *_maskedVariableBlur;
    id<MTLComputePipelineState> *_halfDownSampler;
    id<MTLComputePipelineState> *_colorSimKernel;
    id<MTLComputePipelineState> *_colorSimL1Kernel;
    id<MTLComputePipelineState> *_temporalCoefficientsFilterKernel;
    id<MTLComputePipelineState> *_guidedFilterWeightKernel;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id<MTLTexture> *_rTexture;
    id<MTLTexture> *_gTexture;
    id<MTLTexture> *_bTexture;
    id<MTLTexture> *_bg;
    id<MTLTexture> *_blurredBg;
    id<MTLTexture> *_deweightedDisparity;
    id<MTLTexture>" _shift;
    id<MTLTexture> *_coc;
    id<MTLTexture> *_bgColorLut;
    id<MTLTexture> *_fgColorLut;
    id<MTLTexture> *_stageLightProxyLut;
    id<MTLTexture> *_stageLightLut;
    id<MTLResourceGroupSPI> *_backgroundTextureGroup;
    MPSImageBox *_disparityBlurBoxKernel;
    MPSImageBox *_fgBlurBoxKernel;
    MPSImageAreaMin *_fgMaskErosionKernel;
    id<MTLTexture> *_gfForegroundMask;
    id<MTLTexture> *_gfWeight;
    id<MTLTexture>" _disparityLastValidValue;
    id<MTLTexture>" _disparity;
    id<MTLTexture> *_facemaskDisparity;
    id<MTLTexture> *_filledDisparityTexture;
    id<MTLTexture> *_filledDisparityNoInvalidTexture;
    id<MTLTexture> *_temporallyFilteredDisparity;
    id<MTLTexture> *_disparityConfidenceMaskTexture;
    id<MTLTexture>" _smoothConfidence;
    id<MTLTexture>" _smoothDisparity;
    id<MTLTexture> *_roughDisparity;
    id<MTLTexture> *_diffusionMapTexture;
    id<MTLTexture> *_disparityIsValidTexture;
    id<MTLTexture> *_distanceFromKnownDisparityTexture;
    id<MTLTexture> *_domainTransformXTexture;
    id<MTLTexture> *_domainTransformYTexture;
    id<MTLTexture> *_edgeAwareFillTempTexture;
    id<MTLTexture> *_bgFillTempTexture;
    id<MTLTexture> *_invalidDisparityMaskTexture;
    id<MTLTexture> *_initDisparity;
    id<MTLTexture> *_outputCanonicalDisparity;
    id<MTLTexture> *_coeff;
    id<MTLTexture>" _coeffHistory;
    id<MTLTexture> *_isForegroundTexture;
    id<MTLTexture> *_distanceToForegroundTexture;
    id<MTLTexture> *_alphaNoPostprocessing;
    id<MTLResourceGroupSPI> *_alphaNoPostprocessingGroup;
    id<MTLResourceGroupSPI> *_edgeAwareGroup;
    id<MTLResourceGroupSPI> *_bgFillGroup;
    id<MTLTexture>" _scaledSource;
    ? _scaledSourceCV;
    id<MTLTexture> *_tempFloatR32FloatTexture;
    *__CVBuffer _yuvSourceDownsampledBuffer;
    BOOL _doFaceMask;
    id<MTLTexture> *_facemaskRegionTexture;
    NSUInteger _frameIndex;
    MPSImageGaussianBlur *_smoothFilter;
    *__IOSurfaceAccelerator _hwScaler;
    id<MTLTexture> *_yuvSourceDownsampledTexture;
    NSData *_lastBgLutData;
    NSData *_lastFgLutData;
    NSData *_lastStageLightProxyCubeData;
    NSData *_lastStageLightCubeData;
    NSObject<OS_dispatch_queue> *_synchronousRenderingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_renderingCallbackSemaphore;
    NSObject<OS_dispatch_queue> *_synchronousMattingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_mattingCallbackSemaphore;
    *__sFILE _scaledSourceFile;
}


@property BOOL bypassShiftCleanup; // ivar: _bypassShiftCleanup
@property (readonly) NSObject<MTLTexture> *colorSim; // ivar: _colorSim
@property (readonly) NSObject<MTLTexture> *filteredBeforeSmoothDisparity; // ivar: _filteredBeforeSmoothDisparity
@property BOOL isBgColorLutBlack; // ivar: _isBgColorLutBlack
@property float renderingDisparityUpdateRate; // ivar: _renderingDisparityUpdateRate


+(void)decomposeYuvPixelBuffer:(struct __CVBuffer *)arg0 yTexture:(*id)arg1 uvTexture:(*id)arg2 device:(id)arg3 ;
+(void)saveTexture:(id)arg0 toFilename:(id)arg1 ;
-(id)disparityPostprocessingWithCanonicalDisparity:(struct __CVBuffer *)arg0 color:(struct __CVBuffer *)arg1 postProcessedDisparity:(struct __CVBuffer *)arg2 staticParams:(struct VideoMattingStaticParams *)arg3 dynamicParams:(*void)arg4 postProcessingParams:(struct VideoPostprocessingParams *)arg5 facesArray:(id)arg6 faceModel:(id)arg7 isFinalStage:(BOOL)arg8 callbackQueue:(id)arg9 callback:(id)arg10 ;
-(id)initWithStaticParams:(struct VideoMattingStaticParams *)arg0 renderingDisparityUpdateRate:(float)arg1 renderingDisparityBlurRadius:(float)arg2 renderingLensFocalLength_mm:(float)arg3 useTemporalConfidence:(BOOL)arg4 metalContext:(*void)arg5 error:(*id)arg6 ;
-(struct __CVBuffer *)createCVBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 ;
-(struct pair<float, float> )blurRadiusAndStdAtInfinityForFocalLength:(float)arg0 focusCanonicalDisparity:(float)arg1 fNumber:(float)arg2 xResolution:(float)arg3 useNewCoCFormula:(BOOL)arg4 ;
-(void)alphaMattingWithPostprocessedDisparity:(struct __CVBuffer *)arg0 source:(struct __CVBuffer *)arg1 inSegmentation:(struct __CVBuffer *)arg2 alpha:(struct __CVBuffer *)arg3 staticParams:(struct VideoMattingStaticParams *)arg4 dynamicParams:(*void)arg5 usePostprocessedDisparity:(BOOL)arg6 isFinalStage:(BOOL)arg7 dilateForegroundMask:(BOOL)arg8 callbackQueue:(id)arg9 callback:(id)arg10 ;
-(void)cropFrame:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 rect:(struct CGRect )arg2 ;
-(void)dealloc;
-(void)downsampleWithHWScalerSource:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 ;
-(void)encode420Bilinear2xDownsamplingToCommandBuffer:(id)arg0 source:(struct __CVBuffer *)arg1 destination:(struct __CVBuffer *)arg2 ;
-(void)encode420HybridDownsamplingToCommandBuffer:(id)arg0 source:(struct __CVBuffer *)arg1 destination:(struct __CVBuffer *)arg2 ;
-(void)encode420ScalingByMPSToCommandBuffer:(id)arg0 source:(struct __CVBuffer *)arg1 destination:(struct __CVBuffer *)arg2 ;
-(void)encodeBackgroundFillToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 inputMask:(id)arg2 outputDisparity:(id)arg3 ;
-(void)encodeColorSimL1ToCommandBuffer:(id)arg0 prevSource:(id)arg1 currSource:(id)arg2 destination:(id)arg3 ;
-(void)encodeColorSimToCommandBuffer:(id)arg0 prevSource:(id)arg1 currSource:(id)arg2 destination:(id)arg3 similarityScaleFactor:(float)arg4 ;
-(void)encodeConfidenceMaskToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 inputDisparityNoInvalid:(id)arg2 outputConfidenceMask:(id)arg3 ;
-(void)encodeCopyTextureToCommandBuffer:(id)arg0 inTexture:(id)arg1 outTexture:(id)arg2 ;
-(void)encodeDiffusionMapToCommandBuffer:(id)arg0 color:(id)arg1 diffusionMap:(id)arg2 ;
-(void)encodeDisparityCleanupToCommandBuffer:(id)arg0 prevDisparity:(id)arg1 currDisparity:(id)arg2 colorSim:(id)arg3 cleanDisparity:(id)arg4 ;
-(void)encodeDisparityDecimateToCommandBuffer:(id)arg0 canonicalDisparity:(struct __CVBuffer *)arg1 disparityOut:(id)arg2 ;
-(void)encodeDisparityMasksToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 inputSegmentation:(id)arg2 useSegmentationOnly:(BOOL)arg3 outputForegroundMask:(id)arg4 outputIsForeground:(id)arg5 disparityMin:(float)arg6 focusDisparity:(float)arg7 hardness:(float)arg8 minDistToDeweight:(float)arg9 unconfidentWeight:(float)arg10 ;
-(void)encodeDisparitySmoothingToCommandBuffer:(id)arg0 disparity:(id)arg1 ;
-(void)encodeDisparityTemporalFilterToCommandBuffer:(id)arg0 currentDisparity:(id)arg1 previousDisparity:(id)arg2 currConfidence:(id)arg3 prevSmoothConfidence:(id)arg4 colorSim:(id)arg5 outPrevSmoothConfidence:(id)arg6 outTemporallyFilteredDisparity:(id)arg7 disparityFallbackToInvalid:(BOOL)arg8 disparityFilterUpdateRate:(float)arg9 minimumConfidenceToKeepDisparity:(float)arg10 maximumSimilarityToKeepDisparity:(float)arg11 ;
-(void)encodeDomainTransformToCommandBuffer:(id)arg0 inputDiffusionMap:(id)arg1 inputDistanceFromKnownDisparity:(id)arg2 outputDomainTransformX:(id)arg3 outputDomainTransformY:(id)arg4 ;
-(void)encodeEdgeAwareFillToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 inputDomainTransformX:(id)arg2 inputDomainTransformY:(id)arg3 outputDisparity:(id)arg4 ;
-(void)encodeFillAlphaToCommandBuffer:(id)arg0 alpha:(id)arg1 ;
-(void)encodeFillBackgroundDisparityToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 inputFacemask:(id)arg2 outputDistanceFromKnownDisparity:(id)arg3 outputDisparity:(id)arg4 backgroundDisparityValue:(float)arg5 minimumDistanceFromValidDisparity:(float)arg6 ;
-(void)encodeFilterCoefficientToBuffer:(id)arg0 inputCoeff:(id)arg1 prevCoeff:(id)arg2 outCoeff:(id)arg3 inColorSim:(id)arg4 updateRate:(float)arg5 ;
-(void)encodeForegroundMaskToBuffer:(id)arg0 disparity:(id)arg1 inSegmentation:(id)arg2 useSegmentationOnly:(BOOL)arg3 weight:(id)arg4 foregroundMask:(id)arg5 erodedForegroundMask:(id)arg6 disparityMin:(float)arg7 focusDisparity:(float)arg8 hardness:(float)arg9 minDistToDeweight:(float)arg10 unconfidentWeight:(float)arg11 dilateForegroundMask:(BOOL)arg12 foregroundMaskDilationRadius:(float)arg13 ;
-(void)encodeGuidedFilterWeightToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 inputSegmentation:(id)arg2 useSegmentationOnly:(BOOL)arg3 inputForegroundDistance:(id)arg4 outputForegroundMask:(id)arg5 outputWeight:(id)arg6 minDistToDeweight:(float)arg7 unconfidentWeight:(float)arg8 dilateForegroundMask:(BOOL)arg9 foregroundMaskDilationRadius:(float)arg10 ;
-(void)encodeInvalidDisparityMaskToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 outputMask:(id)arg2 ;
-(void)encodeOutputDisparityToCommandBuffer:(id)arg0 inputDisparity:(id)arg1 outputDisparity:(id)arg2 ;
-(void)encodeScaleSourceToCommandBuffer:(id)arg0 source:(struct __CVBuffer *)arg1 targetWidth:(NSUInteger)arg2 targetHeight:(NSUInteger)arg3 ;
-(void)encodeSimpleConfidenceToCommandBuffer:(id)arg0 disparity:(id)arg1 outConfidence:(id)arg2 ;
-(void)encodeUpdateConfidenceAndLastValidDisparityToCommandBuffer:(id)arg0 disparity:(id)arg1 prevSmoothConfidence:(id)arg2 lastValidDisparityIn:(id)arg3 lastValidDisparityOut:(id)arg4 currConfidenceOut:(id)arg5 useTemporalConfidence:(BOOL)arg6 ;
-(void)initSourceTexture:(struct __CVBuffer *)arg0 ;
-(void)prewarmGuidedFilter:(id)arg0 device:(id)arg1 commandBuffer:(id)arg2 width:(int)arg3 height:(int)arg4 width2:(int)arg5 height2:(int)arg6 ;
-(void)renderContinuousWithSource:(struct __CVBuffer *)arg0 alpha:(struct __CVBuffer *)arg1 canonicalDisparity:(struct __CVBuffer *)arg2 disparityInFocus:(float)arg3 focusCanonicalDisparity:(float)arg4 fNumber:(float)arg5 infConvolutionScale:(float)arg6 noiseBits:(float)arg7 disparityUpdateRate:(float)arg8 focusThresholdHardness:(float)arg9 cubeIntensity:(float)arg10 usePostprocessedDisparity:(BOOL)arg11 dstColor:(struct __CVBuffer *)arg12 isFinalStage:(BOOL)arg13 properties:(id)arg14 callbackQueue:(id)arg15 withCallback:(id)arg16 ;
-(void)renderStageLightWithSource:(struct __CVBuffer *)arg0 alpha:(struct __CVBuffer *)arg1 canonicalDisparity:(struct __CVBuffer *)arg2 dstColor:(struct __CVBuffer *)arg3 blackBackgroundIntensity:(float)arg4 vignetteIntensity:(float)arg5 isFinalStage:(BOOL)arg6 callbackQueue:(id)arg7 withCallback:(id)arg8 ;
-(void)setAlphaLut:(float)arg0 gammaExponent:(float)arg1 ;
-(void)setBgLut:(id)arg0 ;
-(void)setFgLut:(id)arg0 ;
-(void)setPortraitForegroundCubeData:(id)arg0 backgroundCubeData:(id)arg1 ;
-(void)setStageLightProxyCubeData:(id)arg0 cubeData:(id)arg1 ;


@end


#endif