// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSYNC2COORDINATOR_H
#define _DKSYNC2COORDINATOR_H

@class DKSyncContextObject, NSMutableSet, NSMutableArray, NSString, APSConnection, NSUUID;
@protocol APSConnectionDelegate, _DKKnowledgeStorageEventNotificationDelegate, _DKSyncRemoteKnowledgeStorageFetchDelegate, _DKSyncCoordinator, NSObject, OS_xpc_object, _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;


#import "_DKThrottledActivity.h"
#import "_DKDataProtectionStateMonitor.h"
#import "_DKSync2State.h"
#import "_CDMutablePerfMetric.h"
#import "_DKSyncToggle.h"
#import "_CDPeriodicSchedulerJob.h"
#import "_DKKnowledgeStorage.h"
#import "_DKSyncType.h"

@interface _DKSync2Coordinator : DKSyncContextObject <APSConnectionDelegate, _DKKnowledgeStorageEventNotificationDelegate, _DKSyncRemoteKnowledgeStorageFetchDelegate, _DKSyncCoordinator>

 {
    _DKThrottledActivity *_activityThrottler;
    id<NSObject> *_observerToken;
    NSMutableSet *_busyTransactions;
    NSMutableArray *_insertedSyncedEvents;
    NSMutableArray *_deletedSyncedEvents;
    NSMutableSet *_activatedPeers;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    BOOL _hasRegisteredOptionalObservers;
    BOOL _isEnabled;
    NSString *_triggeredSyncDelayActivityName;
    NSString *_syncActivityName;
    _DKSync2State *_syncState;
    CGFloat _periodicJobInterval;
    BOOL _databaseObserversRegistered;
    BOOL _cloudDeviceCountChangedObserverRegistered;
    BOOL _cloudSyncAvailablityObserverRegistered;
    BOOL _rapportAvailablityObserverRegistered;
    BOOL _siriSyncEnabledObserverRegistered;
    BOOL _syncPolicyChangedObserverRegistered;
    APSConnection *_connection;
    NSMutableSet *_streamNamesObservedForAdditions;
    NSMutableSet *_streamNamesObservedForDeletions;
    _CDMutablePerfMetric *_perfMetric;
    _CDPerfEvent _perfEvent;
    _DKSyncToggle *_syncEnabledToggler;
    _DKSyncToggle *_someTransportIsAvailableToggler;
    _DKSyncToggle *_cloudIsAvailableToggler;
    _DKSyncToggle *_rapportIsAvailableToggler;
    _CDPeriodicSchedulerJob *_periodicJob;
    BOOL _triggeredSyncActivityRegistered;
    NSObject<OS_xpc_object> *_triggeredSyncActivity;
    BOOL _isBusy;
    BOOL _hasSyncedUpHistoryToCloud;
    _DKKnowledgeStorage *_storage;
    id<_DKKeyValueStore> *_keyValueStore;
    id<_DKSyncLocalKnowledgeStorage> *_localStorage;
    id<_DKSyncRemoteKnowledgeStorage> *_transportCloudDown;
    id<_DKSyncRemoteKnowledgeStorage> *_transportCloudUp;
    id<_DKSyncRemoteKnowledgeStorage> *_transportRapport;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _DKSyncType *syncType;


-(id)deletedEventIDsSinceDate:(id)arg0 streamNames:(id)arg1 limit:(NSUInteger)arg2 endDate:(*id)arg3 error:(*id)arg4 ;
-(id)initWithContext:(id)arg0 ;
-(id)policyForSyncTransportType:(NSInteger)arg0 ;
-(id)sortedEventsFromSyncWindows:(id)arg0 streamNames:(id)arg1 compatibility:(id)arg2 limit:(NSUInteger)arg3 fetchOrder:(NSInteger)arg4 error:(*id)arg5 ;
-(id)sortedEventsFromSyncWindows:(id)arg0 streamNames:(id)arg1 limit:(NSUInteger)arg2 fetchOrder:(NSInteger)arg3 error:(*id)arg4 ;
-(void)_cloudIsAvailableToggle;
-(void)_cloudIsUnavailableToggle;
-(void)_cloudSyncAvailabilityDidChange:(id)arg0 ;
-(void)_databaseDidDeleteFromStreamNameCounts:(id)arg0 ;
-(void)_noTransportIsAvailableToggle;
-(void)_rapportIsAvailableToggle;
-(void)_rapportIsUnavailableToggle;
-(void)_someTransportIsAvailableToggle;
-(void)_syncDisabledToggle;
-(void)_syncEnabledToggle;
-(void)_syncPolicyDidChange:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;
-(void)deleteRemoteStateWithReply:(id)arg0 ;
-(void)handleStatusChangeForPeer:(id)arg0 previousTransports:(NSInteger)arg1 ;
-(void)knowledgeStorage:(id)arg0 didDeleteEventsWithStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg0 didDeleteSyncedEvents:(id)arg1 ;
-(void)knowledgeStorage:(id)arg0 didHaveInsertsAndDeletesWithCount:(NSUInteger)arg1 ;
-(void)knowledgeStorage:(id)arg0 didInsertEventsWithStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg0 didInsertSyncedEvents:(id)arg1 ;
-(void)setupStorage;
-(void)start;
-(void)syncWithReply:(id)arg0 ;
-(void)synchronizeWithUrgency:(NSUInteger)arg0 client:(id)arg1 reply:(id)arg2 ;


@end


#endif