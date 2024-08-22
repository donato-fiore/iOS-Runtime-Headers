// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBROWSINGVIDEOPLAYER_H
#define PUBROWSINGVIDEOPLAYER_H

@class PXUpdater, NSMutableSet, ISWrappedAVPlayer, NSString, NSError, PXActivityCoordinator, AVPlayerItem, NSHashTable, PXVideoSession;
@protocol ISChangeObserver, PXChangeObserver, PXVideoSessionDelegate, PXActivityCoordinatorItem, PUDisplayAsset;


#import "PUViewModel.h"
#import "PUBrowsingVideoPlayerChange.h"
#import "PUMediaProvider.h"

@interface PUBrowsingVideoPlayer : PUViewModel <ISChangeObserver, PXChangeObserver, PXVideoSessionDelegate, PXActivityCoordinatorItem>

 {
    PXUpdater *_updater;
    ? _pendingSeekTime;
    id *_pendingSeekCompletionHandler;
    *void _videoSessionPresenter;
}


@property (nonatomic, setter=_setUpdatingAudioSession:) BOOL _isUpdatingAudioSession; // ivar: __isUpdatingAudioSession
@property (retain, nonatomic, setter=_setPlayerLoadingDisablingReasons:) NSMutableSet *_playerLoadingDisablingReasons; // ivar: __playerLoadingDisablingReasons
@property (retain, nonatomic, setter=_setPlayingDisablingReasons:) NSMutableSet *_playingDisablingReasons; // ivar: __playingDisablingReasons
@property (nonatomic) NSUInteger activityCoordinatorQueuePosition; // ivar: _activityCoordinatorQueuePosition
@property (nonatomic) BOOL alwaysRespectsMuteSwitch; // ivar: _alwaysRespectsMuteSwitch
@property (retain, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (nonatomic, setter=_setAudioStatus:) NSInteger audioStatus; // ivar: _audioStatus
@property (readonly, nonatomic) ISWrappedAVPlayer *avPlayer;
@property (readonly, nonatomic) PUBrowsingVideoPlayerChange *currentChange;
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (nonatomic) ? desiredSeekTime; // ivar: _desiredSeekTime
@property (readonly, nonatomic) ? duration;
@property (retain, nonatomic, setter=_setError:) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setActivated:) BOOL isActivated; // ivar: _isActivated
@property (readonly, nonatomic) BOOL isAtBeginning;
@property (readonly, nonatomic) BOOL isAtEnd;
@property (nonatomic, setter=setMuted:) BOOL isMuted; // ivar: _isMuted
@property (readonly, nonatomic) BOOL isPlayable;
@property (readonly, nonatomic) BOOL isPlaybackDesired;
@property (nonatomic, setter=_setPlayerLoadingAllowed:) BOOL isPlayerLoadingAllowed; // ivar: _isPlayerLoadingAllowed
@property (nonatomic, setter=_setPlayingAllowed:) BOOL isPlayingAllowed; // ivar: _isPlayingAllowed
@property (readonly, nonatomic) BOOL isStalled;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) NSUInteger nextPlayerLoadingEnabledUpdateID; // ivar: _nextPlayerLoadingEnabledUpdateID
@property (readonly, nonatomic) NSInteger playState;
@property (readonly, nonatomic) PXActivityCoordinator *playbackCoordinator; // ivar: _playbackCoordinator
@property (retain, nonatomic, setter=_setPlayerItem:) AVPlayerItem *playerItem; // ivar: _playerItem
@property (nonatomic) BOOL shouldFadeNextVolumeChange; // ivar: _shouldFadeNextVolumeChange
@property (nonatomic) BOOL shouldLoadVideoSession; // ivar: _shouldLoadVideoSession
@property (nonatomic) BOOL shouldPreloadVideoContent; // ivar: _shouldPreloadVideoContent
@property (nonatomic) BOOL shouldRegisterForPlayback; // ivar: _shouldRegisterForPlayback
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *timeObservers; // ivar: _timeObservers
@property (readonly, nonatomic) NSHashTable *videoOutputs; // ivar: _videoOutputs
@property (retain, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession
@property (nonatomic) float volume; // ivar: _volume


-(id)init;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(id)newViewModelChange;
-(void)_handleShouldReloadAssetMediaNotification:(id)arg0 ;
-(void)_performPendingSeekIfNeeded;
-(void)_updateAudioSessionCategory;
-(void)_updatePlayerLoadingAllowedWithUpdateID:(NSUInteger)arg0 ;
-(void)_updatePlayerVolume;
-(void)_updateShouldRegisterForPlayback;
-(void)_updateVideoSession;
-(void)_updateVideoSessionDesiredPlayState;
-(void)dealloc;
-(void)didPerformChanges;
-(void)invalidateExistingPlayer;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)registerTimeObserver:(id)arg0 ;
-(void)registerVideoOutput:(id)arg0 ;
-(void)rewindExistingPlayer;
-(void)seekToTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)seekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)setPlayerLoadingDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setPlayingDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)unregisterTimeObserver:(id)arg0 ;
-(void)unregisterVideoOutput:(id)arg0 ;
-(void)videoSessionAudioSessionOutputVolumeDidChange:(id)arg0 fromVolume:(float)arg1 toVolume:(float)arg2 ;
-(void)videoSessionDidPlayToEnd:(id)arg0 ;


@end


#endif