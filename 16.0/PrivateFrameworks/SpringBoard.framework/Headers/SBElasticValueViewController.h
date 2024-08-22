// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBELASTICVALUEVIEWCONTROLLER_H
#define SBELASTICVALUEVIEWCONTROLLER_H

@class UIViewController, SBFTouchPassThroughView, _UILegibilityLabel, UIView, UIPanGestureRecognizer, UILongPressGestureRecognizer, _UIEdgeFeedbackGenerator, NSTimer, NSMutableOrderedSet, UILabel, UISegmentedControl, UISwitch, UISlider, UIButton, NSDate, NSMutableArray, _UIFeedbackEngine, _UIFeedback, NSArray, SBUIViewFloatSpringProperty, NSString, CCUIContinuousSliderView<SBElasticGlyphView>;
@protocol UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBHUDViewControlling, SBElasticRouteDisplaying, SBElasticValueDataSource, SBElasticValueViewControllerDelegate;


#import "SBElasticSliderMaterialWrapperView.h"
#import "SBElasticHUDSettings.h"

@interface SBElasticValueViewController : UIViewController <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBHUDViewControlling>

 {
    SBFTouchPassThroughView *_sliderContainerView;
    SBElasticSliderMaterialWrapperView *_sliderWrapperView;
    NSInteger _previousState;
    NSInteger _state;
    SBFTouchPassThroughView *_labelContainerView;
    _UILegibilityLabel *_leadingLabel;
    _UILegibilityLabel *_trailingLabel;
    UIView *_touchTrackingView;
    UIView *_dimmingView;
    CGFloat _startingValue;
    UIPanGestureRecognizer *_sliderViewPanGestureRecognizer;
    UILongPressGestureRecognizer *_shortLongPressGestureRecognizer;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    NSUInteger _sliderTrackingCount;
    NSTimer *_dismissalTimer;
    NSTimer *_sliderApplyValueTimer;
    NSMutableOrderedSet *_sliderApplyValueQueue;
    BOOL _initialTransitionCompleted;
    BOOL _lockState;
    BOOL _isDebugging;
    BOOL _isRotating;
    BOOL _isDeflating;
    BOOL _isCompletingDeflatingToBase;
    BOOL _springsValid;
    BOOL _startingDismissal;
    BOOL _reduceMotionEnabled;
    UIView *_debugContainerView;
    UILabel *_debugLabel;
    UISegmentedControl *_debugStateSegmentedControl;
    UILabel *_debugAutoDismissLabel;
    UISwitch *_debugAutoDismissalSwitch;
    UILabel *_debugLockStateLabel;
    UISwitch *_debugLockStateSwitch;
    UISlider *_debugWidthSlider;
    UISlider *_debugHeightSlider;
    UISlider *_debugPortraitYOriginSlider;
    UIButton *_debugDumpButton;
    UIButton *_debugNextAudioRouteButton;
    UIButton *_debugResetAudioRouteButton;
    NSDate *_volumeUpLastHitDate;
    NSDate *_volumeDownLastHitDate;
    NSMutableArray *_runningListOfVolumesUpdates;
    NSUInteger _tickFeedbackIntervalCycleCounter;
    _UIFeedbackEngine *_tickVolumeFeedbackEngine;
    _UIFeedbackEngine *_edgeVolumeFeedbackEngine;
    _UIFeedback *_tickVolumeFeedback;
    _UIFeedback *_edgeVolumeFeedback;
    id<SBElasticRouteDisplaying> *_routeDisplayInfo;
    NSArray *_debugAutolayoutConstraints;
    SBUIViewFloatSpringProperty *_positionXSpring;
    SBUIViewFloatSpringProperty *_positionYSpring;
    SBUIViewFloatSpringProperty *_scaleSpring;
    SBUIViewFloatSpringProperty *_minMaxScaleXSpring;
    SBUIViewFloatSpringProperty *_minMaxScaleYSpring;
}


@property (readonly, nonatomic) NSUInteger axis; // ivar: _axis
@property (readonly, nonatomic) CGPoint centerForElasticHUDWhenInInteractingState;
@property (readonly, weak, nonatomic) NSObject<SBElasticValueDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBElasticValueViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSliderTracking;
@property (readonly, nonatomic) SBElasticHUDSettings *settings; // ivar: _settings
@property (readonly, nonatomic) CCUIContinuousSliderView<SBElasticGlyphView> *sliderView; // ivar: _sliderView
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL volumeDownButtonIsDown; // ivar: _volumeDownButtonIsDown
@property (readonly, nonatomic) BOOL volumeUpButtonIsDown; // ivar: _volumeUpButtonIsDown


-(BOOL)_canShowWhileLocked;
-(BOOL)_changeVolumeLevel:(CGFloat)arg0 ;
-(BOOL)_computeCachedRouteDisplayInformation;
-(BOOL)_isStateChangeAllowedFrom:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(BOOL)_volumeUpdateIsMaximumOfPotentialVolumeUpdates;
-(BOOL)_volumeUpdateIsMinimumOfPotentialVolumeUpdates;
-(BOOL)definesAnimatedDismissal;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)updateActiveRouteDisplay:(*id)arg0 ;
-(CGFloat)cornerRadiusForState:(NSInteger)arg0 useSpringData:(BOOL)arg1 ;
-(CGFloat)glyphScaleForState:(NSInteger)arg0 ;
-(CGFloat)interactiveValueUpdateDiscontinuityInterval;
-(NSInteger)hudPresentationOrientation;
-(NSUInteger)_updateVolumeLevelSlider:(float)arg0 animated:(BOOL)arg1 ;
-(NSUInteger)layoutAxisForInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(float)currentVolume;
-(id)createSliderView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)log;
-(id)overrideDisplayNameForRoute:(id)arg0 ;
-(id)sliderAccessibilityIdentifier;
-(struct CGPoint )centerForState:(NSInteger)arg0 containerViewSize:(struct CGSize )arg1 bounds:(struct CGRect )arg2 useSpringData:(BOOL)arg3 ;
-(struct CGSize )maximumSizeForSlider;
-(struct CGSize )sizeForState:(NSInteger)arg0 useSpringData:(BOOL)arg1 ;
-(void)_actuallyDismiss;
// -(void)_animateFromState:(NSInteger)arg0 toState:(NSInteger)arg1 animations:(id)arg2 completion:(unk)arg3  ;
-(void)_beginDeflatorDismissalSpringAnimation;
-(void)_beginTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_clearLastHitDates;
-(void)_completeDeflatorDismissalSpringAnimation;
-(void)_continueTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_createHapticFeedbackEngines;
-(void)_createSprings;
-(void)_debugAutoDismissalSwitchValueChanged:(id)arg0 ;
-(void)_debugChangingStateFromSegmentedControl:(id)arg0 ;
-(void)_debugDidTapNextRoute:(id)arg0 ;
-(void)_debugDidTapResetRoute:(id)arg0 ;
-(void)_debugDimensionSliderValueDidChange:(id)arg0 ;
-(void)_debugDump:(id)arg0 ;
-(void)_debugHandleNextRoute;
-(void)_debugHandleResetRoute;
-(void)_debugLockStateSwitchValueChanged:(id)arg0 ;
-(void)_destroySprings;
-(void)_dismissalTimerFired:(id)arg0 ;
-(void)_endTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_forciblyResetMinMaxSprings;
-(void)_handleShortLongPressGestureRecognizer:(id)arg0 ;
-(void)_handleSliderViewPanGestureRecognizer:(id)arg0 ;
-(void)_invalidateDismissalTimerForReason:(id)arg0 ;
-(void)_markVolumeUpdateInRunningListOfVolumesUpdates:(CGFloat)arg0 ;
-(void)_modifySpringsFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)_noteSliderViewDidBeginTracking;
-(void)_noteSliderViewDidEndTracking;
-(void)_playMaximumVolumeHaptic;
-(void)_playMinimumVolumeHaptic;
-(void)_playTickHapticForSteppedVolume:(float)arg0 ;
-(void)_reduceMotionStatusDidChange;
-(void)_refreshDebugUI:(BOOL)arg0 ;
-(void)_reloadData;
-(void)_resetInputForMajorAxisSpring;
-(void)_scheduleDismissal:(id)arg0 ;
-(void)_setScaleSpringActiveForVolumeButtonUpdateIfNeeded;
-(void)_stretchVolumeSliderForMaximumVolumeUpdateIfNeeded;
-(void)_stretchVolumeSliderForMinimumVolumeUpdateIfNeeded;
-(void)_updateDebugString:(id)arg0 ;
-(void)_updateDebugUIPositions;
-(void)_updateDimmingVisible:(BOOL)arg0 ;
-(void)_updateEdgeFeedbackParametersForMaxVolume:(BOOL)arg0 ;
-(void)_updateForAxisChange:(NSUInteger)arg0 ;
-(void)_updateGlyphStateIfNecessaryForValue:(*float)arg0 ;
-(void)_updateLabelsForAxis:(NSUInteger)arg0 containerViewSize:(struct CGSize )arg1 state:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)_updateSliderTracking;
-(void)_updateSliderViewMetricsForState:(NSInteger)arg0 bounds:(struct CGRect )arg1 integralized:(BOOL)arg2 useSizeSpringData:(BOOL)arg3 useCenterSpringData:(BOOL)arg4 ;
-(void)_updateSliderViewMetricsForState:(NSInteger)arg0 bounds:(struct CGRect )arg1 integralized:(BOOL)arg2 useSpringData:(BOOL)arg3 ;
-(void)_updateSliderViewToCenter:(struct CGPoint )arg0 size:(struct CGSize )arg1 integralized:(BOOL)arg2 continuousCornerRadius:(*CGFloat)arg3 ;
-(void)_updateTouchTrackingView;
-(void)_updateViewsWithSpringData;
-(void)changeVolumeLevel:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)dismissAnimatedWithCompletion:(id)arg0 ;
-(void)loadView;
-(void)noteButtonDownWasHit:(BOOL)arg0 ;
-(void)noteButtonUpWasHit:(BOOL)arg0 ;
-(void)noteContinuousValueInteractionDidEnd;
-(void)noteContinuousValueInteractionWillBegin;
-(void)noteValueWillDeltaStepToValue:(float)arg0 ;
-(void)reloadData;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)setupFailureRelationshipForGestureRecognizer:(id)arg0 ;
-(void)transitionStateContextuallyForVolumeChangeEvent;
-(void)transitionToState:(NSInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateValue:(float)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif