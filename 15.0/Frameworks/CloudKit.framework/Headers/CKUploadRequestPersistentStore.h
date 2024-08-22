// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKUPLOADREQUESTPERSISTENTSTORE_H
#define CKUPLOADREQUESTPERSISTENTSTORE_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKUploadRequestPersistentStore : NSObject

@property (retain, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (nonatomic) BOOL firstInvocation; // ivar: _firstInvocation
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue


+(id)repairRecordToMetadata:(id)arg0 ;
-(NSInteger)delayedSyncCountForRecordName:(id)arg0 ;
-(id)allData;
-(id)assetRepairMetadata;
-(id)currentUser;
-(id)delayedSyncDateForRecord:(id)arg0 ;
-(id)delayedSyncRecordNamesAfterDate:(id)arg0 ;
-(id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)arg0 ;
-(id)earliestDelayedSyncDateAfterDate:(id)arg0 ;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)lastFetchDate;
-(id)metadataForRecordName:(id)arg0 ;
-(id)packageRepairMetadata;
-(id)sortedDelayedSyncRecordsForDatabase:(id)arg0 ;
-(id)syncEngineMetadata;
-(id)unarchivedObjectOfClass:(Class)arg0 fromData:(id)arg1 error:(*id)arg2 ;
-(void)clearDatabase;
-(void)clearDelayedSyncRecords;
-(void)clearRepairRecords;
-(void)deleteDatabase;
-(void)deleteDelayedSyncForRecordName:(id)arg0 ;
-(void)deleteRepairRecord:(id)arg0 ;
-(void)markRecordNameUnrecoverable:(id)arg0 ;
-(void)persistDelayedSyncForRecordName:(id)arg0 withDate:(id)arg1 increasingCount:(BOOL)arg2 ;
-(void)persistRepairRecord:(id)arg0 ;
-(void)persistSyncEngineMetadata:(id)arg0 ;
// -(void)readDatabase:(id)arg0 async:(unk)arg1 withCompletionHandler:(BOOL)arg2  ;
// -(void)readWriteDatabase:(id)arg0 async:(unk)arg1 withCompletionHandler:(BOOL)arg2  ;
-(void)setCurrentUser:(id)arg0 ;
-(void)setLastFetchDate:(id)arg0 ;


@end


#endif