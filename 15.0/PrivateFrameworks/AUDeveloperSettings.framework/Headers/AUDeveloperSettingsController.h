// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUDEVELOPERSETTINGSCONTROLLER_H
#define AUDEVELOPERSETTINGSCONTROLLER_H

@class PSListController;



@interface AUDeveloperSettingsController : PSListController



-(BOOL)needLegalConsent;
-(id)createCustomerSpecifiers;
-(id)createInternalSpecifiers;
-(id)isSeedParticipationEnabled:(id)arg0 ;
-(id)specifiers;
-(id)urlValueForAccessoryWithSpecifier:(id)arg0 ;
-(void)setSeedParticipation:(id)arg0 specifier:(id)arg1 ;
-(void)setURLValueForAccessory:(id)arg0 withSpecifier:(id)arg1 ;
-(void)showLegalConsent:(id)arg0 ;
-(void)showLegalConsentLearnMoreLink:(id)arg0 ;
-(void)showParticipateInSeedOffAlert:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif