// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBARCODEPAYMENTPRIVACYVIEWCONTROLLER_H
#define PKBARCODEPAYMENTPRIVACYVIEWCONTROLLER_H

@class NSString;


#import "PKExplanationViewController.h"

@interface PKBarcodePaymentPrivacyViewController : PKExplanationViewController {
    NSUInteger _displayContext;
    NSString *_issuerName;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithIssuerName:(id)arg0 displayContext:(NSUInteger)arg1 paymentSetupContext:(NSInteger)arg2 ;
-(void)_closeButtonPressed:(id)arg0 ;
-(void)_dismiss;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif