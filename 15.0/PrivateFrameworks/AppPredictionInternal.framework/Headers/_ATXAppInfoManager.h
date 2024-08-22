// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXAPPINFOMANAGER_H
#define _ATXAPPINFOMANAGER_H

@class NSMutableArray;
@protocol ATXBundleIdRemovableProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"

@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol>

 {
    _ATXDataStore *_dataStore;
    NSMutableArray *_installDeltaLog;
    _opaque_pthread_rwlock_t _rwlock;
}




+(id)sharedInstance;
+(id)sortArrayAndComputeMedian:(id)arg0 ;
-(NSInteger)launchedAppCount;
-(id)_appInfoNoLockForBundleId:(id)arg0 ;
-(id)allActionKeys;
-(id)allApps;
-(id)allAppsLaunchedOrInstalledWithin30Days;
-(id)allAppsWithInstallDate;
-(id)app2VecClusterForBundleId:(id)arg0 ;
-(id)appInfoForBundleId:(id)arg0 ;
-(id)averageSecondsBetweenAppActionsForActionKey:(id)arg0 ;
-(id)averageSecondsBetweenLaunchesForBundleId:(id)arg0 ;
-(id)genreIdForBundleId:(id)arg0 ;
-(id)genreIdsForBundleId:(id)arg0 ;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)initWithInMemoryStore;
-(id)lastAppActionLaunch;
-(id)lastAppActionLaunchDate;
-(id)lastAppActionLaunchDateForActionKey:(id)arg0 ;
-(id)lastAppLaunch;
-(id)lastAppLaunchDate;
-(id)lastLaunchDateForBundleId:(id)arg0 ;
-(id)lastUnlockDate;
-(id)medianSecondsBetweenAppActionsForActionKey:(id)arg0 ;
-(id)medianSecondsBetweenLaunchesForBundleId:(id)arg0 ;
-(id)secondMostRecentAppLaunch;
-(id)stopInstallDeltaRecording;
-(id)subGenreIdsForBundleId:(id)arg0 ;
-(id)totalSlotsInDatastore;
-(void)addAverageSecondsBetweenAppActionsForActionKey:(id)arg0 average:(id)arg1 ;
-(void)addAverageSecondsBetweenLaunchesForBundleId:(id)arg0 average:(id)arg1 ;
-(void)addExtensionLaunchForBundleId:(id)arg0 date:(id)arg1 ;
-(void)addInstallForBundleId:(id)arg0 date:(id)arg1 ;
-(void)addInstallForBundleInfoMap:(id)arg0 ;
-(void)addLaunchForAppAction:(id)arg0 date:(id)arg1 ;
-(void)addLaunchForBundleId:(id)arg0 date:(id)arg1 ;
-(void)addMedianSecondsBetweenAppActionsForActionKey:(id)arg0 median:(id)arg1 ;
-(void)addMedianSecondsBetweenLaunchesForBundleId:(id)arg0 median:(id)arg1 ;
-(void)addScreenLockAtDate:(id)arg0 ;
-(void)addSpotlightLaunchForBundleId:(id)arg0 date:(id)arg1 ;
-(void)clearAppInstallInfo;
-(void)clearAppLaunchInfo;
-(void)computeAverageAndMedianSecondsBetweenAppActions;
-(void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)arg0 ;
-(void)computeAverageAndMedianSecondsBetweenAppLaunches;
-(void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)arg0 ;
-(void)dealloc;
-(void)handleAppInstallWithInstallDict:(id)arg0 ;
-(void)handleAppUninstallWithUninstalledAppSet:(id)arg0 ;
-(void)removeActionDataForBundleId:(id)arg0 ;
-(void)removeAppInfoForBundleId:(id)arg0 ;
-(void)removeAppInfoForBundleIds:(id)arg0 ;
-(void)removeAppLaunchesForBundleId:(id)arg0 ;
-(void)removeBundleIds:(id)arg0 ;
-(void)removeUninstalledApps;
-(void)startInstallDeltaRecording;
-(void)train;
-(void)updateApp2VecClusterForBundleId:(id)arg0 app2VecCluster:(id)arg1 ;
-(void)updateApp2VecClustersForAllApps;
-(void)updateGenreIdsForAllApps;
-(void)updateGenreIdsForBundleId:(id)arg0 genreId:(id)arg1 subGenreIds:(id)arg2 ;


@end


#endif