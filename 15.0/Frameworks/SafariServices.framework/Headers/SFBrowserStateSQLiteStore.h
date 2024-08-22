// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBROWSERSTATESQLITESTORE_H
#define SFBROWSERSTATESQLITESTORE_H

@class NSURL, WBSSQLiteDatabase, NSMutableDictionary, WBSSQLiteStatement, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFBrowserStateSQLiteStore : NSObject {
    NSURL *_databaseURL;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSMutableDictionary *_tabUUIDStrings;
    NSMutableDictionary *_browserWindowDatabaseIDs;
    WBSSQLiteStatement *_cachedTabDeleteStatement;
    BOOL _generateUUIDFunctionAttached;
}


@property (readonly, copy, nonatomic) NSArray *browserWindows;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedWindows;


-(BOOL)_checkDatabaseIntegrity;
-(BOOL)_isDatabaseOpen;
-(BOOL)_isTabStateCached:(id)arg0 ;
-(BOOL)_updateTabStateWithData:(id)arg0 ;
-(BOOL)deleteAllSavedStates;
-(BOOL)deleteTabStateWithBrowserWindowUUID:(id)arg0 andRemoveWindow:(BOOL)arg1 ;
-(BOOL)updateSceneID:(id)arg0 ;
-(NSInteger)_databaseIDForBrowserWindow:(id)arg0 ;
-(NSInteger)_saveBrowserWindowStateWithData:(id)arg0 ;
-(NSInteger)_saveBrowserWindowStateWithDictionary:(id)arg0 ;
-(id)_readSavedSessionStateDataForTabWithUUIDString:(id)arg0 ;
-(id)_sqliteStatementForTabDeleting;
-(id)_tabStateDataForUUID:(id)arg0 ;
-(id)_tabUUIDsInWindow:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)readSavedSessionStateDataForTabWithUUIDString:(id)arg0 ;
-(id)tabStateDataForUUID:(id)arg0 ;
-(id)tabStatesWithBrowserWindowUUID:(id)arg0 ;
-(int)_createFreshDatabaseSchema;
-(int)_createTableForTabSession;
-(int)_createTableForTabs;
-(int)_mergeAllWindowsIfNeeded;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_migrateToSchemaVersion:(int)arg0 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion_5;
-(int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
-(int)_schemaVersion;
-(int)_setDatabaseSchemaVersion:(int)arg0 ;
-(void)_cacheUUIDForTabStateData:(id)arg0 ;
-(void)_closeDatabase;
-(void)_insertTabStateWithData:(id)arg0 ;
-(void)_migrateFromLegacyPlistIfNeeded;
-(void)_migrateFromLegacyPlistWithPath:(id)arg0 ;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg0 ;
-(void)_readTabStatesWithBrowserWindowUUID:(id)arg0 completion:(id)arg1 ;
-(void)_regenerateTabUUIDsForDeviceRestoration;
-(void)_removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg0 ;
-(void)_setDatabaseID:(NSInteger)arg0 browserWindow:(id)arg1 ;
-(void)_updateBrowserWindowStateWithDictionary:(id)arg0 ;
-(void)_updateBrowserWindowWithData:(id)arg0 tabs:(id)arg1 ;
-(void)_updateOrInsertTabStateWithData:(id)arg0 ;
-(void)_vacuum;
-(void)checkPointWriteAheadLog;
-(void)closeDatabase;
-(void)dealloc;
-(void)deleteAllRecentlyClosedWindows;
-(void)mergeAllWindows;
-(void)readTabStatesWithBrowserWindowUUID:(id)arg0 completion:(id)arg1 ;
-(void)regenerateTabUUIDsForDeviceRestoration;
-(void)removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg0 ;
-(void)removeTabWithTabData:(id)arg0 ;
-(void)saveTabStateWithDictionary:(id)arg0 ;
-(void)setSecureDeleteEnabled:(BOOL)arg0 ;
-(void)updateBrowserWindowStateWithDictionary:(id)arg0 completion:(id)arg1 ;
-(void)updateBrowserWindowWithData:(id)arg0 tabs:(id)arg1 ;
-(void)updateTabWithTabStateData:(id)arg0 ;


@end


#endif