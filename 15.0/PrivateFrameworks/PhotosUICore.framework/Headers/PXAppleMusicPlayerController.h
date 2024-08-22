// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXAPPLEMUSICPLAYERCONTROLLER_H
#define PXAPPLEMUSICPLAYERCONTROLLER_H

@class NSString, MPMusicPlayerApplicationController, MPMediaItem;
@protocol OS_dispatch_queue;


#import "PXObservable.h"

@interface PXAppleMusicPlayerController : PXObservable {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queue_currentClientIdentifier;
    MPMusicPlayerApplicationController *_queue_player;
    id *_playbackStateChangeObserver;
    id *_nowPlayingItemObserver;
    id *_playbackDidEndObserver;
}


@property (copy) NSString *currentClientIdentifier;
@property (readonly, nonatomic) BOOL isAtEnd; // ivar: _isAtEnd
@property (readonly, copy, nonatomic) MPMediaItem *nowPlayingItem; // ivar: _nowPlayingItem
@property (readonly, nonatomic) NSInteger playbackState; // ivar: _playbackState


+(BOOL)canApplyWorkaroundFor80278485;
+(id)sharedInstance;
-(id)init;
-(struct ? )fetchCurrentTime;
-(void)_handleItemPlaybackDidEnd;
-(void)_handleNowPlayingItemDidChange;
-(void)_handlePlaybackStateDidChange;
-(void)clientIdentifier:(id)arg0 becomeCurrentClientIfNeeded:(BOOL)arg1 performAsyncPlayerTransaction:(id)arg2 ;
-(void)clientIdentifier:(id)arg0 performAsyncPlayerTransaction:(id)arg1 ;
-(void)dealloc;


@end


#endif