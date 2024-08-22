// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIPAYMENTSETUPVIEWCONTROLLER_H
#define AMSUIPAYMENTSETUPVIEWCONTROLLER_H

@class UIViewController, PKPaymentSetupRequest;
@protocol AMSUIPaymentSetupViewControllerDelegate;



@interface AMSUIPaymentSetupViewController : UIViewController

@property (retain, nonatomic) UIViewController *childViewController; // ivar: _childViewController
@property (weak, nonatomic) NSObject<AMSUIPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKPaymentSetupRequest *paymentSetupRequest; // ivar: _paymentSetupRequest


-(id)initWithPaymentSetupRequest:(id)arg0 ;
-(void)_setup;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif