// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16NEWSSUBSCRIPTION29DYNAMICVIEWCONTROLLERDELEGATE_H
#define _TTC16NEWSSUBSCRIPTION29DYNAMICVIEWCONTROLLERDELEGATE_H

@protocol AMSUIDynamicViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscription29DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate>

 {
    ? purchaseContext;
    ? resultDelegate;
    ? bundleSubscriptionManager;
    ? router;
    ? postPurchaseOnboardingManager;
    ? paidBundleViaOfferHandler;
}




-(BOOL)dynamicViewControllerShouldDismiss:(id)arg0 ;
-(id)init;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;


@end


#endif