// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2MIGRATOR_H
#define HMDHH2MIGRATOR_H

@class HMFObject, NSString, NSDate, NSMutableSet;
@protocol HMFLogging, HMDDatabase, OS_dispatch_queue;


#import "HMDBackgroundOperationManager.h"
#import "HMDCoreDataCloudTransform.h"
#import "HMDCoreData.h"
#import "HMDHH2FrameworkSwitch.h"
#import "HMDHomeData.h"
#import "HMDHH2MigratorRecord.h"

@interface HMDHH2Migrator : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMDBackgroundOperationManager *backgroundOpsManager; // ivar: _backgroundOpsManager
@property (readonly, nonatomic) NSObject<HMDDatabase> *cameraClipsDatabase; // ivar: _cameraClipsDatabase
@property (readonly, nonatomic) HMDCoreDataCloudTransform *cloudTransform; // ivar: _cloudTransform
@property (readonly, nonatomic) HMDCoreData *coreData; // ivar: _coreData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HMDDatabase> *defaultDatabase; // ivar: _defaultDatabase
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDHH2FrameworkSwitch *hh2FrameworkSwitch; // ivar: _hh2FrameworkSwitch
@property (retain, nonatomic) HMDHomeData *homeData; // ivar: _homeData
@property (readonly, nonatomic) NSDate *migrationStartTime; // ivar: _migrationStartTime
@property (readonly, nonatomic) HMDHH2MigratorRecord *migratorRecord; // ivar: _migratorRecord
@property (readonly, nonatomic) NSMutableSet *openedZones; // ivar: _openedZones
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableSet *scheduledKeyRollOperationsDuringMigration; // ivar: _scheduledKeyRollOperationsDuringMigration
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableSet *v5ModelUpdateFutures; // ivar: _v5ModelUpdateFutures


+(BOOL)shouldIgnoreModel:(id)arg0 ;
+(NSInteger)compareUserAccessCodeInModel:(id)arg0 withModel:(id)arg1 ;
+(id)arrayByRemovingElementsInArray:(id)arg0 fromArray:(id)arg1 ;
+(id)auditedHomeAccessCodeModelsFromModels:(id)arg0 userAccessCodeModelsAndInvites:(id)arg1 ;
+(id)auditedUserAccessCodeModelsAndInvitesFromModels:(id)arg0 ;
+(id)logCategory;
+(id)modelsByDroppingEmptyStringAccessCodesOnModels:(id)arg0 ;
+(id)userAccessCodeFromModel:(id)arg0 ;
-(BOOL)_performMigrationFromTestDirectoryUsingHH2ControllerKey:(id)arg0 ;
-(BOOL)_saveAndResetWithContext:(id)arg0 errorMessage:(id)arg1 ;
-(BOOL)_startMigratingHomeDataFromLocation:(id)arg0 usingHH2PairingKey:(id)arg1 ;
-(BOOL)didCoreDataPushAllModelsToCloudKit:(id)arg0 previousToken:(id)arg1 cloudStore:(id)arg2 ;
-(BOOL)fetchAndMigrateCameraSettingsFromAccessory:(id)arg0 fromLocalZone:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)fetchAndMigrateCompositeSettingsFromAccessory:(id)arg0 fromLocalZone:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)handlePostMigration;
-(BOOL)makeSureToCreateHH2SentinelZone;
-(BOOL)migrateAccessoryV5Models:(id)arg0 fromLocalZone:(id)arg1 forHome:(id)arg2 owner:(id)arg3 ;
-(BOOL)migrateCameraProfileSettingModel:(id)arg0 accessory:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)migrateCompositeAccessorySettingModel:(id)arg0 accessory:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)migrateHome:(id)arg0 primaryHomeUUID:(id)arg1 managedObjectContext:(id)arg2 hh2ControllerKey:(id)arg3 ;
-(BOOL)migrateHomeData:(id)arg0 managedObjectContext:(id)arg1 hh2ControllerKey:(id)arg2 ;
-(BOOL)migrateHomeManager:(id)arg0 managedObjectContext:(id)arg1 hh2ControllerKey:(id)arg2 ;
-(BOOL)migrateHomePersonModelsForHomeUUID:(id)arg0 localZone:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)migrateHomeToCoreData:(id)arg0 primaryHomeUUID:(id)arg1 managedObjectContext:(id)arg2 hh2ControllerKey:(id)arg3 ;
-(BOOL)migrateMediaContentProfileAccessControl:(id)arg0 forOwnerUser:(id)arg1 fromLocalZone:(id)arg2 ;
-(BOOL)migratePersonFaceCropModelsForLocalZone:(id)arg0 ;
-(BOOL)migratePhotosPersonManagerSettingsFromLocalZone:(id)arg0 owner:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)migrateUserListeningHistoryControl:(id)arg0 forOwnerUser:(id)arg1 fromLocalZone:(id)arg2 ;
-(BOOL)migrateUserSettingsToCoreData:(id)arg0 forUser:(id)arg1 fromLocalZone:(id)arg2 ;
-(BOOL)migrateV5Models:(id)arg0 forHome:(id)arg1 ;
-(BOOL)migrateV5PersonDataForHome:(id)arg0 managedObjectContext:(id)arg1 ;
-(BOOL)populateAndSaveCDModelsFrom:(id)arg0 managedObjectContext:(id)arg1 hh2ControllerKey:(id)arg2 tag:(id)arg3 ;
-(BOOL)rollAccessoryKeysToHH2:(id)arg0 hh2ControllerKey:(id)arg1 ;
-(BOOL)saveUserSettingsToCoreData:(id)arg0 forUser:(id)arg1 privateSettingsMap:(id)arg2 ;
-(BOOL)scheduleAccessoryKeyMigration:(id)arg0 oldPairingIdentity:(id)arg1 hh2PairingIdentity:(id)arg2 ;
-(BOOL)startMigratingHomeDataFromLocation:(id)arg0 ;
-(BOOL)startMigrationFromLocation:(id)arg0 ;
-(BOOL)startMigrationIfNeeded;
-(BOOL)waitForCDToExportModelsToCloudKit:(id)arg0 ;
-(BOOL)waitForCloudKitSyncForProcessingResult:(id)arg0 error:(*id)arg1 ;
-(BOOL)waitForCloudTransformToRun;
-(BOOL)waitForFirstImportToFinish;
-(BOOL)waitForStartupForCloudZone:(id)arg0 ;
-(BOOL)waitForV5UpdatesToSyncToCloudKit;
-(id)_auditAccessCodesByRemovingIllegalDuplicatesFromModels:(id)arg0 ;
-(id)allObjectIDsFromTransactions:(id)arg0 cloudStoreIdentifier:(id)arg1 ;
-(id)backingStoreObjectsForAccountsAndDevices:(id)arg0 ;
-(id)findAndRemoveAllModelsWithInvalidAccessCodes:(id)arg0 ;
-(id)init;
-(id)initWithMigratorRecord:(id)arg0 hh2FrameworkSwitch:(id)arg1 coreData:(id)arg2 cloudTransform:(id)arg3 backgroundOperationManager:(id)arg4 defaultDatabase:(id)arg5 cameraClipsDatabase:(id)arg6 ;
-(id)makeListOfArchivesToMigrate:(id)arg0 ;
-(id)openZoneWithName:(id)arg0 inDatabase:(id)arg1 ;
-(id)privateZoneForOwnerUser:(id)arg0 ;
-(id)sharedZoneForOwnerUser:(id)arg0 ;
-(void)_createResidentModelsDuringMigrationForAppleMediaAccessory:(id)arg0 context:(id)arg1 ;
-(void)_fixUpHomeWithoutOwner:(id)arg0 withHH2ControllerKey:(id)arg1 context:(id)arg2 ;
-(void)_fixupAccessoryWithNoInitialValues:(id)arg0 ;
-(void)_fixupAccessoryWithNoRoom:(id)arg0 coreDataModelObject:(id)arg1 ;
-(void)_fixupActionSetInvalidName:(id)arg0 context:(id)arg1 ;
-(void)_fixupActionSetUnlocalizedName:(id)arg0 ;
-(void)_fixupAppleMediaAccessory:(id)arg0 context:(id)arg1 ;
-(void)_fixupCharacteristicEventTriggerInvalidService:(id)arg0 context:(id)arg1 ;
-(void)_fixupCharacteristicWriteActionWithInvalidService:(id)arg0 context:(id)arg1 ;
-(void)_fixupHomeInvalidName:(id)arg0 context:(id)arg1 ;
-(void)_fixupHomeManagerPairingIdentity:(id)arg0 withHH2ControllerKey:(id)arg1 context:(id)arg2 ;
-(void)_fixupInvalidCharacteristicFormat:(id)arg0 context:(id)arg1 ;
-(void)_fixupSoftwareUpdateModelWithNoAccessory:(id)arg0 coreDataModelObject:(id)arg1 ;
-(void)_fixupTriggerInvalidName:(id)arg0 context:(id)arg1 ;
-(void)_fixupUserAccessCodeWithInvalidValue:(id)arg0 context:(id)arg1 ;
-(void)_fixupUserAuthorizationDataForUserModel:(id)arg0 ;
-(void)_fixupUserPairingIdentity:(id)arg0 withHH2ControllerKey:(id)arg1 context:(id)arg2 ;
-(void)_updatePairingIdentityForHome:(id)arg0 withHH2ControllerKey:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
-(void)fixupAssistantAccessControlForUserModel:(id)arg0 ;
-(void)fixupModelForMigration:(id)arg0 backingStoreModelObject:(id)arg1 hh2ControllerKey:(id)arg2 ;
-(void)revertChangesPerformedDuringMigration;
-(void)submitABCEventForFailedMigrationWithReason:(NSUInteger)arg0 withError:(id)arg1 ;


@end


#endif