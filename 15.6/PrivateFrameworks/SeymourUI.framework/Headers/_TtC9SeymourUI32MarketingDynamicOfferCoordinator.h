// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI32MARKETINGDYNAMICOFFERCOORDINATOR_H
#define _TTC9SEYMOURUI32MARKETINGDYNAMICOFFERCOORDINATOR_H

@protocol AMSUIDynamicViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9SeymourUI32MarketingDynamicOfferCoordinator : NSObject <AMSUIDynamicViewControllerDelegate>

 {
    ? eventHub;
    ? purchaseHandler;
}




-(id)init;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;


@end


#endif