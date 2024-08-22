// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUCAPTURECONTROLLER_H
#define CUCAPTURECONTROLLER_H

@class NSMutableSet, NSCountedSet, NSMutableDictionary, NSString, AVCaptureVideoPreviewLayer;
@protocol CAMCaptureService, CAMCaptureRequestIntervalometerDelegate, OS_dispatch_queue, CAMAvailabilityDelegate, CAMBurstDelegate, CAMConfigurationDelegate, CAMExposureDelegate, CAMFacesDelegate, CAMFocusDelegate, CAMHistogramDelegate, CAMCaptureInterruptionDelegate, CAMMachineReadableCodeDelegate, CAMPanoramaChangeDelegate, CAMPreviewLayerOverCaptureStatusDelegate, CAMCaptureRecoveryDelegate, CAMCaptureResultDelegate, CAMCaptureRunningDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMStillImageCapturingVideoDelegate, CAMSuggestionDelegate, CAMTextRegionResultDelegate, CAMZoomDelegate;

#import <Foundation/Foundation.h>

#import "CAMPanoramaPreviewView.h"
#import "CAMBurstController.h"
#import "CAMCaptureEngine.h"
#import "CAMStillImageCaptureRequest.h"
#import "CAMPanoramaCaptureRequest.h"
#import "CAMVideoCaptureRequest.h"
#import "CAMKeyValueCoalescer.h"
#import "CAMIrisVideoController.h"
#import "CAMLocationController.h"
#import "CAMMotionController.h"
#import "CAMPowerController.h"
#import "CAMProtectionController.h"
#import "CAMRemoteShutterController.h"
#import "CAMThumbnailGenerator.h"
#import "CAMCaptureRequestIntervalometer.h"

@interface CUCaptureController : NSObject <CAMCaptureService, CAMCaptureRequestIntervalometerDelegate>

 {
    CAMPanoramaPreviewView *_panoramaPreviewView;
    uint8_t _uniqueRequestIDForConfigurationChange;
}


@property (nonatomic, getter=isHDRSuggested, setter=_setHDRSuggested:) BOOL HDRSuggested; // ivar: _HDRSuggested
@property (readonly, nonatomic) CAMBurstController *_burstController; // ivar: __burstController
@property (readonly, nonatomic) CAMCaptureEngine *_captureEngine; // ivar: __captureEngine
@property (retain, nonatomic, setter=_setCapturingCTMVideoRequest:) CAMStillImageCaptureRequest *_capturingCTMVideoRequest; // ivar: __capturingCTMVideoRequest
@property (retain, nonatomic, setter=_setCapturingLowLightStillImageRequest:) CAMStillImageCaptureRequest *_capturingLowLightStillImageRequest; // ivar: __capturingLowLightStillImageRequest
@property (nonatomic, getter=_isCapturingPairedVideoPaused, setter=_setCapturingPairedVideoPaused:) BOOL _capturingPairedVideoPaused; // ivar: __capturingPairedVideoPaused
@property (retain, nonatomic, setter=_setCapturingPanoramaRequest:) CAMPanoramaCaptureRequest *_capturingPanoramaRequest; // ivar: __capturingPanoramaRequest
@property (retain, nonatomic, setter=_setCapturingVideoRequest:) CAMVideoCaptureRequest *_capturingVideoRequest; // ivar: __capturingVideoRequest
@property (nonatomic, setter=_setDidCompleteInitialConfiguration:) BOOL _didCompleteInitialConfiguration; // ivar: __didCompleteInitialConfiguration
@property (readonly, nonatomic) CAMKeyValueCoalescer *_exposureCoalescer; // ivar: __exposureCoalescer
@property (readonly, nonatomic) CAMKeyValueCoalescer *_focusCoalescer; // ivar: __focusCoalescer
@property (readonly, nonatomic) NSMutableSet *_identifiersForActiveCTMVideoCaptures; // ivar: __identifiersForActiveCTMVideoCaptures
@property (readonly, nonatomic) NSMutableSet *_identifiersForActiveLivePhotoVideoCaptures; // ivar: __identifiersForActiveLivePhotoVideoCaptures
@property (readonly, nonatomic) CAMIrisVideoController *_irisVideoController; // ivar: __irisVideoController
@property (nonatomic, getter=_isVideoCaptureAvailable, setter=_setVideoCaptureAvailable:) BOOL _isVideoCaptureAvailable; // ivar: __isVideoCaptureAvailable
@property (readonly, nonatomic) CAMLocationController *_locationController; // ivar: __locationController
@property (nonatomic, setter=_setMaximumNumberOfStillImageRequests:) NSInteger _maximumNumberOfStillImageRequests; // ivar: __maximumNumberOfStillImageRequests
@property (readonly, nonatomic) CAMMotionController *_motionController; // ivar: __motionController
@property (nonatomic, setter=_setNeedsInitialPairedVideoUpdate:) BOOL _needsInitialPairedVideoUpdate; // ivar: __needsInitialPairedVideoUpdate
@property (nonatomic, setter=_setNextSignpostID:) NSUInteger _nextSignpostID; // ivar: __nextSignpostID
@property (readonly, nonatomic) NSCountedSet *_numberOfInflightRequestsByType; // ivar: __numberOfInflightRequestsByType
@property (retain, nonatomic, setter=_setPendingVideoCaptureRequest:) CAMVideoCaptureRequest *_pendingVideoCaptureRequest; // ivar: __pendingVideoCaptureRequest
@property (readonly, nonatomic) NSMutableDictionary *_persistenceUUIDToSignpostID; // ivar: __persistenceUUIDToSignpostID
@property (readonly, nonatomic) CAMPowerController *_powerController; // ivar: __powerController
@property (readonly, nonatomic) CAMProtectionController *_protectionController; // ivar: __protectionController
@property (readonly, nonatomic) CAMRemoteShutterController *_remoteShutterController; // ivar: __remoteShutterController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_responseQueue; // ivar: __responseQueue
@property (readonly, nonatomic) CAMThumbnailGenerator *_responseThumbnailGenerator; // ivar: __responseThumbnailGenerator
@property (readonly, nonatomic) BOOL _shouldResetFocusAndExposureAfterCapture;
@property (nonatomic, getter=isAutoMacroActive) BOOL autoMacroActive; // ivar: _autoMacroActive
@property (nonatomic, getter=isAutoMacroSuggested) BOOL autoMacroSuggested; // ivar: _autoMacroSuggested
@property (weak, nonatomic) NSObject<CAMAvailabilityDelegate> *availabilityDelegate; // ivar: _availabilityDelegate
@property (weak, nonatomic) NSObject<CAMBurstDelegate> *burstDelegate; // ivar: _burstDelegate
@property (nonatomic, getter=isCaptureAvailable, setter=_setCaptureAvailable:) BOOL captureAvailable; // ivar: _captureAvailable
@property (readonly, nonatomic, getter=isCapturingBurst) BOOL capturingBurst;
@property (readonly, nonatomic, getter=isCapturingCTMVideo) BOOL capturingCTMVideo;
@property (readonly, nonatomic, getter=isCapturingLivePhotoVideo) BOOL capturingLivePhotoVideo;
@property (readonly, nonatomic, getter=isCapturingLowLightImage) BOOL capturingLowLightImage;
@property (readonly, nonatomic, getter=isCapturingPanorama) BOOL capturingPanorama;
@property (readonly, nonatomic, getter=isCapturingStandardVideo) BOOL capturingStandardVideo;
@property (readonly, nonatomic, getter=isCapturingStillImage) BOOL capturingStillImage;
@property (readonly, nonatomic, getter=isCapturingTimelapse) BOOL capturingTimelapse; // ivar: _capturingTimelapse
@property (readonly, nonatomic, getter=isCapturingVideo) BOOL capturingVideo;
@property (nonatomic, getter=isConfigurationAvailable, setter=_setConfigurationAvailable:) BOOL configurationAvailable; // ivar: _configurationAvailable
@property (weak, nonatomic) NSObject<CAMConfigurationDelegate> *configurationDelegate; // ivar: _configurationDelegate
@property (readonly, nonatomic) NSUInteger currentBurstCount;
@property (retain, nonatomic, setter=_setCurrentBurstIntervalometer:) CAMCaptureRequestIntervalometer *currentBurstIntervalometer; // ivar: _currentBurstIntervalometer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CAMExposureDelegate> *exposureDelegate; // ivar: _exposureDelegate
@property (weak, nonatomic) NSObject<CAMFacesDelegate> *facesDelegate; // ivar: _facesDelegate
@property (nonatomic, getter=_isFailedConfigurationPreventingCapture, setter=_setFailedConfigurationPreventingCapture:) BOOL failedConfigurationPreventingCapture; // ivar: _failedConfigurationPreventingCapture
@property (nonatomic, getter=isFlashActive, setter=_setFlashActive:) BOOL flashActive; // ivar: _flashActive
@property (nonatomic, getter=isFlashAvailable, setter=_setFlashAvailable:) BOOL flashAvailable; // ivar: _flashAvailable
@property (nonatomic, setter=_setFlashCompromise:) NSUInteger flashCompromise; // ivar: _flashCompromise
@property (weak, nonatomic) NSObject<CAMFocusDelegate> *focusDelegate; // ivar: _focusDelegate
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CAMHistogramDelegate> *histogramDelegate; // ivar: _histogramDelegate
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (weak, nonatomic) NSObject<CAMCaptureInterruptionDelegate> *interruptionDelegate; // ivar: _interruptionDelegate
@property (nonatomic, setter=_setLowLightStatus:) NSInteger lowLightStatus; // ivar: _lowLightStatus
@property (weak, nonatomic) NSObject<CAMMachineReadableCodeDelegate> *machineReadableCodeDelegate; // ivar: _machineReadableCodeDelegate
@property (weak, nonatomic) NSObject<CAMPanoramaChangeDelegate> *panoramaChangeDelegate; // ivar: _panoramaChangeDelegate
@property (readonly, nonatomic) CAMPanoramaPreviewView *panoramaPreviewView;
@property (readonly, nonatomic, getter=isPreviewDisabled) BOOL previewDisabled; // ivar: _previewDisabled
@property (weak, nonatomic) NSObject<CAMPreviewLayerOverCaptureStatusDelegate> *previewLayerOverCaptureStatusDelegate; // ivar: _previewLayerOverCaptureStatusDelegate
@property (nonatomic, getter=isRampingVideoZoom) BOOL rampingVideoZoom; // ivar: _rampingVideoZoom
@property (weak, nonatomic) NSObject<CAMCaptureRecoveryDelegate> *recoveryDelegate; // ivar: _recoveryDelegate
@property (weak, nonatomic) NSObject<CAMCaptureResultDelegate> *resultDelegate; // ivar: _resultDelegate
@property (weak, nonatomic) NSObject<CAMCaptureRunningDelegate> *runningDelegate; // ivar: _runningDelegate
@property (weak, nonatomic) NSObject<CAMShallowDepthOfFieldStatusDelegate> *shallowDepthOfFieldStatusDelegate; // ivar: _shallowDepthOfFieldStatusDelegate
@property (readonly, nonatomic) BOOL shouldAllowUserToChangeFocusAndExposure;
@property (weak, nonatomic) NSObject<CAMStillImageCapturingVideoDelegate> *stillImageCapturingVideoDelegate; // ivar: _stillImageCapturingVideoDelegate
@property (weak, nonatomic) NSObject<CAMSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CAMTextRegionResultDelegate> *textRegionResultDelegate; // ivar: _textRegionResultDelegate
@property (nonatomic, getter=isTorchActive, setter=_setTorchActive:) BOOL torchActive; // ivar: _torchActive
@property (nonatomic, getter=isTorchAvailable, setter=_setTorchAvailable:) BOOL torchAvailable; // ivar: _torchAvailable
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (weak, nonatomic) NSObject<CAMZoomDelegate> *zoomDelegate; // ivar: _zoomDelegate


+(float)focusLensPositionCurrentSentinel;
-(BOOL)_canBeginCaptureCheckAvailability:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_internalCaptureStillImageWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_internalStartCapturingVideoWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_kvoDidEndForChange:(id)arg0 ;
-(BOOL)_kvoDidStartForChange:(id)arg0 ;
-(BOOL)_shouldManageFocusForMode:(NSInteger)arg0 ;
-(BOOL)_shouldMonitorSystemPressureState;
-(BOOL)_shouldTrackInflightCountForRequest:(id)arg0 ;
-(BOOL)_shouldUseShotBufferForRequest:(id)arg0 ;
-(BOOL)_useSmoothFocus;
-(BOOL)_wantsImageAnalysisForGraphConfiguration:(id)arg0 ;
-(BOOL)_wantsMachineReadableCodesForGraphConfiguration:(id)arg0 ;
-(BOOL)captureStillImageWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitCTMCaptureWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasActiveCTMVideoCaptures;
-(BOOL)initiateCTMCaptureWithSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)intervalometer:(id)arg0 didGenerateCaptureRequest:(id)arg1 ;
-(BOOL)startCapturingBurstWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)startCapturingPanoramaWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)startCapturingVideoWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopCapturingPanoramaInterrupted:(BOOL)arg0 ;
-(BOOL)stopCapturingVideo;
-(NSInteger)_cinematicMetadataObjectIDForMetadataObject:(id)arg0 ;
-(id)_availabilityKeyPaths;
-(id)_commandForChangeToGraphConfiguration:(id)arg0 zoomFactor:(CGFloat)arg1 minimumExecutionTime:(CGFloat)arg2 outRequestID:(*int)arg3 ;
-(id)_commandForConfiguration:(id)arg0 zoomFactor:(CGFloat)arg1 outRequestID:(*int)arg2 ;
-(id)_commandForResetFocus:(BOOL)arg0 resetExposure:(BOOL)arg1 resetExposureTargetBias:(BOOL)arg2 ;
-(id)_exposureKVOKeyPaths;
-(id)_focusKVOKeyPaths;
-(id)_identifierForPendingVideoForStillImageRequest:(id)arg0 ;
-(id)_realtimeMetadataCommandsForMode:(NSInteger)arg0 videoConfiguration:(NSInteger)arg1 capturing:(BOOL)arg2 wantsMachineReadableCodes:(BOOL)arg3 wantsImageAnalysis:(BOOL)arg4 ;
-(id)_sanitizePanoramaRequest:(id)arg0 ;
-(id)_sanitizeStillImageRequest:(id)arg0 ;
-(id)_sanitizeVideoRequest:(id)arg0 ;
-(id)_suggestionKeyPaths;
-(id)_systemPressureStateMonitoringKeyPaths;
-(id)_textAnalysisImageFromStillImageResult:(id)arg0 imageOrientation:(NSInteger)arg1 ;
-(id)_thumbnailImageFromStillImageCaptureResult:(id)arg0 imageOrientation:(NSInteger)arg1 ;
-(id)_thumbnailImageFromVideoCaptureResult:(id)arg0 previewOrientation:(NSInteger)arg1 previewImage:(*id)arg2 ;
-(id)_updateFocusAndExposureForStartBurstCapture;
-(id)_updateFocusAndExposureForStartPanorama;
-(id)_zoomMonitoringKeyPaths;
-(id)initWithCaptureConfiguration:(id)arg0 zoomFactor:(CGFloat)arg1 engineOptions:(NSInteger)arg2 locationController:(id)arg3 motionController:(id)arg4 burstController:(id)arg5 protectionController:(id)arg6 powerController:(id)arg7 irisVideoController:(id)arg8 remoteShutterController:(id)arg9 ;
-(int)_uniqueRequestIDForChangeToModeAndDevice;
-(int)applyCaptureConfiguration:(id)arg0 zoomFactor:(CGFloat)arg1 ;
-(int)changeToGraphConfiguration:(id)arg0 zoomFactor:(CGFloat)arg1 minimumExecutionTime:(CGFloat)arg2 ;
-(void)_availabilityResultChangedForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 ;
-(void)_beginTrackingCTMVideoRecordingForIdentifier:(id)arg0 ;
-(void)_beginTrackingLivePhotoVideoRecordingForIdentifier:(id)arg0 ;
-(void)_didPlayBeginVideoRecordingSound;
-(void)_endCaptureSignpostIntervalForPersistenceUUID:(id)arg0 ;
-(void)_endTrackingCTMVideoRecordingForIdentifier:(id)arg0 ;
-(void)_endTrackingLivePhotoVideoRecordingForIdentifier:(id)arg0 ;
-(void)_exposureResultChangedForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 ;
-(void)_focusResultChangedForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 ;
-(void)_handleCaptureEngineExecutionNotification:(id)arg0 ;
-(void)_handleShallowDepthOfFieldStatusChangedNotification:(id)arg0 ;
-(void)_handleSystemPressureStateChanged;
-(void)_notifyDelegateOfCaptureAvailabilityChanged:(BOOL)arg0 ;
-(void)_notifyDelegateOfConfigurationAvailabilityChanged:(BOOL)arg0 ;
-(void)_overCapturePreviewStatusChangedForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 ;
-(void)_processCapturedBurstRequest:(id)arg0 withResult:(id)arg1 ;
-(void)_processPendingVideoCaptureRequest:(id)arg0 ;
-(void)_resetFocusAndExposureAfterCapture;
-(void)_resetFocusAndExposureIfAppropriateForReason:(NSInteger)arg0 ;
-(void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
-(void)_setupAvailabilityMonitoring;
-(void)_setupExposureMonitoring;
-(void)_setupFocusAndExposureMonitoring;
-(void)_setupFocusMonitoring;
-(void)_setupOverCapturePreviewMonitoring;
-(void)_setupSuggestionMonitoring;
-(void)_setupSystemPressureStateMonitoring;
-(void)_setupZoomMonitoring;
-(void)_startCaptureSignpostIntervalForPersistenceUUID:(id)arg0 ;
-(void)_subjectAreaDidChange:(id)arg0 ;
-(void)_suggestionResultChangedForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 ;
-(void)_systemPressureStateMonitoringChangedForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 ;
-(void)_tearDownOverCapturePreviewMonitoring;
-(void)_teardownAvailabilityMonitoring;
-(void)_teardownFocusAndExposureMonitoring;
-(void)_teardownSuggestionMonitoring;
-(void)_teardownSystemPressureStateMonitoring;
-(void)_teardownZoomMonitoring;
-(void)_updateAutoMacroActive;
-(void)_updateAutoMacroSuggested;
-(void)_updateAvailabilityAfterCapturedRequest:(id)arg0 ;
-(void)_updateAvailabilityAfterEnqueuedRequest:(id)arg0 ;
-(void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg0 ;
-(void)_updateAvailabilityForRequestType:(NSInteger)arg0 ;
-(void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg0 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterBurst;
-(void)_updateMaximumNumberOfStillImageRequestsAfterCapturedRequestIfNecessary:(id)arg0 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterEnqueuingRequest:(id)arg0 ;
-(void)_zoomResultChangedForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 ;
-(void)attemptToEndInterruptions;
-(void)cancelAutoResumeAfterDate:(id)arg0 ;
-(void)cancelCTMCaptureForSettings:(id)arg0 ;
-(void)cancelDelayedFocusAndExposureReset;
-(void)changeExposureTargetBias:(float)arg0 ;
-(void)changeToAspectRatioCrop:(NSInteger)arg0 ;
-(void)changeToFlashMode:(NSInteger)arg0 ;
-(void)changeToLockedExposure;
-(void)changeToLowLightMode:(NSInteger)arg0 ;
-(void)changeToMacroMode:(NSInteger)arg0 ;
-(void)changeToPanoramaDirection:(NSInteger)arg0 ;
-(void)changeToPanoramaEncodingBehavior:(NSInteger)arg0 ;
-(void)changeToPortraitAperture:(CGFloat)arg0 ;
-(void)changeToPortraitLightingEffectStrength:(CGFloat)arg0 ;
-(void)changeToPreviewConfiguration:(NSUInteger)arg0 ;
-(void)changeToPreviewDisabled;
-(void)changeToPreviewEnabledWithConfiguration:(NSUInteger)arg0 ;
-(void)changeToPreviewFilters:(id)arg0 ;
-(void)changeToTimelapseCaptureRate:(float)arg0 ;
-(void)changeToTorchLevel:(float)arg0 ;
-(void)changeToTorchMode:(NSInteger)arg0 ;
-(void)changeToVideoHDRSuspended:(BOOL)arg0 ;
-(void)changeToVideoRecordingCaptureOrientation:(NSInteger)arg0 ;
-(void)changeToVideoZoomFactor:(CGFloat)arg0 ;
-(void)dealloc;
-(void)endCTMVideoCapture;
-(void)focusAndExposeAtPoint:(struct CGPoint )arg0 lockFocus:(BOOL)arg1 resetExposureTargetBias:(BOOL)arg2 ;
-(void)focusAtCenterForVideoRecording;
-(void)focusAtPoint:(struct CGPoint )arg0 lockFocus:(BOOL)arg1 ;
-(void)forceDisableSubjectAreaChangeMonitoring;
-(void)handleSessionDidStartRunning;
-(void)handleSessionDidStopRunning;
-(void)handleSessionInterruptionEnded;
-(void)handleSessionInterruptionForReason:(NSInteger)arg0 ;
-(void)intervalometer:(id)arg0 didReachMaximumCountWithRequest:(id)arg1 ;
-(void)invalidateController;
-(void)lockFocusAtLensPosition:(float)arg0 completionBlock:(id)arg1 ;
-(void)logCaptureAvailabilityDescription;
-(void)metadataWasRecognized:(id)arg0 forMetadataObjectTypes:(id)arg1 deviceFormat:(id)arg2 ;
-(void)notifyTimelapseControllerFinishedUpdatingWithLocation;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)panoramaConfigurationDidChangeWithImageQueue:(struct _CAImageQueue *)arg0 direction:(NSInteger)arg1 ;
-(void)panoramaRequest:(id)arg0 didCompleteCaptureWithResult:(id)arg1 ;
-(void)panoramaRequest:(id)arg0 didReceiveNotification:(NSInteger)arg1 ;
-(void)panoramaRequestDidStartCapturing:(id)arg0 ;
-(void)panoramaRequestDidStopCapturing:(id)arg0 interrupted:(BOOL)arg1 ;
-(void)pauseCapturingStillImagePairedVideo;
-(void)prepareToCaptureStillImageAtSystemTime:(NSInteger)arg0 ;
-(void)queryTimelapseDimensionsWithCompletionBlock:(id)arg0 ;
-(void)queryVideoDimensionsWithCompletionBlock:(id)arg0 ;
-(void)registerCaptureService:(id)arg0 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg0 ;
-(void)registerVideoThumbnailContentsDelegate:(id)arg0 ;
-(void)resumeCapturingStillImagePairedVideo;
-(void)setCinematicFocusAtPoint:(struct CGPoint )arg0 useFixedOpticalFocus:(BOOL)arg1 useHardFocus:(BOOL)arg2 ;
-(void)setCinematicFocusForMetadataObject:(id)arg0 atPoint:(struct CGPoint )arg1 useFixedOpticalFocus:(BOOL)arg2 useHardFocus:(BOOL)arg3 ;
-(void)startCaptureSession;
-(void)startCaptureSessionWithRetryCount:(NSUInteger)arg0 retryInterval:(CGFloat)arg1 logReason:(id)arg2 completion:(id)arg3 ;
-(void)startMonitoringForHDRSuggestions;
-(void)startRampToVideoZoomFactor:(CGFloat)arg0 withDuration:(CGFloat)arg1 zoomRampTuning:(NSInteger)arg2 ;
-(void)startRampToVideoZoomFactor:(CGFloat)arg0 withRate:(float)arg1 ;
-(void)stillImageRequest:(id)arg0 didCompleteStillImageCaptureWithResult:(id)arg1 ;
-(void)stillImageRequest:(id)arg0 didCompleteVideoCaptureWithResult:(id)arg1 ;
-(void)stillImageRequest:(id)arg0 didStopCapturingCTMVideoForCoordinationInfo:(id)arg1 ;
-(void)stillImageRequest:(id)arg0 didStopCapturingLivePhotoVideoForCoordinationInfo:(id)arg1 ;
-(void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(id)arg0 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg0 error:(id)arg1 ;
-(void)stillImageRequestDidStartCapturing:(id)arg0 resolvedSettings:(id)arg1 ;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg0 ;
-(void)stillImageRequestDidUnblockResponsiveCapture:(id)arg0 ;
-(void)stillImageRequestWillStartCapturingVideo:(id)arg0 ;
-(void)stopCaptureSession;
-(void)stopCaptureSessionWithCompletion:(id)arg0 ;
-(void)stopCapturingBurst;
-(void)stopMonitoringForHDRSuggestions;
-(void)stopRampToVideoZoomFactor;
-(void)unregisterCaptureService:(id)arg0 ;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg0 ;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg0 ;
-(void)updateRealtimeMetadataConfigurationForGraphConfiguration:(id)arg0 isCapturing:(BOOL)arg1 ;
-(void)videoRequest:(id)arg0 didCompleteCaptureWithResult:(id)arg1 ;
-(void)videoRequestDidStartCapturing:(id)arg0 ;
-(void)videoRequestDidStopCapturing:(id)arg0 ;
-(void)willPerformRecoveryFromRuntimeError:(id)arg0 ;


@end


#endif