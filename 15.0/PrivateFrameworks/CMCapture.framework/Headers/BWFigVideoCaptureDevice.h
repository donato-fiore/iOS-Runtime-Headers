// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFIGVIDEOCAPTUREDEVICE_H
#define BWFIGVIDEOCAPTUREDEVICE_H

@class NSMutableDictionary, NSDictionary, NSArray, NSSet, NSMutableArray, NSString, NSMutableSet;
@protocol BWZoomCompletionDelegate, BWSupplementalPointCloudCaptureDeviceDelegate, BWPortraitSceneMonitor, OS_dispatch_queue, BWFigVideoCaptureDeviceZoomFactorChangedDelegate, BWAdaptiveBracketingController, BWPreviewTimeMachineProcessor;

#import <Foundation/Foundation.h>

#import "BWFigCaptureDeviceVendor.h"
#import "BWFigVideoCaptureStream.h"
#import "BWStreamStartStopSynchronizer.h"
#import "BWBravoStreamSelector.h"
#import "BWRamp.h"
#import "BWImageControlModeTransitionMonitor.h"
#import "BWFrameStatisticsByPortType.h"
#import "BWMetadataTimeMachine.h"
#import "BWMovingWindowStats.h"
#import "FigWeakReference.h"
#import "BWStillImageCaptureSettings.h"
#import "FigStateMachine.h"
#import "BWAmbientLightSensor.h"
#import "BWDeviceMotionActivityDetector.h"
#import "BWInferenceResult.h"
#import "BWStats.h"
#import "BWMemoryPool.h"
#import "BWVariableFrameRateSelector.h"
#import "BWFigCaptureDevice.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWFigVideoCaptureSynchronizedStreamsGroup.h"
#import "BWZoomCommandHandler.h"

@interface BWFigVideoCaptureDevice : NSObject <BWZoomCompletionDelegate, BWSupplementalPointCloudCaptureDeviceDelegate>

 {
    BWFigCaptureDeviceVendor *_deviceVendor;
    ? _clientAuditToken;
    int _clientPID;
    NSMutableDictionary *_cameraInfoByPortType;
    NSDictionary *_supportedProperties;
    unsigned int _activeDeviceMask;
    unsigned int _timeOfFlightCameraUseCaseMask;
    unsigned int _timeOfFlightCameraProjectorModeMask;
    int _deviceType;
    BOOL _multiCamEnabled;
    NSDictionary *_attributes;
    BWFigVideoCaptureStream *_lastRecommendedMasterCaptureStream;
    BWStreamStartStopSynchronizer *_synchronizedStreamsStartStopSynchronizer;
    BOOL _superWideCaptureStreamAsStatsMasterPreferred;
    BOOL _increaseSlaveFrameRateWhenWaitingForExposureFocusStability;
    BOOL _increaseSlaveFrameRateWhenWaitingForExposureFocusStabilityOnlyWhenWideIsMaster;
    ? _sphereShiftState;
    int _sphereShiftStateLastUpdateCaptureID;
    os_unfair_lock_s _sphereShiftStateLock;
    BWFigVideoCaptureStream *_currentMasterCaptureStream;
    os_unfair_lock_s _currentMasterCaptureStreamLock;
    os_unfair_lock_s _synchronizedStreamsSwitchOverLock;
    BWBravoStreamSelector *_bravoStreamSelector;
    BOOL _bravoStreamSelectionInformWhenFocusScanCompletes;
    ? _bravoStreamSelectionConfiguration;
    ? _bravoStreamSelectionConfigurationForRecording;
    BOOL _bravoStreamSelectionConfigurationForRecordingEnabled;
    BOOL _synchronizedStreamsSwitchOverInProgress;
    BOOL _slaveSwitchOverInProgressPreventingStillCapture;
    float _synchronizedStreamsStereoFusionLowerBoundZoomFactor;
    float _synchronizedStreamsStereoFusionUpperBoundZoomFactor;
    int _synchronizedStreamsNominalSlaveFrameRate;
    int _synchronizedStreamsNominalMasterToSlaveFrameRateRatio;
    int _synchronizedStreamsElevatedSlaveFrameRate;
    int _synchronizedStreamsElevatedMasterToSlaveFrameRateRatio;
    os_unfair_lock_s _parallaxMitigationStrengthLock;
    float _parallaxMitigationStrength;
    int _parallaxMitigationRampDuration;
    int _parallaxMitigationRampShape;
    BWRamp *_parallaxMitigationRamp;
    BWFigVideoCaptureStream *_parallaxMitigationTargetCaptureStream;
    BOOL _macroFocusDetectionEnabled;
    float _macroFocusDistanceLowerThreshold;
    float _macroFocusDistanceUpperThreshold;
    BOOL _macroFocusDetected;
    BOOL _facesDetectedSinceStreamStart;
    BOOL _depthDataDeliveryEnabled;
    float _depthMaxFrameRate;
    os_unfair_lock_s _sdofLock;
    int _sdofEffectStatus;
    int _sdofStagePreviewStatus;
    BOOL _sdofSceneMonitoringEnabled;
    id<BWPortraitSceneMonitor> *_portraitSceneMonitor;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_focusAndExposureUpdateQueue;
    *OpaqueFigFlatDictionaryKeySpec _metadataKeySpec;
    BOOL _attachMetadataFlatDictionary;
    *unk _createAutofocusSampleBufferProcessorFunction;
    NSObject<OS_dispatch_queue> *_autofocusProcessorQueue;
    NSMutableDictionary *_autofocusCachedPropertiesDictionary;
    *OpaqueFigSimpleMutex _autofocusStatusMutex;
    BOOL _allowAEStableNotifications;
    BOOL _aeStable;
    ? _aeRequestTime;
    int _aeRequestCount;
    int _aeFrameWaitCount;
    BOOL _allowAWBStableNotifications;
    BOOL _awbStable;
    CGRect _cachedFocusRect;
    CGRect _cachedExposureRect;
    os_unfair_lock_s _nonDestructiveCropSizeLock;
    CGSize _nonDestructiveCropSize;
    BOOL _useAutoImageControlMode;
    int _autoImageControlMode;
    int _currentImageControlMode;
    BOOL _autoImageControlModeWantsSphereVideoEnabled;
    CGFloat _transitionMonitorCoarseFocusTimeoutForVideoRecording;
    os_unfair_lock_s _autoImageControlModeCompletionLock;
    BWImageControlModeTransitionMonitor *_autoImageControlModeTransitionMonitor;
    id *_autoImageControlModeCompletionHandler;
    int _apsMode;
    BOOL _collectAPSStatistics;
    BOOL _hasAPSStatistics;
    BWAPSStatistics _apsStatistics;
    int _numAPSStatisticsSamples;
    os_unfair_lock_s _frameStatisticsLock;
    BWFrameStatisticsByPortType *_currentFrameStatisticsByPortType;
    BWFrameStatisticsByPortType *_tempFrameStatisticsByPortType;
    BOOL _stillImageCaptureNowAfterAutofocusTimeoutSupported;
    int _stillImageContrastBasedAutofocusTimeout;
    int _stillImagePhaseDetectionAutofocusTimeout;
    BOOL _hasNightMode;
    float _nightModeMinGainThreshold;
    int _unifiedBracketingMode;
    BOOL _sifrStillImageCaptureEnabledIfAvailable;
    BOOL _ubSIFREnabled;
    BOOL _ubHDRWithBiasEnabled;
    NSDictionary *_ubCaptureParametersByPortType;
    BWMetadataTimeMachine *_ubZeroShutterLagMetadataTimeMachine;
    BOOL _hasDeepFusion;
    BOOL _deepFusionEnabled;
    BOOL _learnedNREnabled;
    BOOL _streamingImageIntentNeedsUpdate;
    int _currentStreamingImageIntent;
    int _nextStreamingImageIntent;
    float _streamingImageIntentDefaultMinimumFrameRate;
    NSMutableDictionary *_streamingImageIntentDefaultAEMaxGainByPortType;
    NSMutableDictionary *_streamingImageIntentDefaultMaxExposureDurationFrameworkOverrideByPortType;
    BOOL _updateStreamingImageIntentWhenMasterStreamChanges;
    float _timeLapseCaptureRate;
    int _timeLapseStationaryCount;
    int _timeLapseStationaryHysteresisLag;
    BOOL _globalToneMappingEnabled;
    BOOL _hasDigitalFlash;
    BOOL _digitalFlashEnabled;
    BOOL _digitalFlashMetadataEnabled;
    NSArray *_digitalFlashDetectedObjectTypes;
    NSSet *_digitalFlashSupportedPortTypes;
    int _streamingDigitalFlashMode;
    BOOL _digitalFlashUseWideForSceneMonitoring;
    int _digitalFlashModeForSceneMonitoring;
    int _digitalFlashStatus;
    CGFloat _lastDigitalFlashStatusEIT;
    float _lastDigitalFlashRecommendRegularFlashSNR;
    CGFloat _lastDigitalFlashRecommendRegularFlashBacklitRelativeAEDifference;
    BWMovingWindowStats *_digitalFlashRecommendRegularFlashBacklitRelativeAEDifferenceSimpleMovingAverage;
    CGFloat _digitalFlashExposureTimes;
    NSMutableDictionary *_digitalFlashExposureTimesForSceneMonitoringByPortType;
    BOOL _digitalFlashLockingAE;
    BOOL _digitalFlashLockingAF;
    BOOL _digitalFlashCaptureInProgress;
    int _digitalFlashCaptureSupplementalPointCloudCaptureDeviceFrameRateMaxSkippedFrames;
    FigWeakReference *_supplementalPointCloudCaptureDeviceDelegate;
    FigWeakReference *_supplementalPointCloudCaptureDevice;
    float _supplementalPointCloudCaptureDeviceStreamingMinimumFrameRate;
    float _supplementalPointCloudCaptureDeviceCaptureMinimumFrameRate;
    os_unfair_lock_s _supplementalPointCloudCaptureDeviceLock;
    float _supplementalPointCloudCaptureDeviceCurrentFrameRate;
    NSMutableDictionary *_autoFlashNormalizedSNRThresholdByPortType;
    float _autoTorchNormalizedSNRThreshold;
    float _lastFlashSceneSNR;
    BWMovingWindowStats *_autoFlashSNRSimpleMovingAverage;
    CGFloat _stillImageStabilizationIntegrationTimeThreshold;
    CGFloat _synchronizedStreamsStillImageStabilizationTeleIntegrationTimeThreshold;
    CGFloat _synchronizedStreamsOISSISStereoFusionTeleMinIntegrationTime;
    float _synchronizedStreamsOISSISStereoFusionTeleMinGain;
    *OpaqueFigSimpleMutex _torchLock;
    BOOL _autoTorchEnabled;
    BOOL _autoTorchStatsCheckedForVideoRecording;
    ? _autoTorchRampedUpTime;
    BOOL _torchActive;
    float _torchLevel;
    float _maxTorchLevel;
    int _flashModeForSceneMonitoring;
    int _hdrModeForSceneMonitoring;
    int _qualityPrioritizationForSceneMonitoring;
    BOOL _flashScene;
    BOOL _hdrScene;
    BOOL _sisScene;
    BOOL _forcePostingForSceneDetectionNotifications;
    BOOL _stillImageCaptureEnabled;
    float _quadraLowLightResampledNormalizedSNRThreshold;
    int _numberOfCompletedStillCaptures;
    int _skippedFramesCountForStillImageCaptureRetry;
    int _maxSkippedFramesForStillImageCaptureRetry;
    os_unfair_lock_s _stillImageCaptureStateLock;
    BWStillImageCaptureSettings *_stillImageCaptureSettings;
    NSDictionary *_stillImageCaptureNowOptions;
    NSDictionary *_stillImageCaptureStreamProperties;
    BOOL _stillImageCaptureNowUsingSyncGroup;
    BOOL _retryCaptureStillImageNow;
    FigStateMachine *_stillImageCaptureStateMachine;
    id *_prepareToCaptureStillImageNowCompletionHandler;
    id *_pendingPrepareToCaptureStillImageNowCompletionHandler;
    ? _lastStillImageCaptureEndPTS;
    BWAmbientLightSensor *_ambientLightSensor;
    int _currentManualFocusCompletedID;
    int _currentManualExposureCompletedID;
    int _currentBiasedExposureCompletedID;
    int _currentManualWhiteBalanceCompletedID;
    NSMutableDictionary *_observedProperties;
    *OpaqueFigSimpleMutex _manualPropertyMutex;
    float _lensPosition;
    ? _exposureDuration;
    float _ISO;
    float _exposureTargetBias;
    float _exposureTargetOffset;
    ? _deviceWhiteBalanceGains;
    ? _grayWorldWhiteBalanceGains;
    NSObject<OS_dispatch_queue> *_whiteBalanceGainsQueue;
    NSMutableDictionary *_whiteBalanceGains;
    NSMutableArray *_whiteBalanceGainsOrderedKeys;
    int _whiteBalanceModeForExif;
    NSObject<OS_dispatch_queue> *_zoomFactorUpdateQueue;
    float _maxISPZoomFactor;
    float _newISPZoomFactor;
    float _lastRequestedZoomFactor;
    float _newTotalZoomFactor;
    os_unfair_lock_s _zoomFactorLock;
    float _rampDefaultBravoSnapDistanceFraction;
    int _ispZoomLatency;
    BOOL _feature1Enabled;
    NSObject<OS_dispatch_queue> *_feature1ProcessorQueue;
    *OpaqueFigSampleBufferProcessor _feature1Processor;
    BWDeviceMotionActivityDetector *_deviceMotionActivityDetector;
    BOOL _stationary;
    ? _ptsOfLastFrameForStationaryCheck;
    float _minimumTimeBetweenStationaryChecks;
    BOOL _stationaryChecksWhileStillImageCaptureInProgressEnabled;
    id<BWFigVideoCaptureDeviceZoomFactorChangedDelegate> *_zoomFactorChangedDelegate;
    NSString *_zoomFactorChangedDelegatePortType;
    BOOL _smartCameraFreezeMotionEnabled;
    BOOL _smartCameraFaceSceneEnabled;
    float _smartCameraFaceSceneRecentlyDetectedThreshold;
    BWSmartCameraScene _smartCameraPetScene;
    BWSmartCameraScene _smartCameraBabyScene;
    BOOL _smartCameraLowLightAutoHDREnabled;
    BWSmartCameraScene _smartCameraBrightStageScene;
    BWSmartCameraScene _smartCameraSunsetSunriseScene;
    int _currentSemanticStyleSceneType;
    int _currentExifOrientation;
    os_unfair_lock_s _currentExifOrientationLock;
    ? _smartCameraVersion;
    BWInferenceResult *_mostRecentSmartCameraResult;
    BWInferenceResult *_currentStillSmartCameraResult;
    BOOL _zeroShutterLagEnabled;
    ? _zeroShutterLagEarliestAllowedPTS;
    float _zeroShutterLagStillImageStabilizationGainThreshold;
    float _zeroShutterLagSynchronizedStreamsStillImageStabilizationTeleGainThreshold;
    NSArray *_previewMetadataForTimeMachinePTSRange;
    NSMutableSet *_shouldCheckAPSOffsetEstimatorByPortType;
    NSMutableSet *_shouldCheckCriticalFocusErrorByPortType;
    NSMutableSet *_criticalFocusErrorOccurredByPortType;
    NSMutableSet *_portTypesToCheckForDegradedAutoFocus;
    NSMutableDictionary *_degradedAutoFocusStatusByPortTypes;
    NSMutableDictionary *_sphereJitterDetectionAttemptsByPortType;
    NSMutableDictionary *_sphereJitterSuccessfulDetectionsByPortType;
    NSInteger _streamingStartTime;
    unsigned int _numberOfPhotoCaptures;
    unsigned int _numberOfBurstPhotoCaptures;
    unsigned int _numberOfBalancedPhotoCaptures;
    int _streamingStartCameraPosture;
    int _streamingStartExifOrientation;
    unsigned int _timeToFirstPhotoCapture;
    NSInteger _previousPhotoCaptureTime;
    unsigned int _minTimeSinceLastPhotoCapture;
    unsigned int _maxTimeSinceLastPhotoCapture;
    unsigned int _numberOfButtonMashingCapturesAtRate0;
    unsigned int _numberOfButtonMashingCapturesAtRate1;
    unsigned int _numberOfButtonMashingEventsAtRate0;
    unsigned int _numberOfButtonMashingEventsAtRate1;
    BOOL _buttonMashingEventStartedAtRate0;
    BOOL _buttonMashingEventStartedAtRate1;
    NSMutableDictionary *_moduleActuatorVendorByPortType;
    NSString *_sphereMode;
    float _structuredLightIdleTemperatureFirstReading;
    float _structuredLightActiveTemperatureFirstReading;
    float _structuredLightActiveTemperatureLastReading;
    BWStats *_structuredLightActiveTemperatureStats;
    BWStats *_infaredSensorTemperatureStats;
    NSMutableDictionary *_sensorTemperatureStatsByPortType;
    NSInteger _accumulatedSystemPressureLevel;
    NSInteger _timeOfLastSystemPressureChange;
    int _maxSystemPressureLevel;
    NSInteger _timeToCriticalSystemPressureInMS;
    unsigned int _factorsContributingToMaxSystemPressureLevel;
    BOOL _regionOfInterestForCameraControlsSupported;
    CGRect _regionOfInterestForCameraControls;
    ? _activeSensorRegionForCameraControls;
    BWMemoryPool *_memoryPool;
    BOOL _overCaptureEnabled;
    BOOL _overrideClientZoomRamps;
    BOOL _masterStreamSwitchingEnabledForOverCapture;
    BOOL _streamSelectorEnabledForOverCapture;
    BOOL _standbySlaveFrameSkippingEnabledForOverCapture;
    BOOL _overCaptureLockedStreamsEnabled;
    NSArray *_overCaptureLockedStreams;
    int _overCaptureLockedStreamsTimeoutCounter;
    int _overCaptureCameraTransitionFrameCount;
    BOOL _momentCaptureVideoRecordingSupported;
    BOOL _variableFrameRateVideoEnabled;
    BWVariableFrameRateSelector *_variableFrameRateSelector;
    float _variableFrameRateNewSuggestedFrameRate;
    float _variableFrameRateLastRequestedFrameRate;
    NSMutableDictionary *_variableFrameRateLastRequestedAEMaxGainByPortType;
    BWInferenceResult *_variableFrameRateMostRecentInferenceResult;
    os_unfair_lock_s _variableFrameRateUpdateLock;
    NSObject<OS_dispatch_queue> *_variableFrameRateUpdateQueue;
    BOOL _cinematicVideoEnabled;
    NSMutableDictionary *_cinematicVideoFocusRequest;
    os_unfair_lock_s _systemPressureStatusLock;
    int _systemPressureLevel;
    int _thermalSystemPressureLevel;
    BOOL _needsToRelieveSystemPressure;
    unsigned int _systemPressureFactors;
    BOOL _allowSystemPressureToForceOffOverCaptureActiveSlaveStream;
    BOOL _overCaptureActiveSlaveStreamForcedOff;
    int _overCaptureActiveSlaveStreamRemainingFramesUntilShutdown;
    BOOL _restorationOfForcedOffOverCaptureActiveSlaveStreamEnabled;
}


@property (readonly, nonatomic) *OpaqueFigSampleBufferProcessor _autofocusProcessor; // ivar: _autofocusProcessor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_stillImageDispatchQueue; // ivar: _stillImageDispatchQueue
@property (readonly) NSArray *activePortTypes; // ivar: _activePortTypes
@property (nonatomic) NSObject<BWAdaptiveBracketingController> *adaptiveUnifiedBracketingController; // ivar: _ubAdaptiveBracketingController
@property (nonatomic) BOOL allocateResourcesCompatibleWithOverCapture; // ivar: _allocateResourcesCompatibleWithOverCapture
@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (nonatomic) BOOL attachesUprightExifOrientationMetadataToStreamingFrames; // ivar: _attachesUprightExifOrientationMetadataToStreamingFrames
@property (nonatomic) BOOL backgroundBlurEnabled; // ivar: _backgroundBlurEnabled
@property (nonatomic) BOOL backgroundBlurSupported; // ivar: _backgroundBlurSupported
@property (copy, nonatomic) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic) BOOL bravoConstituentPhotoDeliveryEnabled; // ivar: _bravoConstituentPhotoDeliveryEnabled
@property ? bravoStreamSelectionConfiguration;
@property ? bravoStreamSelectionConfigurationForRecording;
@property BOOL bravoStreamSelectionConfigurationForRecordingEnabled;
@property (copy) NSArray *bravoStreamSelectionEligibleFallbackPortTypes;
@property (readonly) BWFigVideoCaptureStream *bravoSuperWideCaptureStream; // ivar: _bravoSuperWideCaptureStream
@property (readonly) BWFigVideoCaptureStream *bravoTelephotoCaptureStream; // ivar: _bravoTelephotoCaptureStream
@property (readonly) BWFigVideoCaptureStream *captureStream; // ivar: _captureStream
@property (readonly) NSArray *captureStreams; // ivar: _captureStreams
@property (readonly) NSArray *captureStreamsByFocalLength; // ivar: _captureStreamsByFocalLength
@property (nonatomic) unsigned int cinematicFramingControlMode; // ivar: _cinematicFramingControlMode
@property (nonatomic) BOOL cinematicFramingEnabled; // ivar: _cinematicFramingEnabled
@property (nonatomic) BOOL cinematicFramingSupported; // ivar: _cinematicFramingSupported
@property (nonatomic) float cinematicVideoAverageRenderingTime; // ivar: _cinematicVideoAverageRenderingTime
@property (nonatomic) BOOL cinematicVideoEnabled;
@property (nonatomic) float cinematicVideoWorstCaseRenderingTime; // ivar: _cinematicVideoWorstCaseRenderingTime
@property (readonly) *OpaqueCMClock clock; // ivar: _clock
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deepFusionEnabled;
@property (nonatomic) CGSize defaultAutoFocusTapWindowSize; // ivar: _defaultAutoFocusTapWindowSize
@property (nonatomic) CGSize defaultContinuousAutoFocusWindowSize; // ivar: _defaultContinuousAutoFocusWindowSize
@property (nonatomic) BOOL deferredProcessingEnabled; // ivar: _deferredProcessingEnabled
@property (nonatomic) int depthDataBaseRotation; // ivar: _depthDataBaseRotation
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) float depthMaxFrameRate;
@property (readonly, copy) NSString *description;
@property (readonly) BWFigCaptureDevice *device; // ivar: _device
@property (retain, nonatomic) NSArray *digitalFlashDetectedObjectTypes;
@property (nonatomic) BOOL digitalFlashEnabled;
@property (nonatomic) BOOL digitalFlashMetadataEnabled;
@property (nonatomic) BOOL disableTemporalNoiseReductionWhenStopping; // ivar: _disableTemporalNoiseReductionWhenStopping
@property (nonatomic) BOOL disparityGenerationFromReferenceFramesSupported; // ivar: _disparityGenerationFromReferenceFramesSupported
@property (readonly, nonatomic) BOOL dualStreamStillImageCaptureEnabled;
@property (readonly) NSString *filteredBabySceneConfidence;
@property (readonly) NSString *filteredBrightStageSceneConfidence;
@property (readonly) NSString *filteredPetSceneConfidence;
@property (readonly) NSString *filteredSunsetSunriseSceneConfidence;
@property (nonatomic) BOOL focusPixelsEnabled; // ivar: _focusPixelsEnabled
@property (nonatomic) BOOL globalToneMappingEnabled;
@property (readonly) BOOL hasFlash; // ivar: _hasFlash
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isBravoVariant;
@property (readonly) NSString *lastScene;
@property (readonly) NSString *lastStillCaptureStatus;
@property (readonly) NSString *lastStillScene;
@property (nonatomic) BOOL learnedNREnabled;
@property (readonly) BWFigVideoCaptureStream *masterCaptureStream;
@property (nonatomic) float maximumFrameRate;
@property (retain, nonatomic) BWMemoryPool *memoryPool;
@property (nonatomic) BOOL midFrameSynchronizationEnabled; // ivar: _midFrameSynchronizationEnabled
@property (nonatomic) float minimumFrameRate;
@property (readonly) NSDictionary *moduleInfoByPortType; // ivar: _moduleInfoByPortType
@property (nonatomic) BOOL momentCaptureVideoRecordingSupported;
@property (readonly) BOOL needsToRelieveSystemPressure;
@property CGSize nonDestructiveCropSize;
@property (readonly) NSString *orientation;
@property (nonatomic) BOOL overCaptureEnabled;
@property (nonatomic) float overCapturePercentage; // ivar: _overCapturePercentage
@property (readonly) BWFigVideoCaptureStream *pearlInfraredCaptureStream; // ivar: _pearlInfraredCaptureStream
@property (readonly) int position; // ivar: _position
@property (nonatomic) NSObject<BWPreviewTimeMachineProcessor> *previewTimeMachineProcessor; // ivar: _previewTimeMachineProcessor
@property (nonatomic) BOOL quadraHighResStillImageCaptureEnabled; // ivar: _quadraHighResStillImageCaptureEnabled
@property (nonatomic) BOOL redEyeReductionEnabled; // ivar: _redEyeReductionEnabled
@property (nonatomic) BOOL redSaturationMitigationEnabled; // ivar: _redSaturationMitigationEnabled
@property BOOL restorationOfForcedOffOverCaptureActiveSlaveStreamEnabled;
@property (readonly) NSDictionary *sensorIDDictionaryByPortType; // ivar: _sensorIDDictionaryByPortType
@property (nonatomic) CGRect sensorRegionOfInterestForCameraControls;
@property (nonatomic) BOOL shallowDepthOfFieldEffectEnabled; // ivar: _shallowDepthOfFieldEffectEnabled
@property (readonly) int shallowDepthOfFieldEffectStatus;
@property (readonly) int shallowDepthOfFieldStagePreviewStatus;
@property (nonatomic) BOOL sifrStillImageCaptureEnabledIfAvailable;
@property (nonatomic) BOOL smartCameraEnabled; // ivar: _smartCameraEnabled
@property (readonly) NSString *smartCameraStatus;
@property (readonly) ? sphereShiftState;
@property (nonatomic) BOOL stereoFusionEnabled; // ivar: _stereoFusionEnabled
@property (nonatomic) BOOL stillImageCaptureEnabled;
@property (nonatomic) BOOL stillImageFocusPixelDataCaptureWithDepthEnabled; // ivar: _stillImageFocusPixelDataCaptureWithDepthEnabled
@property (nonatomic) int stillImageFusionScheme; // ivar: _stillImageFusionScheme
@property (nonatomic) BOOL stillImageGNRHDREnabled; // ivar: _stillImageGNRHDREnabled
@property (nonatomic, getter=isStillImageISPChromaNoiseReductionEnabled) BOOL stillImageISPChromaNoiseReductionEnabled; // ivar: _stillImageISPChromaNoiseReductionEnabled
@property (nonatomic, getter=isStillImageISPMultiBandNoiseReductionEnabled) BOOL stillImageISPMultiBandNoiseReductionEnabled; // ivar: _stillImageISPMultiBandNoiseReductionEnabled
@property (nonatomic) BOOL stillImageSashimiRawCaptureWithDepthEnabled; // ivar: _stillImageSashimiRawCaptureWithDepthEnabled
@property (nonatomic) int streamingDigitalFlashMode;
@property (readonly) Class superclass;
@property (nonatomic) BWFigVideoCaptureDevice *supplementalPointCloudCaptureDevice;
@property (nonatomic) NSObject<BWSupplementalPointCloudCaptureDeviceDelegate> *supplementalPointCloudCaptureDeviceDelegate;
@property (readonly) BOOL supportsWideColor;
@property (readonly) BWFigVideoCaptureSynchronizedStreamsGroup *synchronizedStreamsGroup; // ivar: _synchronizedStreamsGroup
@property (nonatomic) unsigned int systemPressureFactors;
@property int systemPressureLevel;
@property (nonatomic) BOOL temporalNoiseReductionBand0Disabled; // ivar: _temporalNoiseReductionBand0Disabled
@property (nonatomic) BOOL temporalNoiseReductionEnabled; // ivar: _temporalNoiseReductionEnabled
@property (nonatomic) BOOL temporalNoiseReductionRawEnabled; // ivar: _temporalNoiseReductionRawEnabled
@property int thermalSystemPressureLevel;
@property (nonatomic) float timeLapseCaptureRate;
@property (nonatomic) BOOL timeOfFlightAFEnabled; // ivar: _timeOfFlightAFEnabled
@property int timeOfFlightProjectorMode;
@property (nonatomic) int unifiedBracketingMode;
@property (nonatomic) BOOL variableFrameRateVideoEnabled;
@property BOOL wideCaptureStreamAsStatsMasterPreferred; // ivar: _wideCaptureStreamAsStatsMasterPreferred
@property (nonatomic) BOOL wideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled; // ivar: _wideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled
@property (nonatomic) ? zeroShutterLagEarliestAllowedPTS;
@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (nonatomic) int zeroShutterLagTimeMachineBufferCapacity; // ivar: _zeroShutterLagTimeMachineBufferCapacity
@property (readonly) BWZoomCommandHandler *zoomCommandHandler; // ivar: _zoomCommandHandler
@property float zoomFactor;


+(void)initialize;
-(BOOL)isFlashScene;
-(BOOL)isHDRScene;
-(BOOL)isPropertyObserved:(id)arg0 ;
-(BOOL)isSISScene;
-(BOOL)setAutoFlashEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(float)ISO;
-(float)exposureTargetOffset;
-(float)lensPosition;
-(float)parallaxMitigationStrengthAndTargetCaptureStream:(*id)arg0 ;
-(float)torchLevel;
-(id)_initWithCaptureDevice:(id)arg0 attributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 multiCamEnabled:(BOOL)arg3 applicationID:(id)arg4 clientAuditToken:(struct ? )arg5 deviceVendor:(id)arg6 createAutofocusSampleBufferProcessorFunction:(*unk)arg7 cameraParameters:(id)arg8 error:(*int)arg9 ;
-(id)cameraInfoByPortTypeIncludingLSCGains:(BOOL)arg0 ;
-(id)copyCurrentFrameStatistics;
-(id)copyISPProcessingSessionWithType:(int)arg0 error:(*int)arg1 ;
-(id)digitalFlashExposureTimes;
-(id)initWithCaptureDevice:(id)arg0 attributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 multiCamEnabled:(BOOL)arg3 applicationID:(id)arg4 clientAuditToken:(struct ? )arg5 error:(*int)arg6 ;
-(id)stillImageCaptureSettingsWithID:(NSInteger)arg0 captureType:(int)arg1 deliverOriginalImage:(BOOL)arg2 deliverSushiRaw:(BOOL)arg3 bravoConstituentImageDeliveryDeviceTypes:(id)arg4 includePreBracketedEV0ForProcessing:(BOOL)arg5 clientBracketSettings:(id)arg6 captureFlags:(NSUInteger)arg7 userInitiatedRequestPTS:(struct ? )arg8 frameStatisticsByPortType:(id)arg9 ;
-(id)unifiedBracketingStillImageCaptureSettingsWithID:(NSInteger)arg0 captureRequestIdentifier:(id)arg1 frameStatisticsByPortType:(id)arg2 flashMode:(int)arg3 digitalFlashMode:(int)arg4 autoRedEyeReductionEnabled:(BOOL)arg5 hdrMode:(int)arg6 qualityPrioritization:(int)arg7 speedOverQualityCaptureEnabled:(BOOL)arg8 waitForTimeMachineToFill:(BOOL)arg9 burstQualityCaptureEnabled:(BOOL)arg10 deliverOriginalImage:(BOOL)arg11 bravoConstituentImageDeliveryDeviceTypes:(id)arg12 deliverDepthData:(BOOL)arg13 autoDeferredProcessingEnabled:(BOOL)arg14 includePreBracketedEV0ForProcessing:(BOOL)arg15 clientBracketSettings:(id)arg16 userInitiatedRequestPTS:(struct ? )arg17 rawOutputFormat:(unsigned int)arg18 processingSupportProvider:(id)arg19 ;
-(int)_setupAutofocusSampleBufferProcessor;
-(int)autoImageControlMode;
-(int)captureStillImageNowWithSettings:(id)arg0 ;
-(int)digitalFlashStatus;
-(int)maxStillImageCaptureBufferCountForHDRMode:(int)arg0 digitalFlashMode:(int)arg1 qualityPrioritization:(int)arg2 clientBracketCount:(int)arg3 bravoConstituentImageDeliveryDeviceTypes:(id)arg4 ;
-(int)resolveStillImageCaptureTypeFromStatisticsByPortType:(id)arg0 flashMode:(int)arg1 hdrMode:(int)arg2 qualityPrioritization:(int)arg3 stereoFusionMode:(int)arg4 depthDataDeliveryEnabled:(BOOL)arg5 bravoConstituentImageDeliveryDeviceTypes:(id)arg6 burstQualityCaptureEnabled:(BOOL)arg7 clientBracketMode:(int)arg8 forSceneMonitoring:(BOOL)arg9 captureFlags:(*NSUInteger)arg10 ;
-(int)setAutoImageControlMode:(int)arg0 ;
-(int)setAutomaticallyAdjustsImageControlMode:(BOOL)arg0 ;
-(int)setAutomaticallyAdjustsTorch:(BOOL)arg0 ;
-(int)setContinuousAutoFocusRect:(struct CGRect )arg0 restrictToRect:(BOOL)arg1 ;
-(int)setExposureModeAutoWithRect:(struct CGRect )arg0 ;
-(int)setExposureModeCustomWithExposureDuration:(struct ? )arg0 minFrameRate:(CGFloat)arg1 maxFrameRate:(CGFloat)arg2 ISO:(float)arg3 requestID:(int)arg4 ;
-(int)setExposureModeLocked;
-(int)setExposureTargetBias:(float)arg0 requestID:(int)arg1 ;
-(int)setFaceDetectionDrivenImageProcessingMode:(int)arg0 ;
-(int)setFocusModeAutoWithRect:(struct CGRect )arg0 restrictToRect:(BOOL)arg1 continuous:(BOOL)arg2 smooth:(BOOL)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5 ;
-(int)setFocusModeManualWithLensPosition:(float)arg0 requestID:(int)arg1 ;
-(int)setImageControlMode:(int)arg0 ;
-(int)setProvidesStortorgetMetadata:(BOOL)arg0 ;
-(int)setStillImageSceneMonitoringFlashMode:(int)arg0 hdrMode:(int)arg1 qualityPrioritization:(int)arg2 digitalFlashMode:(int)arg3 ;
-(int)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg0 ;
-(int)setTorchLevel:(float)arg0 ;
-(int)setWhiteBalanceModeAuto;
-(int)setWhiteBalanceModeLockedWithGains:(struct ? )arg0 requestID:(int)arg1 ;
-(struct ? )exposureDuration;
-(struct ? )grayWorldDeviceWhiteBalanceGains;
-(void)_resetStillImageCaptureRequestState;
-(void)_teardownAutoFocusSampleBufferProcessor;
-(void)cancelPrepareToCaptureStillImageNow;
-(void)captureStream:(id)arg0 didCompleteStillImageCaptureWithPTS:(struct ? )arg1 error:(int)arg2 ;
-(void)captureStream:(id)arg0 didDropVideoSampleBufferWithPTS:(struct ? )arg1 ;
-(void)captureStream:(id)arg0 willDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)captureStream:(id)arg0 willEmitDepthSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)captureStream:(id)arg0 willEmitPointCloudSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)captureStream:(id)arg0 willEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromTimeMachine:(BOOL)arg2 ;
-(void)captureStream:(id)arg0 willEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)captureStream:(id)arg0 willEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)captureStreamDidChangeActiveFormatIndex:(id)arg0 ;
-(void)captureStreamDidStartStreaming:(id)arg0 ;
-(void)captureStreamDidStopStreaming:(id)arg0 ;
-(void)captureStreamFailedToStartStreaming:(id)arg0 ;
-(void)captureStreamWillStartStreaming:(id)arg0 ;
-(void)captureStreamWillStopStreaming:(id)arg0 ;
-(void)dealloc;
-(void)drainNotifications;
-(void)initiateCaptureStillImageNowWithPTS:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)performBlockOnNotificationQueue:(id)arg0 ;
-(void)pointCloudCaptureDevice:(id)arg0 willEmitPointCloudSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)prepareToCaptureStillImageNow:(id)arg0 ;
-(void)rampToVideoZoomFactor:(float)arg0 withRampType:(int)arg1 rate:(float)arg2 duration:(CGFloat)arg3 commandID:(int)arg4 ;
-(void)registerForAEMatrixMetadata;
-(void)semanticStyleSceneTypeDidChange:(int)arg0 ;
-(void)sendCalibrationDataToISP;
-(void)setAutoImageControlMode:(int)arg0 completionHandler:(id)arg1 ;
-(void)setCinematicVideoFocus:(id)arg0 ;
-(void)setFaceDetectionConfiguration:(id)arg0 ;
-(void)setISPZoomFactor:(float)arg0 totalZoomFactor:(float)arg1 ;
-(void)setMaxExposureDurationClientOverride:(struct ? )arg0 ;
-(void)setMaxTorchLevel:(float)arg0 ;
-(void)setProperty:(id)arg0 isObserved:(BOOL)arg1 ;
-(void)setSmartCameraVersion:(struct ? )arg0 ;
-(void)setStillImageStabilizationSceneDetectionEnabled:(BOOL)arg0 ;
-(void)shutDownSystemPressuredDevice;
-(void)startupFaceDetectionIfNeeded;
-(void)stopPointCloudCaptureForStillImageCaptureWithSettingsID:(NSInteger)arg0 ;
-(void)unregisterForAEMatrixMetadata;
-(void)updateFudgedZoomRanges;
-(void)updatePortraitSceneMonitoringRequiresStageThresholds:(BOOL)arg0 ;
-(void)updateSDOFBackgroundShiftSum:(float)arg0 invalidShiftRatio:(float)arg1 closeCanonicalDisparityAverage:(float)arg2 faceCanonicalDisparityAverages:(id)arg3 erodedForegroundRatio:(float)arg4 foregroundRatio:(float)arg5 occluded:(BOOL)arg6 faces:(id)arg7 ;
-(void)updateSmartCameraStreamPropertiesWithInferenceResult:(id)arg0 ;
-(void)updateSphereShiftStateWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)zoomCommandHandler:(id)arg0 didApplyZoomFactor:(float)arg1 zoomFactorWithoutFudge:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4 ;


@end


#endif