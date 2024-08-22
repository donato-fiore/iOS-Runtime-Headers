// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIDATABASE_H
#define TRIDATABASE_H

@class NSString, _PASSqliteDatabase, NSUserDefaults, _PASKVOHandler;
@protocol _PASDatabaseMigrationProtocol, TRIPaths, TRIStorageManagementProtocol;

#import <Foundation/Foundation.h>


@interface TRIDatabase : NSObject <_PASDatabaseMigrationProtocol>

 {
    id<TRIPaths> *_paths;
    id<TRIStorageManagementProtocol> *_storageManagement;
    NSString *_databasePath;
    _PASSqliteDatabase *_db;
    NSUserDefaults *_defaults;
    _PASKVOHandler *_kvoHandler;
    uint8_t _isQueryPlanLoggingEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)dropTableWithName:(id)arg0 transaction:(id)arg1 ;
-(BOOL)migrateToVersion:(unsigned int)arg0 ;
-(BOOL)vacuum;
// -(id)createTempTableContainingRowsFromQuery:(id)arg0 bind:(id)arg1 namePrefix:(unk)arg2 transaction:(id)arg3  ;
-(id)databaseHandle;
-(id)generalErrorHandlerWithOutError:(SEL)arg0 ;
-(id)init;
-(id)initInMemoryAndPerformMigrations:(BOOL)arg0 ;
-(id)initWithPaths:(id)arg0 databasePath:(id)arg1 storageManagement:(id)arg2 performMigrations:(BOOL)arg3 ;
-(id)initWithPaths:(id)arg0 storageManagement:(id)arg1 ;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;
-(void)_disableQueryPlanLogging;
-(void)_enableQueryPlanLogging;
-(void)_updateQueryPlanLogging;
-(void)closePermanently;


@end


#endif