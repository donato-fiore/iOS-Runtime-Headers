// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBBOOKMARKTABCOLLECTION_H
#define WEBBOOKMARKTABCOLLECTION_H

@class NSArray;


#import "WebBookmarkCollection.h"
#import "WBWindowState.h"
#import "WebBookmarkList.h"

@interface WebBookmarkTabCollection : WebBookmarkCollection {
    int _cachedPinnedTabsFolderID;
    int _cachedPrivatePinnedTabsFolderID;
}


@property (nonatomic) BOOL containsCKShareRecord;
@property (readonly, nonatomic) WBWindowState *lastClosedWindowState;
@property (readonly, copy, nonatomic) NSArray *lastSessionWindowStates;
@property (readonly, copy, nonatomic) NSArray *pinnedTabs;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSArray *privatePinnedTabs;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, copy, nonatomic) WebBookmarkList *recentlyClosedTabList;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedWindowStates;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly, copy, nonatomic) NSArray *windows;
@property (readonly, nonatomic) int windowsFolderSpecialID;


+(BOOL)isLockedSync;
+(BOOL)lockSync;
+(id)_syncLockFileName;
+(id)inMemoryChangeSet;
+(id)inMemoryChangesFileURL;
+(void)unlockSync;
-(BOOL)_clearAllSyncData;
-(BOOL)_createTopScopedBookmarkListForTabGroup:(id)arg0 ;
-(BOOL)_deleteAllLocalTabsAndGroups;
-(BOOL)_deleteAllWindowStates;
-(BOOL)_deleteMatchingWindows:(id)arg0 logAsError:(BOOL)arg1 ;
-(BOOL)_deleteWindowState:(id)arg0 ;
-(BOOL)_deleteWindowState:(id)arg0 forApplyingInMemoryChanges:(BOOL)arg1 ;
-(BOOL)_fixLocalBookmarksInSyncableFolders;
-(BOOL)_generateServerIdIfNeededForTabGroup:(id)arg0 ;
-(BOOL)_generateServerIdIfNeededForTabGroupBookmark:(id)arg0 ;
-(BOOL)_markTabsClosed:(id)arg0 ;
-(BOOL)_markWindowStatesAsLastSession:(id)arg0 ;
-(BOOL)_performOSVersionUpgradesFromPreviousVersion:(id)arg0 ;
-(BOOL)_performSafariVersionUpgradesFromPreviousVersion:(id)arg0 ;
-(BOOL)_regenerateSyncPositionsIfNeeded;
-(BOOL)_removePlaceholderTabGroupRecordsOnUpgrade;
-(BOOL)_restoreMissingSpecialBookmarksWithChangeNotification:(BOOL)arg0 ;
-(BOOL)_saveActiveTabID:(int)arg0 inTabGroupWithID:(int)arg1 windowID:(int)arg2 ;
-(BOOL)_saveTabGroupRecordsWithMissingCKShareRecord;
-(BOOL)_saveWindowState:(id)arg0 ;
-(BOOL)_saveWindowState:(id)arg0 activeTabGroupID:(int)arg1 localTabGroupID:(int)arg2 privateTabGroupID:(int)arg3 ;
-(BOOL)_saveWindowState:(id)arg0 forApplyingInMemoryChanges:(BOOL)arg1 ;
-(BOOL)allowsScopedBookmarksInTabGroup:(id)arg0 ;
-(BOOL)bookmarkRequiresParent:(id)arg0 ;
-(BOOL)closeWindowState:(id)arg0 ;
-(BOOL)deleteAllWindowStates;
-(BOOL)deleteAllWindows;
-(BOOL)deleteWindowState:(id)arg0 ;
-(BOOL)deleteWindowStates:(id)arg0 ;
-(BOOL)maintainsSyncMetadata;
-(BOOL)saveWindow:(id)arg0 ;
-(BOOL)saveWindowState:(id)arg0 ;
-(BOOL)updateContainsCKShareRecord;
-(id)_listOfScopedBookmarkFoldersInTabGroup:(id)arg0 ;
-(id)_specialTabFolderUUIDs;
-(id)_specialTabFolderUUIDsForQueries;
-(id)_specialTabsWithUUID:(id)arg0 ;
-(id)_tabGroupWithID:(int)arg0 ;
-(id)_topScopedBookmarkListForTabGroup:(id)arg0 onQueue:(id)arg1 ;
-(id)_topScopedBookmarkListServerIdForTabGroup:(id)arg0 ;
-(id)_uuidForQueries:(id)arg0 ;
-(id)_windowStatesWithFilter:(id)arg0 ;
-(id)_windowWithBookmark:(id)arg0 ;
-(id)generatePositionBeforeFirstRecordInParentWithServerID:(id)arg0 ;
-(id)tabGroupForBookmark:(id)arg0 ;
-(id)tabsForTabGroupBookmark:(id)arg0 ;
-(id)windowStateWithUUID:(id)arg0 ;
-(id)windowWithUUID:(id)arg0 ;
-(int)_windowIDForUUID:(id)arg0 ;
-(int)createLegacyPlaceholderTabGroupBookmarksForSharedTabGroup:(id)arg0 ;
-(void)_addActiveTabsToWindowState:(id)arg0 ;
-(void)_createSchema;
-(void)_createSpecialFolderWithIDIfNeeded:(int)arg0 ;
-(void)_createSpecialTabsFolderWithUUIDIfNeeded:(id)arg0 ;
-(void)_logErrorWithMessage:(id)arg0 result:(int)arg1 ;
-(void)_migrateSchemaVersion43ToVersion44;
-(void)_migrateSchemaVersion44ToVersion45;
-(void)_migrateWindow:(id)arg0 ;
-(void)_migrateWindowState:(id)arg0 ;
-(void)_resetBookmark:(id)arg0 ;
-(void)_setupInMemoryChangeSet;
-(void)createWindowsTabGroupsTable;
-(void)createWindowsTable;
-(void)logRegulatoryBookmarksRead;
-(void)performMaintenance;


@end


#endif