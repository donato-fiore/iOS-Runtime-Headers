// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYSENSORMANAGER_H
#define HMDAPPLEMEDIAACCESSORYSENSORMANAGER_H

@class NSUUID, NSDate, HMSetupAccessoryDescription, NSMutableArray, NSString;
@protocol HMFMessageReceiver, HMFLogging, HMDLocalAddAccessoryProgressDelegate, HMDHPSManager, HMDAppleMediaAccessorySensorManagerDataSource, HMDAppleMediaAccessorySensorManagerDataStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDAppleMediaAccessorySensorManager : NSObject <HMFMessageReceiver, HMFLogging, HMDLocalAddAccessoryProgressDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _isCurrentlyPairing;
    BOOL _hasAttemptedRecovery;
    BOOL _hasPendingRetry;
    BOOL _shouldAttemptToSetServiceNames;
    NSUUID *_sensorAccessoryUUID;
    NSDate *_pairingStartTime;
    id<HMDHPSManager> *_sensorClient;
    id<HMDAppleMediaAccessorySensorManagerDataSource> *_dataSource;
    HMSetupAccessoryDescription *_setupDescription;
    id<HMDAppleMediaAccessorySensorManagerDataStore> *_dataStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _pairingRetryCount;
    NSMutableArray *_renamedServiceIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *sensorAccessoryUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithWorkQueue:(id)arg0 ;
-(id)logIdentifier;
-(void)_migrateToDataStoreIfNeeded:(id)arg0 completion:(id)arg1 ;
-(void)configureWithDataSource:(id)arg0 hpsXPCClient:(id)arg1 dataStore:(id)arg2 ;
-(void)fetchADKSensorStatusCompletion:(id)arg0 ;
-(void)handleAccessoryAdded:(id)arg0 ;
-(void)handleCharacteristicsChangedNotification:(id)arg0 ;
-(void)handleErrorCaseTestMessage:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)localAccessoryAddRequiresConsent:(id)arg0 ;
-(void)managerIsReadyToBePaired;


@end


#endif