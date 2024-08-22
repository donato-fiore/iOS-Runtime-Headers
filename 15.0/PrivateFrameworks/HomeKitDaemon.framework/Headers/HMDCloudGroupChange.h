// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDGROUPCHANGE_H
#define HMDCLOUDGROUPCHANGE_H

@class HMFObject, NSArray, NSMutableArray;


#import "HMDCloudChangeTree.h"
#import "HMDCloudGroup.h"
#import "HMDCloudManagerMetricsDispatcher.h"

@interface HMDCloudGroupChange : HMFObject

@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (retain, nonatomic) HMDCloudChangeTree *cloudChangeTree; // ivar: _cloudChangeTree
@property (retain, nonatomic) NSMutableArray *cloudChanges; // ivar: _cloudChanges
@property (readonly, weak, nonatomic) HMDCloudGroup *cloudGroup; // ivar: _cloudGroup
@property (nonatomic) BOOL controllerIdentifierChanged; // ivar: _controllerIdentifierChanged
@property (nonatomic) BOOL decryptionFailed; // ivar: _decryptionFailed
@property (readonly) BOOL doRecordsExistInCache;
@property (nonatomic) BOOL encryptionFailed; // ivar: _encryptionFailed
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (readonly) HMDCloudManagerMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly, nonatomic) NSArray *objectChanges;
@property (retain, nonatomic) NSMutableArray *processedCloudChanges; // ivar: _processedCloudChanges
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (retain, nonatomic) NSMutableArray *processingCloudChanges; // ivar: _processingCloudChanges
@property (readonly, nonatomic, getter=isRootRecordRequired) BOOL rootRecordRequired;
@property (readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache; // ivar: _temporaryCache


+(id)shortDescription;
-(BOOL)isRootRecord:(id)arg0 ;
-(BOOL)isRootRecordName:(id)arg0 ;
-(BOOL)moreChangesToProcess;
-(id)cachedCloudRecordWithObjectID:(id)arg0 ;
-(id)changeWithObjectID:(id)arg0 ;
-(id)changeWithRecordName:(id)arg0 ;
-(id)cloudRecordWithName:(id)arg0 ;
-(id)cloudRecordWithObjectID:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithGroup:(id)arg0 temporaryCache:(BOOL)arg1 ;
-(id)initWithGroup:(id)arg0 temporaryCache:(BOOL)arg1 metricsDispatcher:(id)arg2 ;
-(id)rootRecordModelObject;
-(id)shortDescription;
-(void)_addChangeWithDeletedCloudRecord:(id)arg0 ;
-(void)_initializeCloudChanges;
-(void)_loadTreeWithRecordMapping:(id)arg0 ;
-(void)_removeChange:(id)arg0 ;
-(void)addChange:(id)arg0 setAsProcessing:(BOOL)arg1 ;
-(void)addChangeWithDeletedRecordID:(id)arg0 ;
-(void)addChangeWithObjectChange:(id)arg0 ;
-(void)addChangeWithRecord:(id)arg0 ;
-(void)addRootRecordChange;
-(void)cachedCloudRecordWithObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)collectRecordsForBatch;
-(void)fetchBatchToUpload:(id)arg0 ;
-(void)flushAllChangesToCache;
-(void)loadCloudChangeTreeFromCache:(id)arg0 ;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(id)arg0 ;
-(void)loadCloudRecordsFromCache:(id)arg0 ;
-(void)removeChangeWithObjectID:(id)arg0 ;
-(void)resetRecordWithRecordID:(id)arg0 ;
-(void)setAllChangedAsProcessed;
-(void)setAsProcessedChange:(id)arg0 ;
-(void)setDeleteAsProcessedWithRecordID:(id)arg0 ;
-(void)setSaveAsProcessedWithRecord:(id)arg0 ;


@end


#endif