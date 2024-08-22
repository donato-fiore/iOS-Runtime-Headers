// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRNOWPLAYINGORIGINCLIENTMANAGER_H
#define MRNOWPLAYINGORIGINCLIENTMANAGER_H

@class NSMutableDictionary, NSArray;
@protocol MRNowPlayingClientState;

#import <Foundation/Foundation.h>


@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState>

 {
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
    id *_createPlayerCallback;
    id *_destroyPlayerCallback;
    id *_generatePlayerIDCallback;
    NSMutableDictionary *_activeSystemEndpointUIDs;
    NSMutableDictionary *_activeSystemEndpointUIDCompletions;
}


@property (copy, nonatomic) id *createNewPlayerCallback;
@property (copy, nonatomic) id *destroyPlayerCallback;
@property (copy, nonatomic) id *generatePlayerIDCallback;
@property (readonly, nonatomic) NSArray *originClients;


+(id)sharedManager;
-(id)activeSystemEndpointOutputDeviceUIDForType:(NSInteger)arg0 ;
-(id)clientForPlayerPath:(id)arg0 ;
-(id)clientRequestsForPlayerPath:(id)arg0 ;
-(id)debugDescription;
-(id)existingClientRequestsForPlayerPath:(id)arg0 ;
-(id)existingOriginClientRequestsForPlayerPath:(id)arg0 ;
-(id)existingPlayerClientRequestsForPlayerPath:(id)arg0 ;
-(id)init;
-(id)localOriginClient;
-(id)originClientForOrigin:(id)arg0 ;
-(id)originClientForPlayerPath:(id)arg0 ;
-(id)originClientRequestsForPlayerPath:(id)arg0 ;
-(id)playerClientForPlayerPath:(id)arg0 ;
-(id)playerClientRequestsForPlayerPath:(id)arg0 ;
-(void)handleActiveSystemEndpointOutputDeviceUIDForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)removeClient:(id)arg0 ;
-(void)removeOrigin:(id)arg0 ;
-(void)removeOriginRequests:(id)arg0 ;
-(void)removePlayer:(id)arg0 ;
-(void)restoreNowPlayingClientState;
-(void)updateActiveSystemEndpointOutputDeviceUID:(id)arg0 forType:(NSInteger)arg1 ;


@end


#endif