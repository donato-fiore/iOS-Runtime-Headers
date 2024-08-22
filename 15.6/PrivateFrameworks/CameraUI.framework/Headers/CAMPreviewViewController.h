// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPREVIEWVIEWCONTROLLER_H
#define CAMPREVIEWVIEWCONTROLLER_H

@class UIViewController, UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableDictionary, NSDate, UILongPressGestureRecognizer, NSMapTable, CEKSubjectIndicatorView, NSArray, NSString, UIImage;
@protocol UIGestureRecognizerDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMFocusIndicatorViewDelegate, CAMFacesDelegate, CAMPreviewViewControllerDelegate;


#import "CAMBurstIndicatorView.h"
#import "CUCaptureController.h"
#import "CAMFocusIndicatorView.h"
#import "CAMCaptureGraphConfiguration.h"
#import "CAMExposureResult.h"
#import "CAMFocusResult.h"
#import "CAMMotionController.h"
#import "CAMStageLightOverlayView.h"
#import "CAMTimelapseController.h"
#import "CAMMachineReadableCodeResult.h"
#import "CAMTextRegionResult.h"
#import "CAMPreviewView.h"
#import "CAMMachineReadableCodeIndicatorView.h"

@interface CAMPreviewViewController : UIViewController <UIGestureRecognizerDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMFocusIndicatorViewDelegate, CAMFacesDelegate>



@property (readonly, nonatomic) UITapGestureRecognizer *_aspectRatioToggleDoubleTapGestureRecognizer; // ivar: __aspectRatioToggleDoubleTapGestureRecognizer
@property (readonly, nonatomic) CAMBurstIndicatorView *_burstIndicator; // ivar: __burstIndicator
@property (readonly, nonatomic) CUCaptureController *_captureController; // ivar: __captureController
@property (nonatomic, getter=_isChangingGraphConfiguration, setter=_setChangingGraphConfiguration:) BOOL _changingGraphConfiguration; // ivar: __changingGraphConfiguration
@property (nonatomic, setter=_setCinematicIsFixedFocusLocked:) BOOL _cinematicIsFixedFocusLocked; // ivar: __cinematicIsFixedFocusLocked
@property (nonatomic, setter=_setCinematicSubjectIsTrackingLocked:) BOOL _cinematicSubjectIsTrackingLocked; // ivar: __cinematicSubjectIsTrackingLocked
@property (readonly, nonatomic) CAMFocusIndicatorView *_continuousIndicator; // ivar: __continuousIndicator
@property (nonatomic, setter=_setCurrentFacesCount:) NSUInteger _currentFacesCount; // ivar: __currentFacesCount
@property (readonly, nonatomic) NSInteger _device;
@property (readonly, nonatomic) NSInteger _devicePosition;
@property (readonly, nonatomic) UIPanGestureRecognizer *_exposureBiasPanGestureRecognizer; // ivar: __exposureBiasPanGestureRecognizer
@property (readonly, nonatomic) float _exposureBiasPanStartValue; // ivar: __exposureBiasPanStartValue
@property (nonatomic, setter=_setExposureBiasVirtualSliderExponent:) CGFloat _exposureBiasVirtualSliderExponent; // ivar: __exposureBiasVirtualSliderExponent
@property (nonatomic, setter=_setExposureBiasVirtualSliderPointsForFirstStop:) CGFloat _exposureBiasVirtualSliderPointsForFirstStop; // ivar: __exposureBiasVirtualSliderPointsForFirstStop
@property (retain, nonatomic, setter=_setGraphConfiguration:) CAMCaptureGraphConfiguration *_graphConfiguration; // ivar: __graphConfiguration
@property (readonly, nonatomic) NSMutableDictionary *_indicatorViewsByType; // ivar: __indicatorViewsByType
@property (retain, nonatomic, setter=_setLastExposureBiasModifiedTime:) NSDate *_lastExposureBiasModificationTime; // ivar: __lastExposureBiasModificationTime
@property (retain, nonatomic, setter=_setLastExposureResult:) CAMExposureResult *_lastExposureResult; // ivar: __lastExposureResult
@property (retain, nonatomic, setter=_setLastFocusIndictorStartTime:) NSDate *_lastFocusIndictorStartTime; // ivar: __lastFocusIndictorStartTime
@property (retain, nonatomic, setter=_setLastFocusResult:) CAMFocusResult *_lastFocusResult; // ivar: __lastFocusResult
@property (retain, nonatomic, setter=_setLastTapToFocusTime:) NSDate *_lastTapToFocusTime; // ivar: __lastTapToFocusTime
@property (readonly, nonatomic) UILongPressGestureRecognizer *_longPressToLockGestureRecognizer; // ivar: __longPressToLockGestureRecognizer
@property (readonly, nonatomic) NSMapTable *_metadataObjectsForView; // ivar: __metadataObjectsForView
@property (readonly, nonatomic) NSInteger _mode;
@property (readonly, nonatomic) CAMMotionController *_motionController; // ivar: __motionController
@property (readonly, nonatomic) CAMFocusIndicatorView *_pointIndicator; // ivar: __pointIndicator
@property (readonly, nonatomic) CEKSubjectIndicatorView *_portraitModeCenteredIndicatorView; // ivar: __portraitModeCenteredIndicatorView
@property (nonatomic, setter=_setShouldSuppressExistingFaceIndicators:) BOOL _shouldSuppressExistingFaceIndicators; // ivar: __shouldSuppressExistingFaceIndicators
@property (readonly, nonatomic, getter=_isShowingContinuousIndicator) BOOL _showingContinuousIndicator;
@property (readonly, nonatomic, getter=_isShowingPointIndicator) BOOL _showingPointIndicator;
@property (readonly, nonatomic) CAMStageLightOverlayView *_stageLightOverlayView; // ivar: __stageLightOverlayView
@property (readonly, nonatomic) UITapGestureRecognizer *_tapToFocusAndExposeGestureRecognizer; // ivar: __tapToFocusAndExposeGestureRecognizer
@property (readonly, weak, nonatomic) CAMTimelapseController *_timelapseController; // ivar: __timelapseController
@property (nonatomic, setter=_setUserLockedFocusAndExposure:) BOOL _userLockedFocusAndExposure; // ivar: __userLockedFocusAndExposure
@property (readonly, nonatomic) UIPanGestureRecognizer *activeExposureBiasPanGestureRecognizer;
@property (nonatomic) float baselineExposureBias; // ivar: _baselineExposureBias
@property (nonatomic, setter=setCachedExposureTargetBias:) float cachedExposureTargetBias; // ivar: _cachedExposureTargetBias
@property (retain, nonatomic) NSArray *cachedMRCResults; // ivar: _cachedMRCResults
@property (retain, nonatomic) CAMMachineReadableCodeResult *cachedSignificantMRCResult; // ivar: _cachedSignificantMRCResult
@property (retain, nonatomic) CAMTextRegionResult *cachedSignificantTextRegionResult; // ivar: _cachedSignificantTextRegionResult
@property (retain, nonatomic) NSArray *cachedTextRegionResults; // ivar: _cachedTextRegionResults
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMPreviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExposureLockedByUser) BOOL exposureLockedByUser;
@property (readonly, nonatomic, getter=isFocusLockedByUser) BOOL focusLockedByUser;
@property (readonly, nonatomic, getter=isFocusLockedOnCinematicSubject) BOOL focusLockedOnCinematicSubject;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger lightingType; // ivar: _lightingType
@property (readonly, nonatomic) CGPoint pointOfInterestInNormalizedCaptureDeviceSpace;
@property (readonly, nonatomic) CAMPreviewView *previewView;
@property (nonatomic) NSInteger shallowDepthOfFieldStatus; // ivar: _shallowDepthOfFieldStatus
@property (nonatomic, getter=isShowingStandardControls) BOOL showingStandardControls; // ivar: _showingStandardControls
@property (readonly, nonatomic) UIImage *significantMRCIcon; // ivar: _significantMRCIcon
@property (readonly, nonatomic) CAMMachineReadableCodeIndicatorView *significantMRCIndicatorView;
@property (readonly, copy, nonatomic) NSString *significantMRCTitle; // ivar: _significantMRCTitle
@property (nonatomic) NSInteger stagePreviewStatus; // ivar: _stagePreviewStatus
@property (readonly) Class superclass;
@property (readonly, nonatomic) float totalExposureBias;


-(BOOL)_allowUserToChangeFocusAndExposure;
-(BOOL)_canModifyExposureBias;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isExposureTargetBiasAtBaseline:(float)arg0 ;
-(BOOL)_isFullyAutomaticFocus:(id)arg0 andExposure:(id)arg1 ;
-(BOOL)_isFullyAutomaticFocusAndExposure;
-(BOOL)_isPanningExposureBias;
-(BOOL)_isPortraitEffectActive;
-(BOOL)_isShowingFocusIndicator:(id)arg0 ;
-(BOOL)_isShowingIndicatorsOfType:(id)arg0 ;
-(BOOL)_mrcIndicatorButtonContainsTouch:(id)arg0 ;
-(BOOL)_shouldAllowFaceIndicators;
-(BOOL)_shouldAllowMRCIndicators;
-(BOOL)_shouldAllowTextRegionIndicators;
-(BOOL)_shouldDisableAspectRatioToggle;
-(BOOL)_shouldDisableFocusUI;
-(BOOL)_shouldResetFocusAndExposureForSubjectAreaDidChange;
-(BOOL)_shouldShowCinematicModeIndicatorViews;
-(BOOL)_shouldShowContinuousIndicator;
-(BOOL)_shouldShowIndicatorsAsInactive;
-(BOOL)_shouldShowPortraitModeIndicatorViews;
-(BOOL)_shouldShowPortraitModeTrackedSubjectIndicatorsForLightingType:(NSInteger)arg0 ;
-(BOOL)_shouldShowStageLightOverlayActive;
-(BOOL)_shouldShowStageLightOverlayViewForMode:(NSInteger)arg0 device:(NSInteger)arg1 lightingType:(NSInteger)arg2 shallowDepthOfFieldStatus:(NSInteger)arg3 stagePreviewStatus:(NSInteger)arg4 ;
-(BOOL)_shouldSuppressNewFaces;
-(BOOL)_shouldSuppressNewPortraitModeTrackedSubjectIndicators;
-(BOOL)_shouldUpdateIndicatorSizeFrom:(struct CGSize )arg0 to:(struct CGSize )arg1 minimumAreaChangeThreshold:(CGFloat)arg2 minimumAreaFractionChangeThreshold:(CGFloat)arg3 ;
-(BOOL)_showExposureBiasSliderForPointView;
-(BOOL)captureController:(id)arg0 shouldResetFocusAndExposureForReason:(NSInteger)arg1 ;
-(BOOL)captureControllerUserHasAdjustedExposureTargetBiasFromBaseline:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_boundsAnimationDurationForViewType:(id)arg0 ;
-(CGFloat)_centerAnimationDurationForViewType:(id)arg0 ;
-(CGFloat)_effectiveExposureBiasMovementForTranslation:(struct CGPoint )arg0 ;
-(CGFloat)_exposureBiasForVirtualSliderPosition:(CGFloat)arg0 ;
-(CGFloat)_virtualSliderPositionForExposureBias:(CGFloat)arg0 ;
-(CGFloat)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg0 ;
-(NSInteger)_interfaceOrientation;
-(NSInteger)_largeStyleForPointIndicator;
-(NSInteger)_styleForPointIndicator;
-(float)_exposureTargetBiasMaximum;
-(float)_exposureTargetBiasMinimum;
-(float)baselineExposureValueForCaptureController:(id)arg0 ;
-(id)_cinematicModeIndicatorViewAtPoint:(struct CGPoint )arg0 ;
-(id)_focusIndicatorViewsWithExposureBiasSliders;
-(id)_groupIDForMetadataObject:(id)arg0 ;
-(id)focusIndicatorViewBoundingViewForClippingFocusIndicatorView:(id)arg0 ;
-(id)initWithCaptureController:(id)arg0 motionController:(id)arg1 timelapseController:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(int)_exposureBiasSide;
-(void)_activateFocusIndicator:(id)arg0 ;
-(void)_addIndicatorView:(id)arg0 forType:(id)arg1 identifier:(id)arg2 underlyingMetadataObject:(id)arg3 ;
-(void)_animateView:(id)arg0 type:(id)arg1 withCenter:(struct CGPoint )arg2 bounds:(struct CGRect )arg3 transform:(struct CGAffineTransform )arg4 ;
-(void)_applicationDidEnterBackground;
-(void)_cancelDelayedActions;
-(void)_cancelDelayedFadeOutOfViewType:(id)arg0 ;
-(void)_cancelDelayedFocusAndExposureLock;
-(void)_cancelDelayedHideOrDeactivateForFocusIndicator:(id)arg0 ;
-(void)_captureOrientationChanged:(id)arg0 ;
-(void)_createAspectRatioToggleDoubleTapGestureRecognizerIfNecessary;
-(void)_createCommonGestureRecognizersIfNecessary;
-(void)_createContinuousIndicatorIfNecessary;
-(void)_createExposureBiasPanGestureRecognizerIfNecessary;
-(void)_createLongPressToLockGestureRecognizersIfNecessary;
-(void)_createPointIndicatorIfNecessary;
-(void)_createPortraitModeCenteredIndicatorViewIfNecessary;
-(void)_createStageLightOverlayViewIfNeededWillAnimate:(BOOL)arg0 ;
-(void)_createTapToFocusAndExposeGestureRecognizerIfNecessary;
-(void)_deactivateFocusIndicator:(id)arg0 ;
-(void)_deactivateFocusIndicator:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)_didChangeGraphConfigurationAnimated:(BOOL)arg0 ;
-(void)_fadeInView:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)_fadeOutAndRemoveIndicatorView:(id)arg0 forType:(id)arg1 identifier:(id)arg2 withDuration:(CGFloat)arg3 ;
-(void)_fadeOutAndRemoveIndicatorViewsOfType:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)_fadeOutIndicatorsOfViewType:(id)arg0 ;
-(void)_fadeOutIndicatorsOfViewType:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)_fadeOutView:(id)arg0 withDuration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_finishFocusingLockedPointOfInterestIndicator;
-(void)_focusOnPoint:(struct CGPoint )arg0 shouldShowFocusAndExposureIndicator:(BOOL)arg1 ;
-(void)_handleAspectRatioToggleDoubleTap:(id)arg0 ;
-(void)_handleExposureBiasPan:(id)arg0 ;
-(void)_handleLongPressToLock:(id)arg0 ;
-(void)_handleSignificantMRCIndicatorButtonTapped:(id)arg0 ;
-(void)_handleTapToFocusAndExpose:(id)arg0 ;
-(void)_hideAllCinematicIndicatorsAnimated:(BOOL)arg0 ;
-(void)_hideAllFocusIndicatorsAnimated:(BOOL)arg0 ;
-(void)_hideAllFocusIndicatorsExceptForIndicator:(id)arg0 ;
-(void)_hideFocusIndicator:(id)arg0 ;
-(void)_hideFocusIndicator:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)_hideFocusIndicator:(id)arg0 animated:(BOOL)arg1 ;
-(void)_hideIndicatorsOfViewType:(id)arg0 animated:(BOOL)arg1 ;
-(void)_hidePortraitModeTrackedSubjectIndicatorsAnimated:(BOOL)arg0 ;
-(void)_initializeExposureBiasParametersForFocusIndicatorView:(id)arg0 ;
-(void)_initializeExposureBiasSliderParameters;
-(void)_lockFocusAndExposure;
-(void)_lockFocusAndExposureAfterDelay:(CGFloat)arg0 ;
-(void)_removeIndicatorViewForType:(id)arg0 identifier:(id)arg1 ;
-(void)_resetCachedTimes;
-(void)_resetFaceTracking;
-(void)_scaleDownLockedPointOfInterest;
-(void)_scalePortraitModeFocusIndicators;
-(void)_setCinematicFocusForMetadataObject:(id)arg0 atPoint:(struct CGPoint )arg1 useFixedOpticalFocus:(BOOL)arg2 useHardFocus:(BOOL)arg3 ;
-(void)_setFocusIndicatorsPulsing:(BOOL)arg0 ;
-(void)_showIndicatorAtPointOfInterest:(struct CGPoint )arg0 ;
-(void)_showLockedAtPointOfInterest:(struct CGPoint )arg0 ;
-(void)_showUIForResetFocusAndExposure;
-(void)_subjectGroupResultsFromMetadataObjects:(id)arg0 nonFixedFocusResults:(*id)arg1 fixedFocusResults:(*id)arg2 ;
-(void)_updateCaptureControllerExposureTargetBias;
-(void)_updateCinematicModeViewsForResults:(id)arg0 ;
-(void)_updateCinematicModeViewsForTrackingChange;
-(void)_updateExposureBiasPanGestureRecognizerForOrientation;
-(void)_updateExposureBiasSideAnimated:(BOOL)arg0 ;
-(void)_updateExposureBiasViews;
-(void)_updateExposureBiasViews:(id)arg0 ;
-(void)_updateFaceIndicatorsForResults:(id)arg0 ;
-(void)_updateForOrientationAnimated:(BOOL)arg0 ;
// -(void)_updateIndicatorsForMetadataObjectResults:(id)arg0 viewType:(id)arg1 viewClass:(Class)arg2 geometryCallback:(id)arg3 minimumAreaChangeThreshold:(unk)arg4 minimumAreaFractionChangeThreshold:(CGFloat)arg5  ;
-(void)_updateMRCIndicatorsAnimated:(BOOL)arg0 ;
-(void)_updateMRCIndicatorsIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_updatePortraitModeViewsAnimated:(BOOL)arg0 ;
-(void)_updatePortraitModeViewsForResults:(id)arg0 ;
-(void)_updatePreviewIndicatorClippingStyleForGraphConfiguration:(id)arg0 ;
-(void)_updatePreviewViewAspectMode;
-(void)_updateTextRegionIndicators;
-(void)_updateTextRegionIndicatorsIfNecessary;
-(void)_updateUIForCenteredContrastBasedFocusDidEnd;
-(void)_validateExposureTargetBiasFromExposureResult:(id)arg0 ;
-(void)_validateInternalProperties;
-(void)_validateLastExposureBiasModificationTime;
-(void)_validateUserLockedFocusAndExposure;
-(void)_willChangeGraphConfiguration;
-(void)captureController:(id)arg0 didOutputExposureResult:(id)arg1 ;
-(void)captureController:(id)arg0 didOutputFaceResults:(id)arg1 headResults:(id)arg2 bodyResults:(id)arg3 salientObjectResults:(id)arg4 ;
-(void)captureController:(id)arg0 didOutputFocusResult:(id)arg1 ;
-(void)captureControllerWillResetFocusAndExposure:(id)arg0 ;
-(void)dealloc;
-(void)didChangeToGraphConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)focusOnNormalizedPoint:(struct CGPoint )arg0 ;
-(void)loadView;
-(void)notifyCaptureSessionDidStopRunning;
-(void)notifyDidStopCapture;
-(void)notifyShutterButtonPressed;
-(void)notifyWillStartCapturing;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willChangeToGraphConfiguration:(id)arg0 ;


@end


#endif