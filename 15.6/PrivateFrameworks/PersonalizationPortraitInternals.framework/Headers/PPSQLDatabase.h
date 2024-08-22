// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPSQLDATABASE_H
#define PPSQLDATABASE_H

@class NSRecursiveLock, NSCondition, NSString;
@protocol _PASDatabaseMigrationProtocol;

#import <Foundation/Foundation.h>

#import "PPSQLDatabaseHandlePool.h"

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol>

 {
    NSRecursiveLock *_writeLock;
    PPSQLDatabaseHandlePool *_handlePool;
    NSCondition *_handlePoolCond;
    NSString *_path;
    NSString *_parentDirectory;
    unsigned char _migrationCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTempTableContainingRowsFromQuery:(id)arg0 descriptiveTableName:(id)arg1 txnWitness:(id)arg2 bind:(id)arg3 ;
+(id)createTempViewContainingRowsFromQuery:(id)arg0 descriptiveTableName:(id)arg1 txnWitness:(id)arg2 ;
+(id)nonMigratingToolsInstance;
+(id)nonMigratingToolsInstanceWithParentDirectory:(id)arg0 ;
+(id)sharedInstance;
+(id)tableNameForTable:(unsigned char)arg0 ;
+(void)dropTableWithName:(id)arg0 txnWitness:(id)arg1 ;
+(void)dropViewWithName:(id)arg0 txnWitness:(id)arg1 ;
-(BOOL)_handleCorruption;
-(BOOL)_isCorruptionMarkerPresent;
-(BOOL)_prepareDatabaseHandleForMigration;
-(BOOL)_removeCorruptionMarker;
-(BOOL)isInMemory;
-(BOOL)migrateToVersion:(unsigned int)arg0 ;
-(BOOL)optimizeDatabaseWithShouldContinueBlock:(id)arg0 ;
-(BOOL)unmigrate;
-(BOOL)vacuumDatabaseWithShouldContinueBlock:(id)arg0 ;
-(BOOL)writeTransactionWithClient:(unsigned char)arg0 timeoutInSeconds:(CGFloat)arg1 block:(id)arg2 ;
-(NSUInteger)maxSchemaVersion;
-(id)_acquireReadOnlyHandleWithClient:(unsigned char)arg0 ;
-(id)_allTables;
-(id)_initInStandardParentDirectoryWithPerformMigrations:(BOOL)arg0 ;
-(id)_initWithPath:(id)arg0 performMigrations:(BOOL)arg1 ;
-(id)_nullableHandleWithClient:(unsigned char)arg0 ;
-(id)_openFreshHandleForClient:(unsigned char)arg0 ;
-(id)checkWithError:(*id)arg0 ;
-(id)databaseHandle;
-(id)handleWithClient:(unsigned char)arg0 ;
-(id)init;
-(id)initWithParentDirectory:(id)arg0 performMigrations:(BOOL)arg1 ;
-(id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(BOOL)arg0 ;
-(id)migrations;
-(id)parentDirectory;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;
-(id)sourceStats:(NSUInteger)arg0 ;
-(id)sourceStats:(NSUInteger)arg0 forTableWithName:(id)arg1 txnWitness:(id)arg2 ;
-(id)stats;
-(unsigned char)migration_ConvertLocationDescriptionsToLowercase;
-(void)_disableQueryLoggingForHandle:(id)arg0 ;
-(void)_enableQueryLoggingForHandle:(id)arg0 ;
-(void)_releaseReadOnlyHandle:(id)arg0 client:(unsigned char)arg1 ;
-(void)readTransactionWithClient:(unsigned char)arg0 block:(id)arg1 ;
-(void)writeTransactionWithClient:(unsigned char)arg0 block:(id)arg1 ;


@end


#endif