// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIFAMILYMEMBERWHITELISTEDCONTACTSCONTROLLER_H
#define CNUIFAMILYMEMBERWHITELISTEDCONTACTSCONTROLLER_H

@class CNContactFormatter, NSString, FAFamilyMember, NSArray, CNContactStore;
@protocol CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver, CNUICoreContactManagementConsentCheck, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUIFamilyMemberWhitelistedContactsControllerDelegate, CNDowntimeWhitelistContainerFetching, CNUIFamilyMemberContactsPresentation, CNSchedulerProvider;

#import <Foundation/Foundation.h>

#import "CNContactViewController.h"

@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver>



@property (readonly, nonatomic) CNContactFormatter *contactCardWarningFormatter; // ivar: _contactCardWarningFormatter
@property (readonly, nonatomic) NSObject<CNUICoreContactManagementConsentCheck> *contactManagentConsentCheck; // ivar: _contactManagentConsentCheck
@property (weak, nonatomic) CNContactViewController *contactViewControllerPresentingItemDetails; // ivar: _contactViewControllerPresentingItemDetails
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberWhitelistedContactsDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUIFamilyMemberWhitelistedContactsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNDowntimeWhitelistContainerFetching> *downtimeContaienerFetcher; // ivar: _downtimeContaienerFetcher
@property (readonly, nonatomic) FAFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic) NSArray *familyMemberContactItems;
@property (readonly, nonatomic) NSObject<CNUIFamilyMemberContactsPresentation> *familyMemberContactsPresentation; // ivar: _familyMemberContactsPresentation
@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore; // ivar: _familyMemberScopedContactStore
@property (readonly, nonatomic) NSInteger fetchStatus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;


+(id)contactPickerWithDelegate:(id)arg0 familyMember:(id)arg1 parentContainer:(id)arg2 ;
-(BOOL)contactManagementEnabled;
-(id)anchorViewForDefaultInteraction;
-(id)generateContactSourceOptionSheet;
-(id)init;
-(id)initWithFamilyMember:(id)arg0 familyMemberContactsPresentation:(id)arg1 ;
-(id)warningMessageForContact:(id)arg0 ;
-(void)addContactsToWhitelist:(id)arg0 ;
-(void)addContactsToWhitelistOptionsSheetDidCancel:(id)arg0 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)arg0 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)arg0 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)arg0 ;
-(void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContacts:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)arg0 ;
-(void)deleteFamilyMemberContactItem:(id)arg0 ;
-(void)downtimePickerController:(id)arg0 didFinishWithContacts:(id)arg1 ;
-(void)performAddFromFamilyMemberContacts;
-(void)performAddFromMainContacts;
-(void)performAddFromMainContactsForFamilyMember;
-(void)performAddFromMainContactsForThisDevice;
-(void)performAddNewContact;
-(void)performDefaultInteraction;
-(void)performInteraction:(NSInteger)arg0 ;
-(void)presentDetailsOfFamilyMemberContactItem:(id)arg0 ;


@end


#endif