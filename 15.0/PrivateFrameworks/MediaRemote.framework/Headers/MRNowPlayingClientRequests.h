// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRNOWPLAYINGCLIENTREQUESTS_H
#define MRNOWPLAYINGCLIENTREQUESTS_H

@class NSMutableArray, NSArray;
@protocol MRNowPlayingClientState;

#import <Foundation/Foundation.h>

#import "MRClient.h"

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState>

 {
    NSMutableArray *_playerClients;
}


@property (readonly, nonatomic) MRClient *client; // ivar: _client
@property (readonly, nonatomic) NSArray *nowPlayingClients; // ivar: _nowPlayingClients


-(id)debugDescription;
-(id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg0 ;
-(id)initWithClient:(id)arg0 ;
-(id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg0 ;
-(void)removePlayer:(id)arg0 ;
-(void)restoreNowPlayingClientState;


@end


#endif