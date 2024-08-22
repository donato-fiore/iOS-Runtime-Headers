// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRNOWPLAYINGPLAYERCLIENT_H
#define MRNOWPLAYINGPLAYERCLIENT_H

@class NSArray, NSDictionary, NSDate, NSMutableDictionary, NSMutableArray;
@protocol MRNowPlayingClientState, MRTransactionSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRPlaybackQueue.h"
#import "MRNowPlayingArtwork.h"
#import "MRNowPlayingPlayerClientCallbacks.h"
#import "MRContentItem.h"
#import "MRPlayerPath.h"
#import "MRPlaybackQueueSubscriptionController.h"

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replayQueue;
    CGFloat _canBeNowPlayingPlayerTimestamp;
    MRPlaybackQueue *_playbackQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    unsigned int _playbackState;
    NSDate *_playbackStateDate;
    NSUInteger _capabilities;
    NSDate *_lastReceivedCommandDate;
    NSDate *_activeRequestedDate;
    BOOL _pictureInPictureEnabled;
    BOOL _invalidatingPlaybackQueue;
    CGFloat _invalidatationTimestamp;
    NSMutableDictionary *_coelscingTransactionPackets;
    NSMutableArray *_transactionSources;
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;
    NSMutableDictionary *_cachedContentItemChangedForPendingPlaybackQueueRequest;
    NSMutableArray *_enqueuedContentItemChangesForPendingPlaybackQueueInvalidation;
}


@property (retain, nonatomic) NSDate *activeRequestedDate;
@property (nonatomic) BOOL canBeNowPlayingPlayer; // ivar: _canBeNowPlayingPlayer
@property (nonatomic) NSUInteger capabilities;
@property (readonly, nonatomic) MRNowPlayingPlayerClientCallbacks *clientCallbacks; // ivar: _clientCallbacks
@property (readonly, nonatomic) BOOL hasReceivedCommandRecently;
@property (nonatomic) CGFloat invalidatationTimestamp;
@property (nonatomic) BOOL invalidatingPlaybackQueue;
@property (retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
@property (readonly, nonatomic) MRContentItem *nowPlayingContentItem;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (nonatomic, getter=isPictureInPictureEnabled) BOOL pictureInPictureEnabled;
@property (retain, nonatomic) MRPlaybackQueue *playbackQueue;
@property (readonly, nonatomic) unsigned int playbackState;
@property (retain, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // ivar: _subscriptionController
@property (copy, nonatomic) NSArray *supportedCommands;


-(BOOL)removePendingPlaybackSessionMigrateEvent:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithPlayerPath:(id)arg0 ;
-(id)resolveCommandOptions:(unsigned int)arg0 options:(id)arg1 ;
-(unsigned int)resolveCommand:(unsigned int)arg0 ;
-(void)addPendingPlaybackSessionMigrateEvent:(id)arg0 ;
-(void)addPendingRequest:(id)arg0 ;
-(void)beginSendingTransactions;
-(void)clearCachedContentItemArtworkForItems:(id)arg0 ;
-(void)endSendingTransactions;
-(void)flushPendingPlaybackSessionMigrateEvents:(id)arg0 ;
-(void)invalidatePlaybackQueue;
-(void)invalidatePlaybackQueueWithPlaybackQueue:(id)arg0 ;
-(void)restoreNowPlayingClientState;
-(void)sendContentItemChanges:(id)arg0 ;
-(void)sendTransaction:(NSUInteger)arg0 withPackets:(id)arg1 ;
-(void)startCachingContentItemUpdatesForItem:(id)arg0 forPendingRequest:(id)arg1 ;
-(void)transactionDidEnd:(id)arg0 ;
-(void)updatePlaybackQueueWithCachedUpdates:(id)arg0 forPendingRequest:(id)arg1 ;
-(void)updatePlaybackState:(unsigned int)arg0 date:(id)arg1 ;
-(void)updatePlayer:(id)arg0 ;


@end


#endif