// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTADDTOGROUPACTION_H
#define CNCONTACTADDTOGROUPACTION_H

@class NSArray, CNContactStore, NSString, UINavigationController, CNManagedConfiguration, CNGroup;
@protocol CNContactGroupPickerViewControllerDelegate;


#import "CNContactAction.h"
#import "CNUIGroupsAndContainersSaveManager.h"

@interface CNContactAddToGroupAction : CNContactAction <CNContactGroupPickerViewControllerDelegate>



@property (retain, nonatomic) NSArray *contactParentGroupIdentifiers; // ivar: _contactParentGroupIdentifiers
@property (retain, nonatomic) NSArray *contactParentGroups; // ivar: _contactParentGroups
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UINavigationController *groupPickerNavigationViewController; // ivar: _groupPickerNavigationViewController
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // ivar: _groupsAndContainersSaveManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (retain, nonatomic) CNGroup *selectedGroup; // ivar: _selectedGroup
@property (readonly) Class superclass;


+(id)os_log;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 labeledValue:(id)arg3 ;
-(BOOL)groupPicker:(id)arg0 shouldEnableGroupWithIdentifier:(id)arg1 ;
-(id)sourceAccountExternalIdentifiers;
-(void)groupPicker:(id)arg0 didSelectGroup:(id)arg1 ;
-(void)groupPickerDidCancel:(id)arg0 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif