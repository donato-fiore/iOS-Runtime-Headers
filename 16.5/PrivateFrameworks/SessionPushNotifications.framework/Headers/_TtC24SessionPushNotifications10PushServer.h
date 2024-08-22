// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24SESSIONPUSHNOTIFICATIONS10PUSHSERVER_H
#define _TTC24SESSIONPUSHNOTIFICATIONS10PUSHSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC24SessionPushNotifications10PushServer : NSObject {
    ? _eventPublisher;
    ? _tokenPublisher;
    ? _subscriptionExceedingReducedBudgetPublisher;
    ? _unsubscribedActivityPublisher;
    ? queue;
    ? calloutQueue;
    ? apsQueue;
    ? connections;
    ? connectionFactory;
    ? subscriptionStore;
    ? publicTokenStore;
    ? tokenStore;
    ? budgetEnforcementPolicyProvider;
    ? budgetEnforcementPolicyProviderSubscription;
    ? taskScheduler;
    ? nextBudgetTimeoutExpirationWake;
    ? topicsByPriority;
}




-(id)init;


@end


#endif