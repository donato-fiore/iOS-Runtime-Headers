// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISBASEPLAYER_H
#define ISBASEPLAYER_H

@class AVPlayer, NSHashTable, NSString, NSError;
@protocol ISChangeObserver, ISWrappedAVPlayerDelegate, OS_dispatch_queue, ISBasePlayerDelegate;


#import "ISObservable.h"
#import "ISPlayerOutputContent.h"
#import "ISBehavior.h"
#import "ISPlayerState.h"
#import "ISPlayerItem.h"
#import "ISWrappedAVPlayer.h"

@interface ISBasePlayer : ISObservable <ISChangeObserver, ISWrappedAVPlayerDelegate>

 {
    float _videoVolume;
    AVPlayer *_providedAVPlayer;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSHashTable *_outputs;
    NSString *_apertureMode;
    ? _isValid;
    NSInteger _mainQueue_mediaServicesResetCounter;
}


@property (retain, nonatomic, setter=_setOutputContent:) ISPlayerOutputContent *_outputContent; // ivar: __outputContent
@property (nonatomic, setter=_setVideoForwardPlaybackEndTime:) ? _videoForwardPlaybackEndTime; // ivar: __videoForwardPlaybackEndTime
@property (retain, nonatomic, setter=_setVideoWillPlayToEndObserver:) id *_videoWillPlayToEndObserver; // ivar: __videoWillPlayToEndObserver
@property (retain, nonatomic, setter=_setVideoWillPlayToPhotoObserver:) id *_videoWillPlayToPhotoObserver; // ivar: __videoWillPlayToPhotoObserver
@property (retain, nonatomic, setter=setActiveBehavior:) ISBehavior *activeBehavior; // ivar: _activeBehavior
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // ivar: _audioEnabled
@property (nonatomic) float audioVolume; // ivar: _audioVolume
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ISBasePlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, setter=_setError:) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setLastAppliedLayoutInfo:) ISPlayerState *lastAppliedLayoutInfo; // ivar: _lastAppliedLayoutInfo
@property (nonatomic, setter=_setLastAppliedScale:) CGFloat lastAppliedScale; // ivar: _lastAppliedScale
@property (retain, nonatomic) ISPlayerItem *playerItem; // ivar: _playerItem
@property (nonatomic, setter=_setStatus:) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL videoLayersReadyForDisplay;
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer


-(BOOL)_needsUpdate;
-(BOOL)behavior:(id)arg0 prerollVideoAtRate:(float)arg1 completionHandler:(id)arg2 ;
-(BOOL)behavior:(id)arg0 seekVideoPlayerToTime:(struct ? )arg1 completionHandler:(id)arg2 ;
-(BOOL)behavior:(id)arg0 seekVideoPlayerToTime:(struct ? )arg1 toleranceBefore:(struct ? )arg2 toleranceAfter:(struct ? )arg3 completionHandler:(id)arg4 ;
-(BOOL)behaviorIsVideoReadyForDisplay:(id)arg0 ;
-(CGFloat)videoWillPlayToEndInterval;
-(CGFloat)videoWillPlayToPhotoInterval;
-(float)videoPlayRate;
-(float)videoVolume;
-(id)apertureMode;
-(id)behavior:(id)arg0 addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3 ;
-(id)init;
-(id)initWithVideoPlayer:(id)arg0 ;
-(id)mutableChangeObject;
-(void)_configureNewOutput:(id)arg0 ;
-(void)_handleErrorsIfNeeded;
-(void)_invalidateContentFromPlayerItem;
-(void)_invalidateStatus;
-(void)_invalidateVideoPlayer;
-(void)_invalidateVideoPlayerVolume;
-(void)_invalidateWillPlayToEndObserver;
-(void)_invalidateWillPlayToPhotoObserver;
-(void)_mainQueue_handleMediaServicesReset;
-(void)_mainQueue_resetAVObjectsWithResetCount:(NSInteger)arg0 ;
-(void)_outputVideoReadyForDisplayDidChange:(id)arg0 ;
-(void)_setForwardPlaybackEndTime:(struct ? )arg0 ;
-(void)_updateContentFromPlayerItemIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)_updateVideoPlayerIfNeeded;
-(void)_updateVideoPlayerVolumeIfNeeded;
-(void)_updateWillPlayToEndObserverIfNeeded;
-(void)_updateWillPlayToPhotoObserverIfNeeded;
-(void)_videoDidPlayToEnd;
-(void)_videoWillPlayToEnd;
-(void)_videoWillPlayToPhoto;
-(void)addOutput:(id)arg0 ;
-(void)applyOutputInfo:(id)arg0 fromBehavior:(id)arg1 withTransitionOptions:(id)arg2 completion:(id)arg3 ;
-(void)applyScale:(CGFloat)arg0 withTransitionOptions:(id)arg1 completion:(id)arg2 ;
-(void)avPlayer:(id)arg0 itemDidPlayToEnd:(id)arg1 ;
-(void)behavior:(id)arg0 didSetOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(id)arg3 ;
-(void)behavior:(id)arg0 playVideoToTime:(struct ? )arg1 initialRate:(float)arg2 overDuration:(CGFloat)arg3 progressHandler:(id)arg4 ;
-(void)behavior:(id)arg0 removeTimeObserver:(id)arg1 ;
-(void)behavior:(id)arg0 setVideoForwardPlaybackEndTime:(struct ? )arg1 ;
-(void)behavior:(id)arg0 setVideoPlayRate:(float)arg1 ;
-(void)behavior:(id)arg0 setVideoVolume:(float)arg1 ;
-(void)configurePlayerItem;
-(void)dealloc;
-(void)didAddOutput:(id)arg0 ;
-(void)didPerformChanges;
-(void)enumerateOutputsWithBlock:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeOutput:(id)arg0 ;
-(void)setApertureMode:(id)arg0 ;
-(void)setVideoVolume:(float)arg0 ;
-(void)willRemoveOutput:(id)arg0 ;


@end


#endif