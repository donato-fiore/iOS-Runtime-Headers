// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCOREUSERSCONTROLLER_H
#define STCOREUSERSCONTROLLER_H

@class NSFetchedResultsController, NSString, NSManagedObjectContext, NSArray;
@protocol NSFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>

#import "STCoreUser.h"

@interface STCoreUsersController : NSObject <NSFetchedResultsControllerDelegate>



@property (retain, nonatomic) NSFetchedResultsController *childUserController; // ivar: _childUserController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) STCoreUser *localUser;
@property (retain, nonatomic) NSFetchedResultsController *localUserController; // ivar: _localUserController
@property (readonly) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (retain, nonatomic) STCoreUser *selectedUser; // ivar: _selectedUser
@property (retain) NSFetchedResultsController *settingsController; // ivar: _settingsController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *users; // ivar: _users


+(id)keyPathsForValuesAffectingLocalUser;
+(id)keyPathsForValuesAffectingSelectedUser;
+(id)keyPathsForValuesAffectingUsers;
-(BOOL)_updateSelectedIndexForDSID:(id)arg0 isManaged:(BOOL)arg1 ;
-(BOOL)updateSelectedIndexForChildDSID:(id)arg0 ;
-(BOOL)updateSelectedIndexForDSID:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)controllerWillChangeContent:(id)arg0 ;
-(void)notifyServerOfScreenTimeEnabled:(BOOL)arg0 forUser:(id)arg1 ;
-(void)refresh;


@end


#endif