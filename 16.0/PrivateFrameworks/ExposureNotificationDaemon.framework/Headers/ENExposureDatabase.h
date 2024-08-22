// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENEXPOSUREDATABASE_H
#define ENEXPOSUREDATABASE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "ENSQLiteConnection.h"

@interface ENExposureDatabase : NSObject {
    NSURL *_databaseURL;
}


@property (readonly, nonatomic) ENSQLiteConnection *connection; // ivar: _connection
@property (copy, nonatomic) id *errorMetricReporter; // ivar: _errorMetricReporter
@property (readonly, nonatomic) BOOL isOpen;


+(void)_obliterateDatabaseAtURL:(id)arg0 reason:(id)arg1 generateStackshot:(BOOL)arg2 ;
-(BOOL)_checkDatabaseOpenWithError:(*id)arg0 ;
-(BOOL)_createOrMigrateSchemaFromVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_createSchemaWithConnection:(id)arg0 error:(*id)arg1 ;
-(BOOL)_getExistingPersistentTemporaryExposureKey:(*id)arg0 rowID:(*NSInteger)arg1 keyData:(id)arg2 connection:(id)arg3 error:(*id)arg4 ;
-(BOOL)_insertAdvertisement:(id)arg0 keyRowID:(NSInteger)arg1 connection:(id)arg2 error:(*id)arg3 ;
-(BOOL)_insertExposureDetectionFile:(id)arg0 sessionID:(id)arg1 connection:(id)arg2 error:(*id)arg3 ;
-(BOOL)_insertOrUpdateExposureDetectionHistorySession:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(BOOL)_insertPersistentTemporaryExposureKey:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(BOOL)_reallyOpenDatabaseWithError:(*id)arg0 ;
-(BOOL)deleteExposureDetectionHistoryWithError:(*id)arg0 ;
-(BOOL)enumerateExposureDetectionHistoryFilesForSessionUUID:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)enumerateExposureDetectionHistorySessionsWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)enumerateMatchedAdvertisementsWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)getAdvertisementCount:(*unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)getValue:(*id)arg0 forKey:(id)arg1 ofClass:(Class)arg2 connection:(id)arg3 error:(*id)arg4 ;
-(BOOL)getValue:(*id)arg0 forKey:(id)arg1 ofClass:(Class)arg2 error:(*id)arg3 ;
-(BOOL)insertExposureDetectionFile:(id)arg0 session:(id)arg1 error:(*id)arg2 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)purgeRecordsWithInterval:(CGFloat)arg0 nowDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)setPropertyListValue:(id)arg0 forKey:(id)arg1 expiryDate:(id)arg2 error:(*id)arg3 ;
-(BOOL)setValue:(id)arg0 forKey:(id)arg1 expiryDate:(id)arg2 error:(*id)arg3 ;
-(BOOL)setValue:(id)arg0 forKey:(id)arg1 type:(NSInteger)arg2 expiryDate:(id)arg3 modDate:(id)arg4 connection:(id)arg5 error:(*id)arg6 ;
-(BOOL)upsertExposureDetectionHistorySession:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_updateExistingPersistentKeyIfNecessary:(id)arg0 replacementKey:(id)arg1 existingKeyID:(NSInteger)arg2 connection:(id)arg3 error:(*id)arg4 ;
-(NSInteger)insertMatchedAdvertisements:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)_advertisementWithRPIData:(id)arg0 encryptedAEMData:(id)arg1 timestamp:(NSInteger)arg2 scanInterval:(int)arg3 typicalRSSI:(int)arg4 maxRSSI:(int)arg5 saturated:(int)arg6 counter:(int)arg7 ;
-(id)_advertisementsForTemporaryExposureKeyRowID:(NSInteger)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(id)_initWithURL:(id)arg0 ;
-(id)_persistentTemporaryExposureKeyWithKeyData:(id)arg0 appBundleIdentifier:(id)arg1 regionCountryCode:(id)arg2 rollingStartNumber:(NSInteger)arg3 rollingPeriod:(NSInteger)arg4 daysSinceOnsetOfSymptoms:(NSInteger)arg5 diagnosisReportType:(int)arg6 originalReportType:(int)arg7 transmissionRiskLevel:(int)arg8 variantOfConcernType:(int)arg9 originalVariantOfConcernType:(int)arg10 ;
-(id)_sessionIDForUUID:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(id)advertisementCountsByTemporaryKeyDatasWithError:(*id)arg0 ;
-(id)initInMemoryDatabase;
-(id)initWithDirectoryURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_reportErrorMetric:(unsigned int)arg0 ;
-(void)_reportSQLiteResult:(int)arg0 ;
-(void)close;
-(void)purgeAllAndCloseWithReason:(id)arg0 ;


@end


#endif