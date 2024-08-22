// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMULTIPLEUNKNOWNCONTACTSVIEWCONTROLLER_H
#define CNMULTIPLEUNKNOWNCONTACTSVIEWCONTROLLER_H

@class UITableViewController, CNContactStore, NSArray, NSMutableSet, NSString, CNContactFormatter;
@protocol CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate;



@interface CNMultipleUnknownContactsViewController : UITableViewController <CNContactViewControllerDelegate>



@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) NSMutableSet *createdContactIdentifiers; // ivar: _createdContactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMultipleUnknownContactsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactFormatter *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contactFormatter;
+(id)descriptorForRequiredKeys;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_existingMatchForUnknownContact:(id)arg0 ;
-(id)_updatedContact:(id)arg0 withPropertiesFromContact:(id)arg1 ;
-(id)initWithContacts:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addToExistingContacts:(id)arg0 ;
-(void)_createNewContacts:(id)arg0 ;
-(void)_didComplete;
-(void)_presentUnknownContact:(id)arg0 ;
-(void)_save:(id)arg0 ;
-(void)_showAddAllToContactsConfirmation;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif