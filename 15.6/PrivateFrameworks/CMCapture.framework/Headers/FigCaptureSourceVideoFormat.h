// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESOURCEVIDEOFORMAT_H
#define FIGCAPTURESOURCEVIDEOFORMAT_H

@class NSArray;


#import "FigCaptureSourceFormat.h"
#import "FigCaptureSourceCompanionFormat.h"
#import "FigCaptureSourceVideoFormat.h"

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {
    NSArray *_frontEndScalerCompanionFormats;
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_fullBinSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;
    FigCaptureSourceVideoFormat *_cinematicFramingFormat;
    FigCaptureSourceVideoFormat *_geometricDistortionCorrectionFormat;
    NSArray *_supportedDepthDataFormats;
    BOOL _isStreamingDisparitySupported;
    BOOL _isStreamingDepthSupported;
    BOOL _isStillImageDisparitySupported;
    BOOL _isStillImageDepthSupported;
}


@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly, getter=isSIFRSupported) BOOL SIFRSupported;
@property (readonly) int autoFocusSystem;
@property (readonly, getter=isBackgroundBlurSupported) BOOL backgroundBlurSupported;
@property (readonly) int baseSensorPowerConsumption;
@property (readonly, getter=isBinned) BOOL binned;
@property (readonly, getter=isCameraCalibrationDataDeliverySupported) BOOL cameraCalibrationDataDeliverySupported;
@property (readonly) FigCaptureSourceVideoFormat *cinematicFramingFormat;
@property (readonly, getter=isCinematicFramingSupported) BOOL cinematicFramingSupported;
@property (readonly) float cinematicStabilizationExtendedLookAheadDuration;
@property (readonly, getter=isCinematicVideoSupported) BOOL cinematicVideoSupported;
@property (readonly) BOOL configureForDigitalFlashSupport;
@property (readonly) BOOL configureForSpatialOverCaptureSupport;
@property (readonly) BOOL configureForStillImageStabilizationSupport;
@property (readonly, getter=isDeepFusionSupported) BOOL deepFusionSupported;
@property (readonly) float defaultPortraitLightingEffectStrength;
@property (readonly) float defaultSimulatedAperture;
@property (readonly, getter=isDeferredPhotoProcessingSupported) BOOL deferredPhotoProcessingSupported;
@property (readonly) NSArray *digitalFlashDetectedObjectTypes;
@property (readonly, getter=isDigitalFlashSupported) BOOL digitalFlashSupported;
@property (readonly) ? dimensions;
@property (readonly) BOOL distortionCompensationSupported;
@property (readonly) float fieldOfView;
@property (readonly) int formatIndex;
@property (readonly) float geometricDistortionCorrectedFieldOfView;
@property (readonly) ? geometricDistortionCorrectedNativeDimensions;
@property (readonly) FigCaptureSourceVideoFormat *geometricDistortionCorrectionFormat;
@property (readonly, getter=isGlobalToneMappingSupported) BOOL globalToneMappingSupported;
@property (readonly, getter=isGNRHDRSupported) BOOL gnrHDRSupported;
@property (readonly) float hardwareCost;
@property (readonly) BOOL hasSensorHDRCompanionIndex;
@property (readonly, getter=isHDROriginalImageDeliverySupported) BOOL hdrOriginalImageDeliverySupported;
@property (readonly, getter=isHDRSupported) BOOL hdrSupported;
@property (readonly, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (readonly, getter=isHighProfileH264Supported) BOOL highProfileH264Supported;
@property (readonly, getter=isHighResPhotoFormat) BOOL highResPhotoFormat;
@property (readonly) ? highResStillImageDimensions;
@property (readonly, getter=isHighResStillImageSupported) BOOL highResStillImageSupported;
@property (readonly, nonatomic) BOOL intelligentDistortionCorrectionSupported;
@property (readonly) unsigned int internalDemosaicedRawPixelFormat;
@property (readonly, getter=isIrisSupported) BOOL irisSupported;
@property (readonly, getter=isIrisVideoStabilizationSupported) BOOL irisVideoStabilizationSupported;
@property (readonly) BOOL is10bitVideoFormat;
@property (readonly) BOOL is422VideoFormat;
@property (readonly, getter=isISPMultiBandNoiseReductionSupported) BOOL ispMultiBandNoiseReductionSupported;
@property (readonly) int ispPowerConsumption;
@property (readonly, getter=isLearnedNRSupported) BOOL learnedNRSupported;
@property (readonly, getter=isLowLightVideoCaptureSupported) BOOL lowLightVideoCaptureSupported;
@property (readonly) ? maxExposureDuration;
@property (readonly) float maxISO;
@property (readonly) float maxPortraitLightingEffectStrength;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float maxZoomFactor;
@property (readonly) float maxZoomFactorForDepthDataDelivery;
@property (readonly) ? minExposureDuration;
@property (readonly) float minISO;
@property (readonly) float minPortraitLightingEffectStrength;
@property (readonly) float minSimulatedAperture;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float minZoomFactorForDepthDataDelivery;
@property (readonly, getter=isMomentCaptureMovieRecordingSupported) BOOL momentCaptureMovieRecordingSupported;
@property (readonly, getter=isMultiCamSupported) BOOL multiCamSupported;
@property (readonly, getter=isNonDestructiveCropSupported) BOOL nonDestructiveCropSupported;
@property (readonly, getter=isPhotoFormat) BOOL photoFormat;
@property (readonly) BOOL prefersSensorHDREnabled;
@property (readonly) ? previewDimensions;
@property (readonly, getter=isQuadraHighResStillImageSupported) BOOL quadraHighResStillImageSupported;
@property (readonly) int rawBitDepth;
@property (readonly, getter=isRedEyeReductionSupported) BOOL redEyeReductionSupported;
@property (readonly, getter=isResponsiveShutterSupported) BOOL responsiveShutterSupported;
@property (readonly, getter=isSecondaryScalerUnavailable) BOOL secondaryScalerUnavailable;
@property (readonly, getter=isSemanticStyleRenderingSupported) BOOL semanticStyleRenderingSupported;
@property (readonly) ? sensorDimensions;
@property (readonly, getter=isSIFRStillImageCaptureWithDepthDataDisabled) BOOL sifrStillImageCaptureWithDepthDataDisabled;
@property (readonly) float spatialOverCapturePercentage;
@property (readonly, getter=isSpatialOverCaptureSupported) BOOL spatialOverCaptureSupported;
@property (readonly) float stabilizationOverscanPercentageOverrideForCinematic;
@property (readonly) float stabilizationOverscanPercentageOverrideForStandard;
@property (readonly) int stabilizationTypeForTimelapse;
@property (readonly) int stabilizationTypeOverrideForCinematic;
@property (readonly) int stabilizationTypeOverrideForStandard;
@property (readonly, getter=isStagePreviewRenderingSupported) BOOL stagePreviewRenderingSupported;
@property (readonly, getter=isStereoFusionSupported) BOOL stereoFusionSupported;
@property (readonly, getter=isStillImageDepthSupported) BOOL stillImageDepthSupported;
@property (readonly, getter=isStillImageDisparitySupported) BOOL stillImageDisparitySupported;
@property (readonly) ? stillImageGDCInDCProcessorOutputCropDimensions;
@property (readonly, getter=isStillImageISPMultiBandNoiseReductionSupported) BOOL stillImageISPMultiBandNoiseReductionSupported;
@property (readonly, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (readonly, getter=isStreamingDepthSupported) BOOL streamingDepthSupported;
@property (readonly, getter=isStreamingDisparitySupported) BOOL streamingDisparitySupported;
@property (readonly, getter=isStudioAndContourPreviewRenderingSupported) BOOL studioAndContourPreviewRenderingSupported;
@property (readonly, getter=isSupplementalTimeOfFlightCameraSupported) BOOL supplementalTimeOfFlightCameraSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) unsigned int supportedDemosaicedRawPixelFormat;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly, getter=isVariableFrameRateVideoCaptureSupported) BOOL variableFrameRateVideoCaptureSupported;
@property (readonly) int variableSensorPowerConsumption;
@property (readonly, getter=isVideoHDRFusionSupported) BOOL videoHDRFusionSupported;
@property (readonly, getter=isVideoSTFMetadataEnabled) BOOL videoSTFMetadataEnabled;
@property (readonly, getter=isVideoSTFSupported) BOOL videoSTFSupported;
@property (readonly, getter=isVisionDataDeliverySupported) BOOL visionDataDeliverySupported;
@property (readonly, getter=isWideAsStatsMasterEnabled) BOOL wideAsStatsMasterEnabled;
@property (readonly, getter=isWideColorSupported) BOOL wideColorSupported;
@property (readonly) BOOL zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property (readonly, getter=isZeroShutterLagSupported) BOOL zeroShutterLagSupported;
@property (readonly, getter=isZoomDynamicSensorCropSupported) BOOL zoomDynamicSensorCropSupported;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (readonly, getter=isZoomSupported) BOOL zoomSupported;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)capturesStillsFromVideoStream;
-(BOOL)isCaptureTimePhotoCurationSupported;
-(BOOL)isCompatibleWithInfraredFormat:(id)arg0 ;
-(BOOL)isContentAwareAWBSupported;
-(BOOL)isContentAwareEnhancementSupported;
-(BOOL)isGainMapSupported;
-(BOOL)isStabilizationModeSupported:(int)arg0 ;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(BOOL)isValidDerivedSourceFormatForUnderlyingFormat:(id)arg0 ;
-(BOOL)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;
-(BOOL)ispChromaNoiseReductionEnabled;
-(BOOL)stillImageGeometricDistortionCorrectionInDCProcessorSupported;
-(BOOL)sushiRawBlackBorderingEnabled;
-(BOOL)sushiRawSupported;
-(BOOL)temporalNoiseReductionBand0Disabled;
-(BOOL)temporalNoiseReductionRawEnabled;
-(BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
-(float)aeMaxGain;
-(float)defaultMaxFrameRateForSessionPreset:(id)arg0 ;
-(float)defaultMinFrameRateForSessionPreset:(id)arg0 ;
-(float)depthDataAEMaxGain;
-(float)depthDataMaxIntegrationTimeOverride;
-(float)lowLightVideoAEMaxGain;
-(id)copyWithNewPixelFormat:(unsigned int)arg0 ;
-(id)depthCompanionFormat;
-(id)frontEndScalerCompanionFormats;
-(id)fullBinSIFRCompanionFormat;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)nonSIFRCompanionFormat;
-(id)rawLensShadingCorrection;
-(int)configureForGreenGhostMitigationVersion;
-(int)dcProcessorVersion;
-(int)deepZoomVersion;
-(int)fesBinningFactorHorizontal;
-(int)greenGhostMitigationVersion;
-(int)horizontalSensorBinningFactor;
-(int)maxIntegrationTimeOverride;
-(int)previewImageQueueSyncStrategy;
-(int)redEyeReductionVersion;
-(int)semanticDevelopmentVersion;
-(int)semanticRenderingVersion;
-(int)sensorHDRCompanionIndex;
-(int)stillImageNoiseReductionAndStabilizationScheme;
-(int)temporalNoiseReductionMode;
-(int)verticalSensorBinningFactor;
-(struct ? )cinematicFramingOutputDimensions;
-(struct ? )cropDimensionsForFES;
-(struct ? )fesInputCropDimensions;
-(struct ? )nativeDimensions;
-(struct ? )postGDCCropDimensions;
-(struct ? )preGDCSensorCropDimensions;
-(struct ? )sensorCropDimensions;
-(struct ? )sourceCropAspectRatio;
-(struct CGRect )maxVisibleSensorRect;
-(struct CGSize )stabilizationOverscanFromSensorForFESCropDimensions:(struct ? )arg0 preferSIFRFormat:(BOOL)arg1 geometricDistortionCorrection:(BOOL)arg2 useFESCompanionIndex:(BOOL)arg3 ;
-(struct opaqueCMFormatDescription *)formatDescription;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif