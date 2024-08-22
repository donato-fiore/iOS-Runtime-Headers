// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOWPLAYINGCLIENT_H
#define MRNOWPLAYINGCLIENT_H

@class NSMutableArray, NSArray;
@protocol MRNowPlayingClientState, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRPlayer.h"
#import "MRPlayerPath.h"
#import "MRClient.h"

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState>

 {
    MRPlayer *_activePlayer;
    NSMutableArray *_playerClients;
    BOOL _isForeground;
    BOOL _canBeNowPlaying;
    CGFloat _canBeNowPlayingTimestamp;
    BOOL _perPlayerCanBeNowPlaying;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSMutableArray *_commandQueue;
    NSObject<OS_dispatch_queue> *_avscQueue;
}


@property (readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property (nonatomic) BOOL canBeNowPlaying;
@property (retain, nonatomic) MRClient *client;
@property (nonatomic) BOOL perPlayerCanBeNowPlaying;
@property (readonly, nonatomic) NSArray *playerClients;
@property (retain, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (nonatomic) BOOL useMediaRemoteActivePlayerHeuristic; // ivar: _useMediaRemoteActivePlayerHeuristic


-(BOOL)canBeNowPlayingForPlayer:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithPlayerPath:(id)arg0 ;
-(id)nowPlayingPlayerClientForPlayerPath:(id)arg0 ;
-(void)_avSessionMediaServicesResetNotification:(id)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)dealloc;
-(void)enqueueCommand:(unsigned int)arg0 options:(id)arg1 playerPath:(id)arg2 commandCompletion:(id)arg3 ;
-(void)mergeClient:(id)arg0 ;
-(void)reevaluateActivePlayerWithReason:(id)arg0 completion:(id)arg1 ;
-(void)removePlayer:(id)arg0 ;
-(void)requestActiveForPlayerPath:(id)arg0 completion:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(void)sendQueuedCommandsWithReason:(id)arg0 ;
-(void)updateActivePlayerPath:(id)arg0 completion:(id)arg1 ;


@end


#endif