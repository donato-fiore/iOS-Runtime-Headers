// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICELLULARROAMINGCONTROLLER_H
#define PSUICELLULARROAMINGCONTROLLER_H

@class PSListController, PSSpecifier;



@interface PSUICellularRoamingController : PSListController {
    PSSpecifier *_voiceRoamingSpecifier;
    PSSpecifier *_dataRoamingSpecifier;
    PSSpecifier *_cdmaRoamingSpecifier;
}




-(id)_voiceRoamingFooterTextWithVoiceRoamingOn:(BOOL)arg0 ;
-(id)cdmaRoamingSpecifiers;
-(id)dataRoamingSpecifiers;
-(id)getCDMARoamingStatus:(id)arg0 ;
-(id)getDataRoamingStatus:(id)arg0 ;
-(id)getDataRoamingStatusForService:(id)arg0 specifier:(id)arg1 ;
-(id)getVoiceRoamingStatus:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)cellularPlanChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)newCarrierNotification;
-(void)reloadRoamingStatus;
-(void)roamingOptionsDidChange;
-(void)setCDMARoamingEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setDataRoamingEnabledForService:(id)arg0 enabled:(id)arg1 specifier:(id)arg2 ;
-(void)setVoiceRoamingEnabled:(id)arg0 specifier:(id)arg1 ;


@end


#endif