// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSUBSCRIPTIONREGISTRATIONCENTER_H
#define VSSUBSCRIPTIONREGISTRATIONCENTER_H

@class NSString, NSOperationQueue, NSMutableDictionary;
@protocol VSRemoteNotifierDelegate, VSSubscriptionServiceProtocol;

#import <Foundation/Foundation.h>

#import "VSSubscriptionServiceConnection.h"
#import "VSSecurityTask.h"
#import "VSDelayOperation.h"
#import "VSSubscriptionFetchOptionsValidator.h"
#import "VSLinkedOnOrAfterChecker.h"
#import "VSSubscriptionPredicateFactory.h"
#import "VSRemoteNotifier.h"

@interface VSSubscriptionRegistrationCenter : NSObject <VSRemoteNotifierDelegate, VSSubscriptionServiceProtocol>



@property (retain, nonatomic) VSSubscriptionServiceConnection *connection; // ivar: _connection
@property (retain, nonatomic) VSSecurityTask *currentTask; // ivar: _currentTask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSDelayOperation *expirationOperation; // ivar: _expirationOperation
@property (retain) VSSubscriptionFetchOptionsValidator *fetchOptionsValidator; // ivar: _fetchOptionsValidator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker; // ivar: _linkedOnOrAfterChecker
@property (retain) VSSubscriptionPredicateFactory *predicateFactory; // ivar: _predicateFactory
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (retain, nonatomic) NSMutableDictionary *subscriptionsByOptions; // ivar: _subscriptionsByOptions
@property (readonly) Class superclass;


+(id)defaultSubscriptionRegistrationCenter;
-(BOOL)_shouldAllowAccessToSubscription:(id)arg0 ;
-(BOOL)_shouldRaiseExceptionsForMisuse;
-(id)_serviceWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)_refreshCachedSubscriptions;
-(void)_sendLocalNotificationWithUserInfo:(id)arg0 ;
-(void)dealloc;
-(void)fetchActiveSubscriptionsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerSubscription:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;
-(void)removeSubscriptions:(id)arg0 ;
-(void)setCurrentSubscription:(id)arg0 ;


@end


#endif