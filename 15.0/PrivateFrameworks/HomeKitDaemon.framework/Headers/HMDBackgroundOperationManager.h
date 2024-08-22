// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKGROUNDOPERATIONMANAGER_H
#define HMDBACKGROUNDOPERATIONMANAGER_H

@class HMFObject, HMFUnfairLock, NSString, HMFTimer, NSMutableArray, NSOperationQueue;
@protocol HMFLogging, HMFTimerDelegate;


#import "HMDHomeManager.h"
#import "HMDBackgroundOperationGraph.h"

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    HMFUnfairLock *_lock;
}


@property (retain, nonatomic) NSString *backgroundOperationsDataStorePath; // ivar: _backgroundOperationsDataStorePath
@property (readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer; // ivar: _dataSourceCoalescingTimer
@property (retain, nonatomic) NSMutableArray *dataSourceList; // ivar: _dataSourceList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFTimer *expirationTimer; // ivar: _expirationTimer
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMDBackgroundOperationGraph *opGraph; // ivar: _opGraph
@property (retain, nonatomic) NSMutableArray *operationList; // ivar: _operationList
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)allowedClasses;
+(id)findAccessoryUsing:(id)arg0 fromHome:(id)arg1 ;
+(id)findAccessoryUsing:(id)arg0 homeManager:(id)arg1 ;
+(id)findHomeUsingIdentifier:(id)arg0 homeManager:(id)arg1 ;
+(id)getAllPairedAccessoriesOfAllHomes:(id)arg0 ;
+(id)getAllReachableAccessories:(id)arg0 ;
+(id)logCategory;
+(id)sharedManager;
-(BOOL)addOperationDependency:(id)arg0 dependsOn:(id)arg1 ;
-(id)__initForUnitTesting;
-(id)__unarchiveFromDiskForUnitTesting;
-(id)dumpState;
-(id)initWithLocalStorePath:(id)arg0 ;
-(id)unarchiveFromDisk;
-(void)__archiveToDiskForUnitTesting:(id)arg0 ;
-(void)__clearLocalStoreForUnitTesting;
-(void)__removeAllDataSourcesForUnitTesting;
-(void)__removeAllOperationsForUnitTesting;
-(void)__resetAndRebuildOperationGraphFroUnitTesting;
-(void)_dataSourceHasUpdate:(id)arg0 ;
-(void)_runOperation:(id)arg0 withParameters:(id)arg1 ;
-(void)_runOperationsAfterEvaluatingPredicate:(id)arg0 ;
-(void)addDataSource:(id)arg0 ;
-(void)addDefaultDataSources;
-(void)addOperation:(id)arg0 ;
-(void)checkAndRemoveExpiredOperations;
-(void)completeProcessingForOperation:(id)arg0 ;
-(void)dataSourceHasUpdate:(id)arg0 ;
-(void)removeAllOperationForAccessoryIdentifier:(id)arg0 ;
-(void)removeAllOperationsBeforeStartingHK2Migration;
-(void)removeOperation:(id)arg0 ;
-(void)scheduleTimerToCheckAndRemoveExpiredOperation;
-(void)timerDidFire:(id)arg0 ;


@end


#endif