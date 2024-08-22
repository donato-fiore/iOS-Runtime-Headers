// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONREMOTEALERTVIEWCONTROLLER_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, PKPeerPaymentWebService, NSString;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKPeerPaymentIdentityVerificationController.h"
#import "PKNavigationController.h"

@interface PKPeerPaymentIdentityVerificationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupViewControllerDelegate>

 {
    PKPeerPaymentIdentityVerificationController *_controller;
    PKNavigationController *_navController;
    PKPeerPaymentWebService *_webService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_alertViewController;
-(id)pk_navigationController;
-(void)_dismiss;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)handleButtonActions:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif