// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSCONTROLLER_H
#define ICMUSICSUBSCRIPTIONSTATUSCONTROLLER_H

@class NSOperationQueue, NSXPCConnection, NSUUID, NSMutableDictionary, NSString;
@protocol ICMusicSubscriptionStatusRemoteRequestingClient, OS_dispatch_queue, NSCopying, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSUInteger _numberOfActiveRemoteRequests;
    NSOperationQueue *_operationQueue;
    id<NSCopying> *_privacyAcknowledgementObservationToken;
    NSXPCConnection *_remoteRequestingClientConnection;
    NSUUID *_remoteRequestingClientConnectionIdentifier;
    NSObject<OS_dispatch_source> *_remoteRequestingClientConnectionInvalidationTimer;
    NSMutableDictionary *_statusHandlersForPendingIdenticalRequests;
    NSMutableDictionary *_pendingRequests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_hasEntitlementForMusicSubscriptionStatusService;
+(id)sharedStatusController;
-(BOOL)_willPerformSubscriptionStatusRequest:(id)arg0 withStatusHandler:(id)arg1 ;
-(id)_remoteRequestingClientConnection;
-(id)init;
-(void)_cancelPendingRequests;
-(void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
-(void)_deliverSubscriptionStatusResponse:(id)arg0 forRequest:(id)arg1 error:(id)arg2 ;
-(void)_didEndRemoteRequestWithUniqueIdentifier:(id)arg0 ;
-(void)_handlePrivacyAcknowledgementRequirementChanged:(BOOL)arg0 ;
-(void)_handleSeveredRemoteClientConnectionWithIdentifier:(id)arg0 ;
-(void)_handleSubscriptionStatusCacheDidChangeNotification:(id)arg0 ;
-(void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)arg0 ;
-(void)_handleSubscriptionStatusDidChangeDistributedNotification:(id)arg0 ;
-(void)_handleSubscriptionStatusDidChangeFollowingPrivacyAcknowledgementNotification:(id)arg0 ;
-(void)_invalidateRemoteRequestingClientConnection;
-(void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
-(void)_scheduleInvalidationOfRemoteRequestingClientConnection;
-(void)_willBeginRemoteRequestWithUniqueIdentifier:(id)arg0 statusHandler:(id)arg1 ;
-(void)dealloc;
-(void)deliverSubscriptionStatusResponse:(id)arg0 forRemoteRequestWithUniqueIdentifier:(id)arg1 error:(id)arg2 ;
-(void)disableSubscriptionForUserIdentity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)disableSubscriptionWithCompletionHandler:(id)arg0 ;
-(void)enableSubscriptionForUserIdentity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)enableSubscriptionWithCompletionHandler:(id)arg0 ;
-(void)getSubscriptionStatusForUserIdentity:(id)arg0 bypassingCache:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)getSubscriptionStatusForUserIdentity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getSubscriptionStatusWithCompletionHandler:(id)arg0 ;
-(void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)invalidateCachedSubscriptionStatusWithCompletionHandler:(id)arg0 ;
-(void)performSubscriptionStatusRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performSubscriptionStatusRequest:(id)arg0 withStatusHandler:(id)arg1 ;
-(void)refreshSubscriptionForUserIdentity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)refreshSubscriptionUsingRequestContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)refreshSubscriptionWithCompletionHandler:(id)arg0 ;


@end


#endif