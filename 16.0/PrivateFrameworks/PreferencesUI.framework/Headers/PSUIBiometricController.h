// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIBIOMETRICCONTROLLER_H
#define PSUIBIOMETRICCONTROLLER_H

@class CIDVUIBiometricBindingFlowManager, DCBiometricStore, NSString, NSArray;
@protocol UIPopoverControllerDelegate;


#import "PSUIPasscodeLockController.h"
#import "PSEnrollContainerViewController.h"

@interface PSUIBiometricController : PSUIPasscodeLockController <UIPopoverControllerDelegate>



@property (retain, nonatomic) CIDVUIBiometricBindingFlowManager *_biometricBindingFlowManager; // ivar: __biometricBindingFlowManager
@property (retain, nonatomic) DCBiometricStore *biometricStrore; // ivar: _biometricStrore
@property (readonly, nonatomic) NSUInteger currentBiometricTemplateFetchStatus; // ivar: _currentBiometricTemplateFetchStatus
@property (nonatomic) BOOL currentlyEnablingTouchIDForPurchases; // ivar: _currentlyEnablingTouchIDForPurchases
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSEnrollContainerViewController *enrollContainerController; // ivar: _enrollContainerController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isObservingBiometricTemplateFetchingStatus; // ivar: _isObservingBiometricTemplateFetchingStatus
@property (copy, nonatomic) id *modalFlowCancelCompletion; // ivar: _modalFlowCancelCompletion
@property (copy, nonatomic) id *modalFlowSuccessCompletion; // ivar: _modalFlowSuccessCompletion
@property (nonatomic) NSInteger storeState; // ivar: _storeState
@property (retain, nonatomic) NSArray *storedBiometricTemplates; // ivar: _storedBiometricTemplates
@property (readonly) Class superclass;


+(BOOL)shouldPresentInModalSheet;
-(BOOL)hasPasscodeAndBiometric;
-(BOOL)isBiometricEditingAllowed;
-(BOOL)isEnrollmentAvailable;
-(BOOL)isPhoneUnlockEnabled;
-(BOOL)isSafariAutofillRestricted;
-(BOOL)isTouchIDForPurchasesRestricted;
-(BOOL)isTouchIDForStockholmRestricted;
-(BOOL)isTouchIDUnlockRestricted;
-(BOOL)shouldRestrictFeaturesRequiringEnrollment;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(id)_passcodeControllerForSpecifier:(id)arg0 ;
-(id)authorizationToken;
-(id)biometricLogo;
-(id)biometricNameDescription;
-(id)biometricTableViewHeader;
-(id)headerForUseBiometricSection;
-(id)init;
-(id)isTouchIDForPurchasesEnabled:(id)arg0 ;
-(id)isTouchIDForStockholmEnabled:(id)arg0 ;
-(id)isTouchIDUnlockEnabled:(id)arg0 ;
-(id)passcodeController;
-(id)safariAutoFillEnabled:(id)arg0 ;
-(id)useBiometricForSpecifiers;
-(void)_popEnrollmentControllerWithCompletion:(id)arg0 ;
-(void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(id)arg0 ;
-(void)cancelModalFlowWithCompletion:(id)arg0 ;
-(void)completeModalFlow;
-(void)deleteGlobalAuthACL;
-(void)devicePINController:(id)arg0 didAcceptSetPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)didUnlock;
-(void)enrollBiometric;
-(void)enrollmentCompletedForIdentity:(id)arg0 ;
-(void)enrollmentControllerDidDismiss;
-(void)fetchBiometricTemplateUUIDsWithCompletion:(id)arg0 ;
-(void)hideCancelButton;
-(void)presentPasscodePaneFromSpecifier:(id)arg0 ;
-(void)presentSheetForContentViewController:(id)arg0 ;
-(void)presentSheetForContentViewController:(id)arg0 completion:(id)arg1 ;
-(void)proceedTouchIDForStockholmEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)pushPasscodePane;
-(void)setBiometricUnlockEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSafariAutoFillEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setTouchIDForPurchasesEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setTouchIDForStockholmEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setupBiometricLogoHeader;
-(void)updateStoreBiometricsState;
-(void)updateTouchIDForPurchasesSpecifier;
-(void)updateTouchIDForStockholmSpecifier;
-(void)updateTouchIDUnlockSpecifier;
-(void)updateWithReplacedUUIDs:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif