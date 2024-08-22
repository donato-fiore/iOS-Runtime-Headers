// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16NEWSSUBSCRIPTION22APPLAUNCHUPSELLMANAGER_H
#define _TTC16NEWSSUBSCRIPTION22APPLAUNCHUPSELLMANAGER_H

@class SwiftObject;



@interface _TtC16NewsSubscription22AppLaunchUpsellManager : SwiftObject {
    ? configurationManager;
    ? paidBundleConfiguration;
    ? bundleSubscriptionManager;
    ? bundlePurchasePrewarmer;
    ? dataStore;
    ? router;
    ? networkReachability;
    ? appLaunchMethodChecker;
    ? paidBundleViaOfferFeatureAvailability;
    ? deferredPromise;
    ? lock;
    ? sealed;
    ? completionEventManager;
    ? paidBundleViaOfferHandler;
    ? paidBundleViaOfferPresentationEligible;
}




-(void)handleAMSUpsellDismiss;


@end


#endif