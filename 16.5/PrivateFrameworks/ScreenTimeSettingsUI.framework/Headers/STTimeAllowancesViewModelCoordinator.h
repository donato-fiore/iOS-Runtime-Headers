// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STTIMEALLOWANCESVIEWMODELCOORDINATOR_H
#define STTIMEALLOWANCESVIEWMODELCOORDINATOR_H

@class STAskForTimeClient, NSString, STGroupFetchedResultsController, NSNumber, NSManagedObjectID;
@protocol STGroupFetchedResultsControllerDelegate, STTimeAllowancesViewModelCoordinator, STPersistenceControllerProtocol;

#import <Foundation/Foundation.h>

#import "STTimeAllowancesViewModel.h"

@interface STTimeAllowancesViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STTimeAllowancesViewModelCoordinator>



@property (readonly, nonatomic) STAskForTimeClient *askForTimeClient; // ivar: _askForTimeClient
@property (readonly, nonatomic) NSInteger currentDowntimeState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) STGroupFetchedResultsController *groupFetchResultsController; // ivar: _groupFetchResultsController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDowntimeActive;
@property (readonly, nonatomic) NSObject<STPersistenceControllerProtocol> *persistenceController; // ivar: _persistenceController
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeToNextExpectedStateChange;
@property (copy, nonatomic) NSNumber *userDSID; // ivar: _userDSID
@property (copy, nonatomic) NSManagedObjectID *userObjectID; // ivar: _userObjectID
@property (readonly) STTimeAllowancesViewModel *viewModel; // ivar: _viewModel


+(BOOL)saveAllowance:(id)arg0 forUser:(id)arg1 error:(*id)arg2 ;
-(id)_iCloudAccountPredicate;
-(id)initWithPersistenceController:(id)arg0 userDSID:(id)arg1 ;
-(void)_registerForPersistentStoreNotifications;
-(void)deleteAllowance:(id)arg0 completionHandler:(id)arg1 ;
-(void)groupResultsController:(id)arg0 didChangeResultsForRequest:(id)arg1 objectID:(id)arg2 changeType:(NSUInteger)arg3 ;
-(void)loadViewModelWithCompletionHandler:(id)arg0 ;
-(void)respondToAskForTime:(id)arg0 withApproval:(BOOL)arg1 timeApproved:(id)arg2 completionHandler:(id)arg3 ;
-(void)saveAllAllowancesEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)saveAllowance:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveAlwaysAllowList:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveDefaultAlwaysAllowListWithCompletionHandler:(id)arg0 ;
-(void)saveDeviceBedtime:(id)arg0 completionHandler:(id)arg1 ;
-(void)toggleDowntimeWithCompletionHandler:(id)arg0 ;


@end


#endif