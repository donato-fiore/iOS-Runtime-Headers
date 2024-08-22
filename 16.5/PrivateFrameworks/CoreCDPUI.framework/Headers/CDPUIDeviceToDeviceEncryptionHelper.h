// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIDEVICETODEVICEENCRYPTIONHELPER_H
#define CDPUIDEVICETODEVICEENCRYPTIONHELPER_H

@class AKAppleIDAuthenticationController, UINavigationController, UIViewController, NSString;
@protocol CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate, CDPUIDeviceToDeviceEncryptionHelperDelegate, CDPLocalSecretFollowUpProvider;

#import <Foundation/Foundation.h>

#import "CDPUIDeviceToDeviceEncryptionFlowContext.h"

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate>

 {
    AKAppleIDAuthenticationController *_authenticationController;
    UINavigationController *_navigationController;
    UIViewController *_initialTopViewController;
}


@property (readonly, nonatomic) CDPUIDeviceToDeviceEncryptionFlowContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CDPUIDeviceToDeviceEncryptionHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CDPLocalSecretFollowUpProvider> *followUpProvider; // ivar: _followUpProvider
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


+(id)_newLegacyFlowContext;
-(BOOL)_hasLocalSecret;
-(BOOL)_hasManatee;
-(BOOL)_inCircle;
-(BOOL)_isAccountHSA2ForAltDSID:(id)arg0 error:(*id)arg1 ;
-(id)_authenticationContextForFlowContext:(id)arg0 ;
-(id)_authenticationController;
-(id)_cdpErrorWithUnderlyingError:(id)arg0 ;
-(id)_inAppAuthenticationContextForFlowContext:(id)arg0 ;
-(id)_navigationController;
-(id)_newSpinnerViewController;
-(id)_newUpgradeUIProvider;
-(id)_presentingNavigationController;
-(id)_repairContextForFlowContext:(id)arg0 withAuthenticationResults:(id)arg1 ;
-(id)_stateControllerForFlowContext:(id)arg0 withAuthenticationResults:(id)arg1 ;
-(id)_stateControllerWithRepairContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithPresentingViewController:(id)arg0 ;
-(void)_beginUpgradeFlowWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_configureNavigationController;
-(void)_configurePresentingViewControllerForModalPresentation;
-(void)_continueAuthenticatedUpgradeFlowWithContext:(id)arg0 authenticationResults:(id)arg1 completion:(id)arg2 ;
-(void)_continueUpgradeFlowWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_createLocalSecretForContext:(id)arg0 completion:(id)arg1 ;
-(void)_determineEscrowRepairUpgradeEligibilityForContext:(id)arg0 completion:(id)arg1 ;
-(void)_determineManateeUpgradeEligibilityForContext:(id)arg0 completion:(id)arg1 ;
-(void)_determineSecurityUpgradeEligibilityForContext:(id)arg0 completion:(id)arg1 ;
-(void)_determineUpgradeEligibilityForContext:(id)arg0 completion:(id)arg1 ;
-(void)_dismissNavigationControllerWithCompletion:(id)arg0 ;
-(void)_legacyRequestPermissionToContinueFlowWithCompletion:(id)arg0 ;
-(void)_performAuthenticatedRepairFlowWithContext:(id)arg0 stateController:(id)arg1 completion:(id)arg2 ;
-(void)_postBiometricFollowUp;
-(void)_presentIneligibilityAlertForFlowContext:(id)arg0 completion:(id)arg1 ;
-(void)_presentSpinnerViewControllerWithCompletion:(id)arg0 ;
-(void)_requestPermissionToCreatePasscodeForFlowContext:(id)arg0 completion:(id)arg1 ;
-(void)_validateLocalSecretForContext:(id)arg0 withStateController:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)localSecretValidationCanCancelWithViewController:(id)arg0 completion:(id)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(id)arg0 ;


@end


#endif