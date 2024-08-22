// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUBROWSINGIRISPLAYER_H
#define PUBROWSINGIRISPLAYER_H

@class NSArray, NSString, PHLivePhoto, NSMutableSet, ISLivePhotoPlayer, ISWrappedAVPlayer;
@protocol ISChangeObserver, PXVideoScrubberControllerTarget, PUDisplayAsset;


#import "PUViewModel.h"
#import "PUBrowsingIrisPlayerChange.h"
#import "PUMediaProvider.h"

@interface PUBrowsingIrisPlayer : PUViewModel <ISChangeObserver, PXVideoScrubberControllerTarget>

 {
    ? _isValid;
    id *_videoPeriodicObserver;
}


@property (nonatomic) NSInteger _currentUnloadRequestId; // ivar: __currentUnloadRequestId
@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly, nonatomic) BOOL allowLargeVitalityInset; // ivar: _allowLargeVitalityInset
@property (nonatomic) BOOL appIsInBackground; // ivar: _appIsInBackground
@property (retain, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) PUBrowsingIrisPlayerChange *currentChange;
@property (readonly, nonatomic) ? currentPhotoTime;
@property (readonly, nonatomic) ? currentVideoDuration;
@property (copy, nonatomic) NSArray *currentlyDisplayedTimes; // ivar: _currentlyDisplayedTimes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *durationChangeHandler; // ivar: durationChangeHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLivePhotoPlaybackAllowed; // ivar: _isLivePhotoPlaybackAllowed
@property (retain, nonatomic) PHLivePhoto *livePhoto; // ivar: _livePhoto
@property (nonatomic, getter=isLivePhotoLoadingAllowed) BOOL livePhotoLoadingAllowed; // ivar: _livePhotoLoadingAllowed
@property (readonly, nonatomic) NSMutableSet *livePhotoLoadingDisablingReasons; // ivar: _livePhotoLoadingDisablingReasons
@property (readonly, nonatomic) NSMutableSet *livePhotoPlaybackDisablingReasons; // ivar: _livePhotoPlaybackDisablingReasons
@property (nonatomic) int livePhotoRequestID; // ivar: _livePhotoRequestID
@property (nonatomic) NSInteger livePhotoRequestState; // ivar: _livePhotoRequestState
@property (nonatomic) NSInteger loadingTarget; // ivar: _loadingTarget
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) ISLivePhotoPlayer *player; // ivar: _player
@property (copy, nonatomic) id *playerItemChangeHandler; // ivar: playerItemChangeHandler
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (readonly, nonatomic) ? scrubbingPhotoTime; // ivar: _scrubbingPhotoTime
@property (copy, nonatomic) id *seekCompletionHandler; // ivar: _seekCompletionHandler
@property (copy, nonatomic) id *statusChangeHandler; // ivar: statusChangeHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer
@property (readonly, nonatomic) ? vitalityTransform; // ivar: _vitalityTransform


+(id)new;
-(BOOL)_needsUpdate;
-(BOOL)isContentLoadingRequestInProgress;
-(NSInteger)_contentMode;
-(float)playRate;
-(id)_playerCreateIfNeeded:(BOOL)arg0 ;
-(id)addPeriodicTimeObserverForInterval:(struct ? )arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)debugDetailedDescription;
-(id)init;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(id)newViewModelChange;
-(struct ? )currentItemDuration;
-(struct CGSize )_targetSize;
-(void)_cancelAllRequests;
-(void)_handleLivePhotoResult:(id)arg0 info:(id)arg1 requestID:(int)arg2 ;
-(void)_handleLoadedVitalityTransform:(struct ? )arg0 limitingAllowed:(BOOL)arg1 forAsset:(id)arg2 ;
-(void)_handlePeriodicObserverWithTime:(struct ? )arg0 ;
-(void)_handlePlaybackStyleChanged;
-(void)_invalidateLivePhoto;
-(void)_invalidatePlayerContent;
-(void)_invalidatePlayerItemLoadingTarget;
-(void)_invalidatePlayerItemScrubbingPhotoTime;
-(void)_invalidatePlaying;
-(void)_updateIfNeeded;
-(void)_updateLivePhotoIfNeeded;
-(void)_updatePlayerContentIfNeeded;
-(void)_updatePlayerItemLoadingTargetIfNeeded;
-(void)_updatePlayerItemScrubbingPhotoTimeIfNeeded;
-(void)_updatePlayingIfNeeded;
-(void)_updateVitalityTransform;
-(void)cancelPendingSeeks;
-(void)dealloc;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)playPreviewHintWhenReady;
-(void)registerChangeObserver:(id)arg0 ;
-(void)removeTimeObserver:(id)arg0 ;
-(void)unloadLivePhoto;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)videoScrubberController:(id)arg0 seekToTime:(struct ? )arg1 toleranceBefore:(struct ? )arg2 toleranceAfter:(struct ? )arg3 completionHandler:(id)arg4 ;


@end


#endif