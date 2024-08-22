// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPERSONCOREDATAMANAGER_H
#define HMDPERSONCOREDATAMANAGER_H

@class HMFObject, NSUUID, NSString, NSNotificationCenter;
@protocol HMDPersonResidentSyncManagerDelegate, HMFLogging, HMDPersonDataSource, HMDPersonCoreDataManagerDelegate, OS_dispatch_queue;


#import "HMCContext.h"
#import "HMDHome.h"
#import "HMDPersonResidentSyncManager.h"

@interface HMDPersonCoreDataManager : HMFObject <HMDPersonResidentSyncManagerDelegate, HMFLogging>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly) HMCContext *context; // ivar: _context
@property (weak) NSObject<HMDPersonDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDPersonCoreDataManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDPersonResidentSyncManager *residentSyncManager; // ivar: _residentSyncManager
@property (readonly) Class superclass;
@property (copy) NSUUID *userUUID; // ivar: _userUUID
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)isRelevantManagedObjectContext:(id)arg0 ;
-(BOOL)isRelevantPerson:(id)arg0 ;
-(BOOL)shouldDispatchToPrimaryResident;
-(id)addOrUpdatePersons:(id)arg0 andRemovePersonsWithUUIDs:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 home:(id)arg2 userUUID:(id)arg3 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 home:(id)arg2 userUUID:(id)arg3 context:(id)arg4 residentSyncManager:(id)arg5 notificationCenter:(id)arg6 ;
-(id)logIdentifier;
-(id)personModelWithModelID:(id)arg0 ;
-(id)personWithModelID:(id)arg0 ;
-(id)personWithUUID:(id)arg0 ;
-(id)persons;
-(id)removeAllAssociatedData;
-(void)configureWithDataSource:(id)arg0 ;
-(void)enumeratePersonsUsingBlock:(id)arg0 ;
-(void)handleManagedObjectContextDidSaveNotification:(id)arg0 ;
-(void)handleManagedObjectContextWillSaveNotification:(id)arg0 ;
-(void)insertOrUpdatePersonUsingPerson:(id)arg0 ;


@end


#endif