// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRNOWPLAYINGORIGINCLIENT_H
#define MRNOWPLAYINGORIGINCLIENT_H

@class NSMutableArray, NSString, NSArray;
@protocol MRNowPlayingClientState, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRApplicationActivity.h"
#import "MRDeviceInfo.h"
#import "MRClient.h"
#import "MROrigin.h"

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isOverrideApp;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    unsigned int _inputMode;
    float _volume;
    unsigned int _volumeCapabilities;
    MRApplicationActivity *_activity;
    NSString *_routingContextID;
    MRDeviceInfo *_deviceInfo;
    id *_playbackQueueCallback;
    id *_playbackQueueTransactionCallback;
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
@property (retain, nonatomic) MRDeviceInfo *deviceInfo;
@property (copy, nonatomic) id *endLyricsEventCallback;
@property (nonatomic) unsigned int hardwareRemoteBehavior; // ivar: _hardwareRemoteBehavior
@property (nonatomic) unsigned int inputMode;
@property (nonatomic) BOOL isOverrideApp;
@property (readonly, nonatomic) NSArray *nowPlayingClients;
@property (readonly, nonatomic) MROrigin *origin; // ivar: _origin
@property (copy, nonatomic) id *playbackQueueCallback;
@property (copy, nonatomic) id *playbackQueueTransactionCallback;
@property (copy, nonatomic) id *playbackSessionCallback;
@property (copy, nonatomic) id *playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) id *playbackSessionMigrateEndCallback;
@property (copy, nonatomic) id *playbackSessionMigrateRequestCallback;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (nonatomic) float volume;
@property (nonatomic) unsigned int volumeCapabilities;


-(id)debugDescription;
-(id)description;
-(id)existingNowPlayingClientForPlayerPath:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)nowPlayingClientForPlayerPath:(id)arg0 ;
-(void)_handleDeviceInfoDidChangeNotification:(id)arg0 ;
-(void)_prepareToRestoreClientStateWithCompletion:(id)arg0 ;
-(void)_restoreNowPlayingClientState;
-(void)removeClient:(id)arg0 ;
-(void)restoreNowPlayingClientState;


@end


#endif