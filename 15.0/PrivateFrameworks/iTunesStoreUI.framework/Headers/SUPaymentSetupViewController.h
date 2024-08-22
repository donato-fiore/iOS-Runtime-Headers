// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUPAYMENTSETUPVIEWCONTROLLER_H
#define SUPAYMENTSETUPVIEWCONTROLLER_H

@class UIViewController, PKPaymentSetupViewController, PKPaymentSetupRequest;
@protocol SUPaymentSetupViewControllerDelegate;



@interface SUPaymentSetupViewController : UIViewController

@property (retain, nonatomic) PKPaymentSetupViewController *childViewController; // ivar: _childViewController
@property (weak, nonatomic) NSObject<SUPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKPaymentSetupRequest *paymentSetupRequest; // ivar: _paymentSetupRequest


-(id)initWithPaymentSetupRequest:(id)arg0 ;
-(void)_setup;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif