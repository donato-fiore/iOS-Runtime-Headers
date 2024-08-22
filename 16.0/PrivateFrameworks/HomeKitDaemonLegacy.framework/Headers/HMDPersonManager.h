// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPERSONMANAGER_H
#define HMDPERSONMANAGER_H

@class HMFObject, NSUUID, HMBCloudZone, NSSet, NSString, HMBLocalZone, HMFTimer;
@protocol HMBLocalZoneModelObserver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDPersonCoreDataManagerDelegate, HMFLogging, HMFTimerDelegate, HMDPersonDataSource, HMDPersonManagerSettings, OS_dispatch_queue;


#import "HMDDatabaseZoneManager.h"

@interface HMDPersonManager : HMFObject <HMBLocalZoneModelObserver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDPersonCoreDataManagerDelegate, HMFLogging, HMFTimerDelegate, HMDPersonDataSource>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (retain) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, getter=isCurrentDeviceAvailableResident) BOOL currentDeviceAvailableResident;
@property (readonly, getter=isDataAvailable) BOOL dataAvailable;
@property (readonly) NSSet *dataInterfaces; // ivar: _dataInterfaces
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger fetchBatchLimit; // ivar: _fetchBatchLimit
@property (readonly) NSUInteger hash;
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, copy) NSObject<HMDPersonManagerSettings> *settings;
@property (readonly) BOOL sharesFaceClassifications;
@property (readonly) Class superclass;
@property (readonly) BOOL syncsPersonData; // ivar: _syncsPersonData
@property (retain) HMFTimer *unassociatedFaceCropsCleanupTimer; // ivar: _unassociatedFaceCropsCleanupTimer
@property (copy) id *unassociatedFaceCropsCleanupTimerFactory; // ivar: _unassociatedFaceCropsCleanupTimerFactory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMDDatabaseZoneManager *zoneManager; // ivar: _zoneManager


+(id)logCategory;
+(id)zoneNameForZoneUUID:(id)arg0 ;
-(BOOL)isDataSyncInProgress;
-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(BOOL)syncsDataToAllUsers;
-(id)_faceCropsModelsWithUUIDs:(id)arg0 ;
-(id)_removeFaceprintsForFaceCropsWithUUIDs:(id)arg0 ;
-(id)_unassociatedFaceCropsModelsWithUUIDs:(id)arg0 ;
-(id)addOrUpdateFaceCrops:(id)arg0 ;
-(id)addOrUpdateFaceprints:(id)arg0 ;
-(id)addOrUpdatePersons:(id)arg0 ;
-(id)addUnassociatedFaceCropWithData:(id)arg0 ;
-(id)associateFaceCropsWithUUIDs:(id)arg0 toPersonWithUUID:(id)arg1 forSource:(NSInteger)arg2 ;
-(id)attributeDescriptions;
-(id)createBatchChange;
-(id)disassociateFaceCropsWithUUIDs:(id)arg0 ;
-(id)faceCropUUIDsForPersonWithUUID:(id)arg0 ;
-(id)faceCropsForPersonWithUUID:(id)arg0 ;
-(id)faceCropsForPersonsWithUUIDs:(id)arg0 ;
-(id)faceCropsWithUUIDs:(id)arg0 ;
-(id)faceprintsForFaceCropsWithUUIDs:(id)arg0 ;
-(id)initWithUUID:(id)arg0 zoneManager:(id)arg1 dataInterfaces:(id)arg2 workQueue:(id)arg3 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)performCloudPull;
-(id)personFaceCropWithUnassociatedFaceCropUUID:(id)arg0 ;
-(id)personWithUUID:(id)arg0 ;
-(id)personsWithUUIDs:(id)arg0 ;
-(id)removeAllAssociatedData;
-(id)removeFaceCropsWithUUIDs:(id)arg0 ;
-(id)removeFaceprintsWithUUIDs:(id)arg0 ;
-(id)removePersonZones;
-(id)removePersonsWithUUIDs:(id)arg0 ;
-(id)unassociatedFaceCropWithUUID:(id)arg0 ;
-(void)_cleanUpExpiredUnassociatedFaceCrops;
-(void)_createOrRemoveZonesForSettings:(id)arg0 ;
-(void)_createZones;
-(void)_handleCreatedOrUpdatedModel:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)_handleDeletedModel:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)_notifyDataInterfacesOfCurrentIsCurrentDeviceAvailableResident;
-(void)_notifyDataInterfacesOfCurrentIsDataSyncInProgress;
-(void)configureWithHome:(id)arg0 ;
-(void)coreDataManager:(id)arg0 didRemovePersonsWithUUIDs:(id)arg1 ;
-(void)coreDataManager:(id)arg0 didUpdatePersons:(id)arg1 ;
-(void)dealloc;
-(void)enumerateFaceCropsUsingBlock:(id)arg0 ;
-(void)enumerateFaceprintsUsingBlock:(id)arg0 ;
-(void)enumeratePersonFaceCropsUsingBlock:(id)arg0 ;
-(void)enumeratePersonsUsingBlock:(id)arg0 ;
-(void)enumerateUnassociatedFaceCropsUsingBlock:(id)arg0 ;
-(void)handleDataSyncInProgressChangedNotification:(id)arg0 ;
-(void)handleFaceMisclassificationForFaceCropData:(id)arg0 personUUID:(id)arg1 ;
-(void)handleResidentWasAddedNotification:(id)arg0 ;
-(void)handleResidentWasRemovedNotification:(id)arg0 ;
-(void)handleResidentWasUpdatedNotification:(id)arg0 ;
-(void)handleUserPrivilegeDidChangeNotification:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)zoneManagerDidStart:(id)arg0 ;
-(void)zoneManagerDidStop:(id)arg0 ;


@end


#endif