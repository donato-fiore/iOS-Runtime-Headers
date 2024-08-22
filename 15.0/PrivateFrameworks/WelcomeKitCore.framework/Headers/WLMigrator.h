// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLMIGRATOR_H
#define WLMIGRATOR_H

@protocol WLDataMigratorProtocol, WLMigrationDataSource;

#import <Foundation/Foundation.h>

#import "WLSocketHandler.h"
#import "WLSafeHarborManager.h"

@interface WLMigrator : NSObject <WLDataMigratorProtocol>



@property (weak, nonatomic) WLSocketHandler *activeSocketHandler; // ivar: _activeSocketHandler
@property (retain, nonatomic) NSObject<WLMigrationDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) WLSafeHarborManager *safeHarborManager; // ivar: _safeHarborManager


+(BOOL)_shouldContinueMigrationFromAnotherDevice;
+(BOOL)_shouldTerminateMigrationBeforeImport;
+(BOOL)stashDataLocally;
+(NSUInteger)_bytesFreeOnDevice;
+(id)_dataTypesAndSizesXMLDataFromMap:(id)arg0 ;
+(id)_systemVersion;
+(void)_parseDataTypesXMLData:(id)arg0 completion:(id)arg1 ;
+(void)_presentPromptForMigrableApps:(id)arg0 ;
+(void)setStashDataLocally:(BOOL)arg0 ;
-(BOOL)_shouldForceDownloadError;
-(BOOL)_shouldTerminateMigrationOnError;
-(CGFloat)_didFinishDownloadingSegmentOfSize:(NSUInteger)arg0 expectedSize:(NSUInteger)arg1 migratorEstimatesItemSizes:(BOOL)arg2 endDate:(id)arg3 context:(id)arg4 ;
-(CGFloat)_progressIncrementForImportedSummary:(id)arg0 summaries:(id)arg1 accounts:(id)arg2 migrators:(id)arg3 ;
-(id)_downloadDataWithContext:(id)arg0 failureDetailsBlock:(id)arg1 ;
-(id)_fetchAccountsAndSummariesWithContext:(id)arg0 ;
-(id)_importDataWithContext:(id)arg0 failureDetailsBlock:(id)arg1 ;
-(id)_selectDataTypesWithContext:(id)arg0 ;
-(id)downloadData:(id)arg0 ;
-(id)fetchSummary:(id)arg0 ;
-(id)finishMigration:(id)arg0 ;
-(id)importData:(id)arg0 ;
-(id)init;
-(id)migrators:(id)arg0 ;
-(id)prepare:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)runPostMigrationTasks:(id)arg0 ;
-(id)selectDataTypes:(id)arg0 ;
-(void)_cleanUpAfterFinalizeMigratableAppsWithSQLController:(id)arg0 completion:(id)arg1 ;
-(void)_deleteDownloadsPath:(id)arg0 ;
-(void)_finishMigrationWithError:(id)arg0 context:(id)arg1 disconnected:(BOOL)arg2 completion:(id)arg3 ;
-(void)_incrementProgressBy:(CGFloat)arg0 context:(id)arg1 ;
-(void)_logStatisticsAndSendStatisticsTelemetryWithContext:(id)arg0 ;
-(void)_prepareMetadata:(id)arg0 usingRetryPolicies:(BOOL)arg1 allowContinuationFromAnotherDevice:(BOOL)arg2 ;
-(void)_reportTimeEstimatesWithContext:(id)arg0 ;
-(void)_selectFromDataTypeToSizeMap:(id)arg0 device:(id)arg1 completion:(id)arg2 ;
-(void)_setProgressTo:(CGFloat)arg0 context:(id)arg1 ;
-(void)_updateSourceWithProgress:(CGFloat)arg0 remainingTime:(CGFloat)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)cleanup;
-(void)close:(id)arg0 ;
-(void)connectionDidEnd;
-(void)dealloc;
-(void)deleteMessages;
-(void)finalizeMigratableAppsWithCompletion:(id)arg0 ;
-(void)startMigration:(id)arg0 usingRetryPolicies:(BOOL)arg1 completion:(id)arg2 ;
-(void)startMigrationWithSourceDevice:(id)arg0 usingRetryPolicies:(BOOL)arg1 delegate:(id)arg2 completion:(id)arg3 ;


@end


#endif