// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVIDEOSESSION_H
#define PXVIDEOSESSION_H

@class NSTimer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, AVPlayerItemVideoOutput, AVPlayerItem, NSLock, ISWrappedAVPlayer, ISWrappedAVAudioSession, NSError;
@protocol ISChangeObserver, AVPlayerItemOutputPullDelegate, PXChangeObserver, ISWrappedAVPlayerDelegate, ISWrappedAVAudioSessionVolumeObserver, OS_dispatch_queue, PXVideoSessionDelegate;


#import "PXObservable.h"
#import "PXNumberAnimator.h"
#import "PXDisplayLink.h"
#import "PXVideoContentProvider.h"

@interface PXVideoSession : PXObservable <ISChangeObserver, AVPlayerItemOutputPullDelegate, PXChangeObserver, ISWrappedAVPlayerDelegate, ISWrappedAVAudioSessionVolumeObserver>

 {
    NSInteger _tokenCounter;
    NSTimer *_playerTimeAdvancementTimer;
    *void _updateQueueIdentifier;
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    NSObject<OS_dispatch_queue> *_videoWorkQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSMutableArray *_mainQueue_videoViewQueue;
    NSMutableDictionary *_stateQueue_presentationStatesByContext;
    NSMutableSet *_stateQueue_pixelBufferOutputTokens;
    NSMutableDictionary *_stateQueue_pixelBufferOutputSizesByTokens;
    NSMutableSet *_stateQueue_pixelBufferPausedOutputTokens;
    id *_stateQueue_playbackTimeRangeEndBoundaryObserver;
    NSInteger _stateQueue_playState;
    NSString *_stateQueue_audioSessionCategory;
    NSUInteger _stateQueue_audioSessionCategoryOptions;
    NSString *_stateQueue_audioSessionMode;
    NSUInteger _stateQueue_audioSessionRouteSharingPolicy;
    BOOL _stateQueue_isUpdatingAudioSession;
    BOOL _stateQueue_buffering;
    NSInteger _stateQueue_desiredPlayState;
    AVPlayerItemVideoOutput *_stateQueue_videoOutput;
    CGSize _stateQueue_videoOutputSize;
    BOOL _stateQueue_videoOutputIsReady;
    ? _stateQueue_videoDuration;
    AVPlayerItem *_stateQueue_currentPlayerItem;
    BOOL _stateQueue_isPlayerTimeAdvancing;
    NSInteger _stateQueue_audioStatus;
    AVPlayerItem *_stateQueue_playerItem;
    ? _stateQueue_segmentTimeRangeOfOriginalVideo;
    BOOL _stateQueue_isPlayable;
    BOOL _stateQueue_isStalled;
    BOOL _stateQueue_isLoopingEnabled;
    ? _stateQueue_playbackTimeRange;
    float _stateQueue_volume;
    BOOL _stateQueue_shouldFadeVolumeChange;
    BOOL _stateQueue_seekToBeginningAtEnd;
    BOOL _stateQueue_isAtEnd;
    BOOL _stateQueue_isAtBeginning;
    CGAffineTransform _stateQueue_preferredTransform;
    CGSize _stateQueue_naturalSize;
    float _stateQueue_nominalFrameRate;
    *__CVBuffer _stateQueue_currentPixelBuffer;
    BOOL _stateQueue_obtainedFirstPixelBuffer;
    NSInteger _stateQueue_pixelBufferFrameDrops;
    BOOL _stateQueue_readyForSeeking;
    ? _stateQueue_currentTime;
    NSLock *_stateQueue_isPlayableLock;
    NSLock *_stateQueue_readyForSeekingLock;
    NSLock *_stateQueue_videoOutputReadyLock;
    BOOL _stateQueue_shouldDisableAutomaticPixelBufferUpdates;
    ISWrappedAVPlayer *_stateQueue_videoPlayer;
    id *_stateQueue_playerTimeObservationToken;
    ISWrappedAVAudioSession *_stateQueue_audioSession;
    ? _updateQueue_updateFlags;
    NSInteger _updateQueue_pendingPlayerItemSeekCount;
    BOOL _updateQueue_didFinishInitializingAudioSession;
    ? _updateQueue_lastPlayerTime;
    NSInteger _updateQueue_playRequestIntervalSignpost;
    PXNumberAnimator *_mainQueue_volumeAnimator;
    PXDisplayLink *_mainQueue_displayLink;
    BOOL _sharedLock_has4k60Allowance;
}


@property (readonly, nonatomic) BOOL allowsExternalPlayback; // ivar: _allowsExternalPlayback
@property (readonly, copy, nonatomic) NSString *audioSessionCategory;
@property (readonly, nonatomic) NSUInteger audioSessionCategoryOptions;
@property (readonly, nonatomic) NSString *audioSessionMode;
@property (readonly, nonatomic) NSUInteger audioSessionRouteSharingPolicy;
@property (nonatomic) NSInteger audioStatus;
@property (nonatomic, getter=isBuffering) BOOL buffering;
@property (readonly, nonatomic) PXVideoContentProvider *contentProvider; // ivar: _contentProvider
@property (nonatomic) *__CVBuffer currentPixelBuffer;
@property (nonatomic) ? currentTime; // ivar: _currentTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugDetailedDescription;
@property (weak, nonatomic) NSObject<PXVideoSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger desiredPlayState;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setAtBeginning:) BOOL isAtBeginning;
@property (nonatomic, setter=setAtEnd:) BOOL isAtEnd;
@property (readonly, nonatomic) BOOL isExpectingVideoView; // ivar: _isExpectingVideoView
@property (readonly, nonatomic) BOOL isPlayable;
@property (readonly, nonatomic) BOOL isReadyForSeeking;
@property (readonly, nonatomic) BOOL isSegmentOfOriginalVideo;
@property (nonatomic, setter=setStalled:) BOOL isStalled;
@property (nonatomic, setter=setUpdatingAudioSession:) BOOL isUpdatingAudioSession; // ivar: _isUpdatingAudioSession
@property (nonatomic) BOOL isVideoOutputReady;
@property (readonly, nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled;
@property (nonatomic) CGSize naturalSize;
@property (nonatomic) float nominalFrameRate;
@property (readonly, nonatomic) NSInteger playState;
@property (readonly, nonatomic) ? playbackTimeRange;
@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) CGAffineTransform preferredTransform;
@property (readonly, nonatomic) BOOL preventsSleepDuringVideoPlayback;
@property (readonly, nonatomic) BOOL seekToBeginningAtEnd;
@property (readonly, nonatomic) ? segmentTimeRangeOfOriginalVideo;
@property (readonly, nonatomic) BOOL shouldDisableAutomaticPixelBufferUpdates;
@property (readonly, nonatomic) NSString *statusDescription;
@property (readonly) Class superclass;
@property (nonatomic) ? videoDuration;
@property (readonly, nonatomic) AVPlayerItemVideoOutput *videoOutput;
@property (readonly, nonatomic) CGSize videoOutputSize;
@property (readonly, nonatomic) float volume;


-(BOOL)_isOnUpdateQueue;
-(BOOL)_request4k60StreamAllowance;
-(BOOL)isPlayerTimeAdvancing;
-(NSInteger)pixelBufferFrameDropsCount;
-(NSUInteger)pixelBufferOutputTokenCount;
-(id)_newVideoView;
-(id)_playbackStateDescription;
-(id)_stateQueue_newPresentationStateFromCurrentWithPresenter:(*void)arg0 ;
-(id)audioSession;
-(id)currentPlayerItem;
-(id)dequeueVideoView;
-(id)init;
-(id)initWithContentProvider:(id)arg0 ;
-(id)initWithContentProvider:(id)arg0 videoPlayer:(id)arg1 ;
-(id)initWithContentProvider:(id)arg0 videoPlayer:(id)arg1 playerCreationDelay:(CGFloat)arg2 ;
-(id)mutableChangeObject;
-(id)performFinalCleanup;
-(id)pixelBufferOutputSizes;
-(id)videoPlayer;
-(struct CGImage *)generateSnapshotImage;
-(void)_addOutput:(id)arg0 toPlayerItem:(id)arg1 ;
-(void)_assertOnUpdateQueue;
-(void)_audioSessionQueue_initializeAudioSession;
-(void)_audioSessionQueue_updateAudioSessionWithCategory:(id)arg0 mode:(id)arg1 routeSharingPolicy:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(void)_avPlayerTimeDidChange:(struct ? )arg0 ;
-(void)_didFinishInitializingAudioSession;
-(void)_handleAssetTracksDidLoadForAsset:(id)arg0 ;
-(void)_handleContentLoadingResult:(id)arg0 ;
-(void)_handleDidReachPlaybackTimeRangeEnd;
-(void)_handleDisplayLink:(id)arg0 ;
-(void)_handleMediaServicesWereResetNotification:(id)arg0 ;
-(void)_handlePlayabilityDidLoadForAsset:(id)arg0 ;
-(void)_handlePlayerItemSeekDidFinish;
-(void)_handlePlayerTimeAdvancementTimer:(id)arg0 ;
-(void)_handleTrackGeometryDidLoad;
-(void)_loadAssetTracksIfNeeded;
-(void)_mainQueue_actuallyPrewarmVideoView;
-(void)_mainQueue_setDisplayLink:(id)arg0 ;
-(void)_mainQueue_setDisplayLinkPaused:(BOOL)arg0 ;
-(void)_mainQueue_updateCurrentPixelBufferWithVideoOutput:(id)arg0 ;
-(void)_performBlockOnUpdateQueue:(id)arg0 ;
-(void)_performChanges:(id)arg0 ;
-(void)_relinquishAny4k60StreamAllowance;
-(void)_removeAllVideoOutputs;
-(void)_setPlayabilityFromAsset:(id)arg0 ;
-(void)_updateAVPlayerPlayState;
-(void)_updateAtBeginningOrEnd;
-(void)_updateAtBeginningOrEndWithPlayerItemDuration:(struct ? )arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_updateAudioStatus;
-(void)_updateBuffering;
-(void)_updateCurrenPixelBufferAfterSeekingToTime:(struct ? )arg0 completionLock:(id)arg1 ;
-(void)_updateCurrentPixelBuffer;
-(void)_updateCurrentPlayerItem;
-(void)_updateDisplayLinkState;
-(void)_updateDuration;
-(void)_updateFromCurrentPresentationState;
-(void)_updatePlayState;
-(void)_updatePlayability;
-(void)_updatePlayerItem;
-(void)_updatePlayerItemInPlayer;
-(void)_updatePlayerVolume;
-(void)_updateQueue_decrementPendingPlayerItemSeekCount;
-(void)_updateQueue_registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)_updateQueue_seekToPlaybackTimeRangeStartIfNeeded;
-(void)_updateQueue_unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)_updateReadyForSeeking;
-(void)_updateStalled;
-(void)_updateTrackGeometry;
-(void)_updateVideoOutput;
-(void)_updateVolumeAnimator;
-(void)_videoQueue_updateTrackGeomnetryWithPlayerItem:(id)arg0 ;
-(void)_videoWorkQueue_updateCurrenPixelBufferAfterSeekingToTime:(struct ? )arg0 completionLock:(id)arg1 ;
-(void)_videoWorkQueue_updateCurrentPixelBufferWithVideoOutput:(id)arg0 outputTime:(CGFloat)arg1 ;
-(void)avPlayer:(id)arg0 itemDidPlayToEnd:(id)arg1 ;
-(void)cancelLoading;
-(void)cancelPixelBufferOutputWithRequestIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)didPerformChanges;
-(void)enterPresentationContext:(NSInteger)arg0 presenter:(*void)arg1 ;
-(void)incrementPixelBufferFrameDropsCount;
-(void)leavePresentationContext:(NSInteger)arg0 presenter:(*void)arg1 ;
-(void)loadIfNeededWithPriority:(NSInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)outputMediaDataWillChange:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
// -(void)performChanges:(id)arg0 withPresentationContext:(unk)arg1 presenter:(NSInteger)arg2  ;
-(void)prewarmVideoView;
-(void)recycleVideoView:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)requestPixelBufferOutputWithRequestIdentifier:(id)arg0 maxOutputSize:(struct CGSize )arg1 ;
-(void)seekToExactTime:(struct ? )arg0 updatePixelBuffer:(BOOL)arg1 waitUntilComplete:(BOOL)arg2 ;
-(void)seekToTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)seekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)setAudioSession:(id)arg0 ;
-(void)setCurrentPlayerItem:(id)arg0 ;
-(void)setPlayable:(BOOL)arg0 ;
-(void)setPlayerTimeAdvancing:(BOOL)arg0 ;
-(void)setVideoPlayer:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)wrappedAudioSession:(id)arg0 didChangeVolumeFrom:(float)arg1 to:(float)arg2 ;


@end


#endif