// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOPLAYERVIEWCONTROLLER_H
#define SXVIDEOPLAYERVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, AVPlayerViewController, UIGestureRecognizer, SVKeyValueObserver;
@protocol SXVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SXVideoAdViewControllerProviding, SXVideoPlayerViewControllerDataSource, SXVideoPlayerViewControllerDelegate, SXVideoAdProviding, SXVolumeReporting;


#import "SXAdPrivacyButton.h"
#import "SXPlaybackCoordinator.h"
#import "SXAutomaticFullscreenVideoPlaybackBehaviorManager.h"
#import "SXLearnMoreButton.h"
#import "SXVideoPlaybackQueue.h"
#import "SXVideoAdSkipButton.h"
#import "SXVideoVolumeObserver.h"

@interface SXVideoPlayerViewController : UIViewController <SXVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SXVideoAdViewControllerProviding>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) SXAdPrivacyButton *adPrivacyButton; // ivar: _adPrivacyButton
@property (retain, nonatomic) SXPlaybackCoordinator *coordinator; // ivar: _coordinator
@property (weak, nonatomic) NSObject<SXVideoPlayerViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXVideoPlayerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen; // ivar: _fullscreen
@property (nonatomic) NSUInteger fullscreenBehavior; // ivar: _fullscreenBehavior
@property (readonly, nonatomic) SXAutomaticFullscreenVideoPlaybackBehaviorManager *fullscreenBehaviorManager; // ivar: _fullscreenBehaviorManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXLearnMoreButton *learnMoreButton; // ivar: _learnMoreButton
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) BOOL playButtonTapped; // ivar: _playButtonTapped
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) SXVideoPlaybackQueue *queue; // ivar: _queue
@property (nonatomic) BOOL showsPlaybackControls; // ivar: _showsPlaybackControls
@property (retain, nonatomic) SXVideoAdSkipButton *skipButton; // ivar: _skipButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *tapGesture; // ivar: _tapGesture
@property (retain, nonatomic) NSObject<SXVideoAdProviding> *videoAd; // ivar: _videoAd
@property (retain, nonatomic) SVKeyValueObserver *videoBoundsObserver; // ivar: _videoBoundsObserver
@property (readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
@property (retain, nonatomic) SXVideoVolumeObserver *volumeObserver; // ivar: _volumeObserver
@property (readonly, nonatomic) NSObject<SXVolumeReporting> *volumeReporter; // ivar: _volumeReporter


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)playbackAllowedForPlaybackCoordinator:(id)arg0 ;
-(BOOL)playerViewController:(id)arg0 shouldExitFullScreenWithReason:(NSInteger)arg1 ;
-(id)initWithVolumeReporter:(id)arg0 ;
-(void)adSkipButtonTapped:(id)arg0 ;
-(void)advance;
-(void)dealloc;
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
-(void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)refreshControlsForPlaybackCoordinator:(id)arg0 ;
-(void)setupQueueIfNeeded;
-(void)startPlaybackForCoordinatorIfAllowed:(id)arg0 ;
-(void)tapped;
-(void)transitionToCoordinator:(id)arg0 ;
-(void)updateSkipButtonWithThreshold:(NSUInteger)arg0 time:(CGFloat)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif