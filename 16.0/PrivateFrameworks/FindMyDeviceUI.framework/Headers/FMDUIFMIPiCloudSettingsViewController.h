// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDUIFMIPICLOUDSETTINGSVIEWCONTROLLER_H
#define FMDUIFMIPICLOUDSETTINGSVIEWCONTROLLER_H

@class PSListController, ACAccount, PSSpecifier, UIProgressHUD;
@protocol SPSettingsConfigurating;



@interface FMDUIFMIPiCloudSettingsViewController : PSListController

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) BOOL activityInProgress; // ivar: _activityInProgress
@property (nonatomic) BOOL firstTimeSetup; // ivar: _firstTimeSetup
@property (retain, nonatomic) PSSpecifier *fmipSpecifier; // ivar: _fmipSpecifier
@property (retain, nonatomic) UIProgressHUD *hud; // ivar: _hud
@property (nonatomic) BOOL offlineFindingDisabledDueToNotHSA2; // ivar: _offlineFindingDisabledDueToNotHSA2
@property (nonatomic) BOOL offlineFindingEnabled; // ivar: _offlineFindingEnabled
@property (retain, nonatomic) PSSpecifier *sendLastLocationSpecifier; // ivar: _sendLastLocationSpecifier
@property (retain, nonatomic) NSObject<SPSettingsConfigurating> *spSession; // ivar: _spSession
@property (nonatomic) BOOL togglingFMIPSwitch; // ivar: _togglingFMIPSwitch


-(BOOL)FMWLANEnabled;
-(BOOL)_doesDeviceSupportOfflineFindingLowPowerMode;
-(BOOL)isShowingActivityInProgressUI;
-(id)_clientInfoHeader;
-(id)_fmipSwitchOnForSpecifier:(id)arg0 ;
-(id)_groupSpecifierForFMIP;
-(id)_groupSpecifierForOfflineFinding;
-(id)_groupSpecifierForSendLastLocation;
-(id)_offlineFindingSwitchOnForSpecifier:(id)arg0 ;
-(id)_sendLastLocationSwitchOnForSpecifier:(id)arg0 ;
-(id)_specifierForFMIP;
-(id)_specifierForOfflineFinding;
-(id)_specifierForSendLastLocation;
-(id)_userAgentHeader;
-(id)init;
-(id)specifiers;
-(void)_disableFMIP;
-(void)_enableFMIP;
-(void)_fmipSettingsCacheDidUpdate:(id)arg0 ;
-(void)_loadSearchPartyConfiguration;
-(void)_reloadSpecifiersOnMainQueue;
-(void)_setFMIPSwitchOn:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_setOfflineFindingSwitchOn:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_setSendLastLocationSwitchOn:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_showFMIPPrivacyPage;
-(void)_showOfflineFindingAlertWhenTurningOff;
-(void)_showOfflineFindingLearnMorePage;
-(void)hideActivityInProgress;
-(void)hideActivityInProgressUI;
-(void)hideActivityInProgressUIWithDelay:(CGFloat)arg0 ;
-(void)presentHSA2UpgradeForOfflineFinding;
-(void)setSearchPartyConfigurationActive:(BOOL)arg0 ;
-(void)showActivityInProgress;
-(void)showActivityInProgressUIWithMessage:(id)arg0 ;
-(void)showHSA2UpgradeAlert;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif