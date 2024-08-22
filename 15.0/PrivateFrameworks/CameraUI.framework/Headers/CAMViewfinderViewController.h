// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIEWFINDERVIEWCONTROLLER_H
#define CAMVIEWFINDERVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, CEKApertureButton, BCSAVParsingSession, NSArray, UIPanGestureRecognizer, UIView, NSDate, NSString, NSMutableDictionary, UIAlertController, PUReviewScreenDoneButton, NSMutableSet, CEKWheelScrubberView, VKCaptureTextAnalyzer, CEKLightingControl, CEKLightingNameBadge, UISwipeGestureRecognizer, CEKApertureSlider, CEKSlider, UIControl, UIButton, UIPinchGestureRecognizer, NSSet;
@protocol UIGestureRecognizerDelegate, CAMModeDialDataSource, CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMFacesDelegate, CAMMachineReadableCodeDelegate, CAMTextRegionResultDelegate, CAMConfigurationDelegate, CAMSuggestionDelegate, CAMAvailabilityDelegate, CAMBurstDelegate, CAMTimerButtonDelegate, CAMControlVisibilityDelegate, CAMControlVisibilityUpdateDelegate, CAMPreviewViewControllerDelegate, CAMCaptureRecoveryDelegate, CAMCaptureInterruptionDelegate, CAMCaptureRunningDelegate, CAMZoomDelegate, CAMZoomSliderDelegate, CAMTimelapseControllerDelegate, CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerSessionDelegate, CAMCameraRollControllerPresentationDelegate, CAMClosedViewfinderControllerDelegate, CAMDisabledPreviewControllerDelegate, CAMStillImageCapturingVideoDelegate, CAMZoomControlDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMPhysicalCaptureNotifierDelegate, CEKWheelScrubberViewDelegate, CAMVideoThumbnailContentsDelegate, CAMBarsAccessibilityHUDManagerDelegate, CAMDescriptionOverlayViewDelegate, CAMShutterButtonDelegate, CEKLightingControlDelegate, CAMStorageControllerDelegate, CAMFullscreenViewfinderDelegate, CAMDynamicShutterControlDelegate, CAMControlStatusBarDelegate, CAMBadgeTrayDelegate, CAMControlDrawerDelegate, CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate, CAMPreviewLayerOverCaptureStatusDelegate, CAMDynamicShutterControlAGGDDelegate, CAMVideoConfigurationStatusIndicatorDelegate, CAMHistogramDelegate, CAMProminentObjectManagerDelegate, BCSActionDelegate, VKImageAnalysisInteractionDelegate, VKCaptureTextAnalysisRequestDelegate, CAMImageAnalysisButtonDelegate, CAMSemanticStyleSettingsControllerDelegate, CAMRemoteShutterDelegate, CAMViewfinderTransitionable, CAMCameraConfigurationDelegate, CAMCreativeCameraDelegate, CAMViewfinderReviewButtonSource, CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate, CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate;


#import "CAMHDRBadge.h"
#import "CAMHDRButton.h"
#import "CAMBottomBar.h"
#import "CAMBurstIndicatorView.h"
#import "CAMCallStatusMonitor.h"
#import "CAMCameraRollController.h"
#import "CUCaptureController.h"
#import "CAMClosedViewfinderController.h"
#import "CAMCaptureGraphConfiguration.h"
#import "CAMControlDrawer.h"
#import "CAMCreativeCameraButton.h"
#import "CAMPreciseTimer.h"
#import "CAMMomentCaptureSettings.h"
#import "CAMDisabledModeOverlayView.h"
#import "CAMDisabledPreviewController.h"
#import "CAMDynamicShutterControl.h"
#import "CAMElapsedTimeView.h"
#import "CAMFeedbackController.h"
#import "CAMFilterButton.h"
#import "CAMFilterNameBadge.h"
#import "CAMFlashBadge.h"
#import "CAMFlashButton.h"
#import "CAMFlipButton.h"
#import "CAMFocusLockBadge.h"
#import "CAMFullscreenViewfinder.h"
#import "CAMGridView.h"
#import "CAMIdleController.h"
#import "CAMImageWell.h"
#import "CAMIntensityButton.h"
#import "CAMKeepAliveController.h"
#import "CAMLevelIndicatorView.h"
#import "CAMLevelViewModel.h"
#import "CAMLivePhotoBadge.h"
#import "CAMLivePhotoButton.h"
#import "CAMLocationController.h"
#import "CAMMachineReadableCodeLoggingController.h"
#import "CAMMetalContext.h"
#import "CAMModeDial.h"
#import "CAMMotionController.h"
#import "CAMPanoramaViewController.h"
#import "CAMMessagesPhotosButton.h"
#import "CAMPhysicalCaptureNotifier.h"
#import "CAMPhysicalCaptureRecognizer.h"
#import "CAMPortraitModeInstructionLabel.h"
#import "CAMPowerController.h"
#import "CAMPreviewViewController.h"
#import "CAMProminentObjectManager.h"
#import "CAMQRCodeInstructionLabel.h"
#import "CAMRemoteShutterController.h"
#import "CAMShallowDepthOfFieldBadge.h"
#import "CUShutterButton.h"
#import "CAMStorageController.h"
#import "CAMAnimationDelegate.h"
#import "CAMVideoConfigurationStatusIndicator.h"
#import "CAMAnalyticsCaptureEvent.h"
#import "CAMTimelapseController.h"
#import "CAMTimerButton.h"
#import "CAMTimerIndicatorView.h"
#import "CAMTopBar.h"
#import "CAMTorchPatternController.h"
#import "CAMViewfinderTransitionController.h"
#import "CAMUtilityBar.h"
#import "CAMAnalyticsVisionSession.h"
#import "CAMZoomControl.h"
#import "CAMZoomSlider.h"

@interface CAMViewfinderViewController : UIViewController <UIGestureRecognizerDelegate, CAMModeDialDataSource, CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMFacesDelegate, CAMMachineReadableCodeDelegate, CAMTextRegionResultDelegate, CAMConfigurationDelegate, CAMSuggestionDelegate, CAMAvailabilityDelegate, CAMBurstDelegate, CAMTimerButtonDelegate, CAMControlVisibilityDelegate, CAMControlVisibilityUpdateDelegate, CAMPreviewViewControllerDelegate, CAMCaptureRecoveryDelegate, CAMCaptureInterruptionDelegate, CAMCaptureRunningDelegate, CAMZoomDelegate, CAMZoomSliderDelegate, CAMTimelapseControllerDelegate, CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerSessionDelegate, CAMCameraRollControllerPresentationDelegate, CAMClosedViewfinderControllerDelegate, CAMDisabledPreviewControllerDelegate, CAMStillImageCapturingVideoDelegate, CAMZoomControlDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMPhysicalCaptureNotifierDelegate, CEKWheelScrubberViewDelegate, CAMVideoThumbnailContentsDelegate, CAMBarsAccessibilityHUDManagerDelegate, CAMDescriptionOverlayViewDelegate, CAMShutterButtonDelegate, CEKLightingControlDelegate, CAMStorageControllerDelegate, CAMFullscreenViewfinderDelegate, CAMDynamicShutterControlDelegate, CAMControlStatusBarDelegate, CAMBadgeTrayDelegate, CAMControlDrawerDelegate, CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate, CAMPreviewLayerOverCaptureStatusDelegate, CAMDynamicShutterControlAGGDDelegate, CAMVideoConfigurationStatusIndicatorDelegate, CAMHistogramDelegate, CAMProminentObjectManagerDelegate, BCSActionDelegate, VKImageAnalysisInteractionDelegate, VKCaptureTextAnalysisRequestDelegate, CAMImageAnalysisButtonDelegate, CAMSemanticStyleSettingsControllerDelegate, CAMRemoteShutterDelegate>

 {
    ? _configurationDelegateFlags;
}


@property (readonly, nonatomic) CAMHDRBadge *_HDRBadge; // ivar: __HDRBadge
@property (readonly, nonatomic) CAMHDRButton *_HDRButton; // ivar: __HDRButton
@property (retain, nonatomic, setter=_setAccessibilityHUDManagers:) NSMutableArray *_accessibilityHUDManagers; // ivar: __accessibilityHUDManagers
@property (nonatomic, getter=_isAnimatingFilterScrubberDismissal, setter=_setAnimatingFilterScrubberDismissal:) BOOL _animatingFilterScrubberDismissal; // ivar: __animatingFilterScrubberDismissal
@property (readonly, nonatomic) CEKApertureButton *_apertureButton; // ivar: __apertureButton
@property (retain, nonatomic, setter=_setBarcodeParsingSession:) BCSAVParsingSession *_barcodeParsingSession; // ivar: __barcodeParsingSession
@property (readonly, nonatomic) CAMBottomBar *_bottomBar; // ivar: __bottomBar
@property (nonatomic, getter=_isBurstEndSoundPlaying, setter=_setBurstEndSoundPlaying:) BOOL _burstEndSoundPlaying; // ivar: __burstEndSoundPlaying
@property (readonly, nonatomic) CAMBurstIndicatorView *_burstIndicatorView; // ivar: __burstIndicatorView
@property (retain, nonatomic, setter=_setCachedAppClipCodeResults:) NSArray *_cachedAppClipCodeResults; // ivar: __cachedAppClipCodeResults
@property (retain, nonatomic, setter=_setCachedQRCodeResults:) NSArray *_cachedQRCodeResults; // ivar: __cachedQRCodeResults
@property (nonatomic, setter=_setCachedVideoZoomFactor:) CGFloat _cachedVideoZoomFactor; // ivar: __cachedVideoZoomFactor
@property (readonly, nonatomic) CAMCallStatusMonitor *_callStatusMonitor; // ivar: __callStatusMonitor
@property (readonly, nonatomic) CAMCameraRollController *_cameraRollController; // ivar: __cameraRollController
@property (readonly, nonatomic) UIPanGestureRecognizer *_cameraRollSwipeUpGestureRecognizer; // ivar: __cameraRollSwipeUpGestureRecognizer
@property (weak, nonatomic, setter=_setCaptureAnimationPreviewOverlay:) UIView *_captureAnimationPreviewOverlay; // ivar: __captureAnimationPreviewOverlay
@property (readonly, nonatomic) CUCaptureController *_captureController; // ivar: __captureController
@property (readonly, nonatomic, getter=_isCapturing) BOOL _capturing;
@property (nonatomic, setter=_setCapturingFromPhysicalButton:) BOOL _capturingFromPhysicalButton; // ivar: __capturingFromPhysicalButton
@property (nonatomic, getter=_isCapturingFromTimer, setter=_setCapturingFromTimer:) BOOL _capturingFromTimer; // ivar: __capturingFromTimer
@property (readonly, nonatomic) CAMClosedViewfinderController *_closedViewfinderController; // ivar: __closedViewfinderController
@property (nonatomic, getter=_isClosingViewfinder, setter=_setClosingViewfinder:) BOOL _closingViewfinder; // ivar: __closingViewfinder
@property (readonly, nonatomic) NSInteger _configuredDevice;
@property (retain, nonatomic, setter=_setConfiguredGraphConfiguration:) CAMCaptureGraphConfiguration *_configuredGraphConfiguration; // ivar: __configuredGraphConfiguration
@property (readonly, nonatomic) NSInteger _configuredMode;
@property (readonly, nonatomic) CAMControlDrawer *_controlDrawer;
@property (readonly, nonatomic) CAMCreativeCameraButton *_creativeCameraButton; // ivar: __creativeCameraButton
@property (retain, nonatomic, setter=_setCurrentBurstTimer:) CAMPreciseTimer *_currentBurstTimer; // ivar: __currentBurstTimer
@property (readonly, nonatomic) NSInteger _currentDevice;
@property (readonly, nonatomic) NSInteger _currentDevicePosition;
@property (retain, nonatomic, setter=_setCurrentGraphConfiguration:) CAMCaptureGraphConfiguration *_currentGraphConfiguration; // ivar: __currentGraphConfiguration
@property (nonatomic, getter=_isCurrentLowLightCaptureCancelable, setter=_setCurrentLowLightCaptureCancelable:) BOOL _currentLowLightCaptureCancelable; // ivar: __currentLowLightCaptureCancelable
@property (readonly, nonatomic) NSInteger _currentMode;
@property (retain, nonatomic, setter=_setCurrentStillImageCaptureMomentSettings:) CAMMomentCaptureSettings *_currentStillImageCaptureMomentSettings; // ivar: __currentStillImageCaptureMomentSettings
@property (retain, nonatomic, setter=_setCurrentStillImageCaptureTextAnalysisEndDate:) NSDate *_currentStillImageCaptureTextAnalysisEndDate; // ivar: __currentStillImageCaptureTextAnalysisEndDate
@property (retain, nonatomic, setter=_setCurrentStillImageCaptureTextAnalysisIdentifier:) NSString *_currentStillImageCaptureTextAnalysisIdentifier; // ivar: __currentStillImageCaptureTextAnalysisIdentifier
@property (retain, nonatomic, setter=_setCurrentStillImageCaptureTextAnalysisStartDate:) NSDate *_currentStillImageCaptureTextAnalysisStateDate; // ivar: __currentStillImageCaptureTextAnalysisStateDate
@property (retain, nonatomic, setter=_setCurrentTextAnalysisDetectionEndDate:) NSDate *_currentTextAnalysisDetectionEndDate; // ivar: __currentTextAnalysisDetectionEndDate
@property (readonly, nonatomic) NSInteger _currentVideoConfiguration;
@property (readonly, nonatomic) NSMutableDictionary *_descriptionOverlayViewByMode; // ivar: __descriptionOverlayViewByMode
@property (nonatomic, setter=_setDesiredFlashMode:) NSInteger _desiredFlashMode; // ivar: __desiredFlashMode
@property (nonatomic, setter=_setDesiredHDRMode:) NSInteger _desiredHDRMode; // ivar: __desiredHDRMode
@property (nonatomic, setter=_setDesiredLivePhotoMode:) NSInteger _desiredLivePhotoMode; // ivar: __desiredLivePhotoMode
@property (nonatomic, setter=_setDesiredLowLightControlMode:) NSUInteger _desiredLowLightControlMode; // ivar: __desiredLowLightControlMode
@property (nonatomic, setter=_setDesiredRAWMode:) NSInteger _desiredRAWMode; // ivar: __desiredRAWMode
@property (nonatomic, setter=_setDesiredTorchMode:) NSInteger _desiredTorchMode; // ivar: __desiredTorchMode
@property (nonatomic, setter=_setDidAcceptCompromisedFlash:) BOOL _didAcceptCompromisedFlash; // ivar: __didAcceptCompromisedFlash
@property (retain, nonatomic, setter=_setDisabledModeOverlayView:) CAMDisabledModeOverlayView *_disabledModeOverlayView; // ivar: __disabledModeOverlayView
@property (readonly, nonatomic) CAMDisabledPreviewController *_disabledPreviewController; // ivar: __disabledPreviewController
@property (retain, nonatomic, setter=_setDiskSpaceAlertController:) UIAlertController *_diskSpaceAlertController; // ivar: __diskSpaceAlertController
@property (readonly, nonatomic) PUReviewScreenDoneButton *_doneButton; // ivar: __doneButton
@property (readonly, nonatomic) CAMDynamicShutterControl *_dynamicShutterControl; // ivar: __dynamicShutterControl
@property (readonly, nonatomic) CAMElapsedTimeView *_elapsedTimeView; // ivar: __elapsedTimeView
@property (readonly, nonatomic) NSMutableDictionary *_exposureBiasesByMode; // ivar: __exposureBiasesByMode
@property (readonly, nonatomic) CAMFeedbackController *_feedbackController; // ivar: __feedbackController
@property (readonly, nonatomic) CAMFilterButton *_filterButton; // ivar: __filterButton
@property (readonly, nonatomic) CAMFilterNameBadge *_filterNameBadge; // ivar: __filterNameBadge
@property (readonly, nonatomic) NSMutableSet *_filterNamesSelectedBeforeCapture; // ivar: __filterNamesSelectedBeforeCapture
@property (retain, nonatomic) id *_filterScrubberLayerContents; // ivar: __filterScrubberLayerContents
@property (readonly, nonatomic) CEKWheelScrubberView *_filterScrubberView; // ivar: __filterScrubberView
@property (retain, nonatomic) NSArray *_filterTypes; // ivar: __filterTypes
@property (nonatomic, setter=_setFlashAndHDRConflictingControl:) NSInteger _flashAndHDRConflictingControl; // ivar: __flashAndHDRConflictingControl
@property (readonly, nonatomic) CAMFlashBadge *_flashBadge; // ivar: __flashBadge
@property (readonly, nonatomic) CAMFlashButton *_flashButton; // ivar: __flashButton
@property (retain, nonatomic, setter=_setFlashOrTorchUnavailableAlertController:) UIAlertController *_flashOrTorchUnavailableAlertController; // ivar: __flashOrTorchUnavailableAlertController
@property (nonatomic, getter=_isFlashingLivePhotoBadge, setter=_setFlashingLivePhotoBadge:) BOOL _flashingLivePhotoBadge; // ivar: __flashingLivePhotoBadge
@property (readonly, nonatomic) CAMFlipButton *_flipButton; // ivar: __flipButton
@property (readonly, nonatomic) CAMFocusLockBadge *_focusAndExposureLockBadge; // ivar: __focusAndExposureLockBadge
@property (readonly, nonatomic) CAMFullscreenViewfinder *_fullscreenViewfinder;
@property (readonly, nonatomic) CAMGridView *_gridView; // ivar: __gridView
@property (nonatomic, setter=_setHighlightClippingValue:) CGFloat _highlightClippingValue; // ivar: __highlightClippingValue
@property (nonatomic, setter=_setHomeIndicatorAutoHideOrientation:) NSInteger _homeIndicatorAutoHideOrientation; // ivar: __homeIndicatorAutoHideOrientation
@property (readonly, nonatomic) CAMIdleController *_idleController; // ivar: __idleController
@property (retain, nonatomic, setter=_setImageAnalyzer:) VKCaptureTextAnalyzer *_imageAnalyzer; // ivar: __imageAnalyzer
@property (readonly, nonatomic) CAMImageWell *_imageWell; // ivar: __imageWell
@property (readonly, nonatomic) CAMIntensityButton *_intensityButton; // ivar: __intensityButton
@property (nonatomic, setter=_setInternalAutorotationStyle:) NSInteger _internalAutorotationStyle; // ivar: __internalAutorotationStyle
@property (readonly, nonatomic) CAMKeepAliveController *_keepAliveController; // ivar: __keepAliveController
@property (nonatomic, setter=_setLastConfigurationRequestID:) int _lastConfigurationRequestID; // ivar: __lastConfigurationRequestID
@property (nonatomic, setter=_setLastMRCResultsCount:) NSInteger _lastMRCResultsCount; // ivar: __lastMRCResultsCount
@property (nonatomic, setter=_setLastPerformedShutterButtonFeedbackType:) NSUInteger _lastPerformedShutterButtonFeedbackType; // ivar: __lastPerformedShutterButtonFeedbackType
@property (nonatomic, setter=_setLastShutterButtonTouchDownTime:) NSUInteger _lastShutterButtonTouchDownTime; // ivar: __lastShutterButtonTouchDownTime
@property (retain, nonatomic, setter=_setLastTimerIndicatorFaceUpdateDate:) NSDate *_lastTimerIndicatorFaceUpdateDate; // ivar: __lastTimerIndicatorFaceUpdateDate
@property (nonatomic, setter=_setLastZoomInteractionType:) NSInteger _lastZoomInteractionType; // ivar: __lastZoomInteractionType
@property (nonatomic, setter=_setLayoutStyle:) NSInteger _layoutStyle; // ivar: __layoutStyle
@property (readonly, nonatomic) CAMLevelIndicatorView *_levelView; // ivar: __levelView
@property (readonly, nonatomic) CAMLevelViewModel *_levelViewModel; // ivar: __levelViewModel
@property (readonly, nonatomic) CEKLightingControl *_lightingControl; // ivar: __lightingControl
@property (readonly, nonatomic) CEKLightingNameBadge *_lightingNameBadge; // ivar: __lightingNameBadge
@property (readonly, nonatomic) CAMLivePhotoBadge *_livePhotoBadge; // ivar: __livePhotoBadge
@property (readonly, nonatomic) CAMLivePhotoButton *_livePhotoButton; // ivar: __livePhotoButton
@property (readonly, nonatomic) CAMLocationController *_locationController; // ivar: __locationController
@property (readonly, nonatomic, getter=_isLowLightCaptureCanceling) BOOL _lowLightCaptureCanceling;
@property (nonatomic, getter=_isLowLightCaptureUIVisible, setter=_setLowLightCaptureUIVisible:) BOOL _lowLightCaptureUIVisible; // ivar: __lowLightCaptureUIVisible
@property (nonatomic, setter=_setLowLightConflicts:) NSUInteger _lowLightConflicts; // ivar: __lowLightConflicts
@property (nonatomic, setter=_setLowLightDurationMapping:) ? _lowLightDurationMapping; // ivar: __lowLightDurationMapping
@property (readonly, nonatomic) CAMMachineReadableCodeLoggingController *_machineReadableCodeLoggingController; // ivar: __machineReadableCodeLoggingController
@property (readonly, nonatomic) CAMMetalContext *_metalContext; // ivar: __metalContext
@property (readonly, nonatomic) CAMModeDial *_modeDial; // ivar: __modeDial
@property (nonatomic, getter=_isModeDisabledForMultitasking, setter=_setModeDisabledForMultitasking:) BOOL _modeDisabledForMultitasking; // ivar: __modeDisabledForMultitasking
@property (readonly, nonatomic) CAMMotionController *_motionController; // ivar: __motionController
@property (readonly, nonatomic) UISwipeGestureRecognizer *_nextFilterGestureRecognizer; // ivar: __nextFilterGestureRecognizer
@property (readonly, nonatomic) UISwipeGestureRecognizer *_nextModeGestureRecognizer; // ivar: __nextModeGestureRecognizer
@property (nonatomic, getter=_isOpeningViewfinder, setter=_setOpeningViewfinder:) BOOL _openingViewfinder; // ivar: __openingViewfinder
@property (nonatomic, getter=_isOutOfDiskSpace, setter=_setOutOfDiskSpace:) BOOL _outOfDiskSpace; // ivar: __outOfDiskSpace
@property (nonatomic, setter=_setOverCapturePreviewStatus:) NSInteger _overCapturePreviewStatus; // ivar: __overCapturePreviewStatus
@property (readonly, nonatomic) CAMPanoramaViewController *_panoramaViewController; // ivar: __panoramaViewController
@property (nonatomic, getter=_isPerformingTopBarOrientationChange, setter=_setPerformingTopBarOrientationChange:) BOOL _performingTopBarOrientationChange; // ivar: __performingTopBarOrientationChange
@property (nonatomic, setter=_setPhotoModeEffectFilterType:) NSInteger _photoModeEffectFilterType; // ivar: __photoModeEffectFilterType
@property (readonly, nonatomic) CAMMessagesPhotosButton *_photosButton; // ivar: __photosButton
@property (retain, nonatomic) CAMPhysicalCaptureNotifier *_physicalCaptureNotifier; // ivar: __physicalCaptureNotifier
@property (retain, nonatomic) CAMPhysicalCaptureRecognizer *_physicalCaptureRecognizer; // ivar: __physicalCaptureRecognizer
@property (readonly, nonatomic) CEKApertureSlider *_portraitApertureSlider; // ivar: __portraitApertureSlider
@property (readonly, nonatomic) CEKSlider *_portraitIntensitySlider; // ivar: __portraitIntensitySlider
@property (nonatomic, setter=_setPortraitModeApertureValue:) CGFloat _portraitModeApertureValue; // ivar: __portraitModeApertureValue
@property (nonatomic, setter=_setPortraitModeEffectFilterType:) NSInteger _portraitModeEffectFilterType; // ivar: __portraitModeEffectFilterType
@property (readonly, nonatomic) CAMPortraitModeInstructionLabel *_portraitModeInstructionLabel; // ivar: __portraitModeInstructionLabel
@property (nonatomic, setter=_setPortraitModeIntensityValue:) CGFloat _portraitModeIntensityValue; // ivar: __portraitModeIntensityValue
@property (nonatomic, setter=_setPortraitModeLightingEffectType:) NSInteger _portraitModeLightingEffectType; // ivar: __portraitModeLightingEffectType
@property (readonly, nonatomic) CAMPowerController *_powerController; // ivar: __powerController
@property (readonly, nonatomic) CAMPreviewViewController *_previewViewController; // ivar: __previewViewController
@property (readonly, nonatomic) UISwipeGestureRecognizer *_previousFilterGestureRecognizer; // ivar: __previousFilterGestureRecognizer
@property (readonly, nonatomic) UISwipeGestureRecognizer *_previousModeGestureRecognizer; // ivar: __previousModeGestureRecognizer
@property (readonly, nonatomic) UIControl *_primaryShutterControl;
@property (nonatomic, getter=_isProactiveFlashSuggestionSuppressed, setter=_setProactiveFlashSuggestionSuppressed:) BOOL _proactiveFlashSuggestionSuppressed; // ivar: __proactiveFlashSuggestionSuppressed
@property (retain, nonatomic, setter=_setProminentObjectManager:) CAMProminentObjectManager *_prominentObjectManager; // ivar: __prominentObjectManager
@property (readonly, nonatomic) CAMQRCodeInstructionLabel *_qrCodeInstructionLabel; // ivar: __qrCodeInstructionLabel
@property (nonatomic, setter=_setRAWConflicts:) NSUInteger _rawConflicts; // ivar: __rawConflicts
@property (nonatomic, getter=_isReconfiguring, setter=_setReconfiguring:) BOOL _reconfiguring; // ivar: __reconfiguring
@property (nonatomic, getter=_isReconfiguringForZoomChange, setter=_setReconfiguringForZoomChange:) BOOL _reconfiguringForZoomChange; // ivar: __reconfiguringForZoomChange
@property (nonatomic, setter=_setRemainingCaptureTimerTicks:) NSUInteger _remainingCaptureTimerTicks; // ivar: __remainingCaptureTimerTicks
@property (readonly, nonatomic) CAMRemoteShutterController *_remoteShutterController; // ivar: __remoteShutterController
@property (nonatomic, getter=_resetTimerDurationAfterDelayedCapture, setter=_setResetTimerDurationAfterDelayedCapture:) BOOL _resetTimerDurationAfterDelayedCapture; // ivar: __resetTimerDurationAfterDelayedCapture
@property (nonatomic, setter=_setResolvedFlashMode:) NSInteger _resolvedFlashMode; // ivar: __resolvedFlashMode
@property (nonatomic, setter=_setResolvedHDRMode:) NSInteger _resolvedHDRMode; // ivar: __resolvedHDRMode
@property (nonatomic, setter=_setResolvedLivePhotoMode:) NSInteger _resolvedLivePhotoMode; // ivar: __resolvedLivePhotoMode
@property (nonatomic, setter=_setResolvedLowLightControlMode:) NSUInteger _resolvedLowLightControlMode; // ivar: __resolvedLowLightControlMode
@property (nonatomic, setter=_setResolvedLowLightMode:) NSInteger _resolvedLowLightMode; // ivar: __resolvedLowLightMode
@property (nonatomic, setter=_setResolvedRAWMode:) NSInteger _resolvedRAWMode; // ivar: __resolvedRAWMode
@property (nonatomic, setter=_setResolvedTimerDuration:) NSInteger _resolvedTimerDuration; // ivar: __resolvedTimerDuration
@property (nonatomic, setter=_setResolvedTorchMode:) NSInteger _resolvedTorchMode; // ivar: __resolvedTorchMode
@property (retain, nonatomic) UIButton *_reviewButton; // ivar: __reviewButton
@property (nonatomic, setter=_setSelectedSemanticStyleIndex:) NSUInteger _selectedSemanticStyleIndex; // ivar: __selectedSemanticStyleIndex
@property (retain, nonatomic, setter=_setSemanticStyles:) NSMutableArray *_semanticStyles; // ivar: __semanticStyles
@property (nonatomic, setter=_setShadowClippingValue:) CGFloat _shadowClippingValue; // ivar: __shadowClippingValue
@property (readonly, nonatomic) CAMShallowDepthOfFieldBadge *_shallowDepthOfFieldBadge; // ivar: __shallowDepthOfFieldBadge
@property (nonatomic, setter=_setShallowDepthOfFieldStatus:) NSInteger _shallowDepthOfFieldStatus; // ivar: __shallowDepthOfFieldStatus
@property (readonly, nonatomic) BOOL _shouldCaptureWithTimer;
@property (readonly, nonatomic) BOOL _shouldDisableUserInteractionForTransitioning;
@property (nonatomic, setter=_setShouldIgnoreZoomFactorKVOForRamping:) BOOL _shouldIgnoreZoomFactorKVOForRamping; // ivar: __shouldIgnoreZoomFactorKVOForRamping
@property (nonatomic, setter=_setShouldShowFilterScrubberAfterNextRender:) BOOL _shouldShowFilterScrubberAfterNextRender; // ivar: __shouldShowFilterScrubberAfterNextRender
@property (readonly, nonatomic) BOOL _shouldUseZoomControlInsteadOfSlider;
@property (nonatomic, getter=_isShowingFilterScrubber, setter=_setShowingFilterScrubber:) BOOL _showingFilterScrubber; // ivar: __showingFilterScrubber
@property (nonatomic, getter=_isShowingPortraitApertureSlider, setter=_setShowingPortraitApertureSlider:) BOOL _showingPortraitApertureSlider; // ivar: __showingPortraitApertureSlider
@property (nonatomic, getter=_isShowingPortraitIntensitySlider, setter=_setShowingPortraitIntensitySlider:) BOOL _showingPortraitIntensitySlider; // ivar: __showingPortraitIntensitySlider
@property (readonly, nonatomic) CUShutterButton *_shutterButton; // ivar: __shutterButton
@property (nonatomic) NSInteger _slomoConfigurationOverride; // ivar: __slomoConfigurationOverride
@property (nonatomic, setter=_setSquareModeEffectFilterType:) NSInteger _squareModeEffectFilterType; // ivar: __squareModeEffectFilterType
@property (nonatomic, setter=_setStagePreviewStatus:) NSInteger _stagePreviewStatus; // ivar: __stagePreviewStatus
@property (readonly, nonatomic) CUShutterButton *_stillDuringVideoButton; // ivar: __stillDuringVideoButton
@property (readonly, nonatomic) CAMStorageController *_storageController; // ivar: __storageController
@property (readonly, nonatomic) UISwipeGestureRecognizer *_swipeDownGestureRecognizer; // ivar: __swipeDownGestureRecognizer
@property (nonatomic, getter=_isSwipeToModeSwitchEnabled, setter=_setSwipeToModeSwitchEnabled:) BOOL _swipeToModeSwitchEnabled;
@property (readonly, nonatomic) UISwipeGestureRecognizer *_swipeUpGestureRecognizer; // ivar: __swipeUpGestureRecognizer
@property (retain, nonatomic, setter=_setSynchronizedCaptureTimerDelegate:) CAMAnimationDelegate *_synchronizedCaptureTimerDelegate; // ivar: __synchronizedCaptureTimerDelegate
@property (readonly, nonatomic) CAMElapsedTimeView *_targetElapsedTimeView;
@property (readonly, nonatomic) CAMPortraitModeInstructionLabel *_targetPortraitModeInstructionLabel;
@property (readonly, nonatomic) CAMQRCodeInstructionLabel *_targetQRCodeInstructionLabel;
@property (readonly, nonatomic) CAMVideoConfigurationStatusIndicator *_targetVideoConfigurationStatusIndicator;
@property (retain, nonatomic) CAMAnalyticsCaptureEvent *_timelapseAnalyticsEvent; // ivar: __timelapseAnalyticsEvent
@property (readonly, nonatomic) CAMTimelapseController *_timelapseController; // ivar: __timelapseController
@property (readonly, nonatomic) CAMTimerButton *_timerButton; // ivar: __timerButton
@property (readonly, nonatomic) CAMTimerIndicatorView *_timerIndicatorView; // ivar: __timerIndicatorView
@property (readonly, nonatomic) CAMTopBar *_topBar; // ivar: __topBar
@property (readonly, nonatomic) CAMTorchPatternController *_torchPatternController; // ivar: __torchPatternController
@property (readonly, nonatomic) CAMViewfinderTransitionController *_transitionController; // ivar: __transitionController
@property (readonly, nonatomic, getter=_isTransitioningBackFromReview) BOOL _transitioningBackFromReview;
@property (readonly, nonatomic, getter=_isTransitioningToCreativeCamera) BOOL _transitioningToCreativeCamera;
@property (readonly, nonatomic, getter=_isTransitioningToReview) BOOL _transitioningToReview;
@property (readonly, nonatomic) BOOL _useCreativeCameraControls; // ivar: __useCreativeCameraControls
@property (readonly, nonatomic) CAMUtilityBar *_utilityBar; // ivar: __utilityBar
@property (nonatomic) NSInteger _videoConfigurationOverride; // ivar: __videoConfigurationOverride
@property (readonly, nonatomic) CAMVideoConfigurationStatusIndicator *_videoConfigurationStatusIndicator; // ivar: __videoConfigurationStatusIndicator
@property (nonatomic, setter=_setVideoZoomFactorAtDynamicShutterStart:) CGFloat _videoZoomFactorAtDynamicShutterStart; // ivar: __videoZoomFactorAtDynamicShutterStart
@property (nonatomic, setter=_setVideoZoomFactorAtPinchStart:) CGFloat _videoZoomFactorAtPinchStart; // ivar: __videoZoomFactorAtPinchStart
@property (readonly, weak, nonatomic) NSObject<CAMViewfinderTransitionable> *_viewfinderTransitionable;
@property (retain, nonatomic, setter=_setVisionAnalyticsSession:) CAMAnalyticsVisionSession *_visionAnalyticsSession; // ivar: __visionAnalyticsSession
@property (nonatomic, setter=_setWantsFilterScrubberVisible:) BOOL _wantsFilterScrubberVisible; // ivar: __wantsFilterScrubberVisible
@property (nonatomic, setter=_setWantsVisualTextAnalysis:) BOOL _wantsVisualTextAnalysis; // ivar: __wantsVisualTextAnalysis
@property (nonatomic, setter=_setWantsVisualTextFailureInstructions:) BOOL _wantsVisualTextFailureInstructions; // ivar: __wantsVisualTextFailureInstructions
@property (nonatomic, setter=_setWantsVisualTextSelectionInstructions:) BOOL _wantsVisualTextSelectionInstructions; // ivar: __wantsVisualTextSelectionInstructions
@property (readonly, nonatomic) CAMZoomControl *_zoomControl; // ivar: __zoomControl
@property (readonly, nonatomic) UIPinchGestureRecognizer *_zoomPinchGestureRecognizer; // ivar: __zoomPinchGestureRecognizer
@property (readonly, nonatomic) CAMZoomSlider *_zoomSlider; // ivar: __zoomSlider
@property (nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer; // ivar: _automaticallyAdjustsApplicationIdleTimer
@property (nonatomic) BOOL automaticallyAdjustsAutorotationStyle; // ivar: _automaticallyAdjustsAutorotationStyle
@property (nonatomic) BOOL automaticallyAdjustsAvailableCaptureModes; // ivar: _automaticallyAdjustsAvailableCaptureModes
@property (nonatomic) NSInteger autorotationStyle;
@property (copy, nonatomic) NSSet *availableCaptureModes; // ivar: _availableCaptureModes
@property (readonly, nonatomic, getter=isCapturingLivePhoto) BOOL capturingLivePhoto;
@property (readonly, nonatomic, getter=isCapturingPhoto) BOOL capturingPhoto;
@property (weak, nonatomic) NSObject<CAMCameraConfigurationDelegate> *configurationDelegate; // ivar: _configurationDelegate
@property (readonly, nonatomic) NSInteger configuredCaptureDevice; // ivar: _configuredCaptureDevice
@property (readonly, nonatomic) NSInteger configuredCaptureMode; // ivar: _configuredCaptureMode
@property (weak, nonatomic) NSObject<CAMCreativeCameraDelegate> *creativeCameraDelegate; // ivar: _creativeCameraDelegate
@property (readonly, nonatomic) NSInteger currentCaptureDevice;
@property (readonly, nonatomic) NSInteger currentCaptureMode;
@property (retain, nonatomic) UIView *customOverlayView; // ivar: _customOverlayView
@property (nonatomic) CGAffineTransform customPreviewViewTransform; // ivar: _customPreviewViewTransform
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisablingAdditionalCaptures) BOOL disablingAdditionalCaptures; // ivar: _disablingAdditionalCaptures
@property (nonatomic, getter=isDisablingMultipleCaptureFeatures) BOOL disablingMultipleCaptureFeatures; // ivar: _disablingMultipleCaptureFeatures
@property (readonly, nonatomic) NSInteger emulationMode; // ivar: _emulationMode
@property (nonatomic) NSInteger flashMode;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setHDRMode:) NSInteger hdrMode;
@property (nonatomic) NSInteger imagePickerVideoConfiguration; // ivar: _imagePickerVideoConfiguration
@property (nonatomic) NSInteger livePhotoMode;
@property (nonatomic) CGFloat maximumVideoRecordingDuration; // ivar: _maximumVideoRecordingDuration
@property (readonly, nonatomic) NSInteger messagesTransitionState; // ivar: _messagesTransitionState
@property (nonatomic, getter=isPerformingReviewUsingOverlay) BOOL performingReviewUsingOverlay; // ivar: _performingReviewUsingOverlay
@property (nonatomic, getter=isPerformingTileTransition) BOOL performingTileTransition; // ivar: _performingTileTransition
@property (nonatomic) NSUInteger persistenceBehavior; // ivar: _persistenceBehavior
@property (nonatomic) NSInteger photoModeAspectRatioCrop; // ivar: _photoModeAspectRatioCrop
@property (nonatomic, getter=isPreventingAdditionalCaptures, setter=_setPreventingAdditionalCaptures:) BOOL preventingAdditionalCaptures; // ivar: _preventingAdditionalCaptures
@property (nonatomic) NSInteger rawMode;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (weak, nonatomic) NSObject<CAMViewfinderReviewButtonSource> *reviewButtonSource; // ivar: _reviewButtonSource
@property (readonly, nonatomic) CGRect reviewUsingOverlayFrame;
@property (readonly, nonatomic) BOOL shouldHideElapsedTimeView;
@property (readonly, nonatomic) BOOL shouldHideFilterNameBadge;
@property (readonly, nonatomic) BOOL shouldHideFlashButton;
@property (readonly, nonatomic) BOOL shouldHideFlipButton;
@property (readonly, nonatomic) BOOL shouldHideHDRButton;
@property (readonly, nonatomic) BOOL shouldHideLightingControl;
@property (readonly, nonatomic) BOOL shouldHideLivePhotoButton;
@property (readonly, nonatomic) BOOL shouldHidePortraitModeInstructionLabel;
@property (readonly, nonatomic) BOOL shouldHideQRCodeInstructionLabel;
@property (readonly, nonatomic) BOOL shouldHideTimerButton;
@property (readonly, nonatomic) BOOL shouldHideTopBar;
@property (readonly, nonatomic) BOOL shouldLayoutLightingNameBadgeAtBottom;
@property (readonly, nonatomic) BOOL shouldShiftPreviewForUtilityBar;
@property (nonatomic, getter=isShowingStandardControls) BOOL showingStandardControls; // ivar: _showingStandardControls
@property (weak, nonatomic) NSObject<CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate> *stillImageCaptureTestDelegate; // ivar: _stillImageCaptureTestDelegate
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timerDuration;
@property (nonatomic) NSInteger torchMode;
@property (nonatomic, getter=isUserInteractionLoggingEnabled) BOOL userInteractionLoggingEnabled; // ivar: _userInteractionLoggingEnabled
@property (weak, nonatomic) NSObject<CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate> *videoCaptureTestDelegate; // ivar: _videoCaptureTestDelegate


-(BOOL)_allowsPhysicalCaptureInteraction;
-(BOOL)_autoHideHomeIndicatorForOrientation:(NSInteger)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_canUseFilteringForLayoutStyle:(NSInteger)arg0 ;
-(BOOL)_captureStillImageWithCurrentSettings;
-(BOOL)_captureStillImageWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_filterScrubberSwipeMatchesExposureBiasPanDirection;
-(BOOL)_hasBeenPromptedForICPLToday;
-(BOOL)_hasInFlightConfiguration;
-(BOOL)_isActiveZooming;
-(BOOL)_isApplicationFullscreen;
-(BOOL)_isCTMCaptureForType:(NSInteger)arg0 ;
-(BOOL)_isCTMVideoSupportedForGraphConfiguration:(id)arg0 ;
-(BOOL)_isControlDrawerShowingPersistentControl;
-(BOOL)_isExpectedLowLightDurationCancelable;
-(BOOL)_isExposureBiasNonDefault:(CGFloat)arg0 ;
-(BOOL)_isFlashCompromisedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)_isFlashOrTorchSupportedForGraphConfiguration:(id)arg0 ;
-(BOOL)_isFlashUnavailableForMode:(NSInteger)arg0 ;
-(BOOL)_isHDRSupportedForGraphConfiguration:(id)arg0 ;
-(BOOL)_isLivePhotoSupportedForGraphConfiguration:(id)arg0 ;
-(BOOL)_isLivePhotoSupportedForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)_isLowLightActiveForCurrentSettings;
-(BOOL)_isLowLightUpdatingDeferred;
-(BOOL)_isMenuButtonConflictingWithView:(id)arg0 ;
-(BOOL)_isPinchToZoomAllowed;
-(BOOL)_isPinchingForZoom;
-(BOOL)_isPrimaryDisplayAssetForCoordinationInfo:(id)arg0 ;
-(BOOL)_isShowingBurstIndicatorView;
-(BOOL)_isShowingCameraRoll;
-(BOOL)_isZoomAllowedCurrently;
-(BOOL)_isZoomAllowedForGraphConfiguration:(id)arg0 ;
-(BOOL)_isZooming;
-(BOOL)_modeChangeSwipeMatchesExposureBiasPanDirection;
-(BOOL)_redirectShutterEventIfNecessary:(NSUInteger)arg0 ;
-(BOOL)_shouldAllowControlDrawerForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldAllowControlDrawerToggleForGraphConfiguration:(id)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_shouldAnimateViewfinderCloseForReason:(NSInteger)arg0 ;
-(BOOL)_shouldApplyTopBarRotationForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldCreateAndEmbedControls;
-(BOOL)_shouldCreateLevelViewForMode:(NSInteger)arg0 ;
-(BOOL)_shouldCreatePhotosButton;
-(BOOL)_shouldDeferMediaLoadingForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldDisableCompromisedFlashForDevicePosition:(NSInteger)arg0 ;
-(BOOL)_shouldDisableModeForMultitaskingAndGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldEmulateAggregateCameraZoomForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldEnableApertureButton;
-(BOOL)_shouldEnableAspectRatioButton;
-(BOOL)_shouldEnableControlDrawerToggle;
-(BOOL)_shouldEnableControlStatusIndicator:(NSUInteger)arg0 ;
-(BOOL)_shouldEnableCreativeCameraButton;
-(BOOL)_shouldEnableDrawerControl:(NSInteger)arg0 ;
-(BOOL)_shouldEnableExposureControlButton;
-(BOOL)_shouldEnableFilterButton;
-(BOOL)_shouldEnableFlashButton;
-(BOOL)_shouldEnableFlipButton;
-(BOOL)_shouldEnableHDRButton;
-(BOOL)_shouldEnableImageWell;
-(BOOL)_shouldEnableIntensityButton;
-(BOOL)_shouldEnableLivePhotoButton;
-(BOOL)_shouldEnableLowLightControl;
-(BOOL)_shouldEnableModeDial;
-(BOOL)_shouldEnableRAWButton;
-(BOOL)_shouldEnableSemanticStyleControl;
-(BOOL)_shouldEnableShutterButton;
-(BOOL)_shouldEnableSwipeToChangeFilters;
-(BOOL)_shouldEnableSwipeToChangeSemanticStyle;
-(BOOL)_shouldEnableSwipeToModeSwitch;
-(BOOL)_shouldEnableTextAnalysisButton;
-(BOOL)_shouldEnableTimerButton;
-(BOOL)_shouldEnableVideoConfigurationControl;
-(BOOL)_shouldEnableZoomControl;
-(BOOL)_shouldEnableZoomSlider;
-(BOOL)_shouldHideApertureButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideAspectRatioControlForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideBottomBarForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideControlStatusIndicatorsForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideCreativeCameraButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideDoneButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideElapsedTimeViewForGraphConfiguration:(id)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_shouldHideFilterButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideFilterNameBadgeForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideFlashBadgeForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideFlashButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideFlipButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideFocusAndExposureLockBadgeForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideGridViewForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideHDRBadgeForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideHDRButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideImageWellForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideIntensityButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideLevelViewForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideLightingControlBadgeForGraphConfiguration:(id)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_shouldHideLightingControlForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideLightingNameBadgeForGraphConfiguration:(id)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_shouldHideLivePhotoBadgeForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideLivePhotoButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideModeDialForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideModeDialForGraphConfiguration:(id)arg0 isCapturingBurst:(BOOL)arg1 ;
-(BOOL)_shouldHidePanoramaViewForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHidePhotosButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHidePortraitModeInstructionLabelForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideQRCodeInstructionLabelForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideReviewButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideShallowDepthOfFieldBadgeForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideShutterButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideStillDuringVideoButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideTimerButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideTimerIndicatorViewForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideTopBarForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideUtilityBarForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideVideoConfigurationStatusIndicatorForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideZoomControlForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideZoomSliderForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldHideZoomSliderForGraphConfiguration:(id)arg0 ignoreExpiredVisibilityTimer:(BOOL)arg1 ;
-(BOOL)_shouldMonitorDeviceMotionForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldPauseCapturingStillImagePairedVideoForGraphConfiguration:(id)arg0 isShowingCameraRoll:(BOOL)arg1 ;
-(BOOL)_shouldProcessMachineReadableMetadata;
-(BOOL)_shouldReportUserInitiationTimeForCurrentSettings;
-(BOOL)_shouldRequestSpatialOverCaptureForGraphConfiguration:(id)arg0 ctmCaptureType:(NSInteger)arg1 isCapturingVideo:(BOOL)arg2 isBurst:(BOOL)arg3 ;
-(BOOL)_shouldResetZoomForChangeFromMode:(NSInteger)arg0 toMode:(NSInteger)arg1 ;
-(BOOL)_shouldRotateTopBarForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldShowDescriptionOverlayViewForMode:(NSInteger)arg0 ;
-(BOOL)_shouldShowDescriptionOverlayViewForMode:(NSInteger)arg0 viewClass:(*Class)arg1 ;
-(BOOL)_shouldShowDrawerControlOfType:(NSInteger)arg0 forGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldShowExposureButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldShowFlashCompromisedInstructionsForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldShowImageAnalysisButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldShowIndicatorOfType:(NSUInteger)arg0 forGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldShowLowLightControlForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldShowRAWButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldShowSemanticStyleControlForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldShowShutterButtonDisabled;
-(BOOL)_shouldShowViewfinderLegibilityBackgroundsForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldSwitchToVideoConfiguration:(NSInteger)arg0 ;
-(BOOL)_shouldUpdateCaptureOrientation;
-(BOOL)_shouldUseBurstForCaptureTimer;
-(BOOL)_shouldUseFiltersForGraphConfiguration:(id)arg0 ;
-(BOOL)_shouldUseZoomButtonForCameraToggleForCurrentModeAndDevice;
-(BOOL)_shouldUseZoomButtonForCameraToggleForGraphConfiguration:(id)arg0 ;
-(BOOL)_startCapturingPanoramaWithRequest:(id)arg0 ;
-(BOOL)_startCapturingVideoWithRequest:(id)arg0 ;
-(BOOL)_startTimelapse;
-(BOOL)_stopCapturingPanorama;
-(BOOL)_stopCapturingVideo;
-(BOOL)_stopTimelapse;
-(BOOL)_supportsSpatialOverCaptureForGraphConfiguration:(id)arg0 ctmCaptureType:(NSInteger)arg1 isCapturingVideo:(BOOL)arg2 isBurst:(BOOL)arg3 ;
-(BOOL)_updateDuetSystemConstraintsIfNecessary;
-(BOOL)_wantsCaptureAnimationForRequest:(id)arg0 ;
-(BOOL)_wantsHDRControlsVisible;
-(BOOL)_wantsLightingControlForGraphConfiguration:(id)arg0 ;
-(BOOL)_wantsZoomControlForGraphConfiguration:(id)arg0 ;
-(BOOL)_wantsZoomSliderForGraphConfiguration:(id)arg0 ;
-(BOOL)_zoomControlReconfiguresGraphConfiguration:(id)arg0 ;
-(BOOL)canToggleBetweenZoomFactorsForZoomControl:(id)arg0 ;
-(BOOL)capturePhoto;
-(BOOL)dynamicShutterControlCanStartOnTouchDown:(id)arg0 ;
-(BOOL)dynamicShutterControlShouldBeginGesture:(id)arg0 ;
-(BOOL)fullscreenViewfinderCanUpdatePreviewSemanticStyles:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)imageAnalysisInteraction:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 forAnalysisType:(NSUInteger)arg2 ;
-(BOOL)isEmulatingImagePicker;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)pressShutterButtonWithTouchUpDelay:(CGFloat)arg0 ;
-(BOOL)previewViewController:(id)arg0 gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)remoteShutterBeginBurstCapture:(id)arg0 ;
-(BOOL)remoteShutterEndBurstCapture:(id)arg0 ;
-(BOOL)remoteShutterShouldSuspendApp:(id)arg0 ;
-(BOOL)remoteShutterStartCapture:(id)arg0 ;
-(BOOL)remoteShutterStopCapture:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldHideLightingNameBadgeForOrientation:(NSInteger)arg0 ;
-(BOOL)startRecording;
-(BOOL)stopRecording;
-(BOOL)zoomControlCanPlayHaptics:(id)arg0 ;
-(BOOL)zoomControlShouldSnapDialToSwitchOverZoomFactors:(id)arg0 ;
-(CGFloat)_currentMaximumZoomFactor;
-(CGFloat)_defaultZoomFactorForGraphConfiguration:(id)arg0 ;
-(CGFloat)_exposureBiasForMode:(NSInteger)arg0 ;
-(CGFloat)_minimumExecutionTimeForChangeToGraphConfiguration:(id)arg0 fromGraphConfiguration:(id)arg1 ;
-(CGFloat)_zoomFactorForZoomSliderValue:(CGFloat)arg0 ;
-(CGFloat)_zoomSliderValueForZoomFactor:(CGFloat)arg0 ;
-(CGFloat)timeIntervalForDuration:(NSInteger)arg0 ;
-(NSInteger)_appropriateLayoutStyleForSize:(struct CGSize )arg0 ;
-(NSInteger)_aspectRatioCropForMode:(NSInteger)arg0 ;
-(NSInteger)_aspectRatioForMode:(NSInteger)arg0 ;
-(NSInteger)_autorotationStyleForLayoutStyle:(NSInteger)arg0 ;
-(NSInteger)_availableDefaultCaptureMode;
-(NSInteger)_bottomBarBackgroundStyleForMode:(NSInteger)arg0 ;
-(NSInteger)_captureFlashModeForMode:(NSInteger)arg0 ;
-(NSInteger)_currentCaptureRequestOrigin;
-(NSInteger)_currentPhotoEncodingBehavior;
-(NSInteger)_displayedFlashModeForMode:(NSInteger)arg0 flashActive:(*BOOL)arg1 ;
-(NSInteger)_effectFilterTypeForMode:(NSInteger)arg0 ;
-(NSInteger)_filterTypeForItemIndex:(NSInteger)arg0 ;
-(NSInteger)_itemIndexForFilterType:(NSInteger)arg0 ;
-(NSInteger)_lastCapturedFilterTypeForMode:(NSInteger)arg0 ;
-(NSInteger)_lowLightModeForMode:(NSInteger)arg0 captureMode:(NSInteger)arg1 device:(NSInteger)arg2 ctmCaptureType:(NSInteger)arg3 isBurst:(BOOL)arg4 ;
-(NSInteger)_maximumBurstLengthForTimer;
-(NSInteger)_nextFramerateVideoConfigurationForVideoConfiguration:(NSInteger)arg0 ;
-(NSInteger)_nextResolutionVideoConfigurationForVideoConfiguration:(NSInteger)arg0 ;
-(NSInteger)_numberOfTicksForTimerDuration:(NSInteger)arg0 ;
-(NSInteger)_persistenceOptionsForBehavior:(NSUInteger)arg0 allowingOptionalLocalPersistence:(BOOL)arg1 ;
-(NSInteger)_primaryInstructionLabelForGraphConfiguration:(id)arg0 ;
-(NSInteger)_sanitizedLightingTypeForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(NSInteger)_sanitizedVideoConfigurationForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(NSInteger)_secondaryInstructionLabelForGraphConfiguration:(id)arg0 ;
-(NSInteger)_shutterButtonModeForCameraMode:(NSInteger)arg0 isCapturing:(BOOL)arg1 ;
-(NSInteger)_temporaryPersistenceOptionsForBehavior:(NSUInteger)arg0 ;
-(NSInteger)_topBarBackgroundStyleForMode:(NSInteger)arg0 capturing:(BOOL)arg1 ;
-(NSInteger)_topBarStyleForGraphConfiguration:(id)arg0 capturing:(BOOL)arg1 ;
-(NSInteger)_videoConfigurationForImagePickerQualityType:(NSInteger)arg0 ;
-(NSInteger)_videoConfigurationFramerateForGraphConfiguration:(id)arg0 ;
-(NSInteger)_videoConfigurationResolutionForGraphConfiguration:(id)arg0 ;
-(NSInteger)cameraRollControllerPreferredPresentationOrientation:(id)arg0 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)_currentSemanticStyleSupport;
-(NSUInteger)_nextModeSwitchDirectionForLayoutStyle:(NSInteger)arg0 ;
-(NSUInteger)_previewConfigurationForMode:(NSInteger)arg0 videoThumbnailOutputEnabled:(BOOL)arg1 ;
-(NSUInteger)_previousModeSwipeDirectionForLayoutStyle:(NSInteger)arg0 ;
-(NSUInteger)_reasonsToDisableCreativeCameraButton;
-(NSUInteger)_reasonsToDisableShutterButton;
-(NSUInteger)_supportedInterfaceOrientationsForLayoutStyle:(NSInteger)arg0 wantsTextAnalysis:(BOOL)arg1 ;
-(NSUInteger)feedbackTypeForImageAnalysisInteraction:(id)arg0 ;
-(NSUInteger)preferredScreenEdgesDeferringSystemGestures;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_acceptableSizeMRCResultsFromResults:(id)arg0 ;
-(id)_allControlDrawerTypes;
-(id)_automaticallyAdjustedCaptureModes;
-(id)_captureFiltersForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(id)_controlTypesForGraphConfiguration:(id)arg0 ;
-(id)_debugEnabledDescriptionForControl:(id)arg0 withReason:(id)arg1 ;
-(id)_debugStringForApplicationDeactivationReason:(int)arg0 ;
-(id)_filteredTextResults:(id)arg0 ;
-(id)_flashOrTorchDisabledMessageForCurrentPowerPressure;
-(id)_generateAnalyticsCaptureEventForTimelapse;
-(id)_generateAnalyticsCaptureEventWithRequest:(id)arg0 burst:(BOOL)arg1 ;
-(id)_getOrCreateDescriptionOverlayViewIfNecessaryForMode:(NSInteger)arg0 ;
-(id)_graphConfigurationForChangeToMode:(NSInteger)arg0 device:(NSInteger)arg1 fromGraphConfiguration:(id)arg2 ;
-(id)_mutableSupportedCaptureModes;
-(id)_originalCaptureFiltersForMode:(NSInteger)arg0 ;
-(id)_panoramaCaptureRequestWithCurrentSettings;
-(id)_previewFiltersForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(id)_primaryControlStatusIndicatorTypes;
-(id)_secondaryControlStatusIndicatorTypes;
-(id)_semanticStyleForCapture;
-(id)_semanticStyleForCaptureWithSupport:(NSUInteger)arg0 ;
-(id)_semanticStyleForPreview;
-(id)_semanticStyleForPreviewWithSupport:(NSUInteger)arg0 ;
-(id)_stillImageCaptureRequestForTextAnalysis;
-(id)_stillImageCaptureRequestWithCurrentSettingsAsBurst:(BOOL)arg0 withMomentSettings:(id)arg1 withCTMCaptureType:(NSInteger)arg2 maximumLength:(NSInteger)arg3 ;
-(id)_targetFilterScrubberView;
-(id)_targetLightingControl;
-(id)_videoCaptureRequestWithCurrentSettings;
-(id)cameraRollControllerImageForReveal:(id)arg0 ;
-(id)cameraRollControllerPresentingViewController:(id)arg0 ;
-(id)currentContentSize;
-(id)dynamicShutterControlTopLevelSuperview:(id)arg0 ;
-(id)fullscreenViewfinderSelectedSemanticStyle:(id)arg0 ;
-(id)fullscreenViewfinderSemanticStyleList:(id)arg0 ;
-(id)initWithCaptureController:(id)arg0 captureConfiguration:(id)arg1 conflictingControlConfiguration:(id)arg2 locationController:(id)arg3 motionController:(id)arg4 timelapseController:(id)arg5 keepAliveController:(id)arg6 remoteShutterController:(id)arg7 powerController:(id)arg8 cameraRollController:(id)arg9 callStatusMonitor:(id)arg10 storageController:(id)arg11 usingEmulationMode:(NSInteger)arg12 initialLayoutStyle:(NSInteger)arg13 options:(NSInteger)arg14 ;
-(id)modesForModeDial:(id)arg0 ;
-(id)modesForModeSelector:(id)arg0 ;
-(id)presentingViewControllerForAction:(id)arg0 ;
-(id)viewfinderView;
-(struct ? )_dynamicShutterSettingsForGraphConfiguration:(id)arg0 ;
-(struct CGPoint )prominentObjectManagerPointOfInterestInNormalizedDeviceSpace:(id)arg0 ;
-(struct CGRect )cameraRollControllerPreviewSourceRect:(id)arg0 ;
-(struct CGRect )cameraRollControllerSourceAssetRect:(id)arg0 ;
-(struct CGSize )_desiredPreviewSizeForStillImageCapture;
-(struct CGSize )_portraitOrientedSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )viewSystemLayoutSizeFittingSize:(struct CGSize )arg0 forCaptureMode:(NSInteger)arg1 ;
-(void)_acknowledgeDescriptionOverlayViewForMode:(NSInteger)arg0 ;
-(void)_apertureSliderDidChangeApertureValue:(id)arg0 ;
-(void)_applyAutorotationCorrectingTransformForOrientation:(NSInteger)arg0 ;
-(void)_applySelectedEffectFilterType:(NSInteger)arg0 ;
-(void)_applyTransformsForAutorotationStyle:(NSInteger)arg0 ;
-(void)_attemptShutterPressWithBlock:(id)arg0 ;
-(void)_attemptShutterReleaseWithBlock:(id)arg0 ;
-(void)_beginCapturingBurst;
-(void)_beginDisablingInterfaceAutorotation;
-(void)_cancelCTMCapture;
-(void)_cancelCaptureAnimation;
-(void)_captureOrientationChanged:(id)arg0 ;
-(void)_captureRequest:(id)arg0 didCompleteVideoCaptureWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_changeToGraphConfiguration:(id)arg0 zoomFactor:(CGFloat)arg1 fromGraphConfiguration:(id)arg2 ;
-(void)_changeToZoomFactor:(CGFloat)arg0 rampDuration:(CGFloat)arg1 shouldAnimate:(BOOL)arg2 ;
-(void)_clearFilterScrubberLayerContentsIfNotNeededFromCallsite:(id)arg0 ;
-(void)_closeViewfinderForChangeFromMode:(NSInteger)arg0 toMode:(NSInteger)arg1 fromDevice:(NSInteger)arg2 toDevice:(NSInteger)arg3 ;
-(void)_collapseExpandedButtonsAnimated:(BOOL)arg0 ;
-(void)_commitCTMCaptureWithType:(NSInteger)arg0 ;
-(void)_configureZoomControlForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_createApertureButtonIfNecessary;
-(void)_createBurstIndicatorViewIfNecessary;
-(void)_createCameraRollSwipeUpGestureRecognizerIfNecessary;
-(void)_createCommonControlsIfNecessary;
-(void)_createCommonGestureRecognizersIfNecessary;
-(void)_createCreativeCameraButtonIfNecessary;
-(void)_createDoneButtonIfNecessary;
-(void)_createElapsedTimeViewIfNecessary;
-(void)_createFilterButtonIfNecessary;
-(void)_createFilterNameBadgeIfNecessary;
-(void)_createFilterScrubberGestureRecognizersIfNecessary;
-(void)_createFilterScrubberViewIfNecessary;
-(void)_createFlashBadgeIfNecessary;
-(void)_createFlashButtonIfNecessary;
-(void)_createFlipButtonIfNecessary;
-(void)_createFocusAndExposureLockBadgeIfNecessary;
-(void)_createGridViewIfNecessary;
-(void)_createHDRBadgeIfNecessary;
-(void)_createHDRButtonIfNecessary;
-(void)_createImageAnalysisButtonIfNeeded;
-(void)_createImageWellIfNecessary;
-(void)_createIntensityButtonIfNecessary;
-(void)_createLevelViewIfNecessary;
-(void)_createLightingControlIfNecessary;
-(void)_createLightingNameBadgeIfNecessary;
-(void)_createLivePhotoBadgeIfNecessary;
-(void)_createLivePhotoButtonIfNecessary;
-(void)_createMetalContextIfNecessary;
-(void)_createModeDialIfNecessary;
-(void)_createModeSpecificControlsForConfiguration:(id)arg0 ;
-(void)_createOrDestroyGridViewIfNecessary;
-(void)_createOrDestroyHDRBadgeIfNecessary;
-(void)_createOrDestroyHDRButtonIfNecessary;
-(void)_createOrDestroyLevelViewIfNecessary;
-(void)_createPanoramaControlsIfNecessary;
-(void)_createPanoramaViewControllerIfNecessary;
-(void)_createPhotosButtonIfNecessary;
-(void)_createPhysicalCaptureRecognizerOrNotifierIfNecessary;
-(void)_createPortraitApertureSliderIfNecessary;
-(void)_createPortraitIntensitySliderIfNecessary;
-(void)_createPortraitModeControlsIfNecessary;
-(void)_createPortraitModeInstructionLabelIfNecessary;
-(void)_createQRCodeInstructionLabelIfNecessary;
-(void)_createReviewButtonIfNecessary;
-(void)_createShallowDepthOfFieldBadgeIfNecessary;
-(void)_createShutterButtonIfNecessary;
-(void)_createStillDuringVideoButtonIfNecessary;
-(void)_createStillImageControlsIfNecessary;
-(void)_createSwipeToModeSwitchGestureRecognizersIfNecessary;
-(void)_createTimelapseControlsIfNecessary;
-(void)_createTimerButtonIfNecessary;
-(void)_createTimerIndicatorViewIfNecessary;
-(void)_createUtilityBarIfNecessary;
-(void)_createVerticalSwipeGestureRecognizersIfNecessary;
-(void)_createVideoConfigurationStatusIndicatorIfNecessary;
-(void)_createVideoControlsIfNecessary;
-(void)_createZoomControlIfNecessary;
-(void)_createZoomPinchGestureRecognizerIfNecessary;
-(void)_createZoomSliderIfNecessary;
-(void)_destroyFilterScrubberViewIfNecessary;
-(void)_destroyGestureRecognizersRequiringStandardControls;
-(void)_destroyGridViewIfNecessary;
-(void)_destroyHDRBadgeIfNecessary;
-(void)_destroyHDRButtonIfNecessary;
-(void)_destroyLevelViewIfNecessary;
-(void)_didChangeToGraphConfiguration:(id)arg0 forDesiredConfiguration:(id)arg1 requestID:(int)arg2 ;
-(void)_dismissDescriptionOverlayView:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)_dismissDiskSpaceAlertViewAnimated:(BOOL)arg0 ;
-(void)_dismissFlashOrTorchUnavailableAlertViewAnimated:(BOOL)arg0 ;
-(void)_dismissOverlays;
-(void)_dominantPhysicalButtonChanged:(id)arg0 ;
-(void)_embedAllControlsWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedApertureButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedBurstIndicatorViewWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedCreativeCameraButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedDescriptionOverlayView:(id)arg0 forMode:(NSInteger)arg1 ;
-(void)_embedDoneButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedElapsedTimeViewWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedFilterButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedFilterNameBadgeWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedFilterScrubberViewWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedFlashBadgeWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedFlashButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedFlipButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedFocusAndExposureLockBadgeWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedGridViewWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedHDRBadgeWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedHDRButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedImageWellWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedIntensityButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedLevelViewWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedLightingControlWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedLightingNameBadgeWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedLivePhotoBadgeWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedLivePhotoButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedModeDialWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedPanoramaViewWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedPhotosButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedPortraitApertureSliderWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedPortraitIntensitySliderWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedPortraitModeInstructionLabelWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedQRCodeInstructionLabelWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedReviewButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedShallowDepthOfFieldBadgeWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedShutterButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedStillDuringVideoButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedTimerButtonWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedTimerIndicatorViewWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedUtilityBarWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedVideoConfigurationStatusIndicatorWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedZoomControlWithLayoutStyle:(NSInteger)arg0 ;
-(void)_embedZoomSliderWithLayoutStyle:(NSInteger)arg0 ;
-(void)_enableProactiveSuggestionsAnimated:(BOOL)arg0 ;
-(void)_endDisablingInterfaceAutorotation;
-(void)_ensureSensitiveContentHidden;
-(void)_forceHideBadgesAnimated:(BOOL)arg0 ;
-(void)_handleApertureButtonTapped:(id)arg0 ;
-(void)_handleApplicationDidBecomeActive:(id)arg0 ;
-(void)_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_handleApplicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_handleApplicationWillAddDeactivationReason:(id)arg0 ;
-(void)_handleApplicationWillEnterForeground:(id)arg0 ;
-(void)_handleApplicationWillResignActive:(id)arg0 ;
-(void)_handleBurstTimerFired:(id)arg0 ;
-(void)_handleCallStatusMonitorDidChangeCallActive:(id)arg0 ;
-(void)_handleCameraRollSwipeUpGestureRecognizer:(id)arg0 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleCreativeCameraButtonPressed:(id)arg0 ;
-(void)_handleCreativeCameraButtonReleased:(id)arg0 ;
-(void)_handleCreativeCameraButtonTouchAttemptedWhileDisabled:(id)arg0 ;
-(void)_handleDisabledShutterTap;
-(void)_handleDoneButtonReleased:(id)arg0 ;
-(void)_handleExposureSliderDidChangeValue:(id)arg0 ;
-(void)_handleFilterButtonTapped:(id)arg0 ;
-(void)_handleFlashButtonChangedFlashMode;
-(void)_handleFlashButtonWhileFlashUnavailable;
-(void)_handleFlashIndicator;
-(void)_handleFlipButtonReleased:(id)arg0 ;
-(void)_handleFlipButtonTouchDown:(id)arg0 ;
-(void)_handleGeneralCaptureControllerSuspension;
-(void)_handleHDRButtonChangedHDRMode;
-(void)_handleHDRIndicator;
-(void)_handleImageAnalysisButtonTapped:(id)arg0 ;
-(void)_handleImageWellPressed:(id)arg0 ;
-(void)_handleImageWellReleased:(id)arg0 ;
-(void)_handleIntensityButtonTapped:(id)arg0 ;
-(void)_handleIntensitySliderDidChangeValue:(id)arg0 ;
-(void)_handleLivePhotoButtonChangedLivePhotoMode;
-(void)_handleLivePhotoIndicator;
-(void)_handleLowLightSliderDidChangeValue:(id)arg0 ;
-(void)_handleModeDialTouchDown:(id)arg0 ;
-(void)_handleModeDialValueChanged:(id)arg0 ;
-(void)_handlePhotosButtonReleased:(id)arg0 ;
-(void)_handlePhysicalButtonCancelled:(NSInteger)arg0 ;
-(void)_handlePhysicalButtonPressed:(NSInteger)arg0 ;
-(void)_handlePhysicalButtonReleased:(NSInteger)arg0 ;
-(void)_handlePhysicalCaptureRecognizer:(id)arg0 ;
-(void)_handleRAWIndicator;
-(void)_handleSceneDidEnterBackground:(id)arg0 ;
-(void)_handleSemanticStyleControlDidChangeValue:(id)arg0 ;
-(void)_handleShutterButtonActionWithEventTriggerDescription:(id)arg0 ;
-(void)_handleShutterButtonCancelled:(id)arg0 ;
-(void)_handleShutterButtonDragEnter:(id)arg0 ;
-(void)_handleShutterButtonDragExited:(id)arg0 ;
-(void)_handleShutterButtonPressed:(id)arg0 ;
-(void)_handleShutterButtonReleased:(id)arg0 ;
-(void)_handleShutterButtonReleased:(id)arg0 fromDragExit:(BOOL)arg1 ;
-(void)_handleStillDuringVideoButtonPressed:(id)arg0 ;
-(void)_handleStillDuringVideoButtonReleased:(id)arg0 ;
-(void)_handleSwipeDownGestureRecognizer:(id)arg0 ;
-(void)_handleSwipeToNextFilterRecognizer:(id)arg0 ;
-(void)_handleSwipeToPreviousFilterRecognizer:(id)arg0 ;
-(void)_handleSwipeUpGestureRecognizer:(id)arg0 ;
-(void)_handleTextAnalysisStillImageResponse:(id)arg0 error:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleTimelapseLowDiskSpaceNotification:(id)arg0 ;
-(void)_handleTimerButtonChangedTimerDuration;
-(void)_handleTouchDownForZoomControl:(id)arg0 ;
-(void)_handleTouchDownForZoomSlider:(id)arg0 ;
-(void)_handleUserChangedRAWMode:(NSInteger)arg0 ;
-(void)_handleUserChangedToDevice:(NSInteger)arg0 ;
-(void)_handleUserChangedToFlashMode:(NSInteger)arg0 ;
-(void)_handleUserChangedToHDRMode:(NSInteger)arg0 ;
-(void)_handleUserChangedToLivePhotoMode:(NSInteger)arg0 ;
-(void)_handleUserChangedToMode:(NSInteger)arg0 ;
-(void)_handleUserChangedToMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(void)_handleUserChangedToMode:(NSInteger)arg0 device:(NSInteger)arg1 zoomFactor:(CGFloat)arg2 ;
-(void)_handleUserChangedToVideoConfiguration:(NSInteger)arg0 ;
-(void)_handleZoomPinchGestureRecognizer:(id)arg0 ;
-(void)_hideBurstIndicatorView;
-(void)_hideControlsForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_hideUtilityBarAnimated:(BOOL)arg0 ;
-(void)_imageWellSetContentHidden:(BOOL)arg0 ;
-(void)_indicateCaptureTimerProgressUsingTorch;
-(void)_initiateCTMCaptureWithCurrentSettingsAtSystemTime:(NSUInteger)arg0 ;
-(void)_layoutViewfinderForShowingFilterScrubber:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_limitZoomRangeForRecordingIfNecessary;
-(void)_openViewfinderForAllModeAndDeviceChangeReasons;
-(void)_pausePairedVideoCaptureOnControllerIfNecessaryForGraphConfiguration:(id)arg0 isShowingCameraRoll:(BOOL)arg1 ;
-(void)_performCaptureAnimation;
-(void)_performCaptureAnimationWithDuration:(CGFloat)arg0 ;
-(void)_performCaptureAnimationWithDuration:(CGFloat)arg0 curve:(id)arg1 color:(id)arg2 fadeOut:(BOOL)arg3 ;
-(void)_performChangeFromGraphConfiguration:(id)arg0 toGraphConfiguration:(id)arg1 zoomFactor:(CGFloat)arg2 deferIfConfigurationInFlight:(BOOL)arg3 ;
-(void)_populateZoomForCaptureEvent:(id)arg0 ;
-(void)_prepareTopBarForOrientationChangeDuringConfiguration;
-(void)_presentCameraRollViewControllerAnimated:(BOOL)arg0 interactive:(BOOL)arg1 ;
-(void)_presentCameraRollViewControllerIfPossibleAnimated:(BOOL)arg0 interactive:(BOOL)arg1 ;
-(void)_presentImageWellImage:(id)arg0 uuid:(id)arg1 animated:(BOOL)arg2 ;
-(void)_previewDidStartRunning:(id)arg0 ;
-(void)_processResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)_reconfigureCaptureGraphWithCurrentMode;
-(void)_resetAggregateInfoForPhotoFilters;
-(void)_resetExposureClipping;
-(void)_resetLowLightDurationMappingAnimated:(BOOL)arg0 ;
-(void)_resetMachineReadableMetadataAndProcessing;
-(void)_resetPortraitModeApertureValueIfNeededForGraphConfiguration:(id)arg0 ;
-(void)_resetZoom;
-(void)_resolveAndUpdatePotentiallyConflictingControls:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_resolvePotentiallyConflictingControlsForMode:(NSInteger)arg0 device:(NSInteger)arg1 resolvedFlashMode:(*NSInteger)arg2 resolvedHDRMode:(*NSInteger)arg3 resolvedLivePhotoMode:(*NSInteger)arg4 resolvedRAWMode:(*NSInteger)arg5 ;
-(void)_restoreZoomRangeAfterRecordingIfNecessary;
-(void)_rotateTopBarAndControlsToOrientation:(NSInteger)arg0 shouldAnimate:(BOOL)arg1 ;
-(void)_setEffectFilterType:(NSInteger)arg0 forMode:(NSInteger)arg1 ;
-(void)_setExposureBias:(CGFloat)arg0 forMode:(NSInteger)arg1 ;
-(void)_setLightingType:(NSInteger)arg0 forMode:(NSInteger)arg1 ;
-(void)_setRAWConflict:(NSUInteger)arg0 isConflicting:(BOOL)arg1 ;
-(void)_setupAndStartSynchronizedCaptureTimerDelegate;
-(void)_setupBurstTimerWithDelay:(CGFloat)arg0 ;
-(void)_showBurstIndicatorView;
-(void)_showControlsForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showDiskSpaceAlertView;
-(void)_showFlashOrTorchUnavailableAlertView;
-(void)_shutterButtonSetSpinning:(BOOL)arg0 ;
-(void)_snapshotAndFadeDisappearingOverlayViewsForChangeToGraphConfiguration:(id)arg0 ;
-(void)_snapshotAndFadeDisappearingView:(id)arg0 ;
-(void)_snapshotAndFadeDisappearingView:(id)arg0 parentViewOverride:(id)arg1 shouldHideView:(BOOL)arg2 ;
-(void)_snapshotImageWellAndPersist;
-(void)_snapshotShutterButtonAndPersist;
-(void)_startCaptureSessionIfNecessaryIfVisibleAndInterrupted;
-(void)_startCapturingBurstWithRequest:(id)arg0 ;
-(void)_startCountdownForCaptureTimer;
-(void)_startFlashingLivePhotoBadge;
-(void)_startGeneratingDominantPhysicalButtonNotificationsIfSupported;
-(void)_startSynchronizedCaptureTimerDelegate;
-(void)_stopCaptureTimerProgressUsingTorch;
-(void)_stopCapturingBurst;
-(void)_stopCapturingCTMVideo;
-(void)_stopCountdownForCaptureTimer;
-(void)_stopFlashingLivePhotoBadge;
-(void)_stopGeneratingDominantPhysicalButtonNotificationsIfSupported;
-(void)_suppressProactiveSuggestionAnimated:(BOOL)arg0 ;
-(void)_swipedToNextCameraMode;
-(void)_swipedToPreviousCameraMode;
-(void)_synchronizedCaptureTimerDelegateFired:(id)arg0 ;
-(void)_teardownBurstTimer;
-(void)_teardownSynchronizedCaptureTimerDelegate;
-(void)_toggleBetweenBackFacingZoomFactorsForZoomControl:(id)arg0 ;
-(void)_toggleBetweenFrontFacingZoomFactorsForZoomControl:(id)arg0 ;
-(void)_unembedAndDestroyAllControls;
-(void)_unembedGridView;
-(void)_unembedLevelView;
-(void)_updateAGGDForPanoramaCaptureRequest:(id)arg0 ;
-(void)_updateAGGDForPanoramaCaptureResponse:(id)arg0 request:(id)arg1 ;
-(void)_updateAGGDForStillImageCaptureRequest:(id)arg0 ;
-(void)_updateAGGDForStillImageCaptureResponse:(id)arg0 request:(id)arg1 ;
-(void)_updateAGGDForVideoCaptureResponse:(id)arg0 request:(id)arg1 ;
-(void)_updateAllControlsWithContentSize:(id)arg0 ;
-(void)_updateApertureAggregateDictionariesForRequest:(id)arg0 ;
-(void)_updateBadgeVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateBarBackgroundStyleForMode:(NSInteger)arg0 capturing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateCachedMRCResults:(id)arg0 ;
-(void)_updateCaptureTimerIndicatorWithFaceResult:(id)arg0 ;
-(void)_updateControlDrawerContentsVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateControlDrawerContentsVisibilityForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateControlStatusBarContentsVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateControlStatusBarContentsVisibilityForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateControlsDisabledByLowLightAnimated:(BOOL)arg0 ;
-(void)_updateControlsForVisibleFilterScrubberAnimated:(BOOL)arg0 ;
-(void)_updateDescriptionOverlayVisibilityForMode:(NSInteger)arg0 allowShow:(BOOL)arg1 allowHide:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateDesiredPhysicalButtonsForDominantButton:(NSInteger)arg0 ;
-(void)_updateDisabledModeUIAnimated:(BOOL)arg0 ;
-(void)_updateDiskSpaceAlertViewVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateDoneButtonIfNeeded;
-(void)_updateEnabledControlsWithReason:(id)arg0 ;
-(void)_updateEnabledControlsWithReason:(id)arg0 forceLog:(BOOL)arg1 ;
-(void)_updateExposureButtonForCurrentState;
-(void)_updateExposureSliderForCurrentState;
-(void)_updateFilterAggregateDictionariesForRequest:(id)arg0 ;
-(void)_updateFilterButtonOnState;
-(void)_updateFilterNameBadgeAnimated:(BOOL)arg0 ;
-(void)_updateFilterScrubberAfterCapture;
-(void)_updateFilterScrubberForGraphConfiguration:(id)arg0 ;
-(void)_updateFlashButtonAvailability;
-(void)_updateFlashButtonForMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateFlashModeOnControllerForMode:(NSInteger)arg0 ;
-(void)_updateFocusAfterZoomIfNecessary;
-(void)_updateFocusAndExposureLockBadgeAnimated:(BOOL)arg0 ;
-(void)_updateForCurrentConfiguration;
-(void)_updateForCurrentMachineReadableCodeAction;
-(void)_updateForShallowDepthOfFieldStatusChangedAnimated:(BOOL)arg0 ;
-(void)_updateFullscreenViewfinderControlsVisibilityForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateHDRButtonAnimated:(BOOL)arg0 ;
-(void)_updateHDRSuggestionMonitoringForGraphConfiguration:(id)arg0 ;
-(void)_updateHomeIndicatorBehaviorsForCaptureOrientation;
-(void)_updateImageAnalysisButton;
-(void)_updateImageAnalysisInstructions;
-(void)_updateImageWellWithStillImageResponse:(id)arg0 forRequest:(id)arg1 error:(id)arg2 ;
-(void)_updateIntensityButtonForCurrentState;
-(void)_updateInterfaceModulationForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateLayoutStyleForSize:(struct CGSize )arg0 ;
-(void)_updateLevelMotionTracking;
-(void)_updateLightingAggregateDictionariesForRequest:(id)arg0 ;
-(void)_updateLightingControlFadesForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateLightingUIForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateLivePhotoAggregateDictionaryForRequest:(id)arg0 ;
-(void)_updateLivePhotoButtonAnimated:(BOOL)arg0 ;
-(void)_updateLowLightConflict:(NSUInteger)arg0 isConflicting:(BOOL)arg1 ;
-(void)_updateLowLightControlsAnimated:(BOOL)arg0 ;
-(void)_updateLowLightSlider;
-(void)_updateOriginForRequest:(id)arg0 ;
-(void)_updatePairedVideoCaptureOnControllerForGraphConfiguration:(id)arg0 isShowingCameraRoll:(BOOL)arg1 ;
-(void)_updatePanoramaSizeIfNeededForGraphConfiguration:(id)arg0 ;
-(void)_updatePanoramaViewVisibilityForViewfinderTransition;
-(void)_updatePhysicalButtonCapturedEnabledResigningActiveOrDisappearing:(BOOL)arg0 ;
-(void)_updatePortraitApertureButtonForGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updatePortraitApertureSliderForGraphConfiguration:(id)arg0 ;
-(void)_updatePortraitIntensityEffectAggregateDictionariesForRequest:(id)arg0 ;
-(void)_updatePortraitIntensitySliderForCurrentState;
-(void)_updatePortraitModeInstructionLabelForCurrentState;
-(void)_updatePressTypeAggregateDictionariesForRequest:(id)arg0 ;
-(void)_updatePreviewSemanticStyleAnimated:(BOOL)arg0 ;
-(void)_updateProminentObjectManagerWithCachedMetadataResults;
-(void)_updatePropertiesForCaptureConfiguration:(id)arg0 conflictingControlConfiguration:(id)arg1 ;
-(void)_updateQRCodeInstructionLabelForCurrentState;
-(void)_updateRAWButtonAnimated:(BOOL)arg0 ;
-(void)_updateRAWModeOnController;
-(void)_updateResolvedLowLightModeAnimated:(BOOL)arg0 ;
-(void)_updateSemanticStyleControlsForCurrentStateAnimated:(BOOL)arg0 ;
-(void)_updateShutterButtonForEndOfLowLightCapture;
-(void)_updateShutterButtonForGraphConfiguration:(id)arg0 isCapturing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateShutterButtonLegibility;
-(void)_updateSphereAggregateDictionariesForResponse:(id)arg0 ;
-(void)_updateStillImageCaptureTypeAggregateDictionariesForRequest:(id)arg0 response:(id)arg1 ;
-(void)_updateSwipeToModeSwitchGestureRecognizersWithDirectionsForLayoutStyle:(NSInteger)arg0 ;
-(void)_updateTextAnalysisWithInsert:(id)arg0 instructions:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTopBarForLightingType:(NSInteger)arg0 ;
-(void)_updateTopBarStyleForGraphConfiguration:(id)arg0 capturing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTorchAggregateDictionaryForRequest:(id)arg0 isTorchActive:(BOOL)arg1 ;
-(void)_updateTorchModeAnimated:(BOOL)arg0 ;
-(void)_updateTorchModeOnControllerForMode:(NSInteger)arg0 ;
-(void)_updateUIForCaptureOrientationAnimated:(BOOL)arg0 ;
-(void)_updateUIForCapturing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateUserInitiationTimeForRequest:(id)arg0 ;
-(void)_updateUserPreferencesForFilterUsage;
-(void)_updateVideoAGGDForCaptureRequest:(id)arg0 ;
-(void)_updateVideoConfigurationAggregateDictionaryForRequest:(id)arg0 ;
-(void)_updateVideoConfigurationStatusIndicatorForGraphConfiguration:(id)arg0 ;
-(void)_updateVideoDurationAGGDForCaptureRequest:(id)arg0 videoCaptureResponse:(id)arg1 ;
-(void)_updateViewfinderMaterialAnimated:(BOOL)arg0 ;
-(void)_updateViewfinderMaterialFromStatus:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateZoomAggregateDictionaryForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ctmCaptureType:(NSInteger)arg3 zoomFactor:(CGFloat)arg4 zoomInteractionType:(NSInteger)arg5 ;
-(void)_updateZoomAggregateDictionaryForRequest:(id)arg0 response:(id)arg1 ;
-(void)_updateZoomButtonSymbolForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 zoomFactor:(CGFloat)arg3 animated:(BOOL)arg4 ;
-(void)_updateZoomControlAccessoryStateAnimated:(BOOL)arg0 ;
-(void)_updateZoomControlLayoutForGraphConfiguration:(id)arg0 fromGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateZoomFactorForZoomFactor:(CGFloat)arg0 rampDuration:(CGFloat)arg1 interactionType:(NSInteger)arg2 didChangeDevice:(id)arg3 ;
-(void)_updateZoomUIWithZoomFactor:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_validateViewfinderLayoutIfNeeded;
-(void)_willChangeToGraphConfiguration:(id)arg0 zoomFactor:(CGFloat)arg1 fromGraphConfiguration:(id)arg2 animated:(BOOL)arg3 ;
-(void)_writeUserPreferences;
-(void)_zoomSliderValueDidChange:(id)arg0 forEvent:(id)arg1 ;
-(void)_zoomUIDidChangeToFactor:(CGFloat)arg0 ;
-(void)accessibilityHUDManager:(id)arg0 wantsToShowHUDItem:(id)arg1 ;
-(void)applyCaptureConfiguration:(id)arg0 conflictingControlConfiguration:(id)arg1 ;
-(void)availableDiskSpaceChanged;
-(void)badgeTray:(id)arg0 didCreateBadgeForType:(NSUInteger)arg1 ;
-(void)cameraRollController:(id)arg0 didChangeImageWellImage:(id)arg1 withUUID:(id)arg2 animated:(BOOL)arg3 ;
-(void)cameraRollController:(id)arg0 didDismissPreviewControllerShouldStartCaptureSession:(BOOL)arg1 ;
-(void)cameraRollController:(id)arg0 shouldHideSourceAsset:(BOOL)arg1 ;
-(void)cameraRollController:(id)arg0 willShowPresentingViewControllerShouldStartCaptureSession:(BOOL)arg1 ;
-(void)cameraRollControllerDidDismissFullyPresentedCameraRoll:(id)arg0 ;
-(void)cameraRollControllerDidFullyPresentCameraRoll:(id)arg0 ;
-(void)cameraRollControllerDidStartSession:(id)arg0 ;
-(void)cameraRollControllerPrefersPresentingStatusbarHiddenDidChange:(id)arg0 ;
-(void)cameraRollControllerRequestsCaptureSessionStopped:(id)arg0 ;
-(void)cameraRollControllerRevealDidEnd:(id)arg0 ;
-(void)cameraRollControllerRevealWillBegin:(id)arg0 ;
-(void)cameraRollControllerWillPresentPreviewController:(id)arg0 ;
-(void)captureController:(id)arg0 didChangeRampingVideoZoom:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didChangeToGraphConfiguration:(id)arg1 forDesiredConfiguration:(id)arg2 requestID:(int)arg3 ;
-(void)captureController:(id)arg0 didOutputAppClipCodeResults:(id)arg1 ;
-(void)captureController:(id)arg0 didOutputCaptureAvailability:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didOutputConfigurationAvailability:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didOutputFaceResults:(id)arg1 headResults:(id)arg2 bodyResults:(id)arg3 salientObjectResults:(id)arg4 ;
-(void)captureController:(id)arg0 didOutputFlashActive:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didOutputFlashAvailability:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didOutputFlashCompromise:(NSUInteger)arg1 ;
-(void)captureController:(id)arg0 didOutputHDRSuggestion:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didOutputHistogramResult:(id)arg1 ;
-(void)captureController:(id)arg0 didOutputLowLightModeDurationMapping:(struct ? )arg1 ;
-(void)captureController:(id)arg0 didOutputLowLightStatus:(NSInteger)arg1 ;
-(void)captureController:(id)arg0 didOutputMinAvailableVideoZoomFactor:(CGFloat)arg1 ;
-(void)captureController:(id)arg0 didOutputOverCapturePreviewStatus:(NSInteger)arg1 ;
-(void)captureController:(id)arg0 didOutputQRCodeResults:(id)arg1 ;
-(void)captureController:(id)arg0 didOutputShallowDepthOfFieldStatus:(NSInteger)arg1 stagePreviewStatus:(NSInteger)arg2 ;
-(void)captureController:(id)arg0 didOutputTextRegionResults:(id)arg1 ;
-(void)captureController:(id)arg0 didOutputTorchActive:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didOutputTorchAvailability:(BOOL)arg1 ;
-(void)captureController:(id)arg0 didOutputVideoZoomFactor:(CGFloat)arg1 ;
-(void)captureController:(id)arg0 willRecoverFromRuntimeError:(id)arg1 ;
-(void)captureControllerDidReachMaximumBurstLength:(id)arg0 ;
-(void)captureControllerDidStartRunning:(id)arg0 ;
-(void)captureControllerDidStopCapturingBurst:(id)arg0 ;
-(void)captureControllerDidStopPlayingBurstEndSound:(id)arg0 ;
-(void)captureControllerDidStopRunning:(id)arg0 ;
-(void)captureControllerInterruptionEnded:(id)arg0 ;
-(void)captureControllerWasInterrupted:(id)arg0 ;
-(void)captureControllerWillStartCapturingBurst:(id)arg0 ;
-(void)captureControllerWillStartPlayingBurstEndSound:(id)arg0 ;
-(void)changeToMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(void)changeToMode:(NSInteger)arg0 device:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)closedViewfinderController:(id)arg0 wantsViewfinderClosedForReason:(NSInteger)arg1 ;
-(void)closedViewfinderController:(id)arg0 wantsViewfinderOpenForReason:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didChangeAspectRatio:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didChangeFlashMode:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didChangeHDRMode:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didChangeLivePhotoMode:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didChangeRAWMode:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didChangeTimerDuration:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didCreateControlForType:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 didSelectMenuItemForControlType:(NSInteger)arg1 ;
-(void)controlDrawer:(id)arg0 wantsFilterScrubberVisible:(BOOL)arg1 ;
-(void)controlDrawerDidCreateApertureSlider:(id)arg0 ;
-(void)controlDrawerDidCreateExposureSlider:(id)arg0 ;
-(void)controlDrawerDidCreateFilterScrubber:(id)arg0 ;
-(void)controlDrawerDidCreateIntensitySlider:(id)arg0 ;
-(void)controlDrawerDidCreateLowLightSlider:(id)arg0 ;
-(void)controlDrawerDidCreateSemanticStyleControl:(id)arg0 ;
-(void)controlDrawerFlashButtonUnavailable:(id)arg0 ;
-(void)controlStatusBar:(id)arg0 didCreateIndicatorForType:(NSUInteger)arg1 ;
-(void)controlStatusBar:(id)arg0 didReceiveTapInIndicatorForType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)descriptionOverlayViewDidAcknowledge:(id)arg0 ;
-(void)descriptionOverlayViewDidSelectDetail:(id)arg0 ;
-(void)didSelectMode:(NSInteger)arg0 ;
-(void)disabledPreviewController:(id)arg0 wantsPreviewDisabledForReason:(NSInteger)arg1 ;
-(void)disabledPreviewController:(id)arg0 wantsPreviewEnabledForReason:(NSInteger)arg1 ;
-(void)dismissAccessibilityHUDViewForAccessibilityHUDManager:(id)arg0 ;
-(void)dynamicShutterControl:(id)arg0 didChangeZoomScale:(CGFloat)arg1 ;
-(void)dynamicShutterControlDidDismissCounter:(id)arg0 ;
-(void)dynamicShutterControlDidPresentCounter:(id)arg0 ;
-(void)dynamicShutterControlDidPressLockButton:(id)arg0 ;
-(void)dynamicShutterControlDidShortPress:(id)arg0 ;
-(void)dynamicShutterControlDidStart:(id)arg0 withGesture:(NSInteger)arg1 ;
-(void)dynamicShutterControlDidStartZoomGesture:(id)arg0 ;
-(void)dynamicShutterControlDidStop:(id)arg0 ;
-(void)dynamicShutterControlGesturesDidBegin:(id)arg0 ;
-(void)dynamicShutterControlGesturesDidCancel:(id)arg0 ;
-(void)dynamicShutterControlGesturesDidEnd:(id)arg0 ;
-(void)dynamicShutterControlLogDragCounter:(id)arg0 ;
-(void)dynamicShutterControlLogDragLock:(id)arg0 ;
-(void)dynamicShutterControlLogLongPress:(id)arg0 ;
-(void)dynamicShutterControlLogShortPress:(id)arg0 ;
-(void)fullscreenViewfinder:(id)arg0 didChangeControlDrawerVisibility:(BOOL)arg1 ;
-(void)fullscreenViewfinder:(id)arg0 didChangeExpanded:(BOOL)arg1 forDrawerControlOfType:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)fullscreenViewfinder:(id)arg0 didCreateInstructionLabel:(NSInteger)arg1 ;
-(void)fullscreenViewfinderDidChangeSemanticStyle:(id)arg0 ;
-(void)fullscreenViewfinderDidCreateControlDrawer:(id)arg0 ;
-(void)fullscreenViewfinderDidCreatePortraitControls:(id)arg0 ;
-(void)fullscreenViewfinderDidCreateSemanticStyleControls:(id)arg0 ;
-(void)fullscreenViewfinderDidGestureToDismissTextInteractionInsert:(id)arg0 ;
-(void)handleVolumeButtonPressed;
-(void)handleVolumeButtonReleased;
-(void)imageAnalysisButton:(id)arg0 didChangeContextMenuDisplayed:(BOOL)arg1 ;
-(void)lightingControl:(id)arg0 willChangeExpanded:(BOOL)arg1 ;
-(void)lightingControlDidChangeExpanded:(id)arg0 ;
-(void)lightingControlDidChangeSelectedLightingType:(id)arg0 ;
-(void)loadView;
-(void)panoramaRequest:(id)arg0 didGeneratePaintingStatus:(id)arg1 ;
-(void)panoramaRequestDidCompleteCapture:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)panoramaRequestDidCompleteLocalPersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)panoramaRequestDidCompleteRemotePersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)panoramaRequestDidStartCapturing:(id)arg0 ;
-(void)panoramaRequestDidStopCapturing:(id)arg0 interrupted:(BOOL)arg1 ;
-(void)physicalCaptureNotifierDidChangeState:(id)arg0 forButton:(NSInteger)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg0 ;
-(void)pressShutterForRemoteShutter;
-(void)pressStillDuringVideoForRemoteShutter;
-(void)previewViewController:(id)arg0 didSelectMRCResult:(id)arg1 ;
-(void)previewViewControllerDidChangeFocusOrExposureLocked:(id)arg0 shouldAnimate:(BOOL)arg1 ;
-(void)previewViewControllerDidChangeVideoFillAspectRatio:(id)arg0 ;
-(void)prominentObjectManager:(id)arg0 didChangeCurrentMachineReadableCodeAction:(id)arg1 ;
-(void)prominentObjectManager:(id)arg0 didChangeCurrentObject:(id)arg1 ;
-(void)readUserPreferencesAndHandleChangesWithOverrides:(id)arg0 ;
-(void)remoteShutter:(id)arg0 focusOn:(struct CGPoint )arg1 ;
-(void)remoteShutter:(id)arg0 setCaptureDevice:(NSInteger)arg1 ;
-(void)remoteShutter:(id)arg0 setIrisMode:(NSInteger)arg1 ;
-(void)remoteShutter:(id)arg0 setMode:(NSInteger)arg1 ;
-(void)remoteShutter:(id)arg0 setZoomAmount:(CGFloat)arg1 ;
-(void)remoteShutter:(id)arg0 takePhotoWithCountdown:(NSUInteger)arg1 ;
-(void)remoteShutterCancelCountdown:(id)arg0 ;
-(void)request:(id)arg0 didDetectTextWithResult:(id)arg1 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didRecgonizeTextWithAnalysis:(id)arg1 ;
-(void)requestDidCancel:(id)arg0 ;
-(void)resumeCameraSessionWithCompletion:(id)arg0 ;
-(void)semanticStyleSettingsControllerDidDismiss:(id)arg0 ;
-(void)shutterButtonTouchAttemptedWhileDisabled:(id)arg0 ;
-(void)shutterControlTouchAttemptedWhileDisabled:(id)arg0 ;
-(void)simulateImageWellTap;
-(void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(id)arg0 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg0 error:(id)arg1 ;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)stillImageRequestDidCompleteStillImageRemotePersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)stillImageRequestDidCompleteVideoCapture:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)stillImageRequestDidStartCapturing:(id)arg0 resolvedSettings:(id)arg1 ;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg0 ;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg0 ;
-(void)stillImageRequestsDidCompleteCapturingLivePhotoVideo;
-(void)stillImageRequestsDidStopCapturingCTMVideo;
-(void)stillImageRequestsWillRequestCTMVideoCaptureEnd;
-(void)stillImageRequestsWillRequestCTMVideoCaptureStart;
-(void)stillImageRequestsWillStartCapturingLivePhotoVideo;
-(void)storageControllerDidChangePurgingState:(id)arg0 ;
-(void)suspendCameraSessionWithCompletion:(id)arg0 ;
-(void)timelapseController:(id)arg0 generatedPlaceholderResult:(id)arg1 withThumbnailImage:(id)arg2 forAssetUUID:(id)arg3 inCaptureSession:(unsigned short)arg4 ;
-(void)timelapseController:(id)arg0 persistedPlaceholderResult:(id)arg1 error:(id)arg2 ;
-(void)timelapseController:(id)arg0 startedWithCaptureOrientation:(NSInteger)arg1 ;
-(void)timelapseControllerStopped:(id)arg0 ;
-(void)toggleBetweenZoomFactorsForZoomControl:(id)arg0 ;
-(void)updateControlVisibilityAnimated:(BOOL)arg0 ;
-(void)videoConfigurationStatusIndicatorDidTapFramerate:(id)arg0 ;
-(void)videoConfigurationStatusIndicatorDidTapResolution:(id)arg0 ;
-(void)videoRequestDidCompleteCapture:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)videoRequestDidCompleteLocalPersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)videoRequestDidCompleteRemotePersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)videoRequestDidStartCapturing:(id)arg0 ;
-(void)videoRequestDidStopCapturing:(id)arg0 ;
-(void)videoThumbnailOutputWillBeginRenderingThumbnailsWithContents:(id)arg0 ;
-(void)videoThumbnailOutputWillEndRenderingThumbnails;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)wheelScrubberView:(id)arg0 updateCell:(id)arg1 forItemAtIndex:(NSUInteger)arg2 ;
-(void)wheelScrubberViewDidChangeSelectedIndex:(id)arg0 ;
-(void)willHideZoomSlider:(id)arg0 withAnimationDuration:(CGFloat)arg1 ;
-(void)willShowZoomSlider:(id)arg0 withAnimationDuration:(CGFloat)arg1 ;
-(void)zoomControl:(id)arg0 didChangeSelectedButtonIndex:(NSUInteger)arg1 displayZoomFactor:(CGFloat)arg2 ;
-(void)zoomControl:(id)arg0 didChangeZoomFactor:(CGFloat)arg1 interactionType:(NSInteger)arg2 ;
-(void)zoomControlDidChangeShowingZoomDial:(id)arg0 ;
-(void)zoomSliderDidBeginAutozooming:(id)arg0 ;
-(void)zoomSliderDidEndAutozooming:(id)arg0 ;
-(void)zoomSliderDidEndZooming:(id)arg0 ;


@end


#endif