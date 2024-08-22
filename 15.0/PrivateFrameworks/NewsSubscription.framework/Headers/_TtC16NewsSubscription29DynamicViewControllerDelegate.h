// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}




-(id)init;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;


@end


#endif