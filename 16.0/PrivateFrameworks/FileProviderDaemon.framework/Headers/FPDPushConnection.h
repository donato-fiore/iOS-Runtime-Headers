// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDPUSHCONNECTION_H
#define FPDPUSHCONNECTION_H

@class NSXPCListener, NSMutableDictionary, FPProviderMonitor, NSString;
@protocol NSXPCListenerDelegate, PKFileProviderXPCServer, APSConnectionDelegate, FPProviderObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"

@interface FPDPushConnection : NSObject <NSXPCListenerDelegate, PKFileProviderXPCServer, APSConnectionDelegate, FPProviderObserver>

 {
    FPDExtensionManager *_manager;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_pushQueue;
    NSObject<OS_dispatch_queue> *_payloadDeliveryQueue;
    NSMutableDictionary *_pushConnectionsByEnvironment;
    NSMutableDictionary *_messageDelegates;
    NSMutableDictionary *_bundleIdentifierForTopic;
    NSMutableDictionary *_topicsForBundleIdentifier;
    NSMutableDictionary *_clientConnections;
    FPProviderMonitor *_providerMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_debugTopicsForApplicationIdentifier:(id)arg0 ;
-(id)_pushConnectionWithEnvironmentName:(id)arg0 ;
-(id)clientConnectionsForApplicationBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithExtensionManager:(id)arg0 ;
-(id)topicsForApplicationBundleIdentifier:(id)arg0 ;
-(void)addClientConnection:(id)arg0 forApplicationBundleIdentifier:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)fileProviderRegister;
-(void)fileProviderUnregister;
-(void)performWithConnection:(id)arg0 block:(id)arg1 ;
-(void)providerDidEnterBackground:(id)arg0 ;
-(void)providerDidEnterForeground:(id)arg0 ;
-(void)removeClientConnection:(id)arg0 forApplicationBundleIdentifier:(id)arg1 ;
-(void)setMessageDelegate:(id)arg0 forApplicationBundleIdentifier:(id)arg1 ;
-(void)start;
-(void)updateTopicsForApplicationBundleIdentifier:(id)arg0 providerIdentifier:(id)arg1 requestToken:(BOOL)arg2 environment:(id)arg3 ;
-(void)updateTopicsForBundleIdentifier:(id)arg0 ;
-(void)updateTopicsForProvider:(id)arg0 ;


@end


#endif