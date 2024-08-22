// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDTRANSACTION_H
#define HMDCLOUDTRANSACTION_H

@class HMFObject, NSArray, NSUUID, HMFOSTransaction, CKRecordID, CKServerChangeToken;


#import "HMDCloudZone.h"
#import "HMDCloudZoneChange.h"
#import "HMDCloudChange.h"

@interface HMDCloudTransaction : HMFObject

@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (weak, nonatomic) HMDCloudZone *cloudZone; // ivar: _cloudZone
@property (retain, nonatomic) HMDCloudZoneChange *cloudZoneChange; // ivar: _cloudZoneChange
@property (readonly, nonatomic) BOOL controllerIdentifierChanged;
@property (nonatomic, getter=shouldCreateZone) BOOL createZone; // ivar: _createZone
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (nonatomic, getter=shouldDeleteZone) BOOL deleteZone; // ivar: _deleteZone
@property (readonly) BOOL doRecordsExistInCache;
@property (readonly, nonatomic) BOOL encryptionFailed;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (retain, nonatomic) HMDCloudChange *homeDataChange; // ivar: _homeDataChange
@property (readonly, nonatomic, getter=isHomeManagerTransaction) BOOL homeManagerTransaction;
@property (readonly, nonatomic, getter=isHomeTransaction) BOOL homeTransaction;
@property (nonatomic) BOOL iCloudSwitchStateEnabled; // ivar: _iCloudSwitchStateEnabled
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isLegacyTransaction) BOOL legacyTransaction;
@property (readonly, nonatomic, getter=isMetadataTransaction) BOOL metadataTransaction;
@property (nonatomic) BOOL needConflictResolution; // ivar: _needConflictResolution
@property (readonly, nonatomic) NSArray *objectChanges;
@property (retain, nonatomic) HMFOSTransaction *osTransaction; // ivar: _osTransaction
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (readonly, nonatomic) NSArray *recordsToDelete; // ivar: _recordsToDelete
@property (readonly, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache; // ivar: _temporaryCache
@property (nonatomic) NSUInteger transactionType; // ivar: _transactionType
@property (retain, nonatomic) CKServerChangeToken *updatedServerChangeToken; // ivar: _updatedServerChangeToken
@property (readonly, nonatomic) BOOL zoneHasNoLocalData; // ivar: _zoneHasNoLocalData
@property (nonatomic, getter=wasZoneCreated) BOOL zoneWasCreated; // ivar: _zoneWasCreated
@property (nonatomic, getter=wasZoneDeleted) BOOL zoneWasDeleted; // ivar: _zoneWasDeleted


+(id)shortDescription;
-(BOOL)doesRecordExistInCacheWithObjectID:(id)arg0 ;
-(BOOL)doesRecordExistWithObjectID:(id)arg0 ;
-(BOOL)moreChangesToProcess;
-(id)cachedCloudRecordWithObjectID:(id)arg0 ;
-(id)changeWithObjectID:(id)arg0 ;
-(id)changeWithRecordName:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 temporaryCache:(BOOL)arg1 ;
-(id)initWithType:(NSUInteger)arg0 temporaryCache:(BOOL)arg1 noLocalData:(BOOL)arg2 ;
-(id)replayTransaction:(id)arg0 stagedTransaction:(id)arg1 ;
-(id)shortDescription;
-(void)addChangeWithDeletedRecordID:(id)arg0 ;
-(void)addChangeWithObjectChange:(id)arg0 ;
-(void)addChangeWithRecord:(id)arg0 ;
-(void)cachedCloudRecordWithObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchBatchToUpload:(id)arg0 ;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(id)arg0 ;
-(void)loadObjectChanges;
-(void)removeChangeWithObjectID:(id)arg0 ;
-(void)resetRecordWithRecordID:(id)arg0 ;
-(void)setAllChangedAsProcessed;
-(void)setDeleteAsProcessedWithRecordID:(id)arg0 ;
-(void)setSaveAsProcessedWithRecord:(id)arg0 ;
-(void)updateCloudCache;
-(void)updateCloudZone:(id)arg0 ;


@end


#endif