// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMULTIPLEUNKNOWNCONTACTSVIEWCONTROLLER_H
#define CNMULTIPLEUNKNOWNCONTACTSVIEWCONTROLLER_H

@class UITableViewController, CNContactStore, NSArray, NSMutableSet, NSString, CNContactFormatter, CNContainer, CNGroup;
@protocol CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate;


#import "CNUIGroupsAndContainersSaveManager.h"

@interface CNMultipleUnknownContactsViewController : UITableViewController <CNContactViewControllerDelegate>



@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) NSMutableSet *createdContactIdentifiers; // ivar: _createdContactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMultipleUnknownContactsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // ivar: _groupsAndContainersSaveManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CNContainer *targetContainer; // ivar: _targetContainer
@property (retain, nonatomic) CNGroup *targetGroup; // ivar: _targetGroup


+(id)contactFormatter;
+(id)descriptorForRequiredKeys;
+(id)log;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_existingMatchForUnknownContact:(id)arg0 ;
-(id)_updatedContact:(id)arg0 withPropertiesFromContact:(id)arg1 ;
-(id)initWithContacts:(id)arg0 ;
-(id)initWithContacts:(id)arg0 targetGroup:(id)arg1 targetContainer:(id)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addToExistingContacts:(id)arg0 ;
-(void)_createNewContacts:(id)arg0 ;
-(void)_didComplete;
-(void)_presentUnknownContact:(id)arg0 ;
-(void)_save:(id)arg0 ;
-(void)_showAddAllToContactsConfirmation;
-(void)addContacts:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif