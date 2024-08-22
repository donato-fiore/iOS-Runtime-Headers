// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPREMOTEALERTVIEWCONTROLLER_H
#define PKPAYMENTSETUPREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, NSString;
@protocol PKPaymentSetupDelegate;



@interface PKPaymentSetupRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(void)_dismiss;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)handleButtonActions:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif