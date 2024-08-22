// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICELLULARDATAOPTIONSCONTROLLER_H
#define PSUICELLULARDATAOPTIONSCONTROLLER_H

@class PSListController, PSSpecifier, CTServiceDescriptor;



@interface PSUICellularDataOptionsController : PSListController {
    PSSpecifier *_parentSpecifier;
    CTServiceDescriptor *_serviceDescriptor;
}




-(id)getCDMARoamingStatus:(id)arg0 ;
-(id)getDataRoamingStatus:(id)arg0 ;
-(id)getDataRoamingStatusForService:(id)arg0 ;
-(id)init;
-(id)initWithParentSpecifier:(id)arg0 ;
-(id)roamingSettingsDescription:(id)arg0 ;
-(id)roamingSpecifierforSubscription;
-(id)roamingSpecifiers;
-(id)specifiers;
-(void)airplaneModeChanged;
-(void)dealloc;
-(void)roamingOptionsDidChange;
-(void)setCDMARoamingEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setDataRoamingEnabledForService:(id)arg0 specifier:(id)arg1 ;


@end


#endif