// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONREGISTEREDCONTENTSCRIPTSSQLITESTORE_H
#define WBSWEBEXTENSIONREGISTEREDCONTENTSCRIPTSSQLITESTORE_H



#import "WBSWebExtensionSQLiteStore.h"

@interface WBSWebExtensionRegisteredContentScriptsSQLiteStore : WBSWebExtensionSQLiteStore



-(BOOL)_isDatabaseEmpty;
-(id)_databaseURL;
-(id)_getKeysAndValuesFromRowEnumerator:(id)arg0 ;
-(id)_getScriptsWithOutErrorMessage:(*id)arg0 ;
-(id)init;
-(id)initWithComposedIdentifier:(id)arg0 usesInMemoryDatabase:(BOOL)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_currentDatabaseSchemaVersion;
-(int)_resetDatabaseSchema;
-(void)_insertScript:(id)arg0 inDatabase:(id)arg1 errorMessage:(*id)arg2 ;
-(void)addScripts:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteScripts:(id)arg0 completionHandler:(id)arg1 ;
-(void)getRegisteredContentScriptsFromStorageWithCompletionHandler:(id)arg0 ;
-(void)updateRegisteredContentScriptsInStorageByRemovingIDs:(id)arg0 addScripts:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif