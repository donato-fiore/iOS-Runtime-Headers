// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDOPERATIONMANAGER_H
#define HMDBACKGROUNDOPERATIONMANAGER_H

@class HMFObject, NSString, HMFTimer, NSMutableArray, HAPPairingIdentity, NSOperationQueue;
@protocol HMFLogging, HMFTimerDelegate, HMDBackgroundOperationManagerCurrentDeviceStateDataSource;


#import "HMDHomeManager.h"
#import "HMDBackgroundOperationGraph.h"

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSString *backgroundOperationsDataStorePath; // ivar: _backgroundOperationsDataStorePath
@property (readonly, nonatomic) NSObject<HMDBackgroundOperationManagerCurrentDeviceStateDataSource> *currentDeviceStateDataSource; // ivar: _currentDeviceStateDataSource
@property (readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer; // ivar: _dataSourceCoalescingTimer
@property (retain, nonatomic) NSMutableArray *dataSourceList; // ivar: _dataSourceList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMFTimer *deferralTimer; // ivar: _deferralTimer
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFTimer *expirationTimer; // ivar: _expirationTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPPairingIdentity *hh1Key; // ivar: _hh1Key
@property (retain, nonatomic) HAPPairingIdentity *hh2Key; // ivar: _hh2Key
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMDBackgroundOperationGraph *opGraph; // ivar: _opGraph
@property (retain, nonatomic) NSMutableArray *operationList; // ivar: _operationList
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)allowedClasses;
+(id)findAccessoryUsing:(id)arg0 fromHome:(id)arg1 ;
+(id)findAccessoryUsing:(id)arg0 homeManager:(id)arg1 ;
+(id)findHomeUsingIdentifier:(id)arg0 homeManager:(id)arg1 ;
+(id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)arg0 ;
+(id)getAllPairedAccessoriesOfAllHomes:(id)arg0 ;
+(id)getAllReachableAccessories:(id)arg0 ;
+(id)logCategory;
+(id)sharedManager;
-(BOOL)_scheduleKeyRollForAccessory:(id)arg0 ;
-(BOOL)addOperationDependency:(id)arg0 dependsOn:(id)arg1 ;
-(BOOL)scheduleHH2KeyRollForAccessory:(id)arg0 previousIdentity:(id)arg1 newIdentity:(id)arg2 ;
-(BOOL)scheduleHH2KeyRollForAirPlayAccessory:(id)arg0 previousIdentity:(id)arg1 newIdentity:(id)arg2 ;
-(BOOL)shouldWeScheduleKeyRollOperationsOnThisDevice;
-(id)__getReadyToExecuteOperations;
-(id)__initForUnitTesting:(id)arg0 ;
-(id)__unarchiveFromDiskForUnitTesting;
-(id)dumpState;
-(id)getHH1ControllerKey;
-(id)getHH2ControllerKey;
-(id)initWithLocalStorePath:(id)arg0 currentDeviceStateDataSource:(id)arg1 ;
-(id)unarchiveFromDisk;
-(void)__archiveToDiskForUnitTesting:(id)arg0 ;
-(void)__clearLocalStoreForUnitTesting;
-(void)__removeAllDataSourcesForUnitTesting;
-(void)__removeAllOperationsForUnitTesting;
-(void)__resetAndRebuildOperationGraphForUnitTesting;
-(void)_dataSourceHasUpdate:(id)arg0 ;
-(void)_runOperation:(id)arg0 withParameters:(id)arg1 ;
-(void)_runOperationsAfterEvaluatingPredicate:(id)arg0 ;
-(void)_scheduleHH2AirPlayKeyRollIfNecessary:(id)arg0 ;
-(void)_scheduleHH2KeyRollIfNecessary:(id)arg0 ;
-(void)addDataSource:(id)arg0 ;
-(void)addDefaultDataSources;
-(void)addOperation:(id)arg0 ;
-(void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)arg0 isRunningOnResident:(BOOL)arg1 ;
-(void)auditKeyChainEntryForAccessory:(id)arg0 isRunningOnResident:(BOOL)arg1 ;
-(void)auditOwnerPairingForAirPlayAccessory:(id)arg0 isRunningOnResident:(BOOL)arg1 ;
-(void)checkAndRemoveExpiredOperations;
-(void)completeProcessingForOperation:(id)arg0 ;
-(void)dataSourceHasUpdate:(id)arg0 ;
-(void)evaluateOperations;
-(void)makeSureToLoadPairingIdentities;
-(void)registerForNotifications;
-(void)removeAllOperationForAccessoryIdentifier:(id)arg0 ;
-(void)removeAllOperationsBeforeStartingHH2Migration;
-(void)removeOperation:(id)arg0 ;
-(void)removeOperationsForAccessoryIdentifier:(id)arg0 operationKind:(id)arg1 ;
-(void)scheduleHH2KeyRollForAccessory:(id)arg0 ;
-(void)scheduleHH2KeyRollForAirPlayAccessory:(id)arg0 ;
-(void)scheduleHH2KeyRollIfNecessary;
-(void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)arg0 ;
-(void)scheduleHH2KeyRollOperationForHome:(id)arg0 isRunningOnResident:(BOOL)arg1 ;
-(void)scheduleTimerToCheckAndRemoveExpiredOperation;
-(void)scheduleTimerToRetryDeferredOperations;
-(void)startSchedulingKeyRollOperations:(BOOL)arg0 forAccessory:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif