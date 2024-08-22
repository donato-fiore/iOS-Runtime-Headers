// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIACCOUNTSETTINGSCONNECTEDAPPSVIEWCONTROLLER_H
#define VUIACCOUNTSETTINGSCONNECTEDAPPSVIEWCONTROLLER_H

@class PSListController, PSSpecifier, NSArray;



@interface VUIAccountSettingsConnectedAppsViewController : PSListController {
    PSSpecifier *_appGroup;
    NSArray *_appSpecifiers;
}




-(NSInteger)_alertStyle;
-(id)_accessStatusForSpecifier:(id)arg0 ;
-(id)_appGroupSpecifier;
-(id)specifiers;
-(void)_addPrivacyFooterToGroup:(id)arg0 ;
-(void)_loadAppGroup;
-(void)_promptToDisableChannel:(id)arg0 withExternalID:(id)arg1 ;
-(void)_promptToEnableChannel:(id)arg0 withExternalID:(id)arg1 ;
-(void)_showPrivacySheet:(id)arg0 ;
-(void)_showVppaExpiredPrompt:(id)arg0 ;
-(void)_startAppSpinner;
-(void)_stopAppSpinner;
-(void)_toggleSpecifier:(id)arg0 sender:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif