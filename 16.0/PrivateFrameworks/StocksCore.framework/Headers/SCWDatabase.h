// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWDATABASE_H
#define SCWDATABASE_H

@class NSArray, NSMutableDictionary;
@protocol SCWDatabaseStoreCoordinatorObserver, OS_dispatch_queue, SCWContainerProxying, SCWDatabaseStoreCoordinator;

#import <Foundation/Foundation.h>

#import "SCWAsyncSerialQueue.h"
#import "SCWDatabaseSchema.h"
#import "SCWStartupQueue.h"

@interface SCWDatabase : NSObject <SCWDatabaseStoreCoordinatorObserver>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) SCWAsyncSerialQueue *ckSyncQueue; // ivar: _ckSyncQueue
@property (retain, nonatomic) NSObject<SCWContainerProxying> *container; // ivar: _container
@property (retain, nonatomic) NSArray *mergeHandlers; // ivar: _mergeHandlers
@property (retain, nonatomic) NSMutableDictionary *observersByZoneName; // ivar: _observersByZoneName
@property (nonatomic) os_unfair_lock_s observersLock; // ivar: _observersLock
@property (retain, nonatomic) SCWDatabaseSchema *schema; // ivar: _schema
@property (retain, nonatomic) SCWStartupQueue *startupQueue; // ivar: _startupQueue
@property NSInteger status; // ivar: _status
@property (retain, nonatomic) NSObject<SCWDatabaseStoreCoordinator> *storeCoordinator; // ivar: _storeCoordinator
@property (retain, nonatomic) NSMutableDictionary *zoneSnapshotsByZoneName; // ivar: _zoneSnapshotsByZoneName


-(BOOL)t_flushChangesWithTimeout:(CGFloat)arg0 ;
-(id)_emptyZonesNeedingFirstSync;
-(id)_sanitizeErrorForClients:(id)arg0 ;
-(id)_zoneWithSchema:(id)arg0 zoneStore:(id)arg1 ;
-(id)_zonesNeedingFetch;
-(id)_zonesNeedingSave;
-(id)initWithSchema:(id)arg0 store:(id)arg1 features:(NSInteger)arg2 containerProxy:(id)arg3 ;
-(id)initWithSchema:(id)arg0 store:(id)arg1 features:(NSInteger)arg2 mergeHandlers:(id)arg3 containerProxy:(id)arg4 ;
-(id)initWithSchema:(id)arg0 store:(id)arg1 migrationPlan:(id)arg2 containerProxy:(id)arg3 ;
-(id)initWithSchema:(id)arg0 store:(id)arg1 migrationPlan:(id)arg2 features:(NSInteger)arg3 containerProxy:(id)arg4 ;
-(void)_createZoneInContainerWithSchema:(id)arg0 completion:(id)arg1 ;
-(void)_deleteAndRecreateAllZonesWithCompletion:(id)arg0 ;
-(void)_enqueueStartupSequenceWithFeatures:(NSInteger)arg0 ;
-(void)_fetchDatabaseAndZoneChangesWithCompletion:(id)arg0 ;
-(void)_fetchDatabaseChangesWithCompletion:(id)arg0 ;
-(void)_fetchZoneChangesForZones:(id)arg0 completion:(id)arg1 ;
-(void)_recoverFromIdentityLossWithCompletion:(id)arg0 ;
-(void)_reloadSnapshotOfZone:(id)arg0 fromStore:(id)arg1 ;
-(void)_runCKOperation:(id)arg0 ;
-(void)_saveZoneToContainer:(id)arg0 allowRecoveryAttempt:(BOOL)arg1 completion:(id)arg2 ;
-(void)_saveZonesToContainer:(id)arg0 allowRecoveryAttempt:(BOOL)arg1 completion:(id)arg2 ;
-(void)_squashZoneForMerge:(id)arg0 zoneStore:(id)arg1 ;
-(void)addObserver:(id)arg0 forZone:(id)arg1 ;
-(void)checkSyncingEnabledWithCompletion:(id)arg0 ;
-(void)handleRemoteNotification:(id)arg0 completion:(id)arg1 ;
-(void)modifyContentsOfZone:(id)arg0 withCommand:(id)arg1 ;
-(void)pollForChangesWithCondition:(id)arg0 completion:(id)arg1 ;
-(void)readContentsOfZone:(id)arg0 withBlock:(id)arg1 ;
-(void)removeObserver:(id)arg0 forZone:(id)arg1 ;
-(void)savePendingChangesToServerWithCompletion:(id)arg0 ;
-(void)storeCoordinatorDiscoveredExternalChanges:(id)arg0 ;
-(void)synchronize;


@end


#endif