// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPADDTOWATCHOFFERVIEWCONTROLLER_H
#define PKPAYMENTSETUPADDTOWATCHOFFERVIEWCONTROLLER_H

@class UIView, NSString;
@protocol PKAddToWatchOfferViewControllerDelegate;


#import "PKAddToWatchOfferViewController.h"

@interface PKPaymentSetupAddToWatchOfferViewController : PKAddToWatchOfferViewController <PKAddToWatchOfferViewControllerDelegate>

 {
    UIView *_interactionDisabledView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)shouldShowAddToWatchOfferForPass:(id)arg0 inContext:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(id)initWithPaymentPass:(id)arg0 context:(NSInteger)arg1 dismissalHandler:(id)arg2 ;
-(void)_handleBridgeProvisioningError:(id)arg0 ;
-(void)_handleDismissal:(BOOL)arg0 ;
-(void)addToWatchOfferViewControllerDidNotRequestToAddToWatch:(id)arg0 ;
-(void)addToWatchOfferViewControllerDidRequestToAddToWatch:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif