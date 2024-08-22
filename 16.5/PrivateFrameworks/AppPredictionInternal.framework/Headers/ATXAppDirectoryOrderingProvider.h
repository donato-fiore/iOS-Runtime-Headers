// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPDIRECTORYORDERINGPROVIDER_H
#define ATXAPPDIRECTORYORDERINGPROVIDER_H

@class NSDictionary, ATXClient, ATXGenericFileBasedCache, NSSet, NSMutableDictionary, NSString, SBSHomeScreenService, NSDate, NSUserDefaults, ATXTimer, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXAppInfoManager.h"
#import "_ATXInternalUninstallNotification.h"
#import "_ATXInternalInstallNotification.h"
#import "ATXInternalOffloadAppsNotification.h"
#import "ATXInternalAppsInstallStartNotification.h"
#import "ATXAppPredictionBlacklist.h"
#import "ATXAppClipUsageDuetDataProvider.h"
#import "_ATXAppLaunchHistogramManager.h"
#import "ATXAppClipUsageDuetContextUpdateListener.h"
#import "_ATXAppIconState.h"

@interface ATXAppDirectoryOrderingProvider : NSObject {
    NSDictionary *_appLaunchCounts;
    NSDictionary *_libraryAppLaunchCounts;
    NSObject<OS_dispatch_queue> *_queue;
    ATXClient *_atxClient;
    _ATXAppInfoManager *_infoManager;
    _ATXInternalUninstallNotification *_uninstallNotification;
    _ATXInternalInstallNotification *_installNotification;
    ATXInternalOffloadAppsNotification *_offloadNotification;
    ATXInternalAppsInstallStartNotification *_installingNotification;
    ATXGenericFileBasedCache *_cache;
    NSDictionary *_hardcodedAppCategoryMappings;
    NSDictionary *_hardcodedAppCategoryScreenTimeMappings;
    ATXAppPredictionBlacklist *_blacklist;
    NSSet *_blacklistedBundleIds;
    NSMutableDictionary *_recentApps;
    ATXGenericFileBasedCache *_recentsCache;
    ATXAppClipUsageDuetDataProvider *_appClipDataProvider;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXAppClipUsageDuetContextUpdateListener *_appClipChangeListener;
    _ATXAppIconState *_appIconState;
    NSDictionary *_appScreenTimeCategoryMappings;
    NSSet *_homescreenAppsToDedupeAgainst;
    NSSet *_managedAppIDs;
    NSString *_managingOrganizationName;
    SBSHomeScreenService *_sbsHomeScreenService;
    int _settingsChangedToken;
    NSDate *_lastUpdatePostTime;
    NSUserDefaults *_atxDefaults;
    ATXTimer *_currentTimer;
    BOOL _currentCacheDueForRefresh;
}


@property (retain, nonatomic) NSArray *categories; // ivar: _categories


+(BOOL)isStoreDemoMode;
+(id)_reorderedRecentApps:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_readCategoriesFromDisk;
-(BOOL)_shiftAppIndices:(id)arg0 category:(id)arg1 ;
-(BOOL)_shouldInvalidateCachedCategoriesForDemoMode;
-(BOOL)_writeCategoriesToDisk;
-(BOOL)_writeRecentsToDisk;
-(BOOL)_writeToDisk:(id)arg0 cache:(id)arg1 logIdentifier:(id)arg2 ;
-(BOOL)isMarketingDemoMode;
-(id)_appBundleIDRecencyComparatorForLastLaunchDates:(SEL)arg0 ;
-(id)_appBundleIDTotalLaunchComparator:(SEL)arg0 ;
-(id)_categoryChangesDictionaryForChangedApps:(id)arg0 ;
-(id)_categoryComparator:(SEL)arg0 ;
-(id)_categoryIdFromBundleId:(id)arg0 ;
-(id)_combinedLaunchCountForBundleId:(id)arg0 ;
-(id)_computeCategoriesWithRetries:(NSUInteger)arg0 ;
-(id)_genreIdFromBundleId:(id)arg0 ;
-(id)_getEnterpriseCategoriesForApps:(id)arg0 ;
-(id)_getMDMOrgName;
-(id)_getManagedAppIDs;
-(id)_groupEnterpriseAppsByIssuerWithBundleIDs:(id)arg0 isMDM:(BOOL)arg1 ;
-(id)_issuingOrganizationForEnterpriseAppBundleID:(id)arg0 isMDM:(BOOL)arg1 ;
-(id)_mdmEnterpriseCategoriesForApps:(id)arg0 ;
-(id)_screenTimeIdFromBundleId:(id)arg0 ;
-(id)_sortCategories:(id)arg0 ;
-(id)_totalCombinedLaunchCountsForCategory:(id)arg0 ;
-(id)_totalLaunchCountsForCategory:(id)arg0 ;
-(id)_totalLibraryLaunchCountsForCategory:(id)arg0 ;
-(id)description;
-(id)initWithAppInfoManager:(id)arg0 cache:(id)arg1 blacklist:(id)arg2 recentsCache:(id)arg3 appClipDataProvider:(id)arg4 appIconState:(id)arg5 appClipChangeListener:(id)arg6 histogramManager:(id)arg7 ;
-(void)_createHomeScreenServiceIfNecessary;
-(void)_ensureCategoryConsistency;
-(void)_handleManagedAppsChangedNotification;
-(void)_handleManagedAppsOrgInfoChangedNotification;
-(void)_initCategories;
-(void)_postPredictedAppsAndRecentsUpdateNotificationWithReason:(id)arg0 ;
-(void)_postProcessCategories:(id)arg0 withReply:(id)arg1 ;
-(void)_postUpdateNotificationWithReason:(id)arg0 ;
-(void)_registerForManagedAppsChangedNotification;
-(void)_registerForManagedAppsOrgInfoChangedNotification;
-(void)_reorderAndHideDupesForAppsInCategory:(id)arg0 ;
-(void)_splitEnterpriseCategoryWithAppsInCategory:(id)arg0 appsByCategoryName:(id)arg1 isMDMAppCategory:(BOOL)arg2 ;
-(void)_updateAppClipSinceDate:(id)arg0 installDates:(id)arg1 ;
-(void)_updateAppLaunchCounts;
-(void)_updateCategories;
-(void)_updateCategoriesForDownweightedAppSet:(id)arg0 ;
-(void)_updateCategoriesForInstalledApps:(id)arg0 ;
-(void)_updateCategoriesForUninstalledApps:(id)arg0 ;
-(void)_updateCategoriesWithRetries:(NSUInteger)arg0 ;
-(void)_updateMDMAndEnterpriseCategories;
-(void)_updateMDMCategoryName;
-(void)_updateMDMStatus;
-(void)_updateMissingInstalledApps;
-(void)_updateRecents;
-(void)_updateRecentsForAppClipUsageEvent:(id)arg0 ;
-(void)_updateRecentsForInstalledApps:(id)arg0 ;
-(void)_updateScreenTimeMappingsForAppBundleIds:(id)arg0 withRetries:(NSUInteger)arg1 ;
-(void)appLaunchDatesWithReply:(id)arg0 ;
-(void)appLaunchInformationWithReply:(id)arg0 ;
-(void)categoriesWithReply:(id)arg0 ;
-(void)categoryLaunchInformationWithReply:(id)arg0 ;
-(void)dealloc;
-(void)notifyBookmarksDidChange;
-(void)postPredictedAppsAndRecentsUpdateNotificationWithReason:(id)arg0 ;
-(void)requestNotificationWhenCategoriesAreReady;
-(void)setUp;
-(void)topAppsWithMaxNumberOfResults:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)updateCacheWithActivity:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateRecents;
-(void)waitForPendingTasks;


@end


#endif