// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXPLAYBACKCOORDINATOR_H
#define SXPLAYBACKCOORDINATOR_H

@class NSString, NSError, NSArray, SVKeyValueObserver, NSHashTable;
@protocol SXVideoMetadata, SXVideoPlaybackHost, SXAVPlayerFactory, SXVideoProviding;

#import <Foundation/Foundation.h>

#import "SXAVPlayer.h"
#import "SXTimeline.h"

@interface SXPlaybackCoordinator : NSObject <SXVideoMetadata>



@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize dimensions; // ivar: _dimensions
@property (readonly, nonatomic) CGFloat duration;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGFloat framerate;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SXVideoPlaybackHost> *host; // ivar: _host
@property (nonatomic) BOOL initiatedPlayback; // ivar: _initiatedPlayback
@property (readonly, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) CGFloat loadingProgress;
@property (retain, nonatomic) SVKeyValueObserver *muteStateObserver; // ivar: _muteStateObserver
@property (nonatomic) BOOL muted; // ivar: _muted
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) CGFloat pausedAtTime; // ivar: _pausedAtTime
@property (readonly, nonatomic) BOOL playbackBufferFull; // ivar: _playbackBufferFull
@property (retain, nonatomic) SVKeyValueObserver *playbackBufferFullObserver; // ivar: _playbackBufferFullObserver
@property (readonly, nonatomic) BOOL playbackLikelyToKeepUp; // ivar: _playbackLikelyToKeepUp
@property (retain, nonatomic) SVKeyValueObserver *playbackLikelyToKeepUpObserver; // ivar: _playbackLikelyToKeepUpObserver
@property (nonatomic) BOOL playbackRequested; // ivar: _playbackRequested
@property (retain, nonatomic) SXAVPlayer *player; // ivar: _player
@property (readonly, nonatomic) NSObject<SXAVPlayerFactory> *playerFactory; // ivar: _playerFactory
@property (retain, nonatomic) SVKeyValueObserver *playerItemPresentationSizeObserver; // ivar: _playerItemPresentationSizeObserver
@property (retain, nonatomic) SVKeyValueObserver *readyForDisplayObserver; // ivar: _readyForDisplayObserver
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat time;
@property (readonly, nonatomic) CGFloat timePlayed;
@property (readonly, nonatomic) SXTimeline *timeline; // ivar: _timeline
@property (readonly, nonatomic) NSObject<SXVideoProviding> *video; // ivar: _video
@property (readonly, nonatomic) CGFloat volume;


-(BOOL)supportImpressionTracking;
-(BOOL)supportsQuartileTracking;
-(id)initWithVideo:(id)arg0 playerFactory:(id)arg1 ;
-(void)addMuteStateObserver;
-(void)addPlaybackBuferObserver;
-(void)addPlaybackLikelyToKeepUpObserver;
-(void)addPlaybackObserver:(id)arg0 ;
-(void)addPlayerItemPresentationSizeObserver;
-(void)configureTimeline;
-(void)load;
-(void)loadVideoIfNeeded;
-(void)muteStateChanged;
-(void)pause;
-(void)playWithButtonTapped:(BOOL)arg0 ;
-(void)playbackFailedWithError:(id)arg0 ;
-(void)playbackFinished;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg0 ;
-(void)playbackPaused;
-(void)playbackPausedAtTime:(CGFloat)arg0 ;
-(void)playbackReadyToStart;
-(void)playbackResumed;
-(void)playbackResumedAtTime:(CGFloat)arg0 ;
-(void)playbackStarted;
-(void)removePlaybackObserver:(id)arg0 ;
-(void)removePlayerItemPresentationSizeObserver;
-(void)seekToTime:(CGFloat)arg0 withCompletionBlock:(id)arg1 ;
-(void)setupPlayerWithURL:(id)arg0 ;
-(void)timeElapsed:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif