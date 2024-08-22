// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCOMMUNICATIONLIMITSLISTCONTROLLER_H
#define STCOMMUNICATIONLIMITSLISTCONTROLLER_H

@class PSSpecifier, NSString, CNUIFamilyMemberContactsController;
@protocol CNUIFamilyMemberContactsPresentation;


#import "STPINListViewController.h"
#import "STCommunicationLimits.h"

@interface STCommunicationLimitsListController : STPINListViewController <CNUIFamilyMemberContactsPresentation>



@property (retain) PSSpecifier *allowContactEditingSpecifier; // ivar: _allowContactEditingSpecifier
@property (retain) STCommunicationLimits *communicationLimits; // ivar: _communicationLimits
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PSSpecifier *duringDowntimeSpecifier; // ivar: _duringDowntimeSpecifier
@property (retain) PSSpecifier *duringScreenTimeSpecifier; // ivar: _duringScreenTimeSpecifier
@property (retain) CNUIFamilyMemberContactsController *familyMemberContactsController; // ivar: _familyMemberContactsController
@property (readonly) NSUInteger hash;
@property (retain) PSSpecifier *iCloudContactsSpecifier; // ivar: _iCloudContactsSpecifier
@property (retain) PSSpecifier *manageContactsGroupSpecifier; // ivar: _manageContactsGroupSpecifier
@property (retain) PSSpecifier *manageContactsSpecifier; // ivar: _manageContactsSpecifier
@property (readonly) Class superclass;
@property BOOL syncingiCloudContacts; // ivar: _syncingiCloudContacts


-(id)_allowContactEditing:(id)arg0 ;
-(id)_manageContacts:(id)arg0 ;
-(id)_manageContactsGroupFooterText;
-(id)_statusPendingDetailText:(id)arg0 ;
-(id)_totaliCloudContactsDetailText:(id)arg0 ;
-(id)initWithRootViewModelCoordinator:(id)arg0 ;
-(id)specifiers;
-(void)_communicationLimitsDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_didCancelSyncingiCloudContacts;
-(void)_didFinishSyncingiCloudContacts;
-(void)_didStartSyncingiCloudContacts;
-(void)_enableAllowContactEditingSwitch:(BOOL)arg0 ;
-(void)_indicateiCloudContactsSyncingStatus;
-(void)_setAllowContactEditing:(id)arg0 specifier:(id)arg1 ;
-(void)_setManageContacts:(id)arg0 specifier:(id)arg1 ;
-(void)_startSyncingiCloudContacts;
-(void)_updateAllowContactEditing:(id)arg0 ;
-(void)_updateAllowContactEditingWithAlertIfNeeded:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_updateManageContactsGroupFooterView;
-(void)dealloc;
-(void)dismissPresentedViewController:(id)arg0 ;
-(void)familyMemberContactsDidChange;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentViewController:(id)arg0 ;
-(void)setCoordinator:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif