// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESOURCEMANIFESTSERVERREMOTEPROXY_H
#define GEORESOURCEMANIFESTSERVERREMOTEPROXY_H

@class NSString, geo_isolater, NSMutableDictionary;
@protocol GEOResourceManifestServerProxy, OS_dispatch_queue, OS_xpc_object, GEOResourceManifestServerProxyDelegate;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"
#import "GEOActiveTileGroup.h"

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>

 {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_conn;
    BOOL _sentConfigurationMessage;
    BOOL _hasOpenConnection;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    os_unfair_lock_s _authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
    geo_isolater *_maximumZoomLevelIsolation;
    NSMutableDictionary *_maximumZoomLevelCache;
}


@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOResourceManifestServerProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)maximumZoomLevelForStyle:(int)arg0 scale:(int)arg1 outSize:(*int)arg2 ;
-(id)authToken;
-(id)configuration;
-(id)initWithDelegate:(id)arg0 configuration:(id)arg1 ;
-(id)serverQueue;
-(id)updateProgress;
-(void)_handleMessage:(id)arg0 xpcMessage:(id)arg1 ;
-(void)activateResourceScale:(int)arg0 ;
-(void)activateResourceScenario:(int)arg0 ;
-(void)cancelCurrentManifestUpdate;
-(void)closeConnection;
-(void)deactivateResourceScale:(int)arg0 ;
-(void)deactivateResourceScenario:(int)arg0 ;
-(void)dealloc;
-(void)forceUpdate:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getResourceManifestWithHandler:(id)arg0 ;
-(void)openConnection;
-(void)performOpportunisticResourceLoading;
-(void)setManifestToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateIfNecessary:(id)arg0 ;


@end


#endif