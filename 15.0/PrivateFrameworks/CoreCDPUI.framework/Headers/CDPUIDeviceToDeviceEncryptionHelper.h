// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUIDEVICETODEVICEENCRYPTIONHELPER_H
#define CDPUIDEVICETODEVICEENCRYPTIONHELPER_H

@class AKAppleIDAuthenticationController, NSString, UINavigationController, UIViewController;
@protocol CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate, CDPUIDeviceToDeviceEncryptionHelperDelegate;

#import <Foundation/Foundation.h>

#import "CDPUIDeviceToDeviceEncryptionFlowContext.h"

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate>



@property (retain, nonatomic) AKAppleIDAuthenticationController *authController; // ivar: _authController
@property (retain, nonatomic) CDPUIDeviceToDeviceEncryptionFlowContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CDPUIDeviceToDeviceEncryptionHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navController; // ivar: _navController
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(BOOL)_hasManatee;
-(BOOL)_hasPasscode;
-(BOOL)_isInCircle;
-(id)_authContextFromContext:(id)arg0 ;
-(id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg0 ;
-(id)_cdpStateControllerWithAuthResults:(id)arg0 ;
-(id)_cdpStateControllerWithContext:(id)arg0 ;
-(id)_encryptionErrorFromError:(id)arg0 ;
-(id)_inAppContextFromContext:(id)arg0 ;
-(id)_spinnerViewController;
-(id)_upgradeUIProvider;
-(id)initWithContext:(id)arg0 ;
-(id)initWithPresentingViewController:(id)arg0 ;
-(void)_checkEligibilityWithCompletionForContext:(id)arg0 completion:(id)arg1 ;
-(void)_configurePresentingViewControllerForModalPresentation;
-(void)_createPasscodeWithCompletion:(id)arg0 ;
-(void)_dismissPresentedViewControllerWithCompletion:(id)arg0 ;
-(void)_executeSyncOnMainThreadIfNeeded:(id)arg0 ;
-(void)_isAccount2FAForAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)_legacyAskPermissionToContinueFlowWithCompletion:(id)arg0 ;
-(void)_postBiometricFollowupIfNeeded;
-(void)_preflightDeviceToDeviceEncryptionWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_presentCDPUpgradeSpinnerWithCompletion:(id)arg0 ;
-(void)_presentIneligibleAlertWithCompletion:(id)arg0 ;
-(void)_repairCDPWithAuthResults:(id)arg0 cachedSecret:(id)arg1 withCompletion:(id)arg2 ;
-(void)_setupPresentedViewController;
-(void)_shouldContinueCreationWithCompletion:(id)arg0 ;
-(void)_showUpgradeMessageWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_validateLocalSecretAndRepairCDPWithAuthResults:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)localSecretValidationCanCancelWithViewController:(id)arg0 completion:(id)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(id)arg0 ;


@end


#endif