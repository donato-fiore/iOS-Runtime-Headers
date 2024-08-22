// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREDEVICEFORMAT_H
#define AVCAPTUREDEVICEFORMAT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureDeviceFormatInternal.h"

@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal *_internal;
}


@property (readonly, nonatomic) NSInteger autoFocusSystem;
@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription;
@property (readonly, nonatomic, getter=isGlobalToneMappingSupported) BOOL globalToneMappingSupported;
@property (readonly, nonatomic, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (readonly, nonatomic) ? highResolutionStillImageDimensions;
@property (readonly, nonatomic, getter=isHighestPhotoQualitySupported) BOOL highestPhotoQualitySupported;
@property (readonly, nonatomic) ? maxExposureDuration;
@property (readonly, nonatomic) float maxISO;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) ? minExposureDuration;
@property (readonly, nonatomic) float minISO;
@property (readonly, nonatomic) NSArray *supportedColorSpaces;
@property (readonly, nonatomic) NSArray *supportedDepthDataFormats;
@property (readonly, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property (readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property (readonly, nonatomic) CGFloat videoMaxZoomFactor;
@property (readonly, nonatomic) CGFloat videoMaxZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) CGFloat videoMinZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property (readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (readonly, nonatomic) CGFloat videoZoomFactorUpscaleThreshold;


+(void)initialize;
-(BOOL)isBackgroundBlurSupported;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(BOOL)isCenterStageSupported;
-(BOOL)isCinematicFramingSupported;
-(BOOL)isContentAwareDistortionCorrectionSupported;
-(BOOL)isDeepFusionSupported;
-(BOOL)isDefaultActiveFormat;
-(BOOL)isDeferredPhotoProcessingSupported;
-(BOOL)isDigitalFlashSupported;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExperimental;
-(BOOL)isFastCapturePrioritizationSupported;
-(BOOL)isHDRSupported;
-(BOOL)isHighResPhotoFormat;
-(BOOL)isIrisSupported;
-(BOOL)isLowLightVideoCaptureSupported;
-(BOOL)isMomentCaptureMovieRecordingSupported;
-(BOOL)isMultiCamSupported;
-(BOOL)isNonDestructiveCropSupported;
-(BOOL)isPhotoFormat;
-(BOOL)isPortraitEffectSupported;
-(BOOL)isPortraitEffectsMatteStillImageDeliverySupported;
-(BOOL)isSISSupported;
-(BOOL)isSemanticStyleRenderingSupported;
-(BOOL)isSpatialOverCaptureSupported;
-(BOOL)isStereoFusionSupported;
-(BOOL)isStillImageDepthSupported;
-(BOOL)isStillImageDisparitySupported;
-(BOOL)isStreamingDepthSupported;
-(BOOL)isStreamingDisparitySupported;
-(BOOL)isVariableFrameRateVideoCaptureSupported;
-(BOOL)isVideoHDRSuspensionSupported;
-(BOOL)isVideoStabilizationModeSupported:(NSInteger)arg0 ;
-(BOOL)isVisionDataDeliverySupported;
-(BOOL)isWideColorSupported;
-(BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg0 ;
-(BOOL)supportsDynamicCrop;
-(BOOL)supportsHighProfileH264;
-(BOOL)supportsHighResolutionStillImageOutput;
-(BOOL)supportsQuadraHighResolutionStillImageOutput;
-(BOOL)supportsRedEyeReduction;
-(CGFloat)videoMinZoomFactorForCameraCalibrationDataDelivery;
-(CGFloat)videoMinZoomFactorForCenterStage;
-(NSInteger)stabilizationTypeForTimelapse;
-(NSInteger)videoHDRFlavor;
-(float)defaultPortraitLightingEffectStrength;
-(float)defaultSimulatedAperture;
-(float)geometricDistortionCorrectedVideoFieldOfView;
-(float)hardwareCost;
-(float)maxPortraitLightingEffectStrength;
-(float)maxSimulatedAperture;
-(float)minPortraitLightingEffectStrength;
-(float)minSimulatedAperture;
-(float)spatialOverCapturePercentage;
-(id)AVCaptureSessionPresets;
-(id)_stringForMediaType:(unsigned int)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 frameRateRanges:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)figCaptureSourceDepthDataFormat;
-(id)figCaptureSourceVideoFormat;
-(id)initWithFigCaptureSourceFormat:(id)arg0 ;
-(id)optimizedPhotoFilterNames;
-(id)optimizedVideoPreviewFilterNames;
-(id)supportedSemanticSegmentationMatteTypes;
-(id)videoFrameRateRangeForBackgroundBlur;
-(id)videoFrameRateRangeForCenterStage;
-(id)videoFrameRateRangeForPortraitEffect;
-(id)vtScalingMode;
-(int)baseSensorPowerConsumption;
-(int)ispPowerConsumption;
-(int)rawBitDepth;
-(int)supportedFormatsArrayIndex;
-(int)supportedStabilizationMethod;
-(int)variableSensorPowerConsumption;
-(struct ? )defaultActiveMaxFrameDurationForSessionPreset:(id)arg0 ;
-(struct ? )defaultActiveMinFrameDurationForSessionPreset:(id)arg0 ;
-(struct ? )highestSupportedVideoFrameDuration;
-(struct ? )lowestSupportedVideoFrameDuration;
-(struct ? )previewDimensions;
-(struct ? )sensorDimensions;
-(unsigned int)internalDemosaicedRawPixelFormat;
-(unsigned int)supportedDemosaicedRawPixelFormat;
-(unsigned int)supportedRawPixelFormat;
-(void)dealloc;


@end


#endif