// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBTABCOLLECTION_H
#define WBTABCOLLECTION_H

@class NSString, NSError, NSArray;
@protocol WBStateProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBBrowserState.h"
#import "WBCollectionConfiguration.h"
#import "WBWindowState.h"
#import "WebBookmarkTabCollection.h"

@interface WBTabCollection : NSObject <WBStateProvider>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, nonatomic) WBBrowserState *browserState;
@property (nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, nonatomic) WBCollectionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLockedSync;
@property (readonly, nonatomic) WBWindowState *lastClosedWindowState;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (nonatomic) NSUInteger maximumTabsPerGroup; // ivar: _maximumTabsPerGroup
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedWindowStates;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WebBookmarkTabCollection *tabCollection; // ivar: _collection
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, copy, nonatomic) NSArray *windowStates;


+(id)databasePathForConfiguration:(id)arg0 ;
+(id)inMemoryChangeSet;
+(id)inMemoryChangesFileURL;
-(BOOL)_insertBookmark:(id)arg0 afterBookmark:(id)arg1 inFolderWithID:(int)arg2 ;
-(BOOL)_reorderTab:(id)arg0 afterTab:(id)arg1 ;
-(BOOL)_resultOnInternalQueue:(id)arg0 ;
-(BOOL)_updatePinnedTabs:(id)arg0 privatePinnedTabs:(id)arg1 ;
-(BOOL)closeWindowState:(id)arg0 ;
-(BOOL)deleteAllRecentlyClosedTabs;
-(BOOL)deleteAllSavedState;
-(BOOL)deleteAllWindowStates;
-(BOOL)deleteTabGroup:(id)arg0 ;
-(BOOL)deleteTabs:(id)arg0 ;
-(BOOL)deleteWindowState:(id)arg0 ;
-(BOOL)deleteWindowStates:(id)arg0 ;
-(BOOL)insertTab:(id)arg0 inTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(BOOL)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(BOOL)insertTabs:(id)arg0 inTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(BOOL)lockSync;
-(BOOL)moveTab:(id)arg0 toTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(BOOL)moveTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(BOOL)reorderTab:(id)arg0 afterTab:(id)arg1 ;
-(BOOL)replaceTab:(id)arg0 withTab:(id)arg1 ;
-(BOOL)saveBrowserState:(id)arg0 ;
-(BOOL)saveRecentlyClosedTabs:(id)arg0 ;
-(BOOL)saveTab:(id)arg0 ;
-(BOOL)saveTabGroup:(id)arg0 ;
-(BOOL)saveWindowState:(id)arg0 ;
-(BOOL)updateTabs:(id)arg0 inTabGroup:(id)arg1 ;
-(id)_bookmarksForTabs:(id)arg0 ;
-(id)_bookmarksForTabs:(id)arg0 syncable:(BOOL)arg1 ;
-(id)applyInMemoryChanges:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 checkIntegrity:(BOOL)arg1 ;
-(id)tabGroupWithUUID:(id)arg0 ;
-(id)tabWithUUID:(id)arg0 ;
-(id)tabsForTabGroup:(id)arg0 ;
-(id)windowStateWithUUID:(id)arg0 ;
-(void)performMaintenance;
-(void)unlockSync;


@end


#endif