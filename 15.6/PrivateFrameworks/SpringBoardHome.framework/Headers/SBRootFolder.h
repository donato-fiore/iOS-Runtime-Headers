// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBROOTFOLDER_H
#define SBROOTFOLDER_H

@protocol SBRootFolderDelegate;


#import "SBFolder.h"
#import "SBIconListModel.h"
#import "SBHIconModel.h"

@interface SBRootFolder : SBFolder

@property (readonly, nonatomic) BOOL containsNonDefaultSizedIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleNonDefaultSizedIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleWidgetIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsWidgetIconExcludingTodayList;
@property (weak, nonatomic) NSObject<SBRootFolderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property (retain, nonatomic, setter=_setFavoriteTodayList:) SBIconListModel *favoriteTodayList;
@property (retain, nonatomic, setter=_setIgnoredList:) SBIconListModel *ignoredList;
@property (weak, nonatomic) SBHIconModel *model; // ivar: _model
@property (readonly, nonatomic) BOOL supportsBadging;
@property (readonly, nonatomic) BOOL supportsDock;
@property (readonly, nonatomic) BOOL supportsIgnoredList;
@property (readonly, nonatomic) BOOL supportsTodayList; // ivar: _supportsTodayList
@property (retain, nonatomic, setter=_setTodayList:) SBIconListModel *todayList;


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
-(BOOL)supportsTodayPage;
-(NSUInteger)_specialIndexOfList:(id)arg0 ;
-(NSUInteger)hiddenIndexOfList:(id)arg0 ;
-(NSUInteger)indexOfList:(id)arg0 ;
-(NSUInteger)visibleIndexOfList:(id)arg0 ;
-(id)icons;
-(id)listAtIndex:(NSUInteger)arg0 ;
-(id)nodeDescriptionWithPrefix:(id)arg0 ;
-(id)nodeIdentifier;
-(void)_didExplicitlyRemoveHiddenLists:(id)arg0 ;
-(void)checkIgnoredListConsistency;
-(void)delegateDidChange:(id)arg0 ;
-(void)enumerateExtraListsUsingBlock:(id)arg0 ;
-(void)enumerateTodayListIconsUsingBlock:(id)arg0 ;
-(void)enumerateTodayListsUsingBlock:(id)arg0 ;
-(void)removeList:(id)arg0 ;


@end


#endif