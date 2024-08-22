// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIPASSCODELOCKCONTROLLER_H
#define PSUIPASSCODELOCKCONTROLLER_H

@class PSListController, PSSpecifier, SFAutoUnlockManager, NSArray, NSString, HMHomeManager;
@protocol HMHomeManagerDelegate, SFAutoUnlockManagerDelegate, DevicePINControllerDelegate;



@interface PSUIPasscodeLockController : PSListController <HMHomeManagerDelegate, SFAutoUnlockManagerDelegate, DevicePINControllerDelegate>

 {
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
}


@property (retain, nonatomic) SFAutoUnlockManager *autoUnlockManager; // ivar: _autoUnlockManager
@property (retain, nonatomic) NSArray *autoUnlockSpecifiers; // ivar: _autoUnlockSpecifiers
@property (nonatomic) BOOL canUnlockWatch; // ivar: _canUnlockWatch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly) Class superclass;


+(NSInteger)passcodeGracePeriod;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)isAssistantRestricted;
-(BOOL)isEnrolledInFaceID;
-(BOOL)isPasscodeSet;
-(BOOL)isVoiceDialRestricted;
-(BOOL)isWalletRestricted;
-(BOOL)shouldShowVoiceDial;
-(BOOL)showReplyWithMessage;
-(BOOL)useAlternateFooterTextForPAU;
-(NSInteger)fingerprintCount;
-(NSUInteger)errorActionWithAutoUnlockError:(id)arg0 ;
-(id)_makeWipeDeviceGroupFooter;
-(id)assistantUnderLockEnabled:(id)arg0 ;
-(id)autoUnlockEnabled:(id)arg0 ;
-(id)enabledInLockScreen:(id)arg0 ;
-(id)enabledInLockScreenForUSB:(id)arg0 ;
-(id)graceValue:(id)arg0 ;
-(id)homeControlAccessAllowedWhenLocked:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)voiceDial:(id)arg0 ;
-(id)wallet:(id)arg0 ;
-(id)wipeEnabled:(id)arg0 ;
-(void)_didUpdatePasscode:(id)arg0 ;
-(void)_localizeGracePeriodTitlesForSpecifier:(id)arg0 ;
-(void)_setWipeEnabled:(BOOL)arg0 ;
-(void)_showDeleteSavedFingerprintsAlert;
-(void)_updateGracePeriodForSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)devicePINController:(id)arg0 didAcceptChangedPIN:(id)arg1 ;
-(void)devicePINController:(id)arg0 didAcceptSetPIN:(id)arg1 ;
-(void)devicePINController:(id)arg0 shouldAcceptPIN:(id)arg1 withCompletion:(id)arg2 ;
-(void)didAcceptRemovePIN;
-(void)disablePasscodeRequiredSpecifiers:(id)arg0 ;
-(void)enableAutoUnlockForDevice:(id)arg0 ofSpecifier:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateAccessAllowedWhenLocked:(BOOL)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)manager:(id)arg0 didEnableDevice:(id)arg1 ;
-(void)manager:(id)arg0 enablingLockedDevice:(id)arg1 ;
-(void)manager:(id)arg0 failedToEnableDevice:(id)arg1 error:(id)arg2 ;
-(void)presentAppleIDAuthenticationController;
-(void)presentAutoUnlockEnableFailureAlertWithDevice:(id)arg0 withError:(id)arg1 ;
-(void)profileNotification:(id)arg0 ;
-(void)setAssistantUnderLockEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutoUnlockEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setEnabledInLockScreen:(id)arg0 specifier:(id)arg1 ;
-(void)setEnabledInLockScreenForUSB:(id)arg0 specifier:(id)arg1 ;
-(void)setGraceValue:(id)arg0 specifier:(id)arg1 ;
-(void)setHomeControlAccessAllowedWhenLocked:(id)arg0 specifier:(id)arg1 ;
-(void)setVoiceDial:(id)arg0 specifier:(id)arg1 ;
-(void)setWallet:(id)arg0 specifier:(id)arg1 ;
-(void)setWipeEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)showAlertForPhoneAutoUnlockEnablementOfDevice:(id)arg0 ofSpecifier:(id)arg1 ;
-(void)showKeychainAlert;
-(void)showPINSheet:(id)arg0 ;
-(void)showWeakWarningAlertForController:(id)arg0 offerUseAnyway:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)suspend;
-(void)togglePasscode:(id)arg0 ;
-(void)updateAutoUnlockDevicewithDevice:(id)arg0 ;
-(void)updateAutoUnlockSpecifiers;
-(void)updateGracePeriodSpecifier;
-(void)updatePhoneAutounlockSection:(BOOL)arg0 ;
-(void)updateVoiceDialGroup;


@end


#endif