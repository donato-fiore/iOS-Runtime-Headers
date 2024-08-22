// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONSTORAGEAPISQLITESTORE_H
#define WBSWEBEXTENSIONSTORAGEAPISQLITESTORE_H

@class NSString;
@protocol WBSWebExtensionStorageProtocol;


#import "WBSWebExtensionSQLiteStore.h"

@interface WBSWebExtensionStorageAPISQLiteStore : WBSWebExtensionSQLiteStore <WBSWebExtensionStorageProtocol>

 {
    NSInteger _storageType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isDatabaseEmpty;
-(id)_databaseURL;
-(id)_getKeysAndValuesFromRowEnumerator:(id)arg0 ;
-(id)_getValuesForAllKeysReturningErrorMessage:(*id)arg0 ;
-(id)_getValuesForKeys:(id)arg0 outErrorMessage:(*id)arg1 ;
-(id)_insertOrUpdateValue:(id)arg0 forKey:(id)arg1 inDatabase:(id)arg2 ;
-(id)initForTestingWithType:(NSInteger)arg0 composedIdentifier:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 composedIdentifier:(id)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_currentDatabaseSchemaVersion;
-(int)_resetDatabaseSchema;
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