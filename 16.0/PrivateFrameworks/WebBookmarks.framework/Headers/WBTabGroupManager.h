// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBTABGROUPMANAGER_H
#define WBTABGROUPMANAGER_H

@class NSPointerArray, WBSCRDTPositionGenerator, NSMutableSet, NSMutableDictionary, NSString, NSSet, NSArray;
@protocol WBSCRDTPositionGeneratorDelegate, OS_dispatch_queue, WBTabProvider;

#import <Foundation/Foundation.h>

#import "WBSavedStateManager.h"
#import "WBTabGroupSyncAgentProxy.h"
#import "WBTabCollection.h"

@interface WBTabGroupManager : NSObject <WBSCRDTPositionGeneratorDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSPointerArray *_observers;
    WBSavedStateManager *_savedStateManager;
    WBTabGroupSyncAgentProxy *_syncAgentProxy;
    WBSCRDTPositionGenerator *_positionGenerator;
    NSMutableSet *_recentlyAddedTabGroupsAwaitingFirstStartPage;
    NSMutableDictionary *_localTabsByUUID;
    NSMutableDictionary *_localTabGroupsByUUID;
    NSMutableDictionary *_syncableTabsByUUID;
    NSMutableDictionary *_syncableTabGroupsByUUID;
    BOOL _didFinishSetup;
    id *_setupCompletionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *recentlyAddedTabGroupsAwaitingFirstStartPage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBTabCollection *tabCollection; // ivar: _tabCollection
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) NSObject<WBTabProvider> *tabProvider; // ivar: _tabProvider


+(id)ephemeralTabGroupManager;
-(NSInteger)_nextInMemoryPositionChangeID;
-(NSInteger)nextChangeIDForPositionInPositionGenerator:(id)arg0 ;
-(id)_generatePositionAfterTabGroup:(id)arg0 ;
-(id)_localTabGroups;
-(id)_tabCacheForTabGroup:(id)arg0 ;
-(id)_tabGroupCacheForTabGroup:(id)arg0 ;
-(id)_tabGroupWithUUID:(id)arg0 ;
-(id)_tabWithUUID:(id)arg0 ;
-(id)deviceIdentifierForPositionGenerator:(id)arg0 ;
-(id)initWithCollection:(id)arg0 ;
-(id)initWithTabProvider:(id)arg0 savedStateManager:(id)arg1 ;
-(id)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(id)moveTabs:(id)arg0 toTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(id)positionGenerator:(id)arg0 positionForRecordName:(id)arg1 ;
-(id)positionGenerator:(id)arg0 recordNameOfBookmarksAfterRecordWithName:(id)arg1 ;
-(id)positionGenerator:(id)arg0 recordNameOfBookmarksBeforeRecordWithName:(id)arg1 ;
-(id)scopedBookmarkListWithID:(int)arg0 filteredUsingString:(id)arg1 ;
-(id)tabGroupWithUUID:(id)arg0 ;
-(id)tabWithUUID:(id)arg0 ;
-(id)topScopedBookmarkListForTabGroup:(id)arg0 ;
-(id)updateTabGroupWithUUID:(id)arg0 usingBlock:(id)arg1 ;
-(id)updateTabWithUUID:(id)arg0 persist:(BOOL)arg1 notify:(BOOL)arg2 usingBlock:(id)arg3 ;
-(id)updateTabsInTabGroupWithUUID:(id)arg0 usingBlock:(id)arg1 ;
-(void)_cacheTabGroup:(id)arg0 ;
-(void)_didRemoveTabGroups:(id)arg0 updateTabGroups:(id)arg1 ;
-(void)_notifyScopedBookmarkChangesInFolderWithID:(int)arg0 ;
-(void)_reloadTabGroupsWithResultHandler:(id)arg0 ;
-(void)_tabGroupSyncDidFinish:(id)arg0 ;
-(void)_uncacheTabGroup:(id)arg0 ;
-(void)_updatePositionsForTabsInTabGroup:(id)arg0 ;
-(void)addTabGroupObserver:(id)arg0 ;
-(void)deleteScopedBookmarkWithUUID:(id)arg0 ;
-(void)deleteScopedBookmarkWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertScopedBookmark:(id)arg0 inScopedBookmarkFolderWithID:(int)arg1 afterBookmarkWithUUID:(id)arg2 ;
-(void)moveTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(void)notifyDidFinishSetup;
-(void)notifyDidPerformBlockUpdatesForTabGroup:(id)arg0 ;
-(void)notifyDidRemoveTabGroup:(id)arg0 ;
-(void)notifyDidUpdateScopedBookmarkList:(id)arg0 ;
-(void)notifyDidUpdateSyncableContent;
-(void)notifyDidUpdateTab:(id)arg0 userDriven:(BOOL)arg1 ;
-(void)notifyDidUpdateTabGroup:(id)arg0 ;
-(void)notifyDidUpdateTabGroups;
-(void)notifyDidUpdateTabsInTabGroup:(id)arg0 ;
-(void)notifyWillPerformBlockUpdatesForTabGroup:(id)arg0 ;
-(void)recentlyAddedTabGroupIsAwaitingFirstStartPage:(id)arg0 ;
-(void)registerWindowState:(id)arg0 ;
-(void)reloadTabGroupsFromDatabaseWithCompletionHandler:(id)arg0 ;
-(void)removeTabGroup:(id)arg0 ;
-(void)removeTabGroupObserver:(id)arg0 ;
-(void)reorderScopedBookmarkWithUUID:(id)arg0 afterBookmarkWithUUID:(id)arg1 notify:(BOOL)arg2 ;
-(void)tabGroupHasDisplayedStartPage:(id)arg0 ;
-(void)updateScopedBookmarkWithUUID:(id)arg0 title:(id)arg1 address:(id)arg2 ;
-(void)waitForSetupWithCompletionHandler:(id)arg0 ;


@end


#endif