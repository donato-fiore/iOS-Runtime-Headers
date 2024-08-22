// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVVIDEOPLAYERVIEWCONTROLLER_H
#define SVVIDEOPLAYERVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, AVPlayerViewController, UIGestureRecognizer;
@protocol SVVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SVVideoAdViewControllerProviding, SVVideoPlayerViewControllerDataSource, SVVideoPlayerViewControllerDelegate, SVVideoAdProviding;


#import "SVAdGradientView.h"
#import "SVAdPrivacyButton.h"
#import "SVPlaybackCoordinator.h"
#import "SVAutomaticFullscreenVideoPlaybackBehaviorManager.h"
#import "SVLearnMoreButton.h"
#import "SVVideoPlaybackQueue.h"
#import "SVVideoAdSkipButton.h"
#import "SVKeyValueObserver.h"
#import "SVVideoVolumeObserver.h"

@interface SVVideoPlayerViewController : UIViewController <SVVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SVVideoAdViewControllerProviding>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) SVAdGradientView *adGradientView; // ivar: _adGradientView
@property (retain, nonatomic) SVAdPrivacyButton *adPrivacyButton; // ivar: _adPrivacyButton
@property (retain, nonatomic) SVPlaybackCoordinator *coordinator; // ivar: _coordinator
@property (weak, nonatomic) NSObject<SVVideoPlayerViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SVVideoPlayerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablePictureInPictureBehaviors; // ivar: _enablePictureInPictureBehaviors
@property (nonatomic, getter=isFullscreen) BOOL fullscreen; // ivar: _fullscreen
@property (nonatomic) NSUInteger fullscreenBehavior; // ivar: _fullscreenBehavior
@property (readonly, nonatomic) SVAutomaticFullscreenVideoPlaybackBehaviorManager *fullscreenBehaviorManager; // ivar: _fullscreenBehaviorManager
@property (readonly, nonatomic, getter=isFullscreenInProgress) BOOL fullscreenInProgress;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SVLearnMoreButton *learnMoreButton; // ivar: _learnMoreButton
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (nonatomic) BOOL playButtonTapped; // ivar: _playButtonTapped
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) SVVideoPlaybackQueue *queue; // ivar: _queue
@property (nonatomic) BOOL showsPlaybackControls; // ivar: _showsPlaybackControls
@property (retain, nonatomic) SVVideoAdSkipButton *skipButton; // ivar: _skipButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *tapGesture; // ivar: _tapGesture
@property (retain, nonatomic) NSObject<SVVideoAdProviding> *videoAd; // ivar: _videoAd
@property (retain, nonatomic) SVKeyValueObserver *videoBoundsObserver; // ivar: _videoBoundsObserver
@property (readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
@property (retain, nonatomic) SVVideoVolumeObserver *volumeObserver; // ivar: _volumeObserver


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)playbackAllowedForPlaybackCoordinator:(id)arg0 ;
-(BOOL)playerViewController:(id)arg0 shouldExitFullScreenWithReason:(NSInteger)arg1 ;
-(id)init;
-(void)adSkipButtonTapped:(id)arg0 ;
-(void)addDebuggerAction:(id)arg0 ;
-(void)advance;
-(void)dealloc;
-(void)embedVideoPlayerIfNeeded;
-(void)enterFullscreenWithCompletionBlock:(id)arg0 ;
-(void)exitFullscreenWithCompletionBlock:(id)arg0 ;
-(void)finished;
-(void)fullscreenBehaviorManagerRequiresFullscreenPlayback:(id)arg0 ;
-(void)learnMoreButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)pause;
-(void)playWithButtonTapped:(BOOL)arg0 ;
-(void)playbackCoordinator:(id)arg0 playbackFailedWithError:(id)arg1 ;
-(void)playbackCoordinator:(id)arg0 timeElapsed:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)playbackCoordinatorFinishedPlayback:(id)arg0 ;
-(void)playbackCoordinatorPausedPlayback:(id)arg0 ;
-(void)playbackCoordinatorResumedPlayback:(id)arg0 ;
-(void)playbackCoordinatorStartedPlayback:(id)arg0 ;
-(void)playbackCoordinatorStateChanged:(id)arg0 ;
-(void)playerViewController:(id)arg0 metricsCollectionEventOccured:(NSInteger)arg1 ;
-(void)playerViewController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg0 ;
-(void)refreshControlsForPlaybackCoordinator:(id)arg0 ;
-(void)removeVideoPlayerIfNeeded;
-(void)setupQueueIfNeeded;
-(void)startPictureInPictureIfPossible;
-(void)startPlaybackForCoordinatorIfAllowed:(id)arg0 ;
-(void)stopPictureInPicture;
-(void)tapped;
-(void)transitionToCoordinator:(id)arg0 ;
-(void)updateAdsButtonsVisibility;
-(void)updateSkipButtonWithThreshold:(NSUInteger)arg0 time:(CGFloat)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willUnload;


@end


#endif