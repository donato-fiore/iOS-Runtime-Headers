// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVINDEXMANAGER_H
#define CKVINDEXMANAGER_H

@class NSDate, NSURL;
@protocol OS_dispatch_queue, CKVDatabaseReadOnlyAccess, CKVSkitReadAccess;

#import <Foundation/Foundation.h>

#import "CKVFilesystemBase.h"
#import "CKVSettings.h"
#import "CKVDatabaseConnection.h"
#import "CKVSkitWriter.h"
#import "CKVIndexMaintenanceLog.h"

@interface CKVIndexManager : NSObject {
    CKVFilesystemBase *_filesystemBase;
    NSObject<OS_dispatch_queue> *_queue;
    CKVSettings *_settings;
    CKVDatabaseConnection *_readWriteDatabase;
    CKVSkitWriter *_writeOnlySkit;
    CKVIndexMaintenanceLog *_maintenanceLog;
    NSDate *_migrationStartTime;
}


@property (readonly, nonatomic) NSURL *databaseFileURL; // ivar: _databaseFileURL
@property (retain) NSObject<CKVDatabaseReadOnlyAccess> *readOnlyDatabase; // ivar: _readOnlyDatabase
@property (retain) NSObject<CKVSkitReadAccess> *readOnlySkit; // ivar: _readOnlySkit
@property (readonly, nonatomic) NSURL *skitDirectoryURL; // ivar: _skitDirectoryURL


+(id)sharedInstance;
-(BOOL)_destroyAllState;
-(BOOL)_executeDatabaseTransactionBlock:(id)arg0 ;
-(BOOL)_executeSkitTransactionBlock:(id)arg0 ;
-(BOOL)_initiateMigration;
-(BOOL)_isDatabaseCreated;
-(BOOL)_isDatabaseSchemaIncompatible;
-(BOOL)_isReadOnlyDatabaseARealConnection;
-(BOOL)_isReadOnlySkitARealConnection;
-(BOOL)_isSkitDirectoryCreated;
-(BOOL)_setReadWriteDatabaseAccess;
-(BOOL)_setReadWriteDatabaseAccess:(*BOOL)arg0 ;
-(BOOL)_setWriteOnlySkitAccessWithFlushThreshold:(NSUInteger)arg0 ;
-(BOOL)_shouldCleanupDatabase:(id)arg0 ;
-(BOOL)destroyAllState;
-(BOOL)destroySkit;
-(BOOL)initiateMigration;
-(BOOL)submitDatabaseTransactionBlock:(id)arg0 ;
-(BOOL)submitSkitTransactionBlock:(id)arg0 ;
-(NSUInteger)_executeDatabaseAndSkitTransactionBlock:(id)arg0 ;
-(NSUInteger)performMaintenance;
-(NSUInteger)submitDatabaseAndSkitTransactionBlock:(id)arg0 ;
-(id)_maintenanceLog;
-(id)accessReadOnlyDatabase;
-(id)accessReadOnlySkit;
-(id)init;
-(id)initWithFilesystemBase:(id)arg0 settings:(id)arg1 ;
-(void)_closeAllConnections;
-(void)_ensureDatabaseReadWriteAccess;
-(void)_ensureSkitWriteAccessWithFlushThreshold:(NSUInteger)arg0 ;
-(void)closeAllConnections;
-(void)recordMigrationCompleted;
-(void)resetWithFilesystemBase:(id)arg0 ;


@end


#endif