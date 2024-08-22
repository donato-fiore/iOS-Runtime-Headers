// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMULTISTREAMCAMERASOURCENODECONFIGURATION_H
#define BWMULTISTREAMCAMERASOURCENODECONFIGURATION_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface BWMultiStreamCameraSourceNodeConfiguration : NSObject

@property (nonatomic) BOOL RGBIRStereoFusionEnabled; // ivar: _RGBIRStereoFusionEnabled
@property (nonatomic) unsigned int RGBIRStereoFusionMinDepthThresholdMM; // ivar: _RGBIRStereoFusionMinDepthThresholdMM
@property (nonatomic) float additionalVISOverscanWhenRecording; // ivar: _additionalVISOverscanWhenRecording
@property (nonatomic) float aeMaxGain; // ivar: _aeMaxGain
@property (nonatomic) BOOL backgroundBlurEnabled; // ivar: _backgroundBlurEnabled
@property (nonatomic) float bravoShiftMitigationMaxZoomFactor; // ivar: _bravoShiftMitigationMaxZoomFactor
@property (nonatomic) BOOL cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled; // ivar: _cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled
@property (nonatomic) BOOL cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled; // ivar: _cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled
@property (nonatomic) BOOL chromaNoiseReductionEnabled; // ivar: _chromaNoiseReductionEnabled
@property (nonatomic) unsigned int clientVideoFormat; // ivar: _clientVideoFormat
@property (nonatomic) int colorSpace; // ivar: _colorSpace
@property (nonatomic) BOOL contentAwareAWBEnabled; // ivar: _contentAwareAWBEnabled
@property (nonatomic) BOOL contentAwareEnhancementEnabled; // ivar: _contentAwareEnhancementEnabled
@property (nonatomic) ? cropAspectRatio; // ivar: _cropAspectRatio
@property (nonatomic) ? cropDimensionsWhenFESIsEnabled; // ivar: _cropDimensionsWhenFESIsEnabled
@property (nonatomic) BOOL deferStreamingOutputsEnable; // ivar: _deferStreamingOutputsEnable
@property (nonatomic) ? depthDimensions; // ivar: _depthDimensions
@property (nonatomic) BOOL depthOutputEnabled; // ivar: _depthOutputEnabled
@property (nonatomic) int depthType; // ivar: _depthType
@property (nonatomic) BOOL detectedFacesOnPreviewOutputEnabled; // ivar: _detectedFacesOnPreviewOutputEnabled
@property (nonatomic) BOOL detectedFacesOnVideoCaptureOutputEnabled; // ivar: _detectedFacesOnVideoCaptureOutputEnabled
@property (copy, nonatomic) NSDictionary *detectedFacesOutputConfiguration; // ivar: _detectedFacesOutputConfiguration
@property (nonatomic) BOOL detectedObjectsOutputEnabled; // ivar: _detectedObjectsOutputEnabled
@property (nonatomic) BOOL discardsDepthDataForStillImages; // ivar: _discardsDepthDataForStillImages
@property (nonatomic) BOOL discardsUnstableSphereVideoFrames; // ivar: _discardsUnstableSphereVideoFrames
@property (copy, nonatomic) NSSet *enabledDetectedObjectTypes; // ivar: _enabledDetectedObjectTypes
@property (nonatomic) BOOL faceTrackingEnabled; // ivar: _faceTrackingEnabled
@property (nonatomic) int fesBinningFactorHorizontal; // ivar: _fesBinningFactorHorizontal
@property (nonatomic) int firmwareStillImageOutputRetainedBufferCountOverride; // ivar: _firmwareStillImageOutputRetainedBufferCountOverride
@property (nonatomic) int firmwareTimeMachineBufferCapacity; // ivar: _firmwareTimeMachineBufferCapacity
@property (nonatomic) BOOL firmwareTimeMachineSIFREnabled; // ivar: _firmwareTimeMachineSIFREnabled
@property (nonatomic) BOOL focusBlurMapEnabled; // ivar: _focusBlurMapEnabled
@property (nonatomic) BOOL forceFirmwareStillImageOutputEnabled; // ivar: _forceFirmwareStillImageOutputEnabled
@property (nonatomic) unsigned int formatIndex; // ivar: _formatIndex
@property (nonatomic) BOOL geometricDistortionCorrectionOnStillImageOutputEnabled; // ivar: _geometricDistortionCorrectionOnStillImageOutputEnabled
@property (nonatomic) BOOL geometricDistortionCorrectionOnStreamingOutputsEnabled; // ivar: _geometricDistortionCorrectionOnStreamingOutputsEnabled
@property (nonatomic) BOOL geometricDistortionCorrectionSupported; // ivar: _geometricDistortionCorrectionSupported
@property (nonatomic) BOOL hardwareDepthFilteringPreferred; // ivar: _hardwareDepthFilteringPreferred
@property (nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream; // ivar: _highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream
@property (nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsSlave; // ivar: _highlightRecoveryEnabledWhenConfiguredAsSlave
@property (nonatomic) int horizontalSensorBinningFactor; // ivar: _horizontalSensorBinningFactor
@property (nonatomic) BOOL includeOverscanInStillImageFinalCropRect; // ivar: _includeOverscanInStillImageFinalCropRect
@property (nonatomic) BOOL includeOverscanOnStillImageOutput; // ivar: _includeOverscanOnStillImageOutput
@property (nonatomic) BOOL ispAPSDataEnabled; // ivar: _ispAPSDataEnabled
@property (nonatomic) int ispMultiBandNoiseReductionMode; // ivar: _ispMultiBandNoiseReductionMode
@property (nonatomic) BOOL keypointDetectionEnabled; // ivar: _keypointDetectionEnabled
@property (nonatomic) BOOL livePhotoCaptureEnabled; // ivar: _livePhotoCaptureEnabled
@property (nonatomic) BOOL lowLightVideoEnabled; // ivar: _lowLightVideoEnabled
@property (nonatomic) BOOL ltmLookUpTableMetadataEnabledForStills; // ivar: _ltmLookUpTableMetadataEnabledForStills
@property (nonatomic) BOOL ltmLookUpTableMetadataEnabledForStreaming; // ivar: _ltmLookUpTableMetadataEnabledForStreaming
@property (nonatomic) BOOL ltmThumbnailMetadataEnabledForStreaming; // ivar: _ltmThumbnailMetadataEnabledForStreaming
@property (nonatomic) BOOL lumaHistogramMetadataEnabled; // ivar: _lumaHistogramMetadataEnabled
@property (nonatomic) ? maxExposureDurationClientOverride; // ivar: _maxExposureDurationClientOverride
@property (nonatomic) ? maxExposureDurationFrameworkOverride; // ivar: _maxExposureDurationFrameworkOverride
@property (nonatomic) float maxFrameRate; // ivar: _maxFrameRate
@property (nonatomic) BOOL maximumGeometricDistortionCorrectionEnabled; // ivar: _maximumGeometricDistortionCorrectionEnabled
@property (nonatomic) int maximumNumberOfBracketedSIFRFrames; // ivar: _maximumNumberOfBracketedSIFRFrames
@property (nonatomic) float maximumSupportedFrameRate; // ivar: _maximumSupportedFrameRate
@property (nonatomic) float minFrameRate; // ivar: _minFrameRate
@property (nonatomic) float minimumSupportedFrameRate; // ivar: _minimumSupportedFrameRate
@property (nonatomic) int motionAttachmentsSource; // ivar: _motionAttachmentsSource
@property (nonatomic) BOOL objectDetectionStartupDeferred; // ivar: _objectDetectionStartupDeferred
@property (nonatomic) BOOL optimizeBandwidthForPreviewOutput; // ivar: _optimizeBandwidthForPreviewOutput
@property (nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled; // ivar: _originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled
@property (nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled; // ivar: _originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled
@property (nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled; // ivar: _originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled
@property (nonatomic) BOOL originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled; // ivar: _originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled
@property (nonatomic) float overscanForBravoShiftMitigation; // ivar: _overscanForBravoShiftMitigation
@property (nonatomic) BOOL pointCloudOutputEnabled; // ivar: _pointCloudOutputEnabled
@property (nonatomic) BOOL pointCloudOutputIsSupplementalPointCloudData; // ivar: _pointCloudOutputIsSupplementalPointCloudData
@property (nonatomic) ? postGDCCropDimensions; // ivar: _postGDCCropDimensions
@property (nonatomic) ? preferredPreviewDimensions; // ivar: _preferredPreviewDimensions
@property (nonatomic) int preferredPreviewMaxFrameRate; // ivar: _preferredPreviewMaxFrameRate
@property (nonatomic) BOOL previewOutputEnabled; // ivar: _previewOutputEnabled
@property (nonatomic) BOOL primaryScalerDecoupled; // ivar: _primaryScalerDecoupled
@property (copy, nonatomic) NSDictionary *qHDRSensorDefectivePixelInfo; // ivar: _qHDRSensorDefectivePixelInfo
@property (nonatomic) ? quadraCropDimensions; // ivar: _quadraCropDimensions
@property (nonatomic) BOOL quadraHighResStillImageCaptureEnabled; // ivar: _quadraHighResStillImageCaptureEnabled
@property (nonatomic) BOOL reflectsStillsOnStreamingOutputs; // ivar: _reflectsStillsOnStreamingOutputs
@property (nonatomic) BOOL roundingOfStillImageDimensionsToMultipleOfFourEnabled; // ivar: _roundingOfStillImageDimensionsToMultipleOfFourEnabled
@property (nonatomic) BOOL secondaryScalerIsNotAvailable; // ivar: _secondaryScalerIsNotAvailable
@property (nonatomic) ? sensorCropDimensions; // ivar: _sensorCropDimensions
@property (nonatomic) CGSize sensorOverscan; // ivar: _sensorOverscan
@property (nonatomic) BOOL stillImageGeometricDistortionCorrectionExpansionCoversOverscan; // ivar: _stillImageGeometricDistortionCorrectionExpansionCoversOverscan
@property (nonatomic) BOOL stillImageKeypointDetectionEnabled; // ivar: _stillImageKeypointDetectionEnabled
@property (nonatomic) BOOL stillImageLocalHistogramClippingDataMetadataEnabled; // ivar: _stillImageLocalHistogramClippingDataMetadataEnabled
@property (nonatomic) int stillImageMaxLossyCompressionLevel; // ivar: _stillImageMaxLossyCompressionLevel
@property (nonatomic) BOOL stillImageOutputEnabled; // ivar: _stillImageOutputEnabled
@property (nonatomic) int stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount; // ivar: _stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount
@property (nonatomic) BOOL stillImageOutputRequires10BitPixelFormat; // ivar: _stillImageOutputRequires10BitPixelFormat
@property (nonatomic) int stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount; // ivar: _stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount
@property (nonatomic) int stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount; // ivar: _stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount
@property (nonatomic) BOOL stillImageOutputSushiRawAttachmentOptionEnabled; // ivar: _stillImageOutputSushiRawAttachmentOptionEnabled
@property (nonatomic) BOOL stillImageOutputSushiRawAttachmentOptionSupportEnabled; // ivar: _stillImageOutputSushiRawAttachmentOptionSupportEnabled
@property (nonatomic) BOOL streamingForegroundSegmentationEnabled; // ivar: _streamingForegroundSegmentationEnabled
@property (nonatomic) BOOL streamingRequiredWhenConfiguredAsSlave; // ivar: _streamingRequiredWhenConfiguredAsSlave
@property (nonatomic) BOOL strictDepthModePreferred; // ivar: _strictDepthModePreferred
@property (nonatomic) float uiBaseZoomFactor; // ivar: _uiBaseZoomFactor
@property (nonatomic) BOOL usesFIFOFirmwareTimeMachine; // ivar: _usesFIFOFirmwareTimeMachine
@property (nonatomic) BOOL usesFirmwareStillImageOutput; // ivar: _usesFirmwareStillImageOutput
@property (nonatomic) int verticalSensorBinningFactor; // ivar: _verticalSensorBinningFactor
@property (nonatomic) ? videoCaptureDimensions; // ivar: _videoCaptureDimensions
@property (nonatomic) BOOL videoCaptureOutputEnabled; // ivar: _videoCaptureOutputEnabled
@property (nonatomic) BOOL videoHDRFusionEnabled; // ivar: _videoHDRFusionEnabled
@property (nonatomic) BOOL videoHDRImageStatisticsEnabled; // ivar: _videoHDRImageStatisticsEnabled
@property (nonatomic) BOOL videoStabilizationEnabled; // ivar: _videoStabilizationEnabled
@property (nonatomic) int videoStabilizationMethod; // ivar: _videoStabilizationMethod
@property (nonatomic) CGSize visOverscan; // ivar: _visOverscan
@property (retain, nonatomic) NSDictionary *visionDataConfiguration; // ivar: _visionDataConfiguration


-(id)init;
-(void)dealloc;


@end


#endif