// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDGROUP_H
#define HMDCLOUDGROUP_H

@class HMFObject, NSString, NSUUID, NSMutableDictionary, CKRecordID;
@protocol HMFLogging;


#import "HMDBackingStoreCacheGroup.h"
#import "HMDCloudCache.h"
#import "HMDCloudZone.h"
#import "HMDCloudRecord.h"

@interface HMDCloudGroup : HMFObject <HMFLogging>

 {
    BOOL _doRecordsExistInCache;
}


@property (retain, nonatomic) HMDBackingStoreCacheGroup *backingStoreGroup; // ivar: _backingStoreGroup
@property (weak, nonatomic) HMDCloudCache *cache; // ivar: _cache
@property (weak, nonatomic) HMDCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL doRecordsExistInCache;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSMutableDictionary *objectIDToRecordNameMap; // ivar: _objectIDToRecordNameMap
@property (readonly, nonatomic) NSUUID *ownerID; // ivar: _ownerID
@property (readonly, nonatomic) NSUUID *parentIdentifier;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic) HMDCloudRecord *rootRecord;
@property (readonly, nonatomic) NSString *rootRecordName;
@property (readonly, nonatomic) NSUUID *rootRecordObjectID;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)shortDescription;
+(void)createGroupWithRootRecordName:(id)arg0 owner:(id)arg1 subscriptionName:(id)arg2 cloudZone:(id)arg3 completion:(id)arg4 ;
-(BOOL)isRootRecord:(id)arg0 ;
-(BOOL)isRootRecordName:(id)arg0 ;
-(id)__cloudRecordWithObjectID:(id)arg0 ;
-(id)cloudRecordWithName:(id)arg0 ;
-(id)cloudRecordWithObjectID:(id)arg0 ;
-(id)init;
-(id)initWithBackingStoreCacheGroup:(id)arg0 cloudZone:(id)arg1 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)_cloudRecordsForParentIDs:(id)arg0 recursive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)addCloudRecord:(id)arg0 ;
-(void)allDescendentsCloudRecordsForParentID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithNames:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordWithObjectIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudRecordsForParentID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteCloudRecord:(id)arg0 ;
-(void)deleteCloudRecordNames:(id)arg0 ;
-(void)fetchCloudRecordMap:(id)arg0 ;
-(void)rootRecordCompletionHandler:(id)arg0 ;
-(void)updateCloudRecord:(id)arg0 ;
-(void)updateCloudRecord:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif