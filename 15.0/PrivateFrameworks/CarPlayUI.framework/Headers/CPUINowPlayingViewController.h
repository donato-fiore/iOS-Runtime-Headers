// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPUINOWPLAYINGVIEWCONTROLLER_H
#define CPUINOWPLAYINGVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UIBarButtonItem, UIImage, NSOperationQueue, UIImageView, UIVisualEffectView, UITapGestureRecognizer, NSString, UILongPressGestureRecognizer, NSArray, UILabel;
@protocol CPUIPlayModeControlViewDelegate, CPUINowPlayingViewControllerDataSource, CPUINowPlayingViewControllerDelegate;


#import "CPUINowPlayingView.h"
#import "CPUIPlayModeControlView.h"
#import "CPUITransportControlView.h"

@interface CPUINowPlayingViewController : UIViewController <CPUIPlayModeControlViewDelegate>

 {
    NSInteger _heldAction;
}


@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UIBarButtonItem *activityIndicatorBarButtonItem; // ivar: _activityIndicatorBarButtonItem
@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (retain, nonatomic) NSOperationQueue *artworkOperationQueue; // ivar: _artworkOperationQueue
@property (retain, nonatomic) UIImageView *artworkView; // ivar: _artworkView
@property (retain, nonatomic) UIVisualEffectView *artworkVisualEffectView; // ivar: _artworkVisualEffectView
@property (retain, nonatomic) UIBarButtonItem *backButton; // ivar: _backButton
@property (readonly, nonatomic) UITapGestureRecognizer *backPressRecognizer; // ivar: _backPressRecognizer
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (weak, nonatomic) NSObject<CPUINowPlayingViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPUINowPlayingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer; // ivar: _fastForwardButtonLongPressRecognizer
@property (retain, nonatomic) NSString *forwardTransportButtonImageIdentifier; // ivar: _forwardTransportButtonImageIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UITapGestureRecognizer *knobPressRecognizer; // ivar: _knobPressRecognizer
@property (retain, nonatomic) UILongPressGestureRecognizer *leftButtonLongPressRecognizer; // ivar: _leftButtonLongPressRecognizer
@property (retain, nonatomic) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer; // ivar: _leftNudgeLongPressRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *leftNudgePressRecognizer; // ivar: _leftNudgePressRecognizer
@property (retain, nonatomic) NSArray *nowPlayingSizeConstraints; // ivar: _nowPlayingSizeConstraints
@property (retain, nonatomic) CPUINowPlayingView *nowPlayingView; // ivar: _nowPlayingView
@property (readonly, nonatomic) CPUIPlayModeControlView *playModeControlView;
@property (retain, nonatomic) NSString *playPauseTransportButtonImageIdentifier; // ivar: _playPauseTransportButtonImageIdentifier
@property (retain, nonatomic) UIBarButtonItem *playbackQueueBarButtonItem; // ivar: _playbackQueueBarButtonItem
@property (retain, nonatomic) NSString *previousTransportButtonImageIdentifier; // ivar: _previousTransportButtonImageIdentifier
@property (retain, nonatomic) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer; // ivar: _rightNudgeLongPressRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *rightNudgePressRecognizer; // ivar: _rightNudgePressRecognizer
@property (retain, nonatomic) UILabel *rightTitleLabel; // ivar: _rightTitleLabel
@property (retain, nonatomic) UIBarButtonItem *rightTitleLabelBarButtonItem; // ivar: _rightTitleLabelBarButtonItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPUITransportControlView *transportControlView;


-(BOOL)_showsButtonSelectionsForTouch;
-(id)_installedFullBackgroundArtworkViewBelowView:(id)arg0 ;
-(id)_upNextBarButtonItem;
-(id)initWithBundleIdentifier:(id)arg0 dataSource:(id)arg1 delegate:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_adjustRightTitleLabelToFit;
-(void)_albumArtistButtonTapped:(id)arg0 ;
-(void)_fastForwardButtonLongPress:(id)arg0 ;
-(void)_fastForwardButtonTouchDown:(id)arg0 ;
-(void)_fastForwardButtonTouchUp:(id)arg0 ;
-(void)_initializeTransportControls;
-(void)_leftButtonLongPress:(id)arg0 ;
-(void)_leftButtonTouchDown:(id)arg0 ;
-(void)_leftButtonTouchUp:(id)arg0 ;
-(void)_leftNudgePress:(id)arg0 ;
-(void)_playPauseButtonTouchDown:(id)arg0 ;
-(void)_playPauseButtonTouchUp:(id)arg0 ;
-(void)_recalculateLayout:(BOOL)arg0 ;
-(void)_reloadDataForcingLayout:(BOOL)arg0 ;
-(void)_respondToHeldAction;
-(void)_rightNudgePress:(id)arg0 ;
-(void)_sendAction:(NSInteger)arg0 withState:(NSInteger)arg1 ;
-(void)_sendHeldAction;
-(void)_updateArtworkIfNeeded:(id)arg0 placeholder:(id)arg1 ;
-(void)_updatePlayModesState;
-(void)_updatePlaybackRate;
-(void)_updateRepeatStateWithType:(NSInteger)arg0 ;
-(void)_updateShuffleStateWithType:(NSInteger)arg0 ;
-(void)_updateTransportControl:(id)arg0 withDefaultImage:(id)arg1 actionType:(NSInteger)arg2 ;
-(void)playModeControlView:(id)arg0 didSelectButton:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reloadData;
-(void)setRightTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)upNextButtonTapped:(id)arg0 ;
-(void)updatePlayControls;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif