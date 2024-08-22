// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTTERMSANDCONDITIONSREMOTEALERTVIEWCONTROLLER_H
#define PKPEERPAYMENTTERMSANDCONDITIONSREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController;


#import "PKPeerPaymentTermsController.h"

@interface PKPeerPaymentTermsAndConditionsRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    PKPeerPaymentTermsController *_termsController;
}




+(BOOL)_isSecureForRemoteViewService;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)_dismiss;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)handleButtonActions:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif