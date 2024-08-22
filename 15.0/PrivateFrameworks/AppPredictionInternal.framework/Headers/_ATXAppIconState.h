// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXAPPICONSTATE_H
#define _ATXAPPICONSTATE_H

@class ATXHomeScreenConfigCache, SBSHomeScreenService, NSDictionary, NSArray, NSMutableIndexSet, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXInternalInstallNotification.h"
#import "_ATXInternalUninstallNotification.h"

@interface _ATXAppIconState : NSObject {
    _ATXInternalInstallNotification *_installNotification;
    _ATXInternalUninstallNotification *_uninstallNotification;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _homeScreenConfigCacheChangeDarwinNotificationObserver;
    int _homeScreenTodayPageConfigCacheChangeDarwinNotificationObserver;
    int _dockAppListChangeDarwinNotificationObserver;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    SBSHomeScreenService *_sbsHomeScreenService;
    NSDictionary *_iconLocationByBundleId;
    NSUInteger _numHomeScreenPages;
    NSUInteger _numHomeScreenFolders;
    NSArray *_orderedVisiblePageIndices;
    NSMutableIndexSet *_pageIndicesWithAppPredictionPanels;
    NSMutableIndexSet *_pageIndicesWithSuggestionWidgets;
    _PASSimpleCoalescingTimer *_coalescedReloadOperation;
}




+(id)sharedInstance;
-(BOOL)appInFolderWithBundleId:(id)arg0 ;
-(BOOL)appOnDockWithBundleId:(id)arg0 ;
-(NSInteger)folderPageNumberForBundleId:(id)arg0 ;
-(NSInteger)springboardPageLocationForBundleId:(id)arg0 ;
-(NSInteger)springboardPageNumberForBundleId:(id)arg0 ;
-(NSUInteger)getFirstVisiblePageIndex;
-(NSUInteger)numberOfApps;
-(NSUInteger)numberOfFolders;
-(NSUInteger)numberOfPages;
-(id)allAppsKnownToSpringBoard;
-(id)allDockedApps;
-(id)allFolderApps;
-(id)allInstalledAppsKnownToSpringBoard;
-(id)init;
-(id)initWithHomeScreenConfigCache:(id)arg0 sbsHomeScreenService:(id)arg1 ;
-(id)nonFolderAppSetOnPages;
-(id)springboardPageNumbersWithAppPredictionPanels;
-(id)springboardPageNumbersWithSuggestionsWidgets;
-(void)_reload;


@end


#endif