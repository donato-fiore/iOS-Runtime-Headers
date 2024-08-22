// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16NEWSSUBSCRIPTION25SUBSCRIPTIONSTATUSCHECKER_H
#define _TTC16NEWSSUBSCRIPTION25SUBSCRIPTIONSTATUSCHECKER_H

@class SwiftObject;



@interface _TtC16NewsSubscription25SubscriptionStatusChecker : SwiftObject {
    ? inAppSubscriptionStatusChecker;
    ? webSubscriptionStatusChecker;
    ? purchaseManager;
    ? checkBlocker;
    ? didCompleteFinishLaunching;
    ? featureAvailability;
    ? userSignedInAtSessionStart;
}




-(void)entitlementsDidChange;


@end


#endif