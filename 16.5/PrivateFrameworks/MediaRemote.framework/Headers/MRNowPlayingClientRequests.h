// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOWPLAYINGCLIENTREQUESTS_H
#define MRNOWPLAYINGCLIENTREQUESTS_H

@class NSMutableArray, NSArray;
@protocol MRNowPlayingClientState;

#import <Foundation/Foundation.h>

#import "MRClient.h"
#import "MRPlayerPath.h"

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState>

 {
    MRClient *_clientProperties;
    NSMutableArray *_playerClients;
    NSMutableArray *_clientPropertiesCompletions;
}


@property (readonly, nonatomic) MRClient *client;
@property (copy, nonatomic) MRClient *clientProperties;
@property (readonly, nonatomic) NSArray *nowPlayingClients; // ivar: _nowPlayingClients
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath


-(id)debugDescription;
-(id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 ;
-(id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg0 ;
-(void)handleClientPropertiesRequestWithCompletion:(id)arg0 ;
-(void)removePlayer:(id)arg0 ;
-(void)restoreNowPlayingClientState;


@end


#endif