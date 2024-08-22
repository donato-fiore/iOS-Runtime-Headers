// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISWRAPPEDAVPLAYER_H
#define ISWRAPPEDAVPLAYER_H

@class AVPlayer, AVPlayerItem, NSError, AVVideoComposition, NSMutableDictionary, NSString;
@protocol ISKVOProxyDelegate, OS_dispatch_queue, ISWrappedAVPlayerDelegate;


#import "ISObservable.h"
#import "ISWrappedAVAudioSession.h"

@interface ISWrappedAVPlayer : ISObservable <ISKVOProxyDelegate>

 {
    NSObject<OS_dispatch_queue> *_avPlayerQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    AVPlayer *_playerQueue_avPlayer;
    ISWrappedAVAudioSession *_playerQueue_wrappedAudioSession;
    id *_playerQueue_playerItemDidPlayToEndObserver;
    AVPlayerItem *_ivarQueue_currentItem;
    NSInteger _ivarQueue_status;
    NSError *_ivarQueue_error;
    float _ivarQueue_rate;
    float _ivarQueue_volume;
    ? _ivarQueue_loopTimeRange;
    BOOL _ivarQueue_loopingEnabled;
    BOOL _ivarQueue_audioEnabled;
    BOOL _ivarQueue_preventsSleepDuringVideoPlayback;
    BOOL _ivarQueue_suppressesAudioRendering;
    NSInteger _ivarQueue_itemStatus;
    NSError *_ivarQueue_itemError;
    ? _ivarQueue_itemForwardPlaybackEndTime;
    ? _ivarQueue_itemDuration;
    BOOL _ivarQueue_itemPlaybackBufferFull;
    AVVideoComposition *_ivarQueue_itemVideoComposition;
    BOOL _ivarQueue_itemIsLikelyToKeepUp;
    BOOL _ivarQueue_itemPlaybackBufferEmpty;
    NSMutableDictionary *_observersByID;
    *void _ivarQueueIdentifier;
    NSString *_playerKVOIdentifier;
    NSString *_playerItemKVOIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<ISWrappedAVPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isLoopingEnabled) BOOL loopingEnabled;
@property (readonly) Class superclass;
@property BOOL suppressesAudioRendering;


+(id)observedAVPlayerItemKeys;
+(id)observedAVPlayerKeys;
-(BOOL)_isOnIvarQueue;
-(BOOL)currentItemIsLikelyToKeepUp;
-(BOOL)currentItemPlaybackBufferEmpty;
-(BOOL)currentItemPlaybackBufferFull;
-(BOOL)isAudioEnabled;
-(BOOL)preventsSleepDuringVideoPlayback;
-(NSInteger)currentItemStatus;
-(NSInteger)status;
-(float)rate;
-(float)volume;
-(id)_initWithAVPlayer:(id)arg0 ;
-(id)_nextObserverUID;
-(id)_nilOrValue:(id)arg0 ;
-(id)_playerQueue_avPlayer;
-(id)addBoundaryTimeObserverForTimes:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)addPeriodicTimeObserverForInterval:(struct ? )arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)currentItem;
-(id)currentItemError;
-(id)currentItemVideoComposition;
-(id)error;
-(id)init;
-(id)mutableChangeObject;
-(struct ? )currentItemDuration;
-(struct ? )currentTime;
-(struct ? )itemForwardPlaybackEndTime;
-(struct ? )loopTimeRange;
-(void)_assertOnIvarQueue;
-(void)_performIvarRead:(id)arg0 ;
-(void)_performIvarWrite:(id)arg0 ;
-(void)_performPlayerTransaction:(id)arg0 ;
-(void)_playerItemDidPlayToEnd:(id)arg0 ;
-(void)_playerQueue_startObservingPlayerItem:(id)arg0 ;
-(void)_playerQueue_stopObservingPlayerItem:(id)arg0 ;
-(void)_playerQueue_updatePlayerItemAudioTracksEnabled;
-(void)attachToPlayerLayerIfNeeded:(id)arg0 ;
-(void)cancelPendingPrerolls;
-(void)dealloc;
-(void)observeChangeforKVOProxyIdentifier:(id)arg0 keyPath:(id)arg1 change:(id)arg2 ;
-(void)pause;
-(void)playToTime:(struct ? )arg0 withInitialRate:(float)arg1 overDuration:(CGFloat)arg2 progressHandler:(id)arg3 ;
-(void)prerollAtRate:(float)arg0 completionHandler:(id)arg1 ;
-(void)removeTimeObserver:(id)arg0 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg0 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg0 thenCall:(id)arg1 ;
-(void)seekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)setActionAtItemEnd:(NSInteger)arg0 ;
-(void)setAllowsExternalPlayback:(BOOL)arg0 ;
-(void)setAudioEnabled:(BOOL)arg0 ;
-(void)setDimensionsOfReservedVideoMemory:(struct CGSize )arg0 ;
-(void)setItemBlendsVideoFrames:(BOOL)arg0 ;
-(void)setItemForwardEndPlaybackTime:(struct ? )arg0 ;
-(void)setLoopTimeRange:(struct ? )arg0 ;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setRate:(float)arg0 time:(struct ? )arg1 atHostTime:(struct ? )arg2 ;
-(void)setVolume:(float)arg0 ;
-(void)setWrappedAudioSession:(id)arg0 ;


@end


#endif