// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONSERVICENAVIGATIONCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONSERVICENAVIGATIONCONTROLLER_H

@protocol UIViewControllerTransitioningDelegate;


#import "PKCompactNavigationContainedNavigationController.h"
#import "PKPaymentAuthorizationLayout.h"
#import "PKPaymentAuthorizationServiceViewController.h"

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {
    PKPaymentAuthorizationLayout *_layout;
}


@property (readonly, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController; // ivar: _authorizationViewController
@property (retain, nonatomic) NSObject<UIViewControllerTransitioningDelegate> *paymentTransitioningDelegate; // ivar: _paymentTransitioningDelegate


-(BOOL)_canShowWhileLocked;
-(id)_backgroundColorForModalFormSheet;
-(id)init;
-(id)initWithLayoutStyle:(NSInteger)arg0 paymentRequest:(id)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif