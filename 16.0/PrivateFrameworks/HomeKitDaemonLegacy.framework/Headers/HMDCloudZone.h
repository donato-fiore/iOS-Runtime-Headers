// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDZONE_H
#define HMDCLOUDZONE_H

@class HMFObject, NSString, CKRecordID, CKServerChangeToken, CKRecordZoneSubscription, CKRecordZone;


#import "HMDBackingStoreCacheZone.h"
#import "HMDCloudCache.h"
#import "HMDCloudGroup.h"

@interface HMDCloudZone : HMFObject

@property (retain, nonatomic) HMDBackingStoreCacheZone *backingStoreZone; // ivar: _backingStoreZone
@property (weak, nonatomic) HMDCloudCache *cache; // ivar: _cache
@property (nonatomic, getter=hasDecrypted) BOOL decrypted; // ivar: _decrypted
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic, getter=doesProcessChangeEvenIfDecryptionFails) BOOL processChangeEvenIfDecryptionFails;
@property (nonatomic, getter=hasRecordsAvaliable) BOOL recordsAvailable; // ivar: _recordsAvailable
@property (retain, nonatomic) HMDCloudGroup *rootGroup; // ivar: _rootGroup
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (readonly, nonatomic, getter=hasServerTokenAvaliable) BOOL serverTokenAvaliable;
@property (retain, nonatomic) CKRecordZoneSubscription *subscription; // ivar: _subscription
@property (retain, nonatomic) NSString *subscriptionName; // ivar: _subscriptionName
@property (retain, nonatomic) CKRecordZone *zone; // ivar: _zone
@property (readonly, nonatomic) NSString *zoneRootRecordName;


+(id)shortDescription;
+(id)zoneSubscriptionName:(id)arg0 ;
+(void)createZoneWithName:(id)arg0 rootRecordName:(id)arg1 subscriptionName:(id)arg2 owner:(id)arg3 cacheZone:(id)arg4 cloudCache:(id)arg5 completion:(id)arg6 ;
-(BOOL)isRootCloudRecord:(id)arg0 ;
-(BOOL)isRootRecord:(id)arg0 ;
-(id)__cloudRecordWithObjectID:(id)arg0 ;
-(id)cloudRecordWithName:(id)arg0 ;
-(id)cloudRecordWithObjectID:(id)arg0 ;
-(id)createCloudRecordWithFetchResult:(id)arg0 ;
-(id)createCloudRecordWithObjectID:(id)arg0 recordName:(id)arg1 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBackingStoreCacheZone:(id)arg0 cloudCache:(id)arg1 ;
-(id)shortDescription;
-(void)_initializeServerChangeToken:(id)arg0 ;
-(void)_initializeSubscription:(id)arg0 ;
-(void)addCloudRecord:(id)arg0 ownerID:(id)arg1 ;
-(void)allDescendentsCloudRecordsForParentID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithNames:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithObjectIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordsForParentID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteCloudRecord:(id)arg0 ;
-(void)deleteCloudRecordNames:(id)arg0 ;
-(void)deleteZone;
-(void)fetchMigratedObjects:(id)arg0 ;
-(void)markMigratedObjectsAsMigrated;
-(void)updateCloudRecord:(id)arg0 ;
-(void)updateCloudRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateCurrentServerChangeToken;
-(void)updateServerChangeToken:(id)arg0 ;


@end


#endif