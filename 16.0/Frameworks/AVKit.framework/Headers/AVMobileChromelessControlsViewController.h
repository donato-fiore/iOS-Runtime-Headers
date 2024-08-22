// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECHROMELESSCONTROLSVIEWCONTROLLER_H
#define AVMOBILECHROMELESSCONTROLSVIEWCONTROLLER_H

@class UIView, NSArray, UIMenu, UIAction, UIViewPropertyAnimator, NSTimer, AVTimeFormatter, UILayoutGuide, NSLayoutConstraint, NSString;
@protocol AVControlItemDelegate, AVMobileChromelessVolumeControlsViewDelegate, AVMobileFullscreenControllerDelegate, AVMobileChromelessPlaybackControlsViewDelegate, AVMobileChromelessSliderDelegate, AVMobileChromelessDisplayModeControlsViewDelegate, AVMobileAuxiliaryControlsViewDelegate, AVMediaSelectionMenuDelegate, AVRoutePickerViewDelegate, AVPlayerControllerWebKitDelegate, AVMobileChromelessControlsViewControllerDelegate;


#import "AVMobileControlsViewController.h"
#import "AVObservationController.h"
#import "AVMobileChromelessControlsStyleSheet.h"
#import "AVMobileChromelessBackgroundGradientView.h"
#import "AVMobileChromelessDisplayModeControlsView.h"
#import "AVMobileChromelessPlaybackControlsView.h"
#import "AVMobileChromelessVolumeControlsView.h"
#import "AVMobileChromelessTimelineView.h"
#import "AVMobileTitlebarView.h"
#import "AVMobileAuxiliaryControlsView.h"
#import "AVRoutePickerView.h"
#import "AVMobileAuxiliaryControl.h"
#import "AVButton.h"
#import "AVPlayerControllerTimeResolver.h"
#import "AVMobilePlaybackRateMenuController.h"
#import "AVMediaSelectionMenuController.h"

@interface AVMobileChromelessControlsViewController : AVMobileControlsViewController <AVControlItemDelegate, AVMobileChromelessVolumeControlsViewDelegate, AVMobileFullscreenControllerDelegate, AVMobileChromelessPlaybackControlsViewDelegate, AVMobileChromelessSliderDelegate, AVMobileChromelessDisplayModeControlsViewDelegate, AVMobileAuxiliaryControlsViewDelegate, AVMediaSelectionMenuDelegate, AVRoutePickerViewDelegate, AVPlayerControllerWebKitDelegate>

 {
    AVObservationController *_observationController;
    AVObservationController *_webKitExcludedObservationController;
    BOOL _hasBeenSetUp;
    AVMobileChromelessControlsStyleSheet *_styleSheet;
    UIView *_view;
    AVMobileChromelessBackgroundGradientView *_gradientBackgroundView;
    AVMobileChromelessDisplayModeControlsView *_displayModeControlsView;
    AVMobileChromelessPlaybackControlsView *_playbackControlsView;
    AVMobileChromelessVolumeControlsView *_volumeControlsView;
    AVMobileChromelessTimelineView *_timelineView;
    AVMobileTitlebarView *_titlebarView;
    AVMobileAuxiliaryControlsView *_auxiliaryControlsView;
    AVRoutePickerView *_routePickerView;
    NSArray *_pinnedAuxiliaryControls;
    AVMobileAuxiliaryControl *_audibleMediaSelectionControl;
    AVMobileAuxiliaryControl *_legibleMediaSelectionControl;
    AVMobileAuxiliaryControl *_playbackSpeedControl;
    AVMobileAuxiliaryControl *_routePickerControl;
    AVMobileAuxiliaryControl *_analysisControl;
    UIMenu *_audibleMediaSelectionMenu;
    UIMenu *_legibleMediaSelectionMenu;
    AVButton *_analysisToggleButton;
    UIAction *_analysisToggleAction;
    CGFloat _systemKeyboardUIHeight;
    UIViewPropertyAnimator *_keyboardUIAvoidanceAnimator;
    BOOL _volumeSliderTemporarilyVisibileInFullscreen;
    UIViewPropertyAnimator *_volumeControlsEmphasisAnimator;
    UIViewPropertyAnimator *_volumeControlsSliderAnimator;
    NSTimer *_volumeEmphasisAnimationDelayTimer;
    NSTimer *_volumeSliderTemporarilyVisibleTimer;
    AVPlayerControllerTimeResolver *_timeResolver;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    BOOL _needsTimeResolverUpdate;
    AVMobilePlaybackRateMenuController *_playbackSpeedMenuController;
    AVMediaSelectionMenuController *_mediaSelectionMenuController;
    BOOL _runningLoadingAnimation;
    UIViewPropertyAnimator *_loadingAnimator;
    AVMobileChromelessControlsVisibilityState_st _currentVisibilityState;
    BOOL _needsControlsVisibilityStateUpdate;
    NSTimer *_visibilityTimer;
    UIViewPropertyAnimator *_visibilityAnimator;
    BOOL _controlsExpanded;
    BOOL _temporarilyVisibile;
    NSInteger _userInteractionCount;
    BOOL _canFitVolumeControls;
    BOOL _canFitDisplayModeControls;
    BOOL _canFitPlaybackControls;
    BOOL _canFitTimelineControls;
    BOOL _canFitTitlebar;
    BOOL _canFitAuxiliaryControls;
    UILayoutGuide *_displayModeControlsLayoutGuide;
    UILayoutGuide *_transportControlsLayoutGuide;
    UILayoutGuide *_volumeControlsLayoutGuide;
    NSLayoutConstraint *_currentTransportControlsTopAnchorConstraint;
    NSLayoutConstraint *_titlebarViewTopAnchorConstraint;
    NSLayoutConstraint *_timelineTopAnchorConstraint;
    NSLayoutConstraint *_auxiliaryControlsViewTopAnchorConstraint;
    NSLayoutConstraint *_defaultTopAnchorConstraint;
    NSArray *_auxiliaryControlsForControlItems;
    UIViewPropertyAnimator *_timelineSliderEmphasisAnimator;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVMobileChromelessControlsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsAnalysisControl; // ivar: _showsAnalysisControl
@property (readonly) Class superclass;


-(NSUInteger)visibileControls;
-(id)_sliderMarkForInterstitialTimeRange:(id)arg0 ;
-(id)auxiliaryControlsView:(id)arg0 menuElementForControl:(id)arg1 ;
-(id)displayModeControlsLayoutItem;
-(id)transportControlsLayoutItem;
-(id)volumeControlsLayoutItem;
-(void)_didBeginUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st )arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_didEndUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st )arg0 completed:(BOOL)arg1 ;
-(void)_handleAnalysisToggleButton;
-(void)_incrementUserInteractionCount;
-(void)_timelineSliderDidChangeValue:(id)arg0 ;
-(void)_timelineSliderTrackingStateDidChange:(id)arg0 ;
-(void)_updateAudibleMediaSelectionControlInclusionState;
-(void)_updateControlsVisibilityStateIfNeededAnimated:(id)arg0 ;
-(void)_updateLegibleMediaSelectionControlInclusionState;
-(void)_updatePrefersSystemVolumeHUDHidden;
-(void)_updatePrefersVolumeSliderIncludedAnimated:(BOOL)arg0 ;
-(void)_updateStyleSheet;
-(void)_willBeginUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st )arg0 withAnimationCoordinator:(id)arg1 ;
-(void)auxiliaryControlsViewDidEndShowingOverflowMenu:(id)arg0 ;
-(void)auxiliaryControlsViewWillBeginShowingOverflowMenu:(id)arg0 ;
-(void)controlItemDidUpdateVisualConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)displayModeControlsViewFullscreenButtonWasPressed:(id)arg0 ;
-(void)displayModeControlsViewPictureInPictureButtonWasPressed:(id)arg0 ;
-(void)flashControlsWithDuration:(CGFloat)arg0 ;
-(void)fullscreenControllerDidChangePresentationState:(id)arg0 ;
-(void)loadView;
-(void)mediaSelectionMenuController:(id)arg0 didSelectOption:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)playbackControlsViewLeftSecondaryControlWasPressed:(id)arg0 ;
-(void)playbackControlsViewPlayPauseButtonWasPressed:(id)arg0 ;
-(void)playbackControlsViewRightSecondaryControlWasPressed:(id)arg0 ;
-(void)routePickerViewDidEndPresentingRoutes:(id)arg0 ;
-(void)routePickerViewWillBeginPresentingRoutes:(id)arg0 ;
-(void)setControlItems:(id)arg0 ;
-(void)setFullscreenController:(id)arg0 ;
-(void)setIncludedControls:(NSUInteger)arg0 ;
-(void)setOptimizeForPerformance:(BOOL)arg0 ;
-(void)setPlaybackSpeedCollection:(id)arg0 ;
-(void)setPlayerController:(id)arg0 ;
-(void)setRequiresLinearPlayback:(BOOL)arg0 ;
-(void)setRoutingConfiguration:(id)arg0 ;
-(void)setSecondaryPlaybackControlsType:(NSUInteger)arg0 ;
-(void)setShowsFullScreenControl:(BOOL)arg0 ;
-(void)setTransportBarCustomMenuItems:(id)arg0 ;
-(void)setVolumeController:(id)arg0 ;
-(void)sliderDidBeginTracking:(id)arg0 ;
-(void)sliderDidEndTracking:(id)arg0 ;
-(void)toggleVisibility:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateVisibilityPolicy:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)volumeControlsView:(id)arg0 volumeDidChangeTo:(CGFloat)arg1 ;
-(void)volumeControlsViewButtonWasTapped:(id)arg0 ;
-(void)volumeControlsViewInteractionDidBegin:(id)arg0 ;
-(void)volumeControlsViewInteractionDidEnd:(id)arg0 ;
-(void)webkitPlayerController:(id)arg0 didChangeScrubbingStateTo:(BOOL)arg1 ;
-(void)webkitPlayerController:(id)arg0 didUpdateSeekToTime:(CGFloat)arg1 ;


@end


#endif