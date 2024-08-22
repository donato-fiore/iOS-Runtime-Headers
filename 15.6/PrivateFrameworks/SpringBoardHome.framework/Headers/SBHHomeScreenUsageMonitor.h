// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHHOMESCREENUSAGEMONITOR_H
#define SBHHOMESCREENUSAGEMONITOR_H

@class NSHashTable, NSMutableSet, NSString;
@protocol SBFolderObserver, SBLeafIconObserver, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBHIconManager.h"
#import "SBHIconModel.h"
#import "SBRootFolder.h"
#import "SBFolderController.h"

@interface SBHHomeScreenUsageMonitor : NSObject <SBFolderObserver, SBLeafIconObserver, BSDescriptionProviding>

 {
    NSHashTable *_observers;
    NSMutableSet *_visibleHomeScreenWidgetIcons;
}


@property (nonatomic) BOOL currentPageIndexDidChangeWhileScrolling; // ivar: _currentPageIndexDidChangeWhileScrolling
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayedLayoutDidChangeNotification; // ivar: _delayedLayoutDidChangeNotification
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger homeScreenDisappearanceReasons; // ivar: _homeScreenDisappearanceReasons
@property (readonly, weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (retain, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (retain, nonatomic) SBRootFolder *rootFolder; // ivar: _rootFolder
@property (retain, nonatomic) SBFolderController *rootFolderController; // ivar: _rootFolderController
@property (readonly) Class superclass;


-(BOOL)isContentVisible;
-(NSUInteger)listModelIndexForRootFolderController:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIconManager:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)folder:(id)arg0 didMoveList:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)folder:(id)arg0 didRemoveLists:(id)arg1 atIndexes:(id)arg2 ;
-(void)folder:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)folder:(id)arg0 listHiddenDidChange:(id)arg1 ;
-(void)iconManagerDidChangeIconModel:(id)arg0 ;
-(void)iconManagerDidChangeRootViewController:(id)arg0 ;
-(void)iconManagerEditingDidChange:(id)arg0 ;
-(void)iconModelDidLayOut:(id)arg0 ;
-(void)leafIcon:(id)arg0 didAddIconDataSource:(id)arg1 ;
-(void)leafIcon:(id)arg0 didChangeActiveDataSource:(id)arg1 ;
-(void)leafIcon:(id)arg0 didRemoveIconDataSource:(id)arg1 ;
-(void)noteCurrentPageIndexChanged:(NSUInteger)arg0 ;
-(void)noteIconManagerContentOccludedChanged;
-(void)noteIconManagerCoverSheetTodayViewDidAppear;
-(void)noteIconManagerCoverSheetTodayViewDidDisappear;
-(void)noteIconManagerOverlayTodayViewDidAppear;
-(void)noteIconManagerOverlayTodayViewDidDisappear;
-(void)noteIconManagerRootFolderControllerViewDidDisappear;
-(void)noteIconManagerRootFolderControllerViewWillAppear;
-(void)noteIconManagerTodayViewAtLocation:(NSInteger)arg0 didScrollToRevealIcons:(id)arg1 ;
-(void)noteLayoutChanged;
-(void)noteUserAddedWidgetIconStackSuggestion:(id)arg0 ;
-(void)noteUserConfiguredIcon:(id)arg0 ;
-(void)noteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)arg0 ;
-(void)noteUserDislikedWidgetIconStackSuggestion:(id)arg0 ;
-(void)noteUserTappedWidgetIcon:(id)arg0 withURL:(id)arg1 ;
-(void)noteWidgetDiscoverabilityDidAcceptSuggestion:(id)arg0 ;
-(void)noteWidgetDiscoverabilityDidEnterEditingMode;
-(void)noteWidgetDiscoverabilityDidRejectSuggestion:(id)arg0 ;
-(void)noteWidgetDiscoverabilityStarted;
-(void)noteWidgetIconAdded:(id)arg0 ;
-(void)noteWidgetIconRemoved:(id)arg0 ;
-(void)noteWidgetIconStack:(id)arg0 changedActiveWidget:(id)arg1 ;
-(void)notifyForEveryHomeScreenWidgetVisibility;
-(void)notifyForEveryTodayViewWidgetVisibilityOnCoverSheet:(BOOL)arg0 ;
-(void)notifyRootFolderControllerViewWillAppear;
-(void)removeObserver:(id)arg0 ;
-(void)rootFolderControllerCurrentPageIndexDidChange:(id)arg0 ;
-(void)rootFolderControllerDidEndScrolling:(id)arg0 ;
-(void)updateVisibilityReasons;
-(void)updateVisibleWidgetIcons;


@end


#endif