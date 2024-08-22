// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKSHAREDUSERDATAROOT_H
#define MKFCKSHAREDUSERDATAROOT_H

@class NSSet, NSString, NSUUID;
@protocol HMDCoreDataCloudTransformable;


#import "MKFCKSharedUserData.h"

@interface MKFCKSharedUserDataRoot : MKFCKSharedUserData <HMDCoreDataCloudTransformable>



@property (retain, nonatomic) NSSet *accessorySettings;
@property (nonatomic) BOOL activityNotificationsEnabledForPersonalRequests;
@property (nonatomic) BOOL allowExplicitContent;
@property (nonatomic) BOOL allowiTunesAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dolbyAtmosEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL losslessMusicEnabled;
@property (retain, nonatomic) NSSet *personsFromPhotos;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) BOOL playbackInfluencesEnabled;
@property (nonatomic) BOOL sharePhotosFaceClassifications;
@property (nonatomic) BOOL siriIdentifyVoiceEnabled;
@property (readonly) Class superclass;


+(BOOL)_importInsertOrUpdateWithObjectID:(id)arg0 context:(id)arg1 ;
+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(id)createWithHomeModelID:(id)arg0 persistentStore:(id)arg1 context:(id)arg2 ;
+(id)fetchRequest;
+(id)rootKeyPath;
-(BOOL)_importSharedUserSettingsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)importAccessorySettingsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)importIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)importIntoLocalModelWithContext:(id)arg0 ;
-(BOOL)importPersonsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(id)fetchEquivalentModels:(*id)arg0 ;


@end


#endif