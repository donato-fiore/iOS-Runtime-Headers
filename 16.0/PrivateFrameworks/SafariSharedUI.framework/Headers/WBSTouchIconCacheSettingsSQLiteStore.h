// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTOUCHICONCACHESETTINGSSQLITESTORE_H
#define WBSTOUCHICONCACHESETTINGSSQLITESTORE_H



#import "WBSSiteMetadataImageCacheSettingsSQLiteStore.h"

@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore



+(Class)cacheSettingsEntryClass;
+(NSInteger)databaseSchemaVersion;
-(id)_createNewDatabaseSQLiteStatement;
-(id)_deleteAllEntriesSQLiteStatement;
-(id)_deleteEntrySQLiteStatementWithHost:(id)arg0 ;
-(id)_insertEntrySQLiteStatementWithEntry:(id)arg0 ;
-(id)_selectAllEntriesSQLiteStatement;
-(id)_selectEntrySQLiteStatementWithHost:(id)arg0 ;
-(id)_statementsForMigrationToSchemaVersion:(NSInteger)arg0 ;
-(id)_updateEntrySQLiteStatementWithEntry:(id)arg0 ;


@end


#endif