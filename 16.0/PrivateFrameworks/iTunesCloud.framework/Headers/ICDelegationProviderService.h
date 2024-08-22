// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDELEGATIONPROVIDERSERVICE_H
#define ICDELEGATIONPROVIDERSERVICE_H

@class NSMapTable, NSMutableSet, NSXPCListener, NSNetServiceBrowser, NSOperationQueue, NSMutableDictionary, NSXPCConnection, NSString;
@protocol ICSDelegationProviderServiceXPC, ICDelegationProviderServiceSessionDelegate, NSNetServiceBrowserDelegate, NSXPCListenerDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ICUserIdentityStore.h"
#import "ICRequestContext.h"

@interface ICDelegationProviderService : NSObject <ICSDelegationProviderServiceXPC, ICDelegationProviderServiceSessionDelegate, NSNetServiceBrowserDelegate, NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_activeServiceSessions;
    NSMutableSet *_connections;
    NSMapTable *_connectionToAssertions;
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_source> *_assertionTimeoutSource;
    NSMutableSet *_discoveredServices;
    ICUserIdentityStore *_identityStore;
    BOOL _isNetServiceBrowserSearching;
    BOOL _isSystemService;
    NSXPCListener *_listener;
    NSNetServiceBrowser *_netServiceBrowser;
    NSObject<OS_dispatch_queue> *_netServiceBrowserQueue;
    NSOperationQueue *_identityStoreOperationQueue;
    NSMutableDictionary *_supportedDelegationAccountUUIDToUserIdentity;
    NSXPCConnection *_xpcConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ICRequestContext *requestContext; // ivar: _requestContext
@property (readonly) Class superclass;


+(id)sharedService;
+(id)systemServiceWithRequestContext:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_init;
-(id)_xpcConnection;
-(void)_addConnection:(id)arg0 ;
-(void)_netServiceDelegationAccountUUIDsDidChangeNotification:(id)arg0 ;
-(void)_registerNotificationsForDelegationNetService:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_unregisterNotificationsForDelegationNetService:(id)arg0 ;
-(void)_updateAssertionTimeouts;
-(void)_updateBrowsingStatus;
-(void)_updateDelegationForDiscoveredServices;
-(void)_updateSupportedDelegationAccountUUIDs;
-(void)_userIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)addAssertion:(id)arg0 ;
-(void)dealloc;
-(void)delegationProviderServiceAddAssertion:(id)arg0 ;
-(void)delegationProviderServiceRemoveAssertion:(id)arg0 ;
-(void)delegationProviderServiceSession:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)removeAssertion:(id)arg0 ;
-(void)startSystemXPCService;


@end


#endif