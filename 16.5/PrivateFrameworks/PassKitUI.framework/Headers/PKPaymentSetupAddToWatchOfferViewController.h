// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPADDTOWATCHOFFERVIEWCONTROLLER_H
#define PKPAYMENTSETUPADDTOWATCHOFFERVIEWCONTROLLER_H

@class UIView;


#import "PKAddToWatchOfferViewController.h"

@interface PKPaymentSetupAddToWatchOfferViewController : PKAddToWatchOfferViewController {
    UIView *_interactionDisabledView;
}


@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler


+(void)shouldShowAddToWatchOfferForPass:(id)arg0 inContext:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(id)initWithPaymentPass:(id)arg0 context:(NSInteger)arg1 dismissalHandler:(id)arg2 ;
-(void)_handleBridgeProvisioningError:(id)arg0 ;
-(void)_handleDismissal:(BOOL)arg0 ;
-(void)addToWatchOfferViewControllerDidNotRequestToAddToWatch;
-(void)addToWatchOfferViewControllerDidRequestToAddToWatch;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif