// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCOMPOSITIONPLAYER_H
#define JFXCOMPOSITIONPLAYER_H

@class NSString, AVPlayer, NSMutableArray;
@protocol JFXCompositionPlayableElementsDataSource, JFXCompositionPlayerDelegate, JFXAVPlayerViewer;

#import <Foundation/Foundation.h>

#import "JFXComposition.h"
#import "JFXCompositionPlayerRequest.h"

@interface JFXCompositionPlayer : NSObject

@property (nonatomic) ? cachedCurrentTimeForCompositionUpdate; // ivar: _cachedCurrentTimeForCompositionUpdate
@property (retain, nonatomic) NSObject<JFXCompositionPlayableElementsDataSource> *clipsDataSource; // ivar: _clipsDataSource
@property (retain, nonatomic) JFXComposition *composition; // ivar: _composition
@property (readonly, nonatomic) ? currentCMTime;
@property (readonly, nonatomic) int currentTime;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) unsigned int parentCode; // ivar: _parentCode
@property (retain, nonatomic) JFXCompositionPlayerRequest *pendingRequest; // ivar: _pendingRequest
@property (weak, nonatomic) NSObject<JFXCompositionPlayerDelegate> *playbackDelegate; // ivar: _playbackDelegate
@property (nonatomic) ? playbackTimeChangedObserverInterval; // ivar: _playbackTimeChangedObserverInterval
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) id *playerPlaybackTimePeriodicObserver; // ivar: _playerPlaybackTimePeriodicObserver
@property (retain, nonatomic) id *playerProVideoPeriodicObserver; // ivar: _playerProVideoPeriodicObserver
@property (readonly, nonatomic) NSObject<JFXAVPlayerViewer> *playerView; // ivar: _playerView
@property (readonly, nonatomic) CGSize renderSize;
@property (retain, nonatomic) NSMutableArray *requestQueue; // ivar: _requestQueue
@property (nonatomic) BOOL restoringPlayerStateAfterCompositionUpdate; // ivar: _restoringPlayerStateAfterCompositionUpdate
@property (nonatomic) BOOL wasAudioMuted; // ivar: _wasAudioMuted
@property (nonatomic) ? wasCurrentTime; // ivar: _wasCurrentTime
@property (nonatomic) BOOL wasPlaying; // ivar: _wasPlaying


-(BOOL)JFX_clipDataSourceHasClip:(id)arg0 ;
-(BOOL)isAudioMuted;
-(BOOL)isPlaying;
-(BOOL)isRequestOfTypePendingOrQueued:(NSUInteger)arg0 ;
-(BOOL)isRequestOfTypeQueued:(NSUInteger)arg0 ;
-(BOOL)pause:(id)arg0 ;
-(BOOL)play:(id)arg0 ;
-(BOOL)setAudioMuted:(BOOL)arg0 completionBlock:(id)arg1 ;
-(BOOL)updateComposition:(id)arg0 ;
-(BOOL)updateCompositionForClip:(id)arg0 completion:(id)arg1 ;
-(id)firstQueuedRequestOfType:(NSUInteger)arg0 ;
-(id)initWithClipsDataSource:(id)arg0 seekPosition:(int)arg1 audioMuted:(BOOL)arg2 ;
-(id)removeAllRequests;
-(id)removeRequestOfType:(NSUInteger)arg0 ;
// -(id)requestWithBlock:(id)arg0 ofType:(unk)arg1 completion:(NSUInteger)arg2  ;
-(int)duration;
-(void)appendRequests:(id)arg0 ;
-(void)cancelQueuedCompositionUpdateRequestFromClip:(id)arg0 ;
-(void)cancelQueuedRequestOfType:(NSUInteger)arg0 ;
-(void)checkPendingRequestForTimeOut;
-(void)clearQueuedRequests;
-(void)completePendingRequest:(BOOL)arg0 wasCancelled:(BOOL)arg1 error:(id)arg2 ;
-(void)completeRequest:(id)arg0 success:(BOOL)arg1 wasCancelled:(BOOL)arg2 error:(id)arg3 ;
-(void)configureCompositorCompletionBlock;
-(void)createPlayer;
-(void)dealloc;
-(void)destroyPlayer;
-(void)dispatchBlockWhenDone:(id)arg0 ;
-(void)doClipCompositionUpdate:(id)arg0 ;
-(void)doMuteAudio:(BOOL)arg0 ;
-(void)doPause;
-(void)doPlay;
-(void)doUpdateComposition;
-(void)enqueueRequest:(id)arg0 ;
-(void)executeNextRequest;
-(void)executeRequestCompletionBlock:(id)arg0 success:(BOOL)arg1 wasCancelled:(BOOL)arg2 error:(id)arg3 ;
-(void)handleChangeAudioMutedCompleted;
-(void)handleClipCompositionUpdateTimedOut;
-(void)handleCompositionRefreshCompleted:(BOOL)arg0 ;
-(void)handlePlaybackBegan;
-(void)handlePlaybackPaused;
-(void)handleReadyForDisplay:(BOOL)arg0 ;
-(void)handleSeekCompleted:(BOOL)arg0 ;
-(void)handleUpdateCompositionCompleted:(BOOL)arg0 wasCancelled:(BOOL)arg1 error:(id)arg2 ;
-(void)handleUpdateCompositionForClipCompleted:(BOOL)arg0 ;
-(void)notifyPlayerViewSizeChanged;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeCompositorCompletionBlock;
-(void)seek:(int)arg0 cancelQueuedRequest:(BOOL)arg1 tolerance:(int)arg2 completion:(id)arg3 ;
-(void)seek:(int)arg0 tolerance:(int)arg1 completion:(id)arg2 ;
-(void)setupPlaybackTimeChangedObserver;
-(void)teardownSetPlaceHolder:(BOOL)arg0 ;
// -(void)throttleRequestWithCompletionBlock:(id)arg0 ofType:(unk)arg1  ;
-(void)warnTooManyLiveCompositors:(id)arg0 ;


@end


#endif