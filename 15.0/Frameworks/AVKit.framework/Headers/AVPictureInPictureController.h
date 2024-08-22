// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPICTUREINPICTURECONTROLLER_H
#define AVPICTUREINPICTURECONTROLLER_H

@class NSString, AVPlayerLayer;
@protocol AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureControlsStyleAppearance, AVPictureInPictureControllerDelegate, AVPictureInPicturePrerollDelegate, AVPictureInPictureContentSource;

#import <Foundation/Foundation.h>

#import "AVPictureInPictureControllerContentSource.h"
#import "AVObservationController.h"
#import "AVPictureInPictureViewController.h"
#import "AVPictureInPicturePlatformAdapter.h"
#import "AVPlayerController.h"

@interface AVPictureInPictureController : NSObject <AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureControlsStyleAppearance>



@property (nonatomic) BOOL allowsPictureInPictureFromInlineWhenEnteringBackground; // ivar: _allowsPictureInPictureFromInlineWhenEnteringBackground
@property (nonatomic) BOOL allowsPictureInPicturePlayback; // ivar: _allowsPictureInPicturePlayback
@property (nonatomic) NSInteger backgroundPlaybackPolicy;
@property (nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground; // ivar: _canStartAutomaticallyWhenEnteringBackground
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyFromInline;
@property (nonatomic, setter=_setCanStopPictureInPicture:) BOOL canStopPictureInPicture; // ivar: _canStopPictureInPicture
@property (retain, nonatomic) AVPictureInPictureControllerContentSource *contentSource; // ivar: _contentSource
@property (nonatomic) NSInteger controlsStyle; // ivar: _controlsStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVPictureInPictureControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // ivar: _microphoneEnabled
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (nonatomic, getter=isOtherPictureInPictureActive) BOOL otherPictureInPictureActive; // ivar: _otherPictureInPictureActive
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // ivar: _pictureInPictureActive
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible; // ivar: _pictureInPicturePossible
@property (nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended; // ivar: _pictureInPictureSuspended
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground; // ivar: _pictureInPictureWasStartedWhenEnteringBackground
@property (readonly, nonatomic) AVPictureInPicturePlatformAdapter *platformAdapter; // ivar: _platformAdapter
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (retain, nonatomic) id *playerControllerIsPlayingObservationToken; // ivar: _playerControllerIsPlayingObservationToken
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (weak, nonatomic) NSObject<AVPictureInPicturePrerollDelegate> *prerollDelegate; // ivar: _prerollDelegate
@property (nonatomic) BOOL requiresLinearPlayback; // ivar: _requiresLinearPlayback
@property (nonatomic) BOOL retainsSourceDuringPictureInPicturePlayback; // ivar: _retainsSourceDuringPictureInPicturePlayback
@property (readonly, weak, nonatomic) NSObject<AVPictureInPictureContentSource> *source; // ivar: _source
@property (retain, nonatomic) NSObject<AVPictureInPictureContentSource> *sourceIfRetainedDuringPictureInPicturePlayback; // ivar: _sourceIfRetainedDuringPictureInPicturePlayback
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsImmediateAssetInspection; // ivar: _wantsImmediateAssetInspection
@property (readonly, nonatomic) BOOL wantsResourceReduction; // ivar: _wantsResourceReduction
@property (nonatomic) BOOL wasPlayingWhenPictureInPictureInterruptionBegan; // ivar: _wasPlayingWhenPictureInPictureInterruptionBegan


+(BOOL)isPictureInPictureSupported;
+(id)_imageNamed:(id)arg0 compatibileWithTraitCollection:(id)arg1 ;
+(id)pictureInPictureButtonStartImage;
+(id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg0 ;
+(id)pictureInPictureButtonStopImage;
+(id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg0 ;
-(id)_delegateIfRespondsToSelector:(SEL)arg0 ;
-(id)_sbdlPlayerController;
-(id)activitySessionIdentifier;
-(id)init;
-(id)initWithContentSource:(id)arg0 ;
-(id)initWithPlayerLayer:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)sampleBufferDisplayLayer;
-(void)_commonInitWithSource:(id)arg0 ;
-(void)_configureContentSourceForVideoCallsIfNeeded:(id)arg0 ;
-(void)_invalidateContentSourceForVideoCallsIfNeeded:(id)arg0 ;
-(void)_startObservationsForContentSource:(id)arg0 ;
-(void)_startObservingPlayerLayerContentSource:(id)arg0 ;
-(void)_startObservingSampleBufferDisplayLayerContentSource:(id)arg0 ;
-(void)_stopPictureInPictureAndRestoreUserInterface:(BOOL)arg0 ;
-(void)_updateBackgroundPlaybackPolicyFromPlayerController;
-(void)_updateEnqueuedBufferDimensions;
-(void)dealloc;
-(void)invalidate;
-(void)invalidatePlaybackState;
-(void)pictureInPicturePlatformAdapter:(id)arg0 failedToStartError:(id)arg1 ;
-(void)pictureInPicturePlatformAdapter:(id)arg0 handlePlaybackCommand:(NSInteger)arg1 ;
-(void)pictureInPicturePlatformAdapter:(id)arg0 prepareToStopForRestoringUserInterface:(id)arg1 ;
-(void)pictureInPicturePlatformAdapter:(id)arg0 statusDidChange:(NSInteger)arg1 fromStatus:(NSInteger)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg0 stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg0 ;
-(void)reloadPrerollAttributes;
-(void)sampleBufferDisplayLayerDidAppear;
-(void)sampleBufferDisplayLayerDidDisappear;
-(void)sampleBufferDisplayLayerRenderSizeDidChangeToSize:(struct CGSize )arg0 ;
-(void)setActivitySessionIdentifier:(id)arg0 ;
-(void)startObservingPlayerController:(id)arg0 ;
-(void)startPictureInPicture;
-(void)stopObservingPlayerController:(id)arg0 ;
-(void)stopPictureInPicture;
-(void)stopPictureInPictureEvenWhenInBackground;


@end


#endif