// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVHOMEIPCAMERABEHAVIORCONTEXT_H
#define AVHOMEIPCAMERABEHAVIORCONTEXT_H

@class NSString, UIView;
@protocol AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext, AVScrubbing;

#import <Foundation/Foundation.h>

#import "AVHomeIPCameraBehavior.h"
#import "AVHomeIPCameraPlayerController.h"
#import "AVObservationController.h"
#import "AVPlayerController.h"
#import "AVPlayerViewController.h"
#import "AVZoomingBehavior.h"

@interface AVHomeIPCameraBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext, AVScrubbing>



@property (weak, nonatomic) AVHomeIPCameraBehavior *behavior; // ivar: _behavior
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyWhenEnteringBackground; // ivar: _canStartPictureInPictureAutomaticallyWhenEnteringBackground
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMicrophone; // ivar: _hasMicrophone
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLivePreviewActive) BOOL livePreviewActive; // ivar: _livePreviewActive
@property (nonatomic) CGSize livePreviewAspectRatio; // ivar: _livePreviewAspectRatio
@property (readonly, nonatomic) UIView *livePreviewContainerView; // ivar: _livePreviewContainerView
@property (weak, nonatomic) AVHomeIPCameraPlayerController *livePreviewPlayerController; // ivar: _livePreviewPlayerController
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // ivar: _microphoneEnabled
@property (retain, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls; // ivar: _playbackControlsIncludeDisplayModeControls
@property (nonatomic) BOOL playbackControlsIncludePictureInPictureButton; // ivar: _playbackControlsIncludePictureInPictureButton
@property (nonatomic) BOOL playbackControlsIncludeTransportControls; // ivar: _playbackControlsIncludeTransportControls
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls; // ivar: _playbackControlsIncludeVolumeControls
@property (nonatomic) BOOL playbackControlsShowsLoadingIndicator; // ivar: _playbackControlsShowsLoadingIndicator
@property (retain, nonatomic) AVPlayerController *playerControllerToRestore; // ivar: _playerControllerToRestore
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) AVZoomingBehavior *zoomingBehavior; // ivar: _zoomingBehavior
@property (nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled; // ivar: _zoomingEnabled


-(id)initWithAVKitOwner:(id)arg0 ;
-(void)_updatePictureInPictureController;
-(void)_updatePlaybackControlsControllerAndZoomingBehavior;
-(void)beginScrubbing;
-(void)dealloc;
-(void)didAddBehavior:(id)arg0 ;
-(void)didRemoveBehavior:(id)arg0 ;
-(void)didStopPictureInPicture;
-(void)endScrubbing;
-(void)scrubToTime:(CGFloat)arg0 resolution:(CGFloat)arg1 ;
-(void)setBackgroundColor:(id)arg0 forContainerOfControlItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)willAddBehavior:(id)arg0 ;
-(void)willRemoveBehavior:(id)arg0 ;
-(void)willStartPictureInPictureWithViewController:(id)arg0 ;


@end


#endif