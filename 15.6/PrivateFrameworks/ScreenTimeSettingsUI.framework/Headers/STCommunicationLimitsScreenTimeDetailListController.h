// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCOMMUNICATIONLIMITSSCREENTIMEDETAILLISTCONTROLLER_H
#define STCOMMUNICATIONLIMITSSCREENTIMEDETAILLISTCONTROLLER_H

@class PSListController, PSSpecifier;


#import "STCommunicationLimits.h"

@interface STCommunicationLimitsScreenTimeDetailListController : PSListController

@property (retain) PSSpecifier *allowContactsOnlySpecifier; // ivar: _allowContactsOnlySpecifier
@property (retain) PSSpecifier *allowEveryoneSpecifier; // ivar: _allowEveryoneSpecifier
@property (retain) PSSpecifier *allowGroupsWithOneContactSpecifier; // ivar: _allowGroupsWithOneContactSpecifier
@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier; // ivar: _allowedCommunicationGroupSpecifier
@property (retain) STCommunicationLimits *communicationLimits; // ivar: _communicationLimits


+(void)showCompatibilityAlertIfNeededWithCoordinator:(id)arg0 presentingViewController:(id)arg1 okHandler:(id)arg2 ;
-(id)_allowedCommunicationGroupFooterText:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_didFinishEditingCommunicationLimit;
-(void)_updateAllowedCommunicationGroupFooterText;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif