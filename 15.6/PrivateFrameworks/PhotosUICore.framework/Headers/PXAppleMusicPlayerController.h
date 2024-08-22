// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXAPPLEMUSICPLAYERCONTROLLER_H
#define PXAPPLEMUSICPLAYERCONTROLLER_H

@class NSString, MPMusicPlayerApplicationController;
@protocol PXMutableAppleMusicPlayerController, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXExpectation.h"

@interface PXAppleMusicPlayerController : PXObservable <PXMutableAppleMusicPlayerController>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queue_itemStoreID;
    NSString *_queue_currentClientIdentifier;
    MPMusicPlayerApplicationController *_queue_player;
    float _queue_volume;
    id *_queue_preparationCompletionHandler;
    PXExpectation *_queue_preparationExpectation;
    id *_playbackStateChangeObserver;
    id *_playbackDidEndObserver;
    NSInteger _preparationSignpostID;
}


@property (copy) NSString *currentClientIdentifier;
@property (readonly, nonatomic) BOOL isAtEnd; // ivar: _isAtEnd
@property (readonly, nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (readonly, nonatomic) CGFloat volume;


+(BOOL)canApplyWorkaroundFor80278485;
+(id)sharedInstance;
-(id)_init;
-(id)init;
-(struct ? )fetchCurrentTime;
-(void)_handleDidPrepareToPlayWithExpectation:(id)arg0 error:(id)arg1 ;
-(void)_handleItemPlaybackDidEnd;
-(void)_handlePlaybackStateDidChange;
-(void)_queue_callPreparationCompletionHandler:(BOOL)arg0 error:(id)arg1 ;
-(void)_queue_handleDidPrepareToPlayWithError:(id)arg0 ;
-(void)_queue_handlePreparationExpectationFulfilled:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)clientIdentifier:(id)arg0 becomeCurrentClientIfNeeded:(BOOL)arg1 performAsyncPlayerTransaction:(id)arg2 ;
-(void)clientIdentifier:(id)arg0 performAsyncPlayerTransaction:(id)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)play;
-(void)prepareToPlayWithCompletionHandler:(id)arg0 ;
-(void)setItemWithStoreID:(id)arg0 startTime:(struct ? )arg1 ;


@end


#endif