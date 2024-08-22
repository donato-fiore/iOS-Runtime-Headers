// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKHOME_H
#define MKFCKHOME_H

@class NSSet, NSDictionary, NSUUID, NSDate, NSString, NSArray, NSData;


#import "MKFCKModel.h"
#import "MKFCKRoom.h"
#import "MKFCKUser.h"

@interface MKFCKHome : MKFCKModel

@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSDictionary *applicationData;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) MKFCKRoom *defaultRoom;
@property (nonatomic) BOOL didOnboardLocationServices;
@property (nonatomic) BOOL doorbellChimeEnabled;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (nonatomic) BOOL hasOnboardedForAccessCode;
@property (nonatomic) BOOL hasOnboardedForWalletKey;
@property (retain, nonatomic) NSDictionary *homeManagerApplicationData;
@property (retain, nonatomic) NSSet *invitations;
@property (nonatomic) BOOL locationServicesEnabled;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) BOOL multiUserEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *networkProtectionGroups;
@property (nonatomic) NSInteger networkProtectionMode;
@property (retain, nonatomic) NSData *nfcReaderKey;
@property (retain, nonatomic) MKFCKUser *owner;
@property (nonatomic) NSInteger primaryHomeCounter;
@property (retain, nonatomic) NSSet *residents;
@property (retain, nonatomic) NSSet *rooms;
@property (retain, nonatomic) NSSet *scenes;
@property (nonatomic) BOOL settingAutomaticSoftwareUpdateEnabled;
@property (nonatomic) BOOL settingAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (nonatomic) NSInteger settingMediaMinimumUserPrivilege;
@property (copy, nonatomic) NSString *settingMediaPassword;
@property (nonatomic) BOOL settingMediaPeerToPeerEnabled;
@property (copy, nonatomic) NSString *threadNetworkID;
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
+(id)_createHomeManagerContextFromContext:(id)arg0 ;
+(id)_homeManagerContextFromContext:(id)arg0 ;
+(id)_homeManagerHomeWithModelID:(id)arg0 homeManager:(id)arg1 context:(id)arg2 ;
+(id)createWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)fetchRequest;
-(BOOL)_exportAccessoriesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportApplicationDataFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportAutomationsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportHomeManagerWithContext:(id)arg0 ;
-(BOOL)_exportInvitationOutgoingFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportRelationshipsFromLocalModel:(id)arg0 localRelationship:(id)arg1 cloudRelationship:(id)arg2 context:(id)arg3 ;
-(BOOL)_exportRelationshipsFromLocalModel:(id)arg0 localRelationshipName:(id)arg1 context:(id)arg2 ;
-(BOOL)_exportResidentsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportRoomsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportScenesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportSettingsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportTriggersFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportUsersFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_exportZonesFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importAccessoriesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importApplicationDataIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importAutomationsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importHomeManagerWithContext:(id)arg0 ;
-(BOOL)_importInvitationOutgoingIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importRelationshipsIntoLocalModel:(id)arg0 localRelationshipName:(id)arg1 context:(id)arg2 ;
-(BOOL)_importResidentsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importRoomsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importScenesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importSettingsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importTriggersIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importUsersIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)_importZonesIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)validateOwner:(*id)arg0 error:(*id)arg1 ;
-(id)homeModelID;
-(id)initWithContext:(id)arg0 assignStore:(id)arg1 ;


@end


#endif