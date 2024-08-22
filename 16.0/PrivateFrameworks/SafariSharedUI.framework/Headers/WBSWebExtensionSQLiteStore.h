// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONSQLITESTORE_H
#define WBSWEBEXTENSIONSQLITESTORE_H

@class NSString, WBSSQLiteDatabase, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionSQLiteStore : NSObject {
    NSString *_composedIdentifier;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    BOOL _useInMemoryDatabase;
}


@property (readonly, nonatomic) int _currentDatabaseSchemaVersion;
@property (readonly, nonatomic) NSURL *_databaseURL;
@property (readonly, nonatomic) BOOL useInMemoryDatabase;


+(id)_urlForExtensionStorageFolderWithIdentifier:(id)arg0 ;
+(void)deleteStorageForComposedIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_isDatabaseEmpty;
-(BOOL)_isDatabaseOpen;
-(BOOL)_openDatabaseIfNecessaryReturningErrorMessage:(*id)arg0 ;
-(id)_deleteDatabase;
-(id)_deleteDatabaseFileAtURL:(id)arg0 reopenDatabase:(BOOL)arg1 ;
-(id)_deleteDatabaseIfEmpty;
-(id)_handleSchemaVersioningWithDeleteDatabaseFileOnError:(BOOL)arg0 ;
-(id)_openDatabase:(id)arg0 deleteDatabaseFileOnError:(BOOL)arg1 ;
-(id)_savepointNameFromUUID:(id)arg0 ;
-(id)initWithComposedIdentifier:(id)arg0 usesInMemoryDatabase:(BOOL)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_resetDatabaseSchema;
-(int)_setDatabaseSchemaVersion:(int)arg0 ;
-(void)_deleteExtensionStorageFolderIfEmpty;
-(void)_vacuum;
-(void)commitSavepoint:(id)arg0 completionHandler:(id)arg1 ;
-(void)createSavepointWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteDatabaseWithCompletionHandler:(id)arg0 ;
-(void)rollbackToSavepoint:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif