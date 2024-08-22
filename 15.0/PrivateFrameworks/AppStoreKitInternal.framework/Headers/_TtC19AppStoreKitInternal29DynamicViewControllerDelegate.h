// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL29DYNAMICVIEWCONTROLLERDELEGATE_H
#define _TTC19APPSTOREKITINTERNAL29DYNAMICVIEWCONTROLLERDELEGATE_H

@protocol AMSUIDynamicViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal29DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate>

 {
    ? subscriptionManager;
    ? purchaseSuccessHandler;
    ? purchaseFailureHandler;
    ? carrierLinkSuccessHandler;
    ? carrierLinkFailureHandler;
    ? didDismissHandler;
    ? contentViewConstructor;
}




-(id)dynamicViewController:(id)arg0 contentViewWithDictionary:(id)arg1 frame:(struct CGRect )arg2 ;
-(id)init;
-(void)dynamicViewController:(id)arg0 didFinishCarrierLinkingWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;


@end


#endif