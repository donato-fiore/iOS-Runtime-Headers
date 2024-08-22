// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENADVERTISEMENTSQLITESTORE_H
#define ENADVERTISEMENTSQLITESTORE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface ENAdvertisementSQLiteStore : NSObject {
    *sqlite3 _database;
    ? _preparedStatements;
}


@property (retain, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, nonatomic) NSNumber *storedAdvertisementCount; // ivar: _storedAdvertisementCount


+(BOOL)isCentralStore:(id)arg0 ;
+(BOOL)isStore:(id)arg0 ;
+(BOOL)isTemporaryStore:(id)arg0 ;
+(BOOL)removeAllDatabaseFilesWithDatabasePath:(id)arg0 ;
+(BOOL)removeAllStoresFromDiskWithFolderPath:(id)arg0 ;
+(BOOL)removeAllTemporaryStoresFromDiskWithFolderPath:(id)arg0 lastModifiedBeforeDate:(id)arg1 ;
+(BOOL)storesPresentInFolderPath:(id)arg0 ;
+(BOOL)temporaryStoresPresentInFolderPath:(id)arg0 ;
+(id)centralStoreInFolderPath:(id)arg0 error:(*id)arg1 ;
+(id)errorForSQLiteResult:(int)arg0 ;
+(id)statementStringForStatementType:(NSUInteger)arg0 ;
+(id)storePathsInFolderPath:(id)arg0 ;
+(id)temporaryStoreInFolderPath:(id)arg0 error:(*id)arg1 ;
+(id)temporaryStorePathsInFolderPath:(id)arg0 ;
+(id)temporaryStoresInFolderPath:(id)arg0 ;
+(struct ? )advertisementForSQLiteStatement:(struct sqlite3_stmt *)arg0 ;
+(void)enumerateTemporaryStoresInFolderPath:(id)arg0 handler:(id)arg1 ;
-(?)getAdvertisementsMatchingRPIBuffer:(?)arg0 count:(?)arg1 validityBuffer:(?)arg2 validRPICount:(?)arg3 matchingAdvertisementBuffererror;
-(BOOL)cloneStoreTo:(id)arg0 ;
-(BOOL)connectToDatabaseAndReturnError:(*id)arg0 ;
-(BOOL)importContentsOfStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)purgeAdvertismentsRecordedPriorToDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)purgeAndRemoveFromDisk:(BOOL)arg0 ;
-(BOOL)refreshStoredAdvertismentCountWithError:(*id)arg0 ;
-(BOOL)saveContactTracingAdvertisementBuffer:(struct ? *)arg0 count:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)transactionNeededForMigrationFromVersion:(int)arg0 ;
-(id)beaconCountMetricsWithStartDate:(id)arg0 endDate:(id)arg1 windowDuration:(CGFloat)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 error:(*id)arg1 ;
-(id)queryFilterWithBufferSize:(NSUInteger)arg0 hashCount:(NSUInteger)arg1 attenuationThreshold:(unsigned char)arg2 ;
-(int)beginDatabaseTransaction;
-(int)bindAdvertisement:(struct ? )arg0 toSQLiteStatement:(struct sqlite3_stmt *)arg1 ;
-(int)bindRPIBuffer:(*void)arg0 count:(NSUInteger)arg1 validityBuffer:(*void)arg2 validRPICount:(NSUInteger)arg3 toSQLiteStatement:(struct sqlite3_stmt *)arg4 ;
-(int)checkpointWAL;
-(int)closeDatabase;
-(int)configureDatabase;
-(int)endDatabaseTransaction;
-(int)enumerateAdvertisments:(id)arg0 ;
-(int)initializeAdvertisementTable;
-(int)initializePreparedStatements;
-(int)initializeRPIBufferModule;
-(int)migrateDatabase;
-(int)migrateFromVersion:(int)arg0 ;
-(int)openDatabase;
-(int)rollbackDatabaseTransaction;
-(int)setVersionCurrent;
-(struct sqlite3_stmt *)preparedStatementOfType:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)disconnectFromDatabase;
-(void)enumeratePreparedStatements:(id)arg0 ;


@end


#endif