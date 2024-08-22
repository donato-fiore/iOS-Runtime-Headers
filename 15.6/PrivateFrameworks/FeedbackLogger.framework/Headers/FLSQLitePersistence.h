// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLSQLITEPERSISTENCE_H
#define FLSQLITEPERSISTENCE_H

@class NSDate, NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "FLLoggingContext.h"

@interface FLSQLitePersistence : NSObject

@property (nonatomic) CGFloat batchMaximumDuration; // ivar: _batchMaximumDuration
@property (nonatomic) uint8_t configured; // ivar: _configured
@property (retain, nonatomic) FLLoggingContext *context; // ivar: _context
@property (copy, nonatomic) NSDate *currentBatchCreationDate; // ivar: _currentBatchCreationDate
@property (copy, nonatomic) NSString *currentBatchIdentifier; // ivar: _currentBatchIdentifier
@property (nonatomic) NSUInteger currentBatchPayloadSize; // ivar: _currentBatchPayloadSize
@property (readonly, copy, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (nonatomic) *sqlite3 db; // ivar: _db
@property (nonatomic) *sqlite3_stmt insertRecordsStatement; // ivar: _insertRecordsStatement
@property (nonatomic) *sqlite3_stmt iteratePayloadStatement; // ivar: _iteratePayloadStatement
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSUInteger maxAllowedDatabaseSizeInBytes; // ivar: _maxAllowedDatabaseSizeInBytes
@property (nonatomic) NSUInteger maxBatchPayloadInBytes; // ivar: _maxBatchPayloadInBytes
@property (readonly, copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier


+(id)batchStatusDescription:(int)arg0 ;
+(id)uploadStatusDescription:(int)arg0 ;
-(?)tryPreparepreparedStatement;
-(BOOL)__deleteStatementHelper:(char *)arg0 forUploadId:(id)arg1 ;
-(BOOL)__purgeStatementHelper:(char *)arg0 forBatchId:(id)arg1 ;
-(BOOL)_updateMetadataHelperForBatch:(id)arg0 query:(char *)arg1 ;
-(BOOL)_updateMetadataHelperForUpload:(id)arg0 query:(char *)arg1 ;
-(BOOL)_updateStatusHelperForBatch:(id)arg0 toStatus:(int)arg1 ;
-(BOOL)_updateStatusHelperForUpload:(id)arg0 toStatus:(int)arg1 ;
-(BOOL)closeAllBatches;
-(BOOL)closeOpenBatch;
-(BOOL)closeOrphanedBatches;
-(BOOL)createDatabase;
-(BOOL)deleteAllUploads;
-(BOOL)deleteDatabase;
-(BOOL)deleteUploadWithIdentifier:(id)arg0 ;
-(BOOL)executeInTransactionMultipleSQLStatements:(id)arg0 ;
-(BOOL)executeSQLStatement:(char *)arg0 ;
-(BOOL)executeSQLStatement:(char *)arg0 usingTransaction:(BOOL)arg1 ;
-(BOOL)forceCloseOpenBatches;
-(BOOL)getBatchMetadata:(id)arg0 batchMetadata:(*id)arg1 ;
-(BOOL)getIntValueForPragma:(id)arg0 into:(*int)arg1 ;
-(BOOL)initializeConnectionForUseBy:(int)arg0 ;
-(BOOL)initializeNewBatch;
-(BOOL)isSchemaReady;
-(BOOL)iteratePayloadForBatch:(id)arg0 codeblock:(id)arg1 ;
-(BOOL)iterateUploadsWithCodeblock:(id)arg0 ;
-(BOOL)markBatchesforPurge;
-(BOOL)markUploadsForPurge;
-(BOOL)open;
-(BOOL)prepareSchema;
-(BOOL)purgeAllBatches;
-(BOOL)purgeBatch:(id)arg0 ;
-(BOOL)recoverOrphanedProcessingBatches;
-(BOOL)recoverOrphanedProcessingUploads;
-(BOOL)setDatabaseSizeLimit;
-(BOOL)tryRolloverBatchIfNecessary:(NSUInteger)arg0 ;
-(BOOL)updateSchema;
-(BOOL)updateStatusForBatch:(id)arg0 toStatus:(int)arg1 ;
-(BOOL)updateStatusForUpload:(id)arg0 toStatus:(int)arg1 ;
-(NSInteger)cleanupPurgableUploads;
-(NSInteger)doBatchesHousekeeping;
-(NSInteger)doUploadHousekeeping;
-(NSInteger)maxRowId;
-(NSUInteger)getCurrentDatabaseSize;
-(id)_getBatchIdsHelper:(struct sqlite3_stmt *)arg0 ;
-(id)_getUploadIdsHelper:(struct sqlite3_stmt *)arg0 ;
-(id)getBatchIdsWithAllStatuses;
-(id)getBatchIdsWithStatus:(int)arg0 ;
-(id)getPurgableBatchIds;
-(id)getPurgableUploadIds;
-(id)getRecordsRangeStart:(NSInteger)arg0 end:(NSInteger)arg1 ;
-(id)getUploadIdsWithAllStatuses;
-(id)getUploadIdsWithStatus:(int)arg0 ;
-(id)getUploadRecordWithId:(id)arg0 ;
-(id)getUploadsRangeStart:(NSInteger)arg0 end:(NSInteger)arg1 ;
-(id)initWithStoreId:(id)arg0 loggingContext:(id)arg1 ;
-(id)persist:(id)arg0 ;
-(id)persistUploadPayload:(id)arg0 ;
-(id)registerInsertionObserver:(id)arg0 ;
-(int)getDataVersion;
-(int)getSchemaVersion;
-(void)dealloc;
-(void)observeInsertionAtRow:(NSInteger)arg0 observer:(id)arg1 ;


@end


#endif