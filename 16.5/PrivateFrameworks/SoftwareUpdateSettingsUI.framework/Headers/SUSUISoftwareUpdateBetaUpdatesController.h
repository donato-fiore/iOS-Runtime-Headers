// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUISOFTWAREUPDATEBETAUPDATESCONTROLLER_H
#define SUSUISOFTWAREUPDATEBETAUPDATESCONTROLLER_H

@class PSListController, PSSpecifier, NSArray;



@interface SUSUISoftwareUpdateBetaUpdatesController : PSListController

@property (retain, nonatomic) PSSpecifier *appleIDGroupSpecifier; // ivar: _appleIDGroupSpecifier
@property (retain, nonatomic) PSSpecifier *appleIDSpecifier; // ivar: _appleIDSpecifier
@property (weak, nonatomic) PSSpecifier *mismatchedSpecifier; // ivar: _mismatchedSpecifier
@property (retain, nonatomic) PSSpecifier *programsGroup; // ivar: _programsGroup
@property (retain, nonatomic) NSArray *programsList; // ivar: _programsList
@property (retain, nonatomic) PSSpecifier *unavailableProgramNoticeSpecifier; // ivar: _unavailableProgramNoticeSpecifier


-(id)_specifierForBetaProgram:(id)arg0 rowIdentifier:(id)arg1 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)updateController;
-(void)presentAuthKitController;
-(void)presentAuthenticationDialog;
-(void)setupProgramListSpecifiers;
-(void)setupProgramsGroupSpecifier;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateFooter;
-(void)viewDidLoad;


@end


#endif