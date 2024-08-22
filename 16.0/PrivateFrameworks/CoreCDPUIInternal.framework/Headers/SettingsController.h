// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SETTINGSCONTROLLER_H
#define SETTINGSCONTROLLER_H

@class PSListController, CDPUIController, CDPRecoveryController, NSString;
@protocol CDPAuthProvider;


#import "CDPRecoveryTestController.h"

@interface SettingsController : PSListController <CDPAuthProvider>

 {
    BOOL _didUseSMS;
    CDPUIController *_uiController;
    CDPRecoveryTestController *_recoveryTestController;
    CDPRecoveryController *_recoveryController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_didUseSMSVerification;
-(BOOL)_forceInlineUI;
-(BOOL)_offerRemoteApproval;
-(BOOL)_rkMandate;
-(BOOL)shouldAllowCDPEnrollment;
-(id)_contextForPrimaryAccount;
-(id)_fakeDevicesWithExpectedSecret:(id)arg0 isNumber:(BOOL)arg1 numericLength:(id)arg2 ;
-(id)_recoverAndSyncrhonizeDataSpecifier;
-(id)_recoverStingrayDataSpecifier;
-(id)_recoveryKeySpecifier;
-(id)_recoveryKeySpecifierRegen;
-(id)getUserDefaultEnabled:(id)arg0 ;
-(id)specifiers;
-(void)_loadSpecifiers;
-(void)_recoverAndSyncrhonizeStingrayData:(id)arg0 ;
-(void)_recoverStingrayData:(id)arg0 ;
-(void)beginFMIPRecovery:(id)arg0 ;
-(void)beginIDMSRecovery:(id)arg0 ;
-(void)beginIDMSRecoveryPrimary:(id)arg0 ;
-(void)beginIDMSRecoveryRK:(id)arg0 ;
-(void)beginIDMSRecoveryWithFailure:(id)arg0 ;
-(void)beginIDMSRecoveryWithRKSkip:(id)arg0 ;
-(void)cdpContext:(id)arg0 verifyMasterKey:(id)arg1 completion:(id)arg2 ;
-(void)deviceToDeviceAccountUpgradeCardUI:(id)arg0 ;
-(void)enableCDP:(id)arg0 ;
-(void)generateNewRecoveryKey:(id)arg0 ;
-(void)promptFor4DigitICSC:(id)arg0 ;
-(void)promptFor4DigitRemoteSecret:(id)arg0 ;
-(void)promptFor6DigitICSC:(id)arg0 ;
-(void)promptFor6DigitRemoteSecret:(id)arg0 ;
-(void)promptForComplexICSC:(id)arg0 ;
-(void)promptForCustomAlphanumericRemoteSecret:(id)arg0 ;
-(void)promptForCustomNumericRemoteSecret:(id)arg0 ;
-(void)promptForLocalSecret:(id)arg0 ;
-(void)promptForRandomICSC:(id)arg0 ;
-(void)removeSpinnerFromSpecifier:(id)arg0 ;
-(void)setUserDefaultEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)startBeneficiaryFlow:(id)arg0 ;
-(void)startSpinnerForSpecifier:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif