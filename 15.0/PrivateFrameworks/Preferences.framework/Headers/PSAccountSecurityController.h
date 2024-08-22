// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSACCOUNTSECURITYCONTROLLER_H
#define PSACCOUNTSECURITYCONTROLLER_H

@class NSArray, NSString;
@protocol KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate;


#import "PSListController.h"
#import "PSSpecifier.h"
#import "PSSetupController.h"
#import "KeychainSyncDevicePINController.h"
#import "KeychainSyncPhoneSettingsFragment.h"
#import "KeychainSyncCountryInfo.h"
#import "PSKeychainSyncManager.h"

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate>

 {
    PSSpecifier *_recoverySwitch;
    NSArray *_passcodeSpecifiers;
    PSSetupController *_devicePasscodeChangeSetupController;
    KeychainSyncDevicePINController *_devicePINController;
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    NSString *_SMSTarget;
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;
    BOOL _secureBackupEnabled;
    PSKeychainSyncManager *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *securityCode; // ivar: _securityCode
@property (nonatomic) int securityCodeType; // ivar: _securityCodeType
@property (readonly) Class superclass;


-(id)init;
-(id)passcodeSpecifiers;
-(id)specifiers;
-(id)useRecoveryForSepecifier:(id)arg0 ;
-(void)_setShowsDoneButton:(BOOL)arg0 ;
-(void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg0 ;
-(void)cancelPressed;
-(void)changeSecurityCode:(id)arg0 ;
-(void)disableRecovery;
-(void)handleBurnedRecord;
-(void)keychainSyncController:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)navCancelPressed;
-(void)navDonePressed;
-(void)phoneSettingsFragment:(id)arg0 didChangePhoneNumber:(id)arg1 countryInfo:(id)arg2 ;
-(void)reloadSpecifiers;
-(void)saveSMSTargetChanges;
-(void)setUseRecovery:(id)arg0 specifier:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif