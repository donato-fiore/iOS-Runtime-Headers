// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOWPLAYINGORIGINCLIENT_H
#define MRNOWPLAYINGORIGINCLIENT_H

@class NSString, NSMutableArray, NSArray;
@protocol MRNowPlayingClientState, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRApplicationActivity.h"
#import "MRClient.h"
#import "MROrigin.h"

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_overrideAppBundleID;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    unsigned int _inputMode;
    float _volume;
    unsigned int _volumeCapabilities;
    MRApplicationActivity *_activity;
    id *_playbackQueueCallback;
    id *_capabilitiesCallback;
    id *_commandCallback;
    id *_beginLyricsEventCallback;
    id *_endLyricsEventCallback;
    id *_playbackSessionCallback;
    id *_playbackSessionMigrateBeginCallback;
    id *_playbackSessionMigrateEndCallback;
    id *_playbackSessionMigrateRequestCallback;
    id *_clientMessageCallback;
    NSMutableArray *_nowPlayingClients;
}


@property (retain, nonatomic) MRClient *activeNowPlayingClient; // ivar: _activeNowPlayingClient
@property (retain, nonatomic) MRApplicationActivity *activity;
@property (copy, nonatomic) NSArray *applicationPickedRoutes;
@property (copy, nonatomic) id *beginLyricsEventCallback;
@property (copy, nonatomic) id *clientMessageCallback;
@property (copy, nonatomic) id *commandCallback;
@property (copy, nonatomic) id *endLyricsEventCallback;
@property (nonatomic) unsigned int hardwareRemoteBehavior; // ivar: _hardwareRemoteBehavior
@property (nonatomic) unsigned int inputMode;
@property (readonly, nonatomic) NSArray *nowPlayingClients;
@property (readonly, nonatomic) MROrigin *origin; // ivar: _origin
@property (nonatomic, getter=isOverrideApp) BOOL overrideApp; // ivar: _overrideApp
@property (copy, nonatomic) NSString *overrideAppBundleID;
@property (copy, nonatomic) id *playbackQueueCallback;
@property (copy, nonatomic) id *playbackSessionCallback;
@property (copy, nonatomic) id *playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) id *playbackSessionMigrateEndCallback;
@property (copy, nonatomic) id *playbackSessionMigrateRequestCallback;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (retain, nonatomic) NSString *routingContextID; // ivar: _routingContextID
@property (nonatomic) float volume;
@property (nonatomic) unsigned int volumeCapabilities;


-(BOOL)overrideApp;
-(id)debugDescription;
-(id)description;
-(id)existingNowPlayingClientForPlayerPath:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)nowPlayingClientForPlayerPath:(id)arg0 ;
-(void)_prepareToRestoreClientStateWithCompletion:(id)arg0 ;
-(void)_restoreNowPlayingClientState;
-(void)dealloc;
-(void)removeAllClients;
-(void)removeClient:(id)arg0 ;
-(void)restoreNowPlayingClientState;
-(void)setIsOverrideApp:(BOOL)arg0 ;


@end


#endif