// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL25ARCADESUBSCRIPTIONMANAGER_H
#define _TTC19APPSTOREKITINTERNAL25ARCADESUBSCRIPTIONMANAGER_H

@protocol SKPaymentQueueClientDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal25ArcadeSubscriptionManager : NSObject <SKPaymentQueueClientDelegate>

 {
    ? paymentQueue;
    ? dialogHandler;
    ? activeStoreAccountProvider;
    ? observers;
    ? stateLock;
    ? arcadeSubscriptionFamilyId;
    ? subscriptionEntitlements;
    ? subscriptionState;
    ? paymentCallbacks;
    ? logger;
}




-(id)init;
-(void)dealloc;
-(void)entitlementsDidChange;
-(void)handleEngagementRequest:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif