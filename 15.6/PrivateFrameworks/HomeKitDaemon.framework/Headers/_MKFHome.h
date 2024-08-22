// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFHOME_H
#define _MKFHOME_H

@class MKFModel, NSArray, NSSet, NSDate, NSString, NSNumber, NSUUID, CLLocation, NSData, HMFSoftwareVersion;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHome, MKFHomePrivateExtensions, MKFApplicationData, MKFRoom, MKFAccessoryNetworkProtectionGroup, MKFUser, MKFDevice, MKFHomeThreadNetwork;


#import "_MKFApplicationData.h"
#import "MKFHomeDatabaseID.h"
#import "_MKFRoom.h"
#import "HMDNaturalLightingContext.h"
#import "_MKFAccessoryNetworkProtectionGroup.h"
#import "HMDHomeNFCReaderKey.h"
#import "_MKFUser.h"
#import "_MKFDevice.h"
#import "MKFResidentSyncMetadata.h"
#import "_MKFHomeThreadNetwork.h"

@interface _MKFHome : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHome, MKFHomePrivateExtensions>



@property (readonly, retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) NSSet *accessories_;
@property (readonly, retain, nonatomic) NSArray *actionSets;
@property (retain, nonatomic) NSSet *actionSets_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) MKFHomeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _MKFRoom *defaultRoom;
@property (retain, nonatomic) NSObject<MKFRoom> *defaultRoom;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSArray *invitations;
@property (retain, nonatomic) NSSet *invitations_;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSDate *locationUpdateTimeStamp;
@property (copy, nonatomic) NSDate *locationUpdateTimeStamp;
@property (readonly, retain, nonatomic) NSArray *mediaGroups;
@property (retain, nonatomic) NSSet *mediaGroups_;
@property (readonly, retain, nonatomic) NSArray *mediaSystems;
@property (retain, nonatomic) NSSet *mediaSystems_;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (retain, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (retain, nonatomic) _MKFAccessoryNetworkProtectionGroup *networkProtectionGroup;
@property (retain, nonatomic) NSObject<MKFAccessoryNetworkProtectionGroup> *networkProtectionGroup;
@property (copy, nonatomic) NSNumber *networkProtectionMode;
@property (copy, nonatomic) NSNumber *networkProtectionMode;
@property (retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (copy, nonatomic) NSNumber *owned;
@property (copy, nonatomic) NSNumber *owned;
@property (retain, nonatomic) _MKFUser *owner;
@property (retain, nonatomic) NSObject<MKFUser> *owner;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *presenceComputeStatus;
@property (copy, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) _MKFDevice *primaryResident;
@property (retain, nonatomic) NSObject<MKFDevice> *primaryResident;
@property (retain, nonatomic) MKFResidentSyncMetadata *residentSyncMetadata;
@property (readonly, retain, nonatomic) NSArray *residents;
@property (retain, nonatomic) NSSet *residents_;
@property (readonly, retain, nonatomic) NSArray *rooms;
@property (retain, nonatomic) NSSet *rooms_;
@property (readonly, retain, nonatomic) NSArray *serviceGroups;
@property (retain, nonatomic) NSSet *serviceGroups_;
@property (readonly, retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSSet *settings_;
@property (retain, nonatomic) HMFSoftwareVersion *sharedHomeSourceVersion;
@property (retain, nonatomic) HMFSoftwareVersion *sharedHomeSourceVersion;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKFHomeThreadNetwork *threadNetwork;
@property (retain, nonatomic) NSObject<MKFHomeThreadNetwork> *threadNetwork;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (retain, nonatomic) NSSet *triggers_;
@property (readonly, retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSSet *users_;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *zones;
@property (retain, nonatomic) NSSet *zones_;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)accessoryWithModelID:(id)arg0 context:(id)arg1 ;
-(id)castIfHome;
-(id)findAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)arg0 ;
-(id)findAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)arg0 ;
-(id)findAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)arg0 ;
-(id)findActionSetsRelationWithModelID:(id)arg0 ;
-(id)findInvitationsRelationWithModelID:(id)arg0 ;
-(id)findMediaGroupsRelationWithModelID:(id)arg0 ;
-(id)findResidentsRelationOfTypeAppleMediaAccessoryResidentWithModelID:(id)arg0 ;
-(id)findRoomsRelationWithModelID:(id)arg0 ;
-(id)findServiceGroupsRelationWithModelID:(id)arg0 ;
-(id)findSettingsRelationOfTypeHomeMediaSetting;
-(id)findSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting;
-(id)findSettingsRelationOfTypeHomeNetworkRouterSetting;
-(id)findSettingsRelationOfTypeHomePersonManagerSetting;
-(id)findSettingsRelationOfTypeHomeSoftwareUpdateSetting;
-(id)findTriggersRelationOfTypeEventTriggerWithModelID:(id)arg0 ;
-(id)findTriggersRelationOfTypeTimerTriggerWithModelID:(id)arg0 ;
-(id)findUsersRelationWithModelID:(id)arg0 ;
-(id)findZonesRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateAccessoriesRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateActionSetsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateApplicationDataRelation:(*BOOL)arg0 ;
-(id)materializeOrCreateInvitationsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateMediaGroupsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateNetworkProtectionGroupRelation:(*BOOL)arg0 ;
-(id)materializeOrCreateResidentsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateResidentsRelationOfTypeAppleMediaAccessoryResidentWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateRoomsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateServiceGroupsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateSettingsRelationOfTypeHomeMediaSetting:(*BOOL)arg0 ;
-(id)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting:(*BOOL)arg0 ;
-(id)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterSetting:(*BOOL)arg0 ;
-(id)materializeOrCreateSettingsRelationOfTypeHomePersonManagerSetting:(*BOOL)arg0 ;
-(id)materializeOrCreateSettingsRelationOfTypeHomeSoftwareUpdateSetting:(*BOOL)arg0 ;
-(id)materializeOrCreateThreadNetworkRelation:(*BOOL)arg0 ;
-(id)materializeOrCreateTriggersRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateTriggersRelationOfTypeEventTriggerWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateTriggersRelationOfTypeTimerTriggerWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateUsersRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateZonesRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addResidentsObject:(id)arg0 ;
-(void)removeResidentsObject:(id)arg0 ;
-(void)synchronizeAccessoriesRelationWith:(id)arg0 ;
-(void)synchronizeActionSetsRelationWith:(id)arg0 ;
-(void)synchronizeInvitationsRelationWith:(id)arg0 ;
-(void)synchronizeMediaGroupsRelationWith:(id)arg0 ;
-(void)synchronizeRoomsRelationWith:(id)arg0 ;
-(void)synchronizeServiceGroupsRelationWith:(id)arg0 ;
-(void)synchronizeTriggersRelationWith:(id)arg0 ;
-(void)synchronizeUsersRelationWith:(id)arg0 ;
-(void)synchronizeZonesRelationWith:(id)arg0 ;


@end


#endif