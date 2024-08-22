// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUISOFTWAREUPDATEAUTOMATICUPDATECONTROLLER_H
#define SUSUISOFTWAREUPDATEAUTOMATICUPDATECONTROLLER_H

@class PSListController, PSSpecifier, SUManagerClient;



@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController

@property (retain, nonatomic) PSSpecifier *automaticDownloadGroup; // ivar: _automaticDownloadGroup
@property (retain, nonatomic) PSSpecifier *automaticDownloadSwitchSpecifier; // ivar: _automaticDownloadSwitchSpecifier
@property (retain, nonatomic) PSSpecifier *automaticUpdateGroup; // ivar: _automaticUpdateGroup
@property (retain, nonatomic) PSSpecifier *automaticUpdateSwitchSpecifier; // ivar: _automaticUpdateSwitchSpecifier
@property (retain, nonatomic) SUManagerClient *manager; // ivar: _manager
@property (retain, nonatomic) PSSpecifier *securityResponseGroup; // ivar: _securityResponseGroup
@property (retain, nonatomic) PSSpecifier *securityResponseSwitchSpecifier; // ivar: _securityResponseSwitchSpecifier
@property (retain, nonatomic) PSSpecifier *systemDataFilesGroup; // ivar: _systemDataFilesGroup
@property (retain, nonatomic) PSSpecifier *systemDataFilesSwitchSpecifier; // ivar: _systemDataFilesSwitchSpecifier


-(BOOL)isChinaDevice;
-(id)automaticDownloadStatus;
-(id)automaticInstallSystemDataFilesStatus;
-(id)automaticUpdateStatus;
-(id)init;
-(id)previousUserSpecifiedAutomaticUpdateStatus;
-(id)previousUserSpecifiedSecurityResponseStatus;
-(id)securityResponseStatus;
-(id)specifiers;
-(id)updateController;
-(void)addAutomaticDownloadGroupFooter;
-(void)addAutomaticInstallSystemDataFilesGroupFooter;
-(void)addAutomaticUpdateGroupFooter;
-(void)addSecurityResponseGroupFooter;
-(void)armedAutoUpdateForAutomaticUpdatesToggled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)autoUpdateSwitchedToggledWithNoArmedUpdate:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutoInstallToggleState:(id)arg0 toggleCellEnabled:(id)arg1 userSpecified:(BOOL)arg2 specifier:(id)arg3 ;
-(void)setAutomaticDownloadFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticInstallSystemDataFilesFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticUpdatesFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setSecurityResponseFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setSecurityResponseToggleState:(id)arg0 toggleCellEnabled:(id)arg1 userSpecified:(BOOL)arg2 specifier:(id)arg3 ;
-(void)setupAutoDownloadSwitchSpecifier;
-(void)setupAutoInstallSystemDataFilesSpecifier;
-(void)setupAutoUpdateSwitchSpecifier;
-(void)setupSecurityResponseSpecifier;


@end


#endif