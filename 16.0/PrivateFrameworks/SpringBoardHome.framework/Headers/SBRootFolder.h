// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBROOTFOLDER_H
#define SBROOTFOLDER_H

@class NSString;
@protocol SBIconIndexNodeObserver, SBRootFolderDelegate;


#import "SBFolder.h"
#import "SBIconListModel.h"
#import "SBHIconModel.h"

@interface SBRootFolder : SBFolder <SBIconIndexNodeObserver>

 {
    *__CFRunLoopObserver _checkIgnoredListRunLoopObserver;
}


@property (nonatomic, getter=isCheckingIgnoredListConsistency) BOOL checkingIgnoredListConsistency; // ivar: _checkingIgnoredListConsistency
@property (readonly, nonatomic) BOOL containsNonDefaultSizedIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleNonDefaultSizedIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleWidgetIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsWidgetIconExcludingTodayList;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRootFolderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, setter=_setDock:) SBIconListModel *dock; // ivar: _dock
@property (retain, nonatomic, setter=_setFavoriteTodayList:) SBIconListModel *favoriteTodayList; // ivar: _favoriteTodayList
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setIgnoredList:) SBIconListModel *ignoredList; // ivar: _ignoredList
@property (weak, nonatomic) SBHIconModel *model; // ivar: _model
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBadging;
@property (retain, nonatomic, setter=_setTodayList:) SBIconListModel *todayList; // ivar: _todayList


+(BOOL)isRootFolderClass;
-(BOOL)_compactsFirstList;
-(BOOL)canAddIconCount:(NSUInteger)arg0 startingAtList:(id)arg1 ;
-(BOOL)canBounceIcon:(id)arg0 ;
-(BOOL)canEditDisplayName;
-(BOOL)canRemoveIcons;
-(BOOL)isExtraListIndex:(NSUInteger)arg0 ;
-(BOOL)isIconAtIndexPathInDock:(id)arg0 ;
-(BOOL)isIconAtIndexPathInDock:(id)arg0 includingDockFolders:(BOOL)arg1 ;
-(BOOL)isIconAtIndexPathInFavoriteTodayList:(id)arg0 ;
-(BOOL)isIconAtIndexPathInIgnoredList:(id)arg0 ;
-(BOOL)isIconAtIndexPathInTodayList:(id)arg0 ;
-(BOOL)isIconInIgnoredList:(id)arg0 ;
-(BOOL)isRootFolder;
-(NSUInteger)_specialIndexOfList:(id)arg0 ;
-(NSUInteger)allowedGridSizeClassesForDock;
-(NSUInteger)allowedGridSizeClassesForTodayList;
-(NSUInteger)columnCountForTodayList;
-(NSUInteger)hiddenIndexOfList:(id)arg0 ;
-(NSUInteger)indexOfList:(id)arg0 ;
-(NSUInteger)maxIconCountForDock;
-(NSUInteger)visibleIndexOfList:(id)arg0 ;
-(id)icons;
-(id)initWithFolder:(id)arg0 copyLeafIcons:(BOOL)arg1 ;
-(id)listAtIndex:(NSUInteger)arg0 ;
-(id)nodeDescriptionWithPrefix:(id)arg0 ;
-(id)nodeIdentifier;
-(void)_didExplicitlyRemoveHiddenLists:(id)arg0 ;
-(void)_notifyIndexChange:(int)arg0 identifiers:(id)arg1 withValidationBlock:(id)arg2 ;
-(void)_tearDownIgnoredListConsistencyCheckRunLoopObserverIfNeeded;
-(void)checkIgnoredListConsistency;
-(void)dealloc;
-(void)delegateDidChange:(id)arg0 ;
-(void)enumerateExtraListsUsingBlock:(id)arg0 ;
-(void)enumerateTodayListIconsUsingBlock:(id)arg0 ;
-(void)enumerateTodayListsUsingBlock:(id)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)node:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)node:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)nodeDidMoveContainedNodes:(id)arg0 ;
-(void)removeList:(id)arg0 ;
-(void)scheduleIgnoredListConsistencyCheck;


@end


#endif