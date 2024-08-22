// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONSQLITESTORE_H
#define WBSWEBEXTENSIONSQLITESTORE_H

@class NSString, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionSQLiteStore : NSObject {
    NSString *_composedIdentifier;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSInteger _storageType;
    BOOL _useInMemoryDatabase;
}




+(id)_urlForExtensionStorageFolderWithIdentifier:(id)arg0 ;
+(void)deleteStorageForComposedIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_isDatabaseEmpty;
-(BOOL)_isDatabaseOpen;
-(BOOL)_openDatabaseIfNecessaryReturningErrorMessage:(*id)arg0 ;
-(CGFloat)_calculateStorageSizeForKeysAndValues:(id)arg0 ;
-(id)_deleteDatabase;
-(id)_deleteDatabaseFileAtURL:(id)arg0 reopenDatabase:(BOOL)arg1 ;
-(id)_deleteDatabaseIfEmpty;
-(id)_getKeysAndValuesFromRowEnumerator:(id)arg0 ;
-(id)_getValuesForAllKeysReturningErrorMessage:(*id)arg0 ;
-(id)_getValuesForKeys:(id)arg0 outErrorMessage:(*id)arg1 ;
-(id)_insertOrUpdateValue:(id)arg0 forKey:(id)arg1 inDatabase:(id)arg2 ;
-(id)_openDatabase:(id)arg0 deleteDatabaseFileOnError:(BOOL)arg1 ;
-(id)_urlForDatabaseOfType:(NSInteger)arg0 ;
-(id)initForTestingWithType:(NSInteger)arg0 composedIdentifier:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 composedIdentifier:(id)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_resetDatabaseSchema;
-(int)_setDatabaseSchemaVersion:(int)arg0 ;
-(void)_commonInitWithType:(NSInteger)arg0 composedIdentifier:(id)arg1 ;
-(void)_deleteExtensionStorageFolderIfEmpty;
-(void)_vacuum;
-(void)dealloc;
-(void)deleteDatabaseWithCompletionHandler:(id)arg0 ;
-(void)deleteValuesForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStorageSizeForAllKeysIncludingKeyedData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getStorageSizeForAllKeysWithCompletionHandler:(id)arg0 ;
-(void)getStorageSizeForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)getValuesForAllKeysWithCompletionHandler:(id)arg0 ;
-(void)getValuesForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)setKeyedData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif