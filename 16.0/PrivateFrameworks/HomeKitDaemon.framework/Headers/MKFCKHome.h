// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKHOME_H
#define MKFCKHOME_H

@class NSSet, NSDictionary, NSDate, NSString, NSUUID, NSArray;
@protocol HMDCoreDataCloudTransformable;


#import "MKFCKModel.h"
#import "MKFCKHAPAccessory.h"
#import "MKFCKRoom.h"
#import "HMDHomeKitVersion.h"
#import "HMDHomeNFCReaderKey.h"
#import "MKFCKUser.h"

@interface MKFCKHome : MKFCKModel <HMDCoreDataCloudTransformable>



@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) MKFCKHAPAccessory *activeNetworkRouter;
@property (nonatomic) NSInteger analysisOptions;
@property (retain, nonatomic) NSDictionary *applicationData;
@property (nonatomic) BOOL automaticSoftwareUpdateEnabled;
@property (nonatomic) BOOL automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MKFCKRoom *defaultRoom;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didOnboardAnalysis;
@property (nonatomic) BOOL didOnboardLocationServices;
@property (nonatomic) BOOL doorbellChimeEnabled;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSUUID *flags;
@property (retain, nonatomic) NSDictionary *guestAccessCodes;
@property (nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (nonatomic) BOOL hasOnboardedForAccessCode;
@property (nonatomic) BOOL hasOnboardedForWalletKey;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *homeManagerApplicationData;
@property (retain, nonatomic) NSSet *invitations;
@property (nonatomic) BOOL locationServicesEnabled;
@property (retain, nonatomic) NSDictionary *matterKeyValueStore;
@property (nonatomic) NSInteger mediaMinimumUserPrivilege;
@property (copy, nonatomic) NSString *mediaPassword;
@property (nonatomic) BOOL mediaPeerToPeerEnabled;
@property (retain, nonatomic) HMDHomeKitVersion *minimumHomeKitVersionForAccessoryNetworkProtectionChanges;
@property (retain, nonatomic) HMDHomeKitVersion *minimumHomeKitVersionForNetworkRouterSupport;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) BOOL multiUserEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *networkProtectionGroups;
@property (nonatomic) NSInteger networkProtectionMode;
@property (retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (retain, nonatomic) MKFCKUser *owner;
@property (copy, nonatomic) NSUUID *personDataZoneUUID;
@property (retain, nonatomic) NSSet *persons;
@property (nonatomic) NSInteger primaryHomeCounter;
@property (retain, nonatomic) NSDictionary *removedUserAccessCodes;
@property (retain, nonatomic) NSSet *residents;
@property (retain, nonatomic) NSSet *rooms;
@property (retain, nonatomic) NSSet *scenes;
@property (retain, nonatomic) NSSet *serviceGroups;
@property (nonatomic) BOOL soundCheckEnabled;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *triggers;
@property (retain, nonatomic) NSSet *users;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *zones;


+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(id)__accessCodeFromDictionaryForUnitTest:(id)arg0 ;
+(id)__dictionaryFromGuestAccessCodeDictionaryForUnitTest:(id)arg0 tombStonedPinCodes:(int)arg1 ;
+(id)__dictionaryFromHMRemovedUserInfoForUnitTest:(id)arg0 ;
+(id)__dictionaryFromRemovedUserAccessCodeDictionaryForUnitTest:(id)arg0 tombStonedPinCodes:(int)arg1 ;
+(id)__labelFromDictionaryForUnitTest:(id)arg0 ;
+(id)__removedUserInfoDictionaryForUnitTest:(id)arg0 ;
+(id)__removedUserInfoFromDictionaryForUnitTest:(id)arg0 ;
+(id)_balanceFakeHAPAccessoriesForHome:(id)arg0 context:(id)arg1 ;
+(id)_balanceFakeMediaAccessoriesForHome:(id)arg0 context:(id)arg1 ;
+(id)_balanceFakeRoomsForHome:(id)arg0 context:(id)arg1 ;
+(id)_balanceFakeScenesForHome:(id)arg0 context:(id)arg1 ;
+(id)_balanceFakeTriggersForHome:(id)arg0 context:(id)arg1 ;
+(id)_balanceFakeUsersForHome:(id)arg0 context:(id)arg1 ;
+(id)_balanceFakeZonesForHome:(id)arg0 context:(id)arg1 ;
+(id)_createFakeHomeInPersistentStore:(id)arg0 context:(id)arg1 ;
+(id)_createHomeManagerContextFromContext:(id)arg0 ;
+(id)_encodeNetworkProtectionGroupModelID:(id)arg0 manufacturer:(id)arg1 category:(id)arg2 targetProtectionMode:(id)arg3 ;
+(id)_encodeRemovedUserInfoWithUserID:(id)arg0 removedUserModelID:(id)arg1 userName:(id)arg2 dateRemoved:(id)arg3 ;
+(id)_homeManagerContextFromContext:(id)arg0 ;
+(id)_homeManagerHomeWithModelID:(id)arg0 homeManager:(id)arg1 context:(id)arg2 ;
+(id)createWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)createWithModelID:(id)arg0 persistentStore:(id)arg1 context:(id)arg2 ;
+(id)fetchRequest;
+(void)_maybeCreateFakeHomes:(id)arg0 context:(id)arg1 ;
+(void)_maybeDeleteFakeHomes:(id)arg0 context:(id)arg1 ;
+(void)_rebalanceFakeHomesWithContext:(id)arg0 ;
+(void)_setCommonPropertiesOnAccessory:(id)arg0 ;
+(void)_setPropertiesOnUser:(id)arg0 isOwner:(BOOL)arg1 ;
-(BOOL)_exportAccessoriesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportApplicationDataFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportGuestAccessCodesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportHomeManagerWithContext:(id)arg0 ;
-(BOOL)_exportInvitationOutgoingFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportMatterKeyValueStoreFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportNetworkProtectionGroupsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportPersonsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportPinCodesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportRelationshipsFromLocalHome:(id)arg0 localRelationship:(id)arg1 cloudRelationship:(id)arg2 context:(id)arg3 ;
-(BOOL)_exportRelationshipsFromLocalHome:(id)arg0 localRelationshipName:(id)arg1 context:(id)arg2 ;
-(BOOL)_exportRelationshipsFromLocalModel:(id)arg0 localRelationship:(id)arg1 cloudRelationship:(id)arg2 cloudModels:(id)arg3 context:(id)arg4 ;
-(BOOL)_exportRemovedUserAccessCodesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportResidentsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportRoomsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportScenesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportServiceGroupsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportSettingsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportTriggersFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportUsersFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportZonesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importAccessoriesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importApplicationDataIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importGuestAccessCodesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importHomeManagerWithContext:(id)arg0 ;
-(BOOL)_importInvitationOutgoingIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importMatterKeyValueStoreIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importNetworkProtectionGroupsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importPersonsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importPinCodesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importRelationshipsIntoLocalModel:(id)arg0 localRelationshipName:(id)arg1 context:(id)arg2 ;
-(BOOL)_importRemovedUserAccessCodesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importResidentsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importRoomsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importScenesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importServiceGroupsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importSettingsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importTriggersIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importUsersIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importZonesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)validateOwner:(*id)arg0 error:(*id)arg1 ;
-(id)_populateGuestAccessCode:(id)arg0 withLabel:(id)arg1 hh2ModelID:(id)arg2 home:(id)arg3 groupsByModelID:(id)arg4 context:(id)arg5 ;
-(id)_populateRemovedUserAccessCodeFromDictionary:(id)arg0 withAccessCode:(id)arg1 hh2ModelID:(id)arg2 home:(id)arg3 groupsByModelID:(id)arg4 context:(id)arg5 ;
-(id)homeModelID;
-(void)_maybeDeleteStaleLocalModels:(id)arg0 context:(id)arg1 ;
-(void)_maybeDeleteStaleLocalModels:(id)arg0 modelIDKey:(id)arg1 context:(id)arg2 ;
-(void)awakeFromInsert;


@end


#endif