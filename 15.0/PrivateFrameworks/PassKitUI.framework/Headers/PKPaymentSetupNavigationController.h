// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPNAVIGATIONCONTROLLER_H
#define PKPAYMENTSETUPNAVIGATIONCONTROLLER_H

@class NSString, PKPaymentProvisioningController;
@protocol PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable, PKPaymentSetupDelegate;


#import "PKNavigationController.h"
#import "PKPaymentSetupFlowController.h"

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable>

 {
    NSInteger _context;
    BOOL _rootViewControllerNeedsConfiguration;
    PKPaymentSetupFlowController *_flowController;
}


@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger paymentSetupMode; // ivar: _paymentSetupMode
@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (weak, nonatomic) NSObject<PKPaymentSetupDelegate> *setupDelegate; // ivar: _setupDelegate
@property (nonatomic) BOOL showsWelcomeViewController; // ivar: _showsWelcomeViewController
@property (readonly) Class superclass;


+(id)viewControllerForPresentingPaymentError:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(NSInteger)_preferredModalPresentationStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 ;
-(void)_dirtyConfigurationAndReloadIfNeeded;
-(void)_reconfigureRootViewController;
-(void)cancel:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)setCustomFormSheetPresentationStyleForiPad;
-(void)viewController:(id)arg0 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(id)arg3 ;
-(void)viewController:(id)arg0 didExitPasscodeUpgradeWithShouldContinue:(BOOL)arg1 error:(id)arg2 ;
-(void)viewController:(id)arg0 didShowProvisioningError:(id)arg1 ;
-(void)viewController:(id)arg0 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 completion:(id)arg2 ;
-(void)viewController:(id)arg0 requestPasscodeUpgradeWithCompletion:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidShowEligibilityIssue:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif