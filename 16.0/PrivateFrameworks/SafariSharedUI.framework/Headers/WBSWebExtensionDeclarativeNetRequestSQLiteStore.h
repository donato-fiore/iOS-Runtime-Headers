// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONDECLARATIVENETREQUESTSQLITESTORE_H
#define WBSWEBEXTENSIONDECLARATIVENETREQUESTSQLITESTORE_H



#import "WBSWebExtensionSQLiteStore.h"

@interface WBSWebExtensionDeclarativeNetRequestSQLiteStore : WBSWebExtensionSQLiteStore



-(BOOL)_isDatabaseEmpty;
-(id)_databaseURL;
-(id)_getKeysAndValuesFromRowEnumerator:(id)arg0 ;
-(id)_getRulesWithOutErrorMessage:(*id)arg0 ;
-(id)_insertRule:(id)arg0 inDatabase:(id)arg1 ;
-(id)init;
-(id)initWithComposedIdentifier:(id)arg0 usesInMemoryDatabase:(BOOL)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_currentDatabaseSchemaVersion;
-(int)_resetDatabaseSchema;
-(void)addRules:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteRules:(id)arg0 completionHandler:(id)arg1 ;
-(void)getRulesWithCompletionHandler:(id)arg0 ;
-(void)updateRulesByRemovingIDs:(id)arg0 addRules:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif