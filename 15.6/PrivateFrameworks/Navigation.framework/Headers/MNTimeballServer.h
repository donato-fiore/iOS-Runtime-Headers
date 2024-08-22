// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTIMEBALLSERVER_H
#define MNTIMEBALLSERVER_H

@class NSXPCListener, NSLock, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MNTimeballCache.h"
#import "MNRouteRefreshPolicyScheduler.h"
#import "MNTimeballRoutingProvider.h"
#import "MNTimeballLocationManager.h"

@interface MNTimeballServer : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSLock *_proxyLock;
    NSMutableSet *_proxies;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_cache;
-(id)_localProxyForPeer:(id)arg0 ;
-(id)_navd_localProxyForClient:(id)arg0 ;
-(id)_routingProvider;
-(id)_scheduler;
-(id)init;
-(void)_navd_addProxy:(id)arg0 ;
-(void)_navd_removeProxy:(id)arg0 ;
-(void)_peerDidConnectWithProxy:(id)arg0 ;
-(void)_peerDidDisconnectWithProxy:(id)arg0 ;
-(void)dealloc;


@end


#endif