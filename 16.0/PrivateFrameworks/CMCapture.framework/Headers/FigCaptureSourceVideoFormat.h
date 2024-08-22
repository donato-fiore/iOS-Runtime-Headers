// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESOURCEVIDEOFORMAT_H
#define FIGCAPTURESOURCEVIDEOFORMAT_H

@class NSArray, NSString;
@protocol FigXPCCoding, NSSecureCoding;


#import "FigCaptureSourceFormat.h"
#import "FigCaptureSourceCompanionFormat.h"
#import "FigCaptureSourceVideoFormat.h"

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat <FigXPCCoding, NSSecureCoding>

 {
    ? _previewDimensions;
    NSArray *_frontEndScalerCompanionFormats;
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_fullBinSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_actionCameraCompanionFormat;
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;
    FigCaptureSourceVideoFormat *_cinematicFramingFormat;
    FigCaptureSourceVideoFormat *_geometricDistortionCorrectionFormat;
    NSArray *_supportedDepthDataFormats;
}


@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly, getter=isSIFRSupported) BOOL SIFRSupported;
@property (readonly) int autoFocusSystem;
@property (readonly, getter=isBackgroundBlurSupported) BOOL backgroundBlurSupported;
@property (readonly, getter=isBackgroundBlurSupportedForContinuityCapture) BOOL backgroundBlurSupportedForContinuityCapture;
@property (readonly) int baseSensorPowerConsumption;
@property (readonly, getter=isBinned) BOOL binned;
@property (readonly) FigCaptureSourceVideoFormat *cinematicFramingFormat;
@property (readonly, getter=isCinematicFramingSupported) BOOL cinematicFramingSupported;
@property (readonly, getter=isCinematicFramingSupportedForContinuityCapture) BOOL cinematicFramingSupportedForContinuityCapture;
@property (readonly) float cinematicStabilizationExtendedLookAheadDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDeepFusionSupported) BOOL deepFusionSupported;
@property (readonly) float defaultPortraitLightingEffectStrength;
@property (readonly) float defaultSimulatedAperture;
@property (readonly, getter=isDeferredPhotoProcessingSupported) BOOL deferredPhotoProcessingSupported;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isDigitalFlashSupported) BOOL digitalFlashSupported;
@property (readonly) float fieldOfView;
@property (readonly) float geometricDistortionCorrectedFieldOfView;
@property (readonly) FigCaptureSourceVideoFormat *geometricDistortionCorrectionFormat;
@property (readonly) float hardwareCost;
@property (readonly) BOOL hasSensorHDRCompanionIndex;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isHDROriginalImageDeliverySupported) BOOL hdrOriginalImageDeliverySupported;
@property (readonly, getter=isHDRSupported) BOOL hdrSupported;
@property (readonly, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (readonly, getter=isHighResPhotoFormat) BOOL highResPhotoFormat;
@property (readonly, getter=isHighResStillImageSupported) BOOL highResStillImageSupported;
@property (readonly, nonatomic) BOOL intelligentDistortionCorrectionSupported;
@property (readonly) unsigned int internalDemosaicedRawPixelFormat;
@property (readonly, getter=isIrisSupported) BOOL irisSupported;
@property (readonly, getter=isIrisVideoStabilizationSupported) BOOL irisVideoStabilizationSupported;
@property (readonly) int ispPowerConsumption;
@property (readonly, getter=isLowLightVideoCaptureSupported) BOOL lowLightVideoCaptureSupported;
@property (readonly) ? maxExposureDuration;
@property (readonly) float maxISO;
@property (readonly) float maxPortraitLightingEffectStrength;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float maxZoomFactor;
@property (readonly) ? minExposureDuration;
@property (readonly) float minISO;
@property (readonly) float minPortraitLightingEffectStrength;
@property (readonly) float minSimulatedAperture;
@property (readonly, getter=isMomentCaptureMovieRecordingSupported) BOOL momentCaptureMovieRecordingSupported;
@property (readonly, getter=isMultiCamSupported) BOOL multiCamSupported;
@property (readonly, getter=isNonDestructiveCropSupported) BOOL nonDestructiveCropSupported;
@property (readonly, getter=isPhotoFormat) BOOL photoFormat;
@property (readonly) BOOL prefersSensorHDREnabled;
@property (readonly) ? previewDimensions;
@property (readonly, getter=isQuadraHighResStillImageSupported) BOOL quadraHighResStillImageSupported;
@property (readonly, getter=isRedEyeReductionSupported) BOOL redEyeReductionSupported;
@property (readonly, getter=isResponsiveShutterSupported) BOOL responsiveShutterSupported;
@property (readonly) NSArray *secondaryNativeResolutionZoomFactors;
@property (readonly, getter=isSemanticStyleRenderingSupported) BOOL semanticStyleRenderingSupported;
@property (readonly) ? sensorDimensions;
@property (readonly) float spatialOverCapturePercentage;
@property (readonly, getter=isSpatialOverCaptureSupported) BOOL spatialOverCaptureSupported;
@property (readonly) float stabilizationOverscanPercentageOverrideForCinematic;
@property (readonly) float stabilizationOverscanPercentageOverrideForMediumStrength;
@property (readonly) float stabilizationOverscanPercentageOverrideForStandard;
@property (readonly) int stabilizationTypeOverrideForCinematic;
@property (readonly) int stabilizationTypeOverrideForStandard;
@property (readonly, getter=isStereoFusionSupported) BOOL stereoFusionSupported;
@property (readonly, getter=isStillImageDepthSupported) BOOL stillImageDepthSupported;
@property (readonly, getter=isStillImageDisparitySupported) BOOL stillImageDisparitySupported;
@property (readonly, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (readonly, getter=isStreamingDepthSupported) BOOL streamingDepthSupported;
@property (readonly, getter=isStreamingDisparitySupported) BOOL streamingDisparitySupported;
@property (readonly, getter=isStudioLightingSupported) BOOL studioLightingSupported;
@property (readonly, getter=isStudioLightingSupportedForContinuityCapture) BOOL studioLightingSupportedForContinuityCapture;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) unsigned int supportedDemosaicedRawPixelFormat;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly, getter=isVariableFrameRateVideoCaptureSupported) BOOL variableFrameRateVideoCaptureSupported;
@property (readonly) int variableSensorPowerConsumption;
@property (readonly, getter=isVideoGreenGhostMitigationSupported) BOOL videoGreenGhostMitigationSupported;
@property (readonly, getter=isVideoHDRFusionSupported) BOOL videoHDRFusionSupported;
@property (readonly, getter=isWideColorSupported) BOOL wideColorSupported;
@property (readonly) float zoomFactorUpscaleThreshold;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)capturesStillsFromVideoStream;
-(BOOL)configureForDigitalFlashSupport;
-(BOOL)configureForNonDisruptiveFullBinSIFRSwitching;
-(BOOL)configureForSoftISPSupport;
-(BOOL)configureForSpatialOverCaptureSupport;
-(BOOL)configureForStillImageStabilizationSupport;
-(BOOL)distortionCompensationSupported;
-(BOOL)gdcInStillImageSinkPipelineSupported;
-(BOOL)isCaptureTimePhotoCurationSupported;
-(BOOL)isCompatibleWithInfraredFormat:(id)arg0 ;
-(BOOL)isContentAwareAWBSupported;
-(BOOL)isContentAwareEnhancementSupported;
-(BOOL)isDeepZoomSupported;
-(BOOL)isGNRHDRSupported;
-(BOOL)isGainMapSupported;
-(BOOL)isISPMultiBandNoiseReductionSupported;
-(BOOL)isLearnedNRSupported;
-(BOOL)isSIFRStillImageCaptureWithDepthDataDisabled;
-(BOOL)isSecondaryScalerUnavailable;
-(BOOL)isStabilizationModeSupported:(int)arg0 ;
-(BOOL)isStagePreviewRenderingSupported;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(BOOL)isStillImageISPMultiBandNoiseReductionSupported;
-(BOOL)isStudioAndContourPreviewRenderingSupported;
-(BOOL)isSupplementalTimeOfFlightCameraSupported;
-(BOOL)isValidDerivedSourceFormatForUnderlyingFormat:(id)arg0 ;
-(BOOL)isVideoSTFMetadataEnabled;
-(BOOL)isVideoSTFSupported;
-(BOOL)isVideoStabilizationStrengthSupported:(int)arg0 ;
-(BOOL)isWideAsStatsMasterEnabled;
-(BOOL)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;
-(BOOL)isZeroShutterLagSupported;
-(BOOL)ispChromaNoiseReductionEnabled;
-(BOOL)sushiRawBlackBorderingEnabled;
-(BOOL)sushiRawSupported;
-(BOOL)temporalNoiseReductionBand0Disabled;
-(BOOL)temporalNoiseReductionRawEnabled;
-(BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
-(BOOL)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
-(float)aeMaxGain;
-(float)defaultMaxFrameRateForSessionPreset:(id)arg0 ;
-(float)defaultMinFrameRateForSessionPreset:(id)arg0 ;
-(float)depthDataAEMaxGain;
-(float)depthDataMaxIntegrationTimeOverride;
-(float)lowLightVideoAEMaxGain;
-(id)actionCameraCompanionFormat;
-(id)copyWithNewPixelFormat:(unsigned int)arg0 ;
-(id)copyXPCEncoding;
-(id)depthCompanionFormat;
-(id)digitalFlashDetectedObjectTypes;
-(id)frontEndScalerCompanionFormats;
-(id)fullBinSIFRCompanionFormat;
-(id)highResStillImageDimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg0 ;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg0 pixelFormatOverride:(unsigned int)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)nonSIFRCompanionFormat;
-(id)rawLensShadingCorrection;
-(int)configureForGreenGhostMitigationVersion;
-(int)fesBinningFactorHorizontal;
-(int)formatIndex;
-(int)greenGhostMitigationVersion;
-(int)horizontalSensorBinningFactor;
-(int)maxIntegrationTimeOverride;
-(int)previewImageQueueSyncStrategy;
-(int)redEyeReductionVersion;
-(int)semanticDevelopmentVersion;
-(int)semanticRenderingVersion;
-(int)sensorHDRCompanionIndex;
-(int)sifrBinningFactorOverrideForNondisruptiveSwitching;
-(int)stillImageGDCSourceMode;
-(int)swfrVersion;
-(int)temporalNoiseReductionMode;
-(int)verticalSensorBinningFactor;
-(struct ? )cinematicFramingOutputDimensions;
-(struct ? )cropDimensionsForFES;
-(struct ? )fesInputCropDimensions;
-(struct ? )geometricDistortionCorrectedNativeDimensions;
-(struct ? )nativeDimensions;
-(struct ? )postGDCCropDimensions;
-(struct ? )preGDCSensorCropDimensions;
-(struct ? )sensorCropDimensions;
-(struct ? )sourceCropAspectRatio;
-(struct ? )stillImageGDCInDCProcessorOutputCropDimensions;
-(struct CGRect )maxVisibleSensorRect;
-(struct CGSize )stabilizationOverscanFromSensorForFESCropDimensions:(struct ? )arg0 preferSIFRFormat:(BOOL)arg1 geometricDistortionCorrection:(BOOL)arg2 useFESCompanionIndex:(BOOL)arg3 ;
-(unsigned int)mediaType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif