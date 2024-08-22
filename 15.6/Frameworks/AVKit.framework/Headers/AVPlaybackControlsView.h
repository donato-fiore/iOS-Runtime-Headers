// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYBACKCONTROLSVIEW_H
#define AVPLAYBACKCONTROLSVIEW_H

@class UIView, NSArray, UIViewPropertyAnimator, NSUUID, NSValue;
@protocol AVPlaybackControlsViewVisibilityDelegate;


#import "AVControlOverflowButton.h"
#import "AVPlayerViewControllerCustomControlsView.h"
#import "AVButton.h"
#import "AVObservationController.h"
#import "AVTouchIgnoringView.h"
#import "AVLayoutView.h"
#import "AVPlaybackControlsRoutePickerView.h"
#import "AVScrubber.h"
#import "AVStyleSheet.h"
#import "AVView.h"
#import "AVTransportControlsView.h"
#import "AVVolumeButtonControl.h"
#import "AVVolumeSlider.h"

@interface AVPlaybackControlsView : UIView {
    NSArray *_customControlsViewLayoutGuideConstraints;
}


@property (readonly, nonatomic) AVControlOverflowButton *controlOverflowButton; // ivar: _controlOverflowButton
@property (readonly, copy, nonatomic) NSArray *customAudioItems; // ivar: _customAudioItems
@property (readonly, copy, nonatomic) NSArray *customControlItems; // ivar: _customControlItems
@property (retain, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView; // ivar: _customControlsView
@property (readonly, copy, nonatomic) NSArray *customDisplayModeItems; // ivar: _customDisplayModeItems
@property (readonly, copy, nonatomic) NSArray *customMediaItems; // ivar: _customMediaItems
@property (readonly, nonatomic) NSArray *defaultAudioControls; // ivar: _defaultAudioControls
@property (readonly, nonatomic) NSArray *defaultDisplayModeControls; // ivar: _defaultDisplayModeControls
@property (readonly, nonatomic) AVButton *doneButton; // ivar: _doneButton
@property (nonatomic, getter=isDoubleRowLayoutEnabled) BOOL doubleRowLayoutEnabled; // ivar: _doubleRowLayoutEnabled
@property (nonatomic, getter=isFullScreen) BOOL fullScreen; // ivar: _fullScreen
@property (readonly, nonatomic) AVButton *fullScreenButton; // ivar: _fullScreenButton
@property (readonly, nonatomic) BOOL hasVisibleSubview;
@property (readonly, nonatomic) NSInteger includedContainers; // ivar: _includedContainers
@property (readonly, nonatomic) BOOL includesAudioControlsContainer;
@property (readonly, nonatomic) BOOL includesCustomAudioControls;
@property (readonly, nonatomic) BOOL includesCustomDisplayModeControls;
@property (readonly, nonatomic) BOOL includesDisplayModeControlsContainer;
@property (readonly, nonatomic) BOOL includesTransportControls;
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (readonly, nonatomic) UIViewPropertyAnimator *keyboardUIAvoidanceAnimator; // ivar: _keyboardUIAvoidanceAnimator
@property (readonly, nonatomic) AVButton *mediaSelectionButton; // ivar: _mediaSelectionButton
@property (retain, nonatomic) NSUUID *mostRecentAnimationCompletionsID; // ivar: _mostRecentAnimationCompletionsID
@property (nonatomic) BOOL needsIntialLayout; // ivar: _needsIntialLayout
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline; // ivar: _overrideLayoutMarginsWhenEmbeddedInline
@property (nonatomic) CGAffineTransform overrideTransformForProminentPlayButton; // ivar: _overrideTransformForProminentPlayButton
@property (readonly, nonatomic) AVButton *pictureInPictureButton; // ivar: _pictureInPictureButton
@property (readonly, nonatomic) AVTouchIgnoringView *playbackControlsContainer; // ivar: _playbackControlsContainer
@property (retain, nonatomic) UIViewPropertyAnimator *playbackControlsVisibilityAnimator; // ivar: _playbackControlsVisibilityAnimator
@property (readonly, nonatomic) AVButton *playbackSpeedButton; // ivar: _playbackSpeedButton
@property (nonatomic) NSInteger preferredUnobscuredArea; // ivar: _preferredUnobscuredArea
@property (nonatomic) BOOL prefersDoneButtonIncluded; // ivar: _prefersDoneButtonIncluded
@property (nonatomic) BOOL prefersFullScreenButtonIncluded; // ivar: _prefersFullScreenButtonIncluded
@property (nonatomic) BOOL prefersPiPButtonIncluded; // ivar: _prefersPiPButtonIncluded
@property (nonatomic) BOOL prefersVideoGravityButtonIncluded; // ivar: _prefersVideoGravityButtonIncluded
@property (nonatomic) BOOL prefersVolumeSliderExpandedAutomatically; // ivar: _prefersVolumeSliderExpandedAutomatically
@property (readonly, nonatomic) AVButton *prominentPlayButton; // ivar: _prominentPlayButton
@property (readonly, nonatomic) AVLayoutView *prominentPlayButtonContainerView; // ivar: _prominentPlayButtonContainerView
@property (readonly, nonatomic) AVPlaybackControlsRoutePickerView *routePickerView; // ivar: _routePickerView
@property (readonly, nonatomic) AVLayoutView *screenModeControls; // ivar: _screenModeControls
@property (readonly, nonatomic) AVScrubber *scrubber; // ivar: _scrubber
@property (nonatomic) BOOL showsAudioControls; // ivar: _showsAudioControls
@property (nonatomic) BOOL showsPlaybackControls; // ivar: _showsPlaybackControls
@property (readonly, nonatomic) BOOL showsProminentPlayButton;
@property (readonly, nonatomic) AVButton *skipBackButton; // ivar: _skipBackButton
@property (readonly, nonatomic) AVButton *skipForwardButton; // ivar: _skipForwardButton
@property (readonly, nonatomic) AVButton *standardPlayPauseButton; // ivar: _standardPlayPauseButton
@property (readonly, nonatomic) AVButton *startLeftwardContentTransitionButton; // ivar: _startLeftwardContentTransitionButton
@property (readonly, nonatomic) AVButton *startRightwardContentTransitionButton; // ivar: _startRightwardContentTransitionButton
@property (retain, nonatomic) AVStyleSheet *styleSheet; // ivar: _styleSheet
@property (nonatomic, getter=isTopAreaLayoutGuideExpanded) BOOL topAreaLayoutGuideExpanded; // ivar: _topAreaLayoutGuideExpanded
@property (readonly, nonatomic) AVView *transportControlsContainerView; // ivar: _transportControlsContainerView
@property (readonly, nonatomic) AVTransportControlsView *transportControlsView; // ivar: _transportControlsView
@property (readonly, nonatomic) AVButton *videoGravityButton; // ivar: _videoGravityButton
@property (weak, nonatomic) NSObject<AVPlaybackControlsViewVisibilityDelegate> *visibilityDelegate; // ivar: _visibilityDelegate
@property (readonly, nonatomic) AVVolumeButtonControl *volumeButton; // ivar: _volumeButton
@property (readonly, nonatomic) AVLayoutView *volumeControls; // ivar: _volumeControls
@property (readonly, nonatomic) AVTouchIgnoringView *volumeControlsContainer; // ivar: _volumeControlsContainer
@property (readonly, nonatomic) AVVolumeSlider *volumeSlider; // ivar: _volumeSlider


-(id)_audioViewsToRemoveDuringAnimation;
-(id)_currentArrangedAudioModeViews;
-(id)_currentArrangedDisplayModeViews;
-(id)_displayModeViewsToRemoveDuringAnimation;
-(id)_playbackControlsViewItems;
-(id)_playbackControlsViewsForControlItems:(id)arg0 withType:(NSInteger)arg1 ;
-(id)_preferredArrangedAudioModeViews;
-(id)_preferredArrangedDisplayModeViews;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 styleSheet:(id)arg1 ;
-(void)_animateKeyboardAvoidance:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_collapse:(BOOL)arg0 view:(id)arg1 ;
-(void)_collapse:(BOOL)arg0 views:(id)arg1 ;
-(void)_setUpCustomControlsViewConstraintsIfNeeded;
-(void)_setupInitialLayout;
-(void)_showPlaybackControlsAnimated:(BOOL)arg0 ;
-(void)_updateAreVolumeAndTransportControlsVisible;
-(void)_updateDoubleRowLayoutEnabled;
-(void)_updateLayoutMargins;
-(void)_updatePlaybackControlsContainerVisibilityAnimated:(BOOL)arg0 additionalActions:(id)arg1 ;
-(void)_updateTransportControlsFrame;
-(void)_updateVolumeControlsWithSize:(struct CGSize )arg0 ;
-(void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg0 appearingViews:(id)arg1 disappearingViews:(id)arg2 ;
-(void)avkit_reevaluateHiddenStateOfItem:(id)arg0 ;
-(void)avkit_sizeWasInvalidatedNeedingLayoutIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reevaluateHiddenStateForContainersAndSubviews;
-(void)safeAreaInsetsDidChange;
-(void)setPrefersVolumeSliderExpanded:(BOOL)arg0 prefersVolumeButtonIncluded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setupInitialLayout;
-(void)showPlaybackControls:(BOOL)arg0 immediately:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDisplayControlsVisibilityIncludedButtons:(id)arg0 ;
-(void)updateLayoutForChangedControlsVisibility;


@end


#endif