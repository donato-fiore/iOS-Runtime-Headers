// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRNOWPLAYINGPLAYERCLIENTREQUESTS_H
#define MRNOWPLAYINGPLAYERCLIENTREQUESTS_H

@class NSArray, NSMutableDictionary, NSMutableArray, NSOperationQueue;
@protocol MRNowPlayingClientState, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRPlaybackQueue.h"
#import "MRPlayer.h"
#import "MRPlayerPath.h"
#import "MRPlaybackQueueSubscriptionController.h"

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState>

 {
    MRPlaybackQueue *_playbackQueue;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    MRPlayer *_playerProperties;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NSMutableDictionary *_playbackQueueCompletions;
    NSMutableArray *_supportedCommandsCompletions;
    NSMutableArray *_playbackStateCompletions;
    NSMutableArray *_playerPropertiesCompletions;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableDictionary *_transactions;
    NSOperationQueue *_enquedNowPlayingInfoRequests;
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;
}


@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (copy, nonatomic) MRPlayer *playerProperties;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // ivar: _subscriptionController
@property (copy, nonatomic) NSArray *supportedCommands;


-(id)debugDescription;
-(id)initWithPlayerPath:(id)arg0 ;
-(id)transactionCallbacksForName:(NSUInteger)arg0 ;
// -(void)addPlaybackQueueCompletion:(id)arg0 forRequest:(unk)arg1  ;
// -(void)addTransactionCallback:(id)arg0 forName:(unk)arg1  ;
-(void)dealloc;
-(void)enqueuePlaybackQueueRequest:(id)arg0 completion:(id)arg1 ;
-(void)handlePlaybackStateRequestWithCompletion:(id)arg0 ;
-(void)handlePlayerPropertiesRequestWithCompletion:(id)arg0 ;
-(void)handleSupportedCommandsRequestWithCompletion:(id)arg0 ;
-(void)receiveTransaction:(NSUInteger)arg0 fromMessage:(id)arg1 ;
-(void)removePlaybackQueueCompletionForRequest:(id)arg0 ;
-(void)restoreNowPlayingClientState;
-(void)updateContentItemArtwork:(id)arg0 ;
-(void)updateContentItems:(id)arg0 ;


@end


#endif