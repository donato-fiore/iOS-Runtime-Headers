// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKAVPLAYERCONTROLLER_H
#define TSKAVPLAYERCONTROLLER_H

@class NSArray, AVPlayerLooper, AVPlayerItem, NSMutableSet, AVAsset, NSString, AVQueuePlayer;
@protocol TSKLayerMediaPlayerController, TSKMediaPlayerControllerDelegate, TSKAVPlayerControllerPlayerItemMediating;

#import <Foundation/Foundation.h>


@interface TSKAVPlayerController : NSObject <TSKLayerMediaPlayerController>

 {
    id<TSKMediaPlayerControllerDelegate> *mDelegate;
    BOOL mStreaming;
    NSArray *mEnqueuedAssets;
    NSInteger mRepeatMode;
    ? mStartCMTime;
    ? mEndCMTime;
    ? mPlayerItemTimeRange;
    BOOL mIsPlayerItemTimeRangeForScrubbing;
    AVPlayerLooper *mPlayerLooper;
    BOOL mIsUpdatingPlayerItems;
    float mVolume;
    AVPlayerItem *mVolumeRampPlayerItem;
    id *mVolumeRampBoundaryTimeObserver;
    float mRateBeforeScrubbing;
    NSUInteger mScrubbingCount;
    BOOL mCanPlay;
    float mPendingRate;
    BOOL mWasPlayingBeforeChangeToZeroRate;
    BOOL mWasFastReversingBeforeChangeToZeroRate;
    BOOL mWasFastForwardingBeforeChangeToZeroRate;
    NSMutableSet *mObservationTokens;
    BOOL mDidNotifyDelegateOfPlaybackError;
    BOOL mPlaying;
    BOOL mFastReversing;
    BOOL mFastForwarding;
}


@property (readonly, nonatomic) AVAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExternalPlaybackActive) BOOL externalPlaybackActive;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVQueuePlayer *player; // ivar: mPlayer
@property (retain, nonatomic) NSObject<TSKAVPlayerControllerPlayerItemMediating> *playerItemMediator; // ivar: mPlayerItemMediator
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversOfRate;
+(BOOL)p_canApplyVolumeRampAtRate:(float)arg0 ;
+(id)keyPathsForValuesAffectingAbsoluteDuration;
+(id)keyPathsForValuesAffectingCanFastForward;
+(id)keyPathsForValuesAffectingCanFastReverse;
+(id)keyPathsForValuesAffectingCurrentAsset;
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingEndTime;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingHasCurrentTime;
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingStartTime;
+(void)initialize;
-(BOOL)canFastForward;
-(BOOL)canFastReverse;
-(BOOL)canPlay;
-(BOOL)hasCurrentTime;
-(BOOL)isFastForwarding;
-(BOOL)isFastReversing;
-(BOOL)isPlaying;
-(BOOL)isScrubbing;
-(BOOL)p_canFastForwardAtCurrentTime;
-(BOOL)p_canFastReverseAtCurrentTime;
-(BOOL)p_notifyDelegateOfPlaybackErrorIfNeeded;
-(BOOL)p_shouldUsePlayerLooperAtRate:(float)arg0 timeRange:(struct ? )arg1 ;
-(CGFloat)absoluteCurrentTime;
-(CGFloat)absoluteDuration;
-(CGFloat)currentTime;
-(CGFloat)duration;
-(CGFloat)endTime;
-(CGFloat)remainingTime;
-(CGFloat)startTime;
-(NSInteger)repeatMode;
-(float)rate;
-(float)volume;
-(id)addPeriodicTimeObserverForInterval:(CGFloat)arg0 block:(id)arg1 ;
-(id)delegate;
-(id)initWithAssets:(id)arg0 initialAssetIndex:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)initWithInitialPlayerItem:(id)arg0 enqueuedAssets:(id)arg1 initialEnqueuedAssetIndex:(NSUInteger)arg2 delegate:(id)arg3 streaming:(BOOL)arg4 ;
-(id)initWithPlayerItem:(id)arg0 delegate:(id)arg1 streaming:(BOOL)arg2 ;
-(id)newLayer;
-(id)p_addTimeObserverForTime:(struct ? )arg0 handler:(id)arg1 ;
-(id)p_workingPlayerItems;
-(struct ? )p_endCMTime;
-(struct ? )p_startCMTime;
-(void)addObservationToken:(id)arg0 ;
-(void)attachAVPlayerViewController:(id)arg0 ;
-(void)beginScrubbing;
-(void)cancelPendingSeeks;
-(void)dealloc;
-(void)endScrubbing;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_applyConstantVolumeToPlayerItem:(id)arg0 ;
-(void)p_applyPendingRateIfNeeded;
-(void)p_applyRate:(float)arg0 ;
-(void)p_clearVolumeRampFromPlayerItem;
-(void)p_enqueueAssetsFromIndex:(NSUInteger)arg0 ;
-(void)p_notifyPlayerItemMediatorWithRate:(float)arg0 ;
-(void)p_playerItemDidJumpTime:(id)arg0 ;
-(void)p_playerItemDidPlayToEndTime:(id)arg0 ;
-(void)p_playerItemDidPlayToEndTimeAtRate:(float)arg0 ;
-(void)p_updatePlayerItemsAndApplyRate:(float)arg0 ;
-(void)removeObservationToken:(id)arg0 ;
-(void)removePeriodicTimeObserver:(id)arg0 ;
-(void)scrubToTime:(CGFloat)arg0 withTolerance:(CGFloat)arg1 ;
-(void)scrubToTime:(CGFloat)arg0 withTolerance:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)seekBackwardByOneFrame;
-(void)seekForwardByOneFrame;
-(void)seekToBeginning;
-(void)seekToEnd;
-(void)setEndTime:(CGFloat)arg0 ;
-(void)setFastForwarding:(BOOL)arg0 ;
-(void)setFastReversing:(BOOL)arg0 ;
-(void)setPlaying:(BOOL)arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setRepeatMode:(NSInteger)arg0 ;
-(void)setStartTime:(CGFloat)arg0 ;
-(void)setVolume:(float)arg0 ;
-(void)setVolume:(float)arg0 rampDuration:(CGFloat)arg1 ;
-(void)skipToAssetAtIndex:(NSUInteger)arg0 ;
-(void)stopSynchronously;
-(void)teardown;


@end


#endif