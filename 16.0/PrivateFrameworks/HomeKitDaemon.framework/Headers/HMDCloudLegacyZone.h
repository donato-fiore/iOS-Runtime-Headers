// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDLEGACYZONE_H
#define HMDCLOUDLEGACYZONE_H

@class NSUUID, CKRecordID;


#import "HMDCloudZone.h"

@interface HMDCloudLegacyZone : HMDCloudZone

@property (readonly, nonatomic) NSUUID *homeDataObjectID; // ivar: _homeDataObjectID
@property (readonly, nonatomic, getter=isHomeDataRecordAvailable) BOOL homeDataRecordAvailable;
@property (readonly, nonatomic) CKRecordID *homeDataRecordID; // ivar: _homeDataRecordID
@property (readonly, nonatomic) NSUUID *homeDataV3ObjectID; // ivar: _homeDataV3ObjectID
@property (readonly, nonatomic, getter=isHomeDataV3RecordAvailable) BOOL homeDataV3RecordAvailable;
@property (readonly, nonatomic) CKRecordID *homeDataV3RecordID; // ivar: _homeDataV3RecordID
@property (readonly, nonatomic) NSUUID *metadataObjectID; // ivar: _metadataObjectID
@property (readonly, nonatomic, getter=isMetadataRecordAvailable) BOOL metadataRecordAvailable;
@property (readonly, nonatomic) CKRecordID *metadataRecordID; // ivar: _metadataRecordID


+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg0 ;
+(void)createLegacyZoneWithName:(id)arg0 owner:(id)arg1 cacheZone:(id)arg2 cloudCache:(id)arg3 completion:(id)arg4 ;
-(BOOL)doesProcessChangeEvenIfDecryptionFails;
-(id)createCloudRecordWithObjectID:(id)arg0 recordName:(id)arg1 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg0 ;
-(id)homeDataModelWithPushDataPush:(id)arg0 ;
-(id)homeDataV3ModelWithPushDataPush:(id)arg0 ;
-(id)metadataModelWithPushDataPush:(id)arg0 ;
-(void)dropCachedRecords;
-(void)setServerChangeToken:(id)arg0 ;


@end


#endif