// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIFAMILYMEMBERCONTACTSCONTROLLER_H
#define CNUIFAMILYMEMBERCONTACTSCONTROLLER_H

@class NSString, FAFamilyMember, CNContactStore;
@protocol CNContactViewControllerDelegate, CNContactPickerPrivateDelegate, CNFamilyMemberAddContactsOptionsSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsDataSource, CNUIFamilyMemberContactsControllerDelegate, CNUIFamilyMemberContactsPresentation, CNSchedulerProvider;

#import <Foundation/Foundation.h>

#import "CNContactPickerViewController.h"

@interface CNUIFamilyMemberContactsController : NSObject <CNContactViewControllerDelegate, CNContactPickerPrivateDelegate, CNFamilyMemberAddContactsOptionsSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver>



@property (weak, nonatomic) CNContactPickerViewController *contactPickerViewController; // ivar: _contactPickerViewController
@property (readonly, nonatomic) NSInteger countOfFamilyMemberContacts;
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUIFamilyMemberContactsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FAFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic) NSObject<CNUIFamilyMemberContactsPresentation> *familyMemberContactsPresentation; // ivar: _familyMemberContactsPresentation
@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore; // ivar: _familyMemberScopedContactStore
@property (readonly, nonatomic) NSInteger fetchStatus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(BOOL)isViewController:(id)arg0 presentedByContactPicker:(id)arg1 ;
-(id)anchorViewForAddContactsInteraction;
-(id)init;
-(id)initWithFamilyMember:(id)arg0 familyMemberContactsPresentation:(id)arg1 ;
-(void)addContactsOptionsSheetViewControllerDidCancel:(id)arg0 ;
-(void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)arg0 ;
-(void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)arg0 ;
-(void)cancelPresentationOfViewController:(id)arg0 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)dismissPresentedViewController:(id)arg0 ;
-(void)downtimePickerController:(id)arg0 didFinishWithContacts:(id)arg1 ;
-(void)performAddContactsInteraction;
-(void)performAddFromMainContactsInteraction;
-(void)performDefaultInteraction;
-(void)performDisplayContactsInteraction;
-(void)performInteraction:(NSInteger)arg0 ;
-(void)pickerDidSelectAddNewContact:(id)arg0 ;
-(void)presentViewController:(id)arg0 ;


@end


#endif