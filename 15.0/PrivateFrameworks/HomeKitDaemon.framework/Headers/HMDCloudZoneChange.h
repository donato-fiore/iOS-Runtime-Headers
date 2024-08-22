// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDZONECHANGE_H
#define HMDCLOUDZONECHANGE_H

@class HMFObject, NSArray, NSUUID, CKRecordID;


#import "HMDCloudZone.h"
#import "HMDCloudGroupChange.h"

@interface HMDCloudZoneChange : HMFObject

@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (weak, nonatomic) HMDCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, nonatomic) BOOL controllerIdentifierChanged;
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (readonly) BOOL doRecordsExistInCache;
@property (readonly, nonatomic) BOOL encryptionFailed;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *objectChanges;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (retain, nonatomic) HMDCloudGroupChange *rootGroupChange; // ivar: _rootGroupChange
@property (readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache; // ivar: _temporaryCache


+(id)shortDescription;
-(BOOL)doesRecordExistInCacheWithObjectID:(id)arg0 ;
-(BOOL)doesRecordExistWithObjectID:(id)arg0 ;
-(BOOL)moreChangesToProcess;
-(id)cachedCloudRecordWithObjectID:(id)arg0 ;
-(id)changeWithObjectID:(id)arg0 ;
-(id)changeWithRecordName:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithZone:(id)arg0 temporaryCache:(BOOL)arg1 ;
-(id)shortDescription;
-(void)addChangeWithDeletedRecordID:(id)arg0 ;
-(void)addChangeWithObjectChange:(id)arg0 ;
-(void)addChangeWithRecord:(id)arg0 ;
-(void)cachedCloudRecordWithObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchBatchToUpload:(id)arg0 ;
-(void)flushAllChangesToCache;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(id)arg0 ;
-(void)removeChangeWithObjectID:(id)arg0 ;
-(void)resetRecordWithRecordID:(id)arg0 ;
-(void)setAllChangedAsProcessed;
-(void)setDeleteAsProcessedWithRecordID:(id)arg0 ;
-(void)setSaveAsProcessedWithRecord:(id)arg0 ;


@end


#endif