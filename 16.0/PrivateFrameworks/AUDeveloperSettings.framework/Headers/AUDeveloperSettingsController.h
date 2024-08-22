// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDEVELOPERSETTINGSCONTROLLER_H
#define AUDEVELOPERSETTINGSCONTROLLER_H

@class PSListController, PSSpecifier, CBUserController, OBTextWelcomeController;
@protocol OS_os_log;



@interface AUDeveloperSettingsController : PSListController {
    NSObject<OS_os_log> *_log;
    PSSpecifier *_logCollectionSpecifier;
    CBUserController *_loggingController;
    OBTextWelcomeController *_legalConsentController;
    OBTextWelcomeController *_privacyConsentController;
    PSSpecifier *_currentAccessorySpecifier;
    BOOL _btQueried;
    BOOL _isLoggingEnabled;
}




-(BOOL)needLegalConsent;
-(id)createCustomerSpecifiers;
-(id)init;
-(id)isSeedParticipationEnabled:(id)arg0 ;
-(id)islogCollectionEnabled:(id)arg0 ;
-(id)specifiers;
-(void)_agreePrivacyConsent;
-(void)_agreeToLegalConsent;
-(void)_notNowToLegalConsent;
-(void)_notNowToPrivacyConsent;
-(void)handleBTUserSettingsChangedNotification:(int)arg0 ;
-(void)handleLogCollectionToggle:(id)arg0 specifier:(id)arg1 ;
-(void)registerForNotifications;
-(void)setSeedParticipation:(id)arg0 specifier:(id)arg1 ;
-(void)setlogCollection:(id)arg0 specifier:(id)arg1 ;
-(void)showLegalConsent:(id)arg0 ;
-(void)showLegalConsentLearnMoreLink:(id)arg0 ;
-(void)showParticipateInSeedOffAlert:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif