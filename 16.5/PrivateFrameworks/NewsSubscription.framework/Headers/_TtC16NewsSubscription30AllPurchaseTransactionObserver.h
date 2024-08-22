// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16NEWSSUBSCRIPTION30ALLPURCHASETRANSACTIONOBSERVER_H
#define _TTC16NEWSSUBSCRIPTION30ALLPURCHASETRANSACTIONOBSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscription30AllPurchaseTransactionObserver : NSObject {
    ? configurationManager;
    ? inAppSubscriptionStatusChecker;
    ? appConfigurationManager;
    ? tagController;
    ? purchaseController;
    ? subscriptionController;
    ? purchaseAdContextEntriesManager;
    ? webOptinFlowManager;
    ? tracker;
    ? router;
    ? failedTransactionPurchaseContexts;
    ? familySharingLandingPageLauncher;
    ? entitlementService;
    ? postPurchaseOnboardingManager;
}




-(id)init;


@end


#endif