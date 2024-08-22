// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATEACCOUNTSTORESERVICELISTENER_H
#define ICDELEGATEACCOUNTSTORESERVICELISTENER_H

@class NSMutableArray, NSXPCListener, NSXPCListenerEndpoint, NSString;
@protocol NSXPCListenerDelegate, ICDelegateAccountStoreService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICUserIdentityStore.h"

@interface ICDelegateAccountStoreServiceListener : NSObject <NSXPCListenerDelegate, ICDelegateAccountStoreService>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _ignoresEntitlements;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    ICUserIdentityStore *_testingIdentityStore;
}


@property (readonly, nonatomic) NSXPCListenerEndpoint *XPCEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)machServiceListener;
+(id)testingListenerWithIdentityStore:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_identityStore;
-(id)_initWithXPCListener:(id)arg0 testingIdentityStore:(id)arg1 ;
-(void)_userIdentityStoreDelegateAccountStoreDidChangeNotification:(id)arg0 ;
-(void)addDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)recreateWithCompletionHandler:(id)arg0 ;
-(void)removeAllTokensWithCompletionHandler:(id)arg0 ;
-(void)removeDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokenForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokensExpiringBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)resume;
-(void)setIdentityProperties:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)setToken:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)suspend;


@end


#endif