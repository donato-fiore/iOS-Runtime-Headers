// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFBROWSERSAVEDSTATE_H
#define _SFBROWSERSAVEDSTATE_H

@class NSCountedSet, NSArray;

#import <Foundation/Foundation.h>

#import "SFBrowserStateSQLiteStore.h"

@interface _SFBrowserSavedState : NSObject {
    SFBrowserStateSQLiteStore *_browserStateSQLiteStore;
    BOOL _checkPointWriteAheadLogOnNextUpdate;
    NSCountedSet *_tabCountByWindowUUID;
    BOOL _haveLoadedRecentlyClosedTabs;
}


@property (copy, nonatomic) NSArray *browserWindows; // ivar: _browserWindows
@property (retain, nonatomic) NSArray *recentlyClosedTabs; // ivar: _recentlyClosedTabs
@property (nonatomic) BOOL secureDeleteEnabled; // ivar: _secureDeleteEnabled
@property (readonly, nonatomic) BOOL shouldBeUsedDuringTest; // ivar: _shouldBeUsedDuringTest


+(BOOL)shouldMergeAllWindowsIfNeeded;
+(id)defaultBrowserStateDatabase;
+(id)defaultPPTBrowserStateDatabase;
+(id)ephemeralSavedState;
+(id)inMemoryDatabase;
+(id)sharedBrowserSavedState;
+(void)setSharedBrowserSavedState:(id)arg0 ;
+(void)setShouldMergeAllWindowsIfNeeded:(BOOL)arg0 ;
-(BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg0 ;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)readSavedSessionStateDataForTabWithUUID:(id)arg0 ;
-(id)savedTabsStateForBrowserControllerWithUUID:(id)arg0 ;
-(id)tabStateDataForUUID:(id)arg0 ;
-(void)_checkPointWriteAheadLogIfNeeded;
-(void)_historyItemsWereRemoved:(id)arg0 ;
-(void)_notifyThatRecentlyClosedTabsWereRemoved:(id)arg0 ;
-(void)_readBrowserControllersSavedState;
-(void)_readRecentlyClosedTabsStateIfNecessary;
-(void)_removeRecentlyClosedTabStateData:(id)arg0 ;
-(void)addRecentlyClosedTabs:(id)arg0 ;
-(void)clearAllSavedStatesAndCloseDatabase;
-(void)clearAllSavedStatesClosingDatabase:(BOOL)arg0 ;
-(void)clearRecentlyClosedTabs;
-(void)dealloc;
-(void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)arg0 ;
-(void)regenerateTabUUIDsForDeviceRestoration;
-(void)removeRecentlyClosedTabWithStateData:(id)arg0 ;
-(void)removeTabStateWithTabData:(id)arg0 ;
-(void)removeTabsStateForBrowserControllerWithUUID:(id)arg0 andRemoveWindow:(BOOL)arg1 ;
-(void)saveTabStateData:(id)arg0 ;
-(void)saveTabsState:(id)arg0 forBrowserControllerWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)setActiveDocumentIsValid:(BOOL)arg0 forBrowserControllerWithUUID:(id)arg1 ;
-(void)updateBrowserWindowState:(id)arg0 tabs:(id)arg1 ;
-(void)updateSceneID:(id)arg0 ;


@end


#endif