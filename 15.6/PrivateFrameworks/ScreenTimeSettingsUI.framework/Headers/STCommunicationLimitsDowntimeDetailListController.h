// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCOMMUNICATIONLIMITSDOWNTIMEDETAILLISTCONTROLLER_H
#define STCOMMUNICATIONLIMITSDOWNTIMEDETAILLISTCONTROLLER_H

@class PSListController, PSSpecifier, NSMutableArray, NSString, CNUIFamilyMemberWhitelistedContactsController;
@protocol CNUIFamilyMemberContactsPresentation;


#import "STCommunicationLimits.h"

@interface STCommunicationLimitsDowntimeDetailListController : PSListController <CNUIFamilyMemberContactsPresentation>



@property (retain) PSSpecifier *addContactsSpecifier; // ivar: _addContactsSpecifier
@property (retain) PSSpecifier *allowContactsOnlySpecifier; // ivar: _allowContactsOnlySpecifier
@property (retain) PSSpecifier *allowEveryoneSpecifier; // ivar: _allowEveryoneSpecifier
@property (retain) PSSpecifier *allowGroupsWithOneContactSpecifier; // ivar: _allowGroupsWithOneContactSpecifier
@property (retain) PSSpecifier *allowSpecificContactsSpecifier; // ivar: _allowSpecificContactsSpecifier
@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier; // ivar: _allowedCommunicationGroupSpecifier
@property (retain) PSSpecifier *allowedContactsGroupSpecifier; // ivar: _allowedContactsGroupSpecifier
@property (retain) NSMutableArray *allowedContactsSpecifiers; // ivar: _allowedContactsSpecifiers
@property (retain) STCommunicationLimits *communicationLimits; // ivar: _communicationLimits
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property BOOL syncingWhitelistedContacts; // ivar: _syncingWhitelistedContacts
@property (retain) CNUIFamilyMemberWhitelistedContactsController *whitelistedContactsController; // ivar: _whitelistedContactsController


-(NSInteger)_downtimeCommunicationLimitForSpecifier:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_allowedCommunicationGroupFooterText:(id)arg0 ;
-(id)_allowedContactDetailLabelText:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(void)_didFinishEditingCommunicationLimit;
-(void)_didFinishSyncingWhitelistedContacts;
-(void)_selectLeastRestrictiveOptionIfNecessary;
-(void)_startSyncingWhitelistedContacts;
-(void)_updateAllowedCommunicationGroupFooterText;
-(void)dismissPresentedViewController:(id)arg0 ;
-(void)familyMemberContactsDidChange;
-(void)presentViewController:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif