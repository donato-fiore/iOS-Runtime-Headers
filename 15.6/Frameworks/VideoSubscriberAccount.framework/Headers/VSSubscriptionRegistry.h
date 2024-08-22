// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSUBSCRIPTIONREGISTRY_H
#define VSSUBSCRIPTIONREGISTRY_H

@class NSString;
@protocol VSSubscriptionServiceProtocol;

#import <Foundation/Foundation.h>

#import "VSSubscriptionPersistentContainer.h"
#import "VSSubscriptionPredicateFactory.h"
#import "VSRemoteNotifier.h"

@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // ivar: _predicateFactory
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (readonly) Class superclass;


-(BOOL)_saveChangesToContext:(id)arg0 ;
-(NSInteger)_saveChangesToContext:(id)arg0 withDate:(id)arg1 ;
-(id)_fetchRequest;
-(id)_predicateForCurrentConnectionWithRequestKind:(NSInteger)arg0 ;
-(id)_predicateForPersistentAttributesOfSubscriptions:(id)arg0 withEntity:(id)arg1 forFiltering:(BOOL)arg2 ;
-(id)_securityTaskForCurrentConnection;
-(id)_subscriptionEntity;
-(id)init;
-(void)_installedAppsDidChange:(id)arg0 ;
-(void)_performBlock:(id)arg0 ;
-(void)_sendRemoteNotification;
-(void)dealloc;
-(void)fetchActiveSubscriptionsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerSubscription:(id)arg0 ;
-(void)registerSubscription:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeSubscriptions:(id)arg0 ;
-(void)removeSubscriptions:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif