// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECAPTUREANALYTICSPAYLOAD_H
#define BWSTILLIMAGECAPTUREANALYTICSPAYLOAD_H

@class NSDictionary, NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) float SNR; // ivar: _SNR
@property (nonatomic) float accelStandardDeviation; // ivar: _accelStandardDeviation
@property (nonatomic) int activeDeviceMask; // ivar: _activeDeviceMask
@property (nonatomic) BOOL afDriverShortOccurred; // ivar: _afDriverShortOccurred
@property (nonatomic) float afPowerConsumption; // ivar: _afPowerConsumption
@property (nonatomic) int alsLuxLevel; // ivar: _alsLuxLevel
@property (nonatomic) float alsRearLuxLevel; // ivar: _alsRearLuxLevel
@property (nonatomic) unsigned int apsMode; // ivar: _apsMode
@property (retain, nonatomic) NSDictionary *apsSubjectDistance; // ivar: _apsSubjectDistance
@property (nonatomic) unsigned int auxiliaryImagesSize; // ivar: _auxiliaryImagesSize
@property (nonatomic) BOOL binned; // ivar: _binned
@property (nonatomic) unsigned int bitDepth; // ivar: _bitDepth
@property (nonatomic) BOOL burst; // ivar: _burst
@property (nonatomic) float cameraConfidence; // ivar: _photoConfidence20
@property (nonatomic) unsigned int cameraPosture; // ivar: _cameraPosture
@property (nonatomic) float cameraProbability; // ivar: _photoProb15
@property (nonatomic) BOOL cameraSettingEnabled; // ivar: _photoEnabled28
@property (nonatomic) NSUInteger captureFlags; // ivar: _captureFlags
@property (nonatomic) int captureType; // ivar: _captureType
@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (nonatomic) int clientRequestedQualityPrioritization; // ivar: _clientRequestedQualityPrioritization
@property (retain, nonatomic) NSString *constituentImageDeliveryDeviceTypes; // ivar: _constituentImageDeliveryDeviceTypes
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferred; // ivar: _deferred
@property (nonatomic) BOOL deliverAsCameraAppSpecificEvent; // ivar: _deliverAsCameraAppSpecificEvent
@property (nonatomic) int deliveredDimensionHeight; // ivar: _deliveredDimensionHeight
@property (nonatomic) int deliveredDimensionWidth; // ivar: _deliveredDimensionWidth
@property (nonatomic) BOOL depthDataDeliveryEnabled; // ivar: _depthDataDeliveryEnabled
@property (nonatomic) BOOL depthDataFiltered; // ivar: _depthDataFiltered
@property (nonatomic) BOOL depthEnabled; // ivar: _depthEnabled
@property (nonatomic) unsigned int depthFormatDimensionHeight; // ivar: _depthFormatDimensionHeight
@property (nonatomic) unsigned int depthFormatDimensionWidth; // ivar: _depthFormatDimensionWidth
@property (nonatomic) unsigned int depthPixelFormat; // ivar: _depthPixelFormat
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition; // ivar: _devicePosition
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (nonatomic) unsigned int dngFileSize; // ivar: _dngFileSize
@property (nonatomic) float effectiveIntegrationTime; // ivar: _effectiveIntegrationTime
@property (nonatomic) float exposureDuration; // ivar: _exposureDuration
@property (nonatomic) BOOL fastCapturePrioritizationEnabled; // ivar: _fastCapturePrioritizationEnabled
@property (nonatomic) float flashBrightnessRatio; // ivar: _flashBrightnessRatio
@property (retain, nonatomic) NSDictionary *focusingMethod; // ivar: _focusingMethod
@property (nonatomic) int formatDimensionHeight; // ivar: _formatDimensionHeight
@property (nonatomic) int formatDimensionWidth; // ivar: _formatDimensionWidth
@property (nonatomic) int formatMaxFrameRate; // ivar: _formatMaxFrameRate
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled; // ivar: _geometricDistortionCorrectionEnabled
@property (retain, nonatomic) NSString *geometricDistortionCorrectionSource; // ivar: _geometricDistortionCorrectionSource
@property (nonatomic) int greenGhostMitigationBrightLightIsBrightScene; // ivar: _greenGhostMitigationBrightLightIsBrightScene
@property (nonatomic) int greenGhostMitigationBrightLightROIIsComputed; // ivar: _greenGhostMitigationBrightLightROIIsComputed
@property (nonatomic) int greenGhostMitigationLowLightExceedsMaxMaskAverage; // ivar: _greenGhostMitigationLowLightExceedsMaxMaskAverage
@property (nonatomic) float greenGhostMitigationLowLightMaskAverage; // ivar: _greenGhostMitigationLowLightMaskAverage
@property (nonatomic) int greenGhostMitigationLowLightSkipRepair; // ivar: _greenGhostMitigationLowLightSkipRepair
@property (nonatomic) int greenGhostMitigationLowLightTripodMode; // ivar: _greenGhostMitigationLowLightTripodMode
@property (nonatomic) float gyroStandardDeviation; // ivar: _gyroStandardDeviation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highQualityPhotoWithVideoFormatSupported; // ivar: _highQualityPhotoWithVideoFormatSupported
@property (nonatomic) int imageExifOrientation; // ivar: _imageExifOrientation
@property (nonatomic) int intelligentDistortionCorrectionCorrectionType; // ivar: _intelligentDistortionCorrectionCorrectionType
@property (nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode; // ivar: _intelligentDistortionCorrectionGainMapProcessingStatusCode
@property (nonatomic) int intelligentDistortionCorrectionStatusCode; // ivar: _intelligentDistortionCorrectionStatusCode
@property (nonatomic) float iso; // ivar: _iso
@property (nonatomic) int ispMotionHighPassFilterConvergenceFlags; // ivar: _ispMotionHighPassFilterConvergenceFlags
@property (nonatomic) float largestFaceHeight; // ivar: _largestFaceHeight
@property (retain, nonatomic) NSDictionary *leaderFollowerAutoFocusData; // ivar: _leaderFollowerAutoFocusData
@property (nonatomic) float lensPosition; // ivar: _lensPosition
@property (nonatomic) BOOL livePhotoEnabled; // ivar: _livePhotoEnabled
@property (nonatomic) int luxLevel; // ivar: _luxLevel
@property (nonatomic) float maxAFTrackingError; // ivar: _maxAFTrackingError
@property (nonatomic) float maxSphereTrackingError; // ivar: _maxSphereTrackingError
@property (nonatomic) float minDistanceFromSphereEndStop; // ivar: _minDistanceFromSphereEndStop
@property (nonatomic) float normalizedSNR; // ivar: _normalizedSNR
@property (nonatomic) int numberOfFaces; // ivar: _numberOfFaces
@property (nonatomic) int numberOfFacesAtCenter; // ivar: _numberOfFacesAtCenter
@property (nonatomic) int numberOfFacesAtEdge; // ivar: _numberOfFacesAtEdge
@property (nonatomic) int numberOfFacesWithVisionFaceDetection; // ivar: _numberOfFacesWithVisionFaceDetection
@property (retain, nonatomic) NSDictionary *oisRecenteringLoggingData; // ivar: _oisRecenteringLoggingData
@property (nonatomic) unsigned int outputFileType; // ivar: _outputFileType
@property (nonatomic) unsigned int photoFileSize; // ivar: _photoFileSize
@property (nonatomic) BOOL photoFormat; // ivar: _photoFormat
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (retain, nonatomic) NSString *portType; // ivar: _portType
@property (retain, nonatomic) NSString *portraitEffectStatus; // ivar: _portraitEffectStatus
@property (nonatomic) BOOL portraitRequested; // ivar: _portraitRequested
@property (retain, nonatomic) NSDictionary *practicalFocalLength; // ivar: _practicalFocalLength
@property (nonatomic) int processingDuration; // ivar: _processingDuration
@property (nonatomic) unsigned int processingFlags; // ivar: _processingFlags
@property (nonatomic) int qualityPrioritization; // ivar: _qualityPrioritization
@property (nonatomic) int redEyeReductionStatus; // ivar: _redEyeReductionStatus
@property (nonatomic) NSUInteger sceneFlags; // ivar: _sceneFlags
@property (nonatomic) int semanticSceneType; // ivar: _semanticSceneType
@property (nonatomic) BOOL semanticStyleRenderingSupported; // ivar: _semanticStyleRenderingSupported
@property (nonatomic) float semanticStyleToneBias; // ivar: _semanticStyleToneBias
@property (nonatomic) float semanticStyleWarmthBias; // ivar: _semanticStyleWarmthBias
@property (nonatomic) int sensorTemperature; // ivar: _sensorTemperature
@property (nonatomic) int shutterLag; // ivar: _shutterLag
@property (nonatomic) float smallestFaceHeight; // ivar: _smallestFaceHeight
@property (retain, nonatomic) NSString *sphereMode; // ivar: _sphereMode
@property (nonatomic) float spherePowerConsumption; // ivar: _spherePowerConsumption
@property (nonatomic) float stdAFTrackingError; // ivar: _stdAFTrackingError
@property (nonatomic) float stdSphereTrackingError; // ivar: _stdSphereTrackingError
@property (nonatomic) unsigned int stfStillAnalyticsVersion; // ivar: _stfStillAnalyticsVersion
@property (nonatomic) BOOL stfStillApplied; // ivar: _stfStillApplied
@property (nonatomic) int stfStillCorrectionStrength; // ivar: _stfStillCorrectionStrength
@property (nonatomic) BOOL stfStillSupported; // ivar: _stfStillSupported
@property (nonatomic) int streamingTime; // ivar: _streamingTime
@property (readonly) Class superclass;
@property (nonatomic) unsigned int swfrAnalyticsVersion; // ivar: _swfrAnalyticsVersion
@property (nonatomic) BOOL swfrApplied; // ivar: _swfrApplied
@property (nonatomic) float swfrBackgroundCorrectionDirection; // ivar: _swfrBackgroundCorrectionDirection
@property (nonatomic) int swfrBackgroundCorrectionStrength; // ivar: _swfrBackgroundCorrectionStrength
@property (nonatomic) float swfrForegroundCorrectionDirection; // ivar: _swfrForegroundCorrectionDirection
@property (nonatomic) int swfrForegroundCorrectionStrength; // ivar: _swfrForegroundCorrectionStrength
@property (nonatomic) unsigned int thumbnailImageSize; // ivar: _thumbnailImageSize
@property (nonatomic) BOOL timeLapse; // ivar: _timeLapse
@property (retain, nonatomic) NSDictionary *timeOfFlightAssistedAutoFocusEstimatorData; // ivar: _timeOfFlightAssistedAutoFocusEstimatorData
@property (retain, nonatomic) NSDictionary *timeOfFlightFlickerDetectionData; // ivar: _timeOfFlightFlickerDetectionData
@property (nonatomic) unsigned int timeSinceLastCaptureInSession; // ivar: _timeSinceLastCaptureInSession
@property (nonatomic) float uiZoom; // ivar: _uiZoom
@property (nonatomic) float zoom; // ivar: _zoom


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif