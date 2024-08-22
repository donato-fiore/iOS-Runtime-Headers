// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUUSERLISTTABLEMANAGER_H
#define HUUSERLISTTABLEMANAGER_H

@class CNContactStore, NSString, HMHome, NSArray, NSIndexPath, UITableView, UIViewController;
@protocol HUAddPeopleViewControllerDelegate, HMHomeDelegatePrivate, UITableViewDataSource, UITableViewDelegate, HUUserListManagerTableDelegate;

#import <Foundation/Foundation.h>


@interface HUUserListTableManager : NSObject <HUAddPeopleViewControllerDelegate, HMHomeDelegatePrivate, UITableViewDataSource, UITableViewDelegate>



@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUUserListManagerTableDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSArray *invitations; // ivar: _invitations
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSArray *users; // ivar: _users
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_indexPathIsInviteUser:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfDataRows;
-(NSInteger)sectionForPeople;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_contactForUser:(id)arg0 ;
-(id)_displayNameForUser:(id)arg0 ;
-(id)_monogramForUser:(id)arg0 ;
-(id)_personViewControllerForUser:(id)arg0 invitation:(id)arg1 ;
-(id)_stringForInvitationState:(NSInteger)arg0 ;
-(id)initWithTableView:(id)arg0 viewController:(id)arg1 ;
-(id)sortedInvitations;
-(id)sortedUsers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_configurePersonViewController:(id)arg0 invitation:(id)arg1 isRemovable:(BOOL)arg2 ;
-(void)_didAddUser:(id)arg0 ;
-(void)_didInsertAtIndex:(NSUInteger)arg0 ;
-(void)_didReloadAtIndex:(NSUInteger)arg0 ;
-(void)_didRemoveAtIndex:(NSUInteger)arg0 ;
-(void)_didRemoveInvitation:(id)arg0 ;
-(void)_didRemoveUser:(id)arg0 ;
-(void)_reinvite;
-(void)_removeInvitation:(id)arg0 completion:(id)arg1 ;
-(void)_removeUser:(id)arg0 completion:(id)arg1 ;
-(void)_stopSharing;
-(void)_stopSharingWithCompletion:(id)arg0 ;
-(void)addPeopleViewController:(id)arg0 didSendInvitations:(id)arg1 ;
-(void)addPeopleViewControllerDidCancel:(id)arg0 ;
-(void)home:(id)arg0 didAddUser:(id)arg1 ;
-(void)home:(id)arg0 didRemoveUser:(id)arg1 ;
-(void)home:(id)arg0 didUpdateStateForOutgoingInvitations:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateEditingRows;


@end


#endif