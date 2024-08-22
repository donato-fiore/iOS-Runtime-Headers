// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSUISOFTWAREUPDATEAUTOMATICUPDATECONTROLLER_H
#define SUSUISOFTWAREUPDATEAUTOMATICUPDATECONTROLLER_H

@class PSListController, PSSpecifier, NSNumber;



@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController

@property (retain, nonatomic) PSSpecifier *automaticDownloadGroup; // ivar: _automaticDownloadGroup
@property (retain, nonatomic) PSSpecifier *automaticDownloadSwitchSpecifier; // ivar: _automaticDownloadSwitchSpecifier
@property (retain, nonatomic) PSSpecifier *automaticUpdateGroup; // ivar: _automaticUpdateGroup
@property (retain, nonatomic) PSSpecifier *automaticUpdateSwitchSpecifier; // ivar: _automaticUpdateSwitchSpecifier
@property (retain, nonatomic) NSNumber *userSpecifiedAutoUpdateValue; // ivar: _userSpecifiedAutoUpdateValue


-(id)automaticDownloadStatus;
-(id)automaticUpdateStatus;
-(id)specifiers;
-(id)updateController;
-(void)addAutomaticUpdateGroupFooter;
-(void)armedAutoUpdateForAutomaticUpdatesToggled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)autoUpdateSwitchedToggledWithNoArmedUpdate:(id)arg0 forSpecifier:(id)arg1 ;
-(void)clearAutomaticUpdateGroupFooter;
-(void)refreshAutomaticUpdateGroupFooter;
-(void)setAutomaticDownloadFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticUpdatesFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setupAutoDownloadSwitchSpecifier;
-(void)setupAutoUpdateSwitchSpecifier;


@end


#endif