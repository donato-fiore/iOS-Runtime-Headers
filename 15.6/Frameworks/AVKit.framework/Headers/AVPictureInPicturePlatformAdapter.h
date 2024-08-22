// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPICTUREINPICTUREPLATFORMADAPTER_H
#define AVPICTUREINPICTUREPLATFORMADAPTER_H

@class NSString, NSTimer, PGPictureInPictureProxy, UIWindow;
@protocol AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate, AVPictureInPictureControlsStyleAppearance, AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVPictureInPictureViewController.h"
#import "AVPlayerController.h"
#import "AVPictureInPicturePrerollAttributes.h"
#import "AVSecondScreenConnection.h"

@interface AVPictureInPicturePlatformAdapter : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate, AVPictureInPictureControlsStyleAppearance>



@property (copy, nonatomic) NSString *activitySessionIdentifier; // ivar: _activitySessionIdentifier
@property (nonatomic) BOOL allowsPictureInPicturePlayback; // ivar: _allowsPictureInPicturePlayback
@property (nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground; // ivar: _alwaysStartsAutomaticallyWhenEnteringBackground
@property (readonly, nonatomic, getter=isAnyPictureInPictureActive) BOOL anyPictureInPictureActive; // ivar: _anyPictureInPictureActive
@property (nonatomic) NSInteger backgroundPlaybackPolicy; // ivar: _backgroundPlaybackPolicy
@property (readonly, nonatomic) BOOL canAnimatePictureInPictureTransition;
@property (nonatomic) BOOL canPausePlaybackWhenExitingPictureInPicture; // ivar: _canPausePlaybackWhenExitingPictureInPicture
@property (nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground; // ivar: _canStartAutomaticallyWhenEnteringBackground
@property (weak, nonatomic) NSObject<AVPictureInPictureContentSource> *contentSourceAwaitingInvalidation; // ivar: _contentSourceAwaitingInvalidation
@property (weak, nonatomic) NSObject<AVPictureInPictureContentSource> *contentSourceAwaitingSetup; // ivar: _contentSourceAwaitingSetup
@property (readonly, nonatomic, getter=isContentSourceSupported) BOOL contentSourceSupported;
@property (nonatomic) NSInteger controlsStyle; // ivar: _controlsStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVPictureInPicturePlatformAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInterruptedForAudioSession) BOOL interruptedForAudioSession; // ivar: _interruptedForAudioSession
@property (readonly, nonatomic) NSTimer *layoutCheckTimer; // ivar: _layoutCheckTimer
@property (nonatomic) BOOL managesWiredSecondScreenPlayback; // ivar: _managesWiredSecondScreenPlayback
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // ivar: _microphoneEnabled
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (nonatomic) NSInteger observedTimeControlStatus; // ivar: _observedTimeControlStatus
@property (readonly, nonatomic) PGPictureInPictureProxy *pegasusProxy; // ivar: _pegasusProxy
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController; // ivar: _pictureInPictureViewController
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (retain, nonatomic) AVPictureInPicturePrerollAttributes *prerollAttributes; // ivar: _prerollAttributes
@property (nonatomic) CGFloat rateWhenScrubbingOrSeekingBegan; // ivar: _rateWhenScrubbingOrSeekingBegan
@property (nonatomic) BOOL requiresLinearPlayback; // ivar: _requiresLinearPlayback
@property (nonatomic, getter=isRoutingVideoToHostedWindow) BOOL routingVideoToHostedWindow; // ivar: _routingVideoToHostedWindow
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking; // ivar: _scrubbingOrSeeking
@property (retain, nonatomic) AVSecondScreenConnection *secondScreenConnection; // ivar: _secondScreenConnection
@property (nonatomic, getter=isSeeking) BOOL seeking; // ivar: _seeking
@property (weak, nonatomic) NSObject<AVPictureInPictureContentSource> *source; // ivar: _source
@property (weak, nonatomic) UIWindow *sourceWindowWhenPictureInPictureStarted; // ivar: _sourceWindowWhenPictureInPictureStarted
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemPictureInPicturePossible) BOOL systemPictureInPicturePossible;
@property (nonatomic) CGRect videoRectInScreen; // ivar: _videoRectInScreen
@property (nonatomic) BOOL wasPlayingWhenSuspended; // ivar: _wasPlayingWhenSuspended


+(BOOL)isPictureInPictureSupported;
+(id)imageSymbolConfiguration;
+(id)startPictureInPictureButtonImageName;
+(id)stopPictureInPictureButtonImageName;
-(BOOL)pictureInPictureProxyCanIssueOptionalCommand:(id)arg0 ;
-(NSInteger)_proxyControlsStyle;
-(NSInteger)_sceneActivationState;
-(NSInteger)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg0 ;
-(struct CGRect )pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg0 ;
-(void)_createProxyIfNeeded;
-(void)_removeSecondScreenConnection;
-(void)_startObservation;
-(void)_startObservingForPlaybackStateUpdates;
-(void)_updatePictureInPictureShouldStartWhenEnteringBackground;
-(void)_updateProxyPlaybackState;
-(void)_updateStatus;
-(void)_updateStatusUsingProposedStatus:(NSInteger)arg0 ;
-(void)dealloc;
-(void)pictureInPictureProxy:(id)arg0 didReceivePlaybackCommand:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg0 didReceiveTestingCommand:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg0 didStartPictureInPictureWithAnimationType:(NSInteger)arg1 ;
-(void)pictureInPictureProxy:(id)arg0 didStopPictureInPictureWithAnimationType:(NSInteger)arg1 reason:(NSInteger)arg2 ;
-(void)pictureInPictureProxy:(id)arg0 didUpdateResourcesUsageReductionReasons:(NSUInteger)arg1 oldReasons:(NSUInteger)arg2 ;
-(void)pictureInPictureProxy:(id)arg0 failedToStartPictureInPictureWithAnimationType:(NSInteger)arg1 error:(id)arg2 ;
-(void)pictureInPictureProxy:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg0 willStartPictureInPictureWithAnimationType:(NSInteger)arg1 ;
-(void)pictureInPictureProxy:(id)arg0 willStopPictureInPictureWithAnimationType:(NSInteger)arg1 reason:(NSInteger)arg2 ;
-(void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg0 ;
-(void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg0 ;
-(void)pictureInPictureViewControllerViewDidAppear:(id)arg0 ;
-(void)pictureInPictureViewControllerViewWillDisappear:(id)arg0 ;
-(void)startPictureInPicture;
-(void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg0 ;
-(void)updateLayoutDependentBehaviors;


@end


#endif