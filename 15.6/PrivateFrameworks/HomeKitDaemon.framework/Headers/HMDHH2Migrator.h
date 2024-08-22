// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHH2MIGRATOR_H
#define HMDHH2MIGRATOR_H

@class HMFObject, NSString, NSMutableSet;
@protocol HMFLogging;


#import "HMDBackgroundOperationManager.h"
#import "HMDCoreData.h"
#import "HMDHH2FrameworkSwitch.h"
#import "HMDHomeData.h"
#import "HMDHH2MigratorRecord.h"

@interface HMDHH2Migrator : HMFObject <HMFLogging>



@property (retain, nonatomic) HMDBackgroundOperationManager *backgroundOpsManager; // ivar: _backgroundOpsManager
@property (retain, nonatomic) HMDCoreData *coreData; // ivar: _coreData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDHH2FrameworkSwitch *hh2FrameworkSwitch; // ivar: _hh2FrameworkSwitch
@property (retain, nonatomic) HMDHomeData *homeData; // ivar: _homeData
@property (retain, nonatomic) HMDHH2MigratorRecord *migratorRecord; // ivar: _migratorRecord
@property (retain, nonatomic) NSMutableSet *scheduledKeyRollOperationsDuringMigration; // ivar: _scheduledKeyRollOperationsDuringMigration
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)didCoreDataPushAllModelsToCloudKit:(id)arg0 previousToken:(id)arg1 cloudStore:(id)arg2 ;
-(BOOL)handlePostMigration;
-(BOOL)makeSureToCreateHH2SentinelZone;
-(BOOL)migrateHome:(id)arg0 primaryHomeUUID:(id)arg1 managedObjectContext:(id)arg2 hh2ControllerKey:(id)arg3 ;
-(BOOL)migrateHomeData:(id)arg0 managedObjectContext:(id)arg1 hh2ControllerKey:(id)arg2 ;
-(BOOL)migrateHomeManager:(id)arg0 managedObjectContext:(id)arg1 hh2ControllerKey:(id)arg2 ;
-(BOOL)migrateHomeToCoreData:(id)arg0 primaryHomeUUID:(id)arg1 managedObjectContext:(id)arg2 hh2ControllerKey:(id)arg3 ;
-(BOOL)populateAndSaveCDModelsFrom:(id)arg0 managedObjectContext:(id)arg1 hh2ControllerKey:(id)arg2 tag:(id)arg3 ;
-(BOOL)rollAccessoryKeysToHH2:(id)arg0 hh2ControllerKey:(id)arg1 ;
-(BOOL)scheduleAccessoryKeyMigration:(id)arg0 oldPairingIdentity:(id)arg1 hh2PairingIdentity:(id)arg2 ;
-(BOOL)shouldIgnoreModel:(id)arg0 ;
-(BOOL)startMigratingHomeDataFromLocation:(id)arg0 ;
-(BOOL)startMigrationFromLocation:(id)arg0 ;
-(BOOL)startMigrationIfNeeded;
-(BOOL)waitForCDToExportModelsToCloudKit:(id)arg0 ;
-(BOOL)waitForCloudTransformToRun;
-(id)allObjectIDsFromTransactions:(id)arg0 cloudStoreIdentifier:(id)arg1 ;
-(id)backingStoreObjectsForAccountsAndDevices:(id)arg0 ;
-(id)initWithCoreData:(id)arg0 ;
-(id)initWithMigratorRecord:(id)arg0 coreData:(id)arg1 backgroundOperationManager:(id)arg2 ;
-(void)fixupModelForMigration:(id)arg0 coreDataModelObject:(id)arg1 hh2ControllerKey:(id)arg2 ;
-(void)revertChangesPerformedDuringMigration;


@end


#endif