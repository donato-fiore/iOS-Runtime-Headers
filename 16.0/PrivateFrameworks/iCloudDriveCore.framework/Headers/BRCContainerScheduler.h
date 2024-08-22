// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCCONTAINERSCHEDULER_H
#define BRCCONTAINERSCHEDULER_H

@class NSString, NSData, APSConnection, _BRCOperation<BRCOperationSubclass>, NSError, NSDate, NSMutableArray;
@protocol APSConnectionDelegate, BRCClientZoneDelegate, BRCAppLibraryDelegate, OS_dispatch_workloop, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BRCDeadlineSource.h"
#import "BRCFairSource.h"
#import "BRCSyncOperationThrottle.h"
#import "BRCMigrateZonePCSOperation.h"
#import "BRCContainerMetadataSyncPersistedState.h"
#import "BRCAccountSession.h"
#import "BRCSideCarSyncPersistedState.h"
#import "BRCDeadlineScheduler.h"
#import "BRCSyncBudgetThrottle.h"
#import "BRCZoneHealthSyncPersistedState.h"

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCClientZoneDelegate, BRCAppLibraryDelegate>

 {
    BRCDeadlineSource *_containerMetadataSyncSource;
    BRCDeadlineSource *_sharedDatabaseSyncSource;
    BRCDeadlineSource *_zoneHealthSyncSource;
    BRCDeadlineSource *_sideCarSyncSource;
    BRCFairSource *_pushSource;
    NSString *_environmentName;
    NSData *_pushToken;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_workloop> *_pushWorkloop;
    unsigned int _containerMetadataSyncState;
    _BRCOperation<BRCOperationSubclass> *_containerMetadataSyncOperation;
    BRCSyncOperationThrottle *_containerMetadataSyncDownThrottle;
    BRCSyncOperationThrottle *_containerMetadataSyncUpThrottle;
    NSError *_lastContainerMetadataSyncDownError;
    NSError *_lastContainerMetadataSyncUpError;
    unsigned int _sharedDBSyncState;
    _BRCOperation<BRCOperationSubclass> *_sharedDatabaseSyncOperation;
    BRCSyncOperationThrottle *_sharedDatabaseSyncDownThrottle;
    NSError *_lastSharedDatabaseSyncDownError;
    unsigned int _zoneHealthSyncState;
    _BRCOperation<BRCOperationSubclass> *_zoneHealthSyncOperation;
    BRCSyncOperationThrottle *_zoneHealthSyncDownThrottle;
    BRCSyncOperationThrottle *_zoneHealthSyncUpThrottle;
    NSError *_lastZoneHealthSyncDownError;
    NSError *_lastZoneHealthSyncUpError;
    unsigned int _sideCarSyncState;
    _BRCOperation<BRCOperationSubclass> *_sideCarSyncOperation;
    BRCSyncOperationThrottle *_sideCarSyncDownThrottle;
    BRCSyncOperationThrottle *_sideCarSyncUpThrottle;
    NSError *_lastSideCarSyncDownError;
    NSError *_lastSideCarSyncUpError;
    _BRCOperation<BRCOperationSubclass> *_periodicSyncOperation;
    NSDate *_lastPeriodicSyncDate;
    BRCMigrateZonePCSOperation *_migrateZonePCSOperation;
    BRCDeadlineSource *_migrateZonePCSSource;
    BOOL _isInSyncBubble;
    NSMutableArray *_nextZoneHealthSyncDownBarriers;
}


@property (readonly, nonatomic) BRCContainerMetadataSyncPersistedState *containerMetadataPersistedState; // ivar: _containerMetadataPersistedState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *initialSyncDownGroup; // ivar: _initialSyncDownGroup
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) BRCSideCarSyncPersistedState *sideCarSyncPersistedState; // ivar: _sideCarSyncPersistedState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *syncGroup; // ivar: _syncGroup
@property (readonly, nonatomic) BRCDeadlineScheduler *syncScheduler; // ivar: _syncScheduler
@property (readonly, nonatomic) BRCSyncBudgetThrottle *syncUpBudget; // ivar: _syncUpBudget
@property (readonly, nonatomic) BRCZoneHealthSyncPersistedState *zoneHealthSyncPersistedState; // ivar: _zoneHealthPersistedState


-(id)_newSyncDeadlineSourceWithName:(id)arg0 ;
-(id)initWithAccountSession:(id)arg0 pushWorkloop:(id)arg1 ;
-(id)internalZoneSyncDownAnalyticsErrors;
-(id)internalZoneSyncUpAnalyticsErrors;
-(void)_connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)_printSyncErrorIfNecessaryWithThrottle:(id)arg0 context:(id)arg1 error:(id)arg2 now:(NSInteger)arg3 ;
-(void)_scheduleCrossZoneMovePCSPrep;
-(void)_scheduleUpdatePushTopicsRegistration;
-(void)_syncScheduleForContainersMetadata;
-(void)_syncScheduleForSharedDatabase;
-(void)_syncScheduleForSideCar;
-(void)_syncScheduleForZoneHealth;
-(void)_unscheduleClientZone:(id)arg0 ;
-(void)_updatePushTopicsRegistration;
-(void)close;
-(void)closeContainers;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg0 ;
-(void)didChangeSyncStatusForZoneHealthForContainer:(id)arg0 ;
-(void)didInitialSyncDownForClientZone:(id)arg0 ;
-(void)dumpToContext:(id)arg0 includeAllItems:(BOOL)arg1 db:(id)arg2 ;
-(void)enablePushNotifications;
-(void)finishedZoneHealthSyncDownWithRequestID:(NSUInteger)arg0 error:(id)arg1 ;
-(void)notifyAfterNextZoneHealthSyncDown:(id)arg0 ;
-(void)receivedUpdatedSideCarServerChangeToken:(id)arg0 requestID:(NSUInteger)arg1 ;
-(void)receivedUpdatedZoneHealthServerChangeToken:(id)arg0 requestID:(NSUInteger)arg1 ;
-(void)redoZonePCSPreperation;
-(void)refreshPushRegistrationAfterAppsListChanged;
-(void)resume;
-(void)schedulePeriodicSyncIfNecessaryInGroup:(id)arg0 ;
-(void)scheduleSyncDownForContainerMetadataWithGroup:(id)arg0 ;
-(void)scheduleSyncDownForSharedDatabaseImmediately:(BOOL)arg0 ;
-(void)scheduleSyncDownForSideCarWithGroup:(id)arg0 ;
-(void)scheduleSyncDownForZoneHealthWithGroup:(id)arg0 ;
-(void)scheduleSyncUpForSideCar;
-(void)setup;
-(void)syncContextDidBecomeBackground:(id)arg0 ;
-(void)syncContextDidBecomeForeground:(id)arg0 ;
-(void)willInitialSyncDownForClientZone:(id)arg0 ;


@end


#endif