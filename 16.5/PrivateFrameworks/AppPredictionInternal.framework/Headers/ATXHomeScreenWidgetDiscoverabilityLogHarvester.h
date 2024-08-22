// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENWIDGETDISCOVERABILITYLOGHARVESTER_H
#define ATXHOMESCREENWIDGETDISCOVERABILITYLOGHARVESTER_H

@class NSMutableDictionary, NSUserDefaults, BMAppLaunchStream, NSDictionary, NSArray, NSMutableArray, NSSet;

#import <Foundation/Foundation.h>

#import "ATXTimelineRelevanceAdoption.h"

@interface ATXHomeScreenWidgetDiscoverabilityLogHarvester : NSObject {
    NSMutableDictionary *_widgetDiscoverabilityDictionaries;
    NSUserDefaults *_defaults;
    BMAppLaunchStream *_appLaunchStream;
    NSMutableDictionary *_appUsageDictionary;
    ATXTimelineRelevanceAdoption *_timelineRelevanceAdoptionHelper;
    NSDictionary *_globalPopularityDictionary;
    NSArray *_thirdPartyAppsSortedByUsage;
    NSMutableDictionary *_appMetricsAccumulator;
    NSMutableArray *_metricsPerAlgorithm;
    NSSet *_topTwentyInstalled3PApps;
    BOOL _isiPad;
}




-(BOOL)_isRegularlyUsedApp:(id)arg0 ;
-(BOOL)_shouldConsiderWidgetWhenCalculatingRankBasedMetricsWithFamilyMask:(NSUInteger)arg0 ;
-(id)_appLaunchCountForAppBundleId:(id)arg0 ;
-(id)_fetchStackSuggestionsWithDefaultStack:(id)arg0 ;
-(id)_generateSummaryMetricsWithDescriptorCache:(id)arg0 withActivity:(id)arg1 ;
-(id)_globalPopularityDictionary;
-(id)_initializeMetricsAccumulatorWithKeys:(id)arg0 ;
-(id)_installed3PAppsSortedByUsage;
-(id)_installed3PAppsWithWidgetsSortedByUsage;
-(id)_installedAppsSortedByAppUsage;
-(id)_setOfTopTwentyInstalled3PApps;
-(id)_shortDescriptionForAlgorithm:(int)arg0 ;
-(id)_topTwentyInstalled3PAppsSortedByUsage;
-(id)_uniqueDaysAppHasBeenLaunchedOverLast28Days:(id)arg0 ;
-(id)dryRunResult;
-(id)init;
-(void)_generateWidgetDiscoverabilityMetricsWithHomeScreenItemProducer:(id)arg0 descriptors:(id)arg1 appMetrics:(id)arg2 algorithm:(int)arg3 ;
-(void)_logAdblClassificationForUser;
-(void)_logRankBasedMetricsWithOnboardingStacks:(id)arg0 algorithm:(int)arg1 ;
-(void)_populateDistributionBasedMetricsWithAppMetrics:(id)arg0 ;
-(void)_populateRankBasedGlobalPopularityMetricsForWidgetPersonality:(id)arg0 withRank:(id)arg1 adoptionScore:(id)arg2 ;
-(void)_populateRankBasedMetricsForUsageWithRank:(id)arg0 appBundleId:(id)arg1 mostRegularlyUsedApp:(id)arg2 secondMostRegularlyUsedApp:(id)arg3 ;
-(void)_populateRankBasedTimelineAdoptionMetricsForWidgetPersonality:(id)arg0 withRank:(id)arg1 adoptionScore:(id)arg2 ;
-(void)_queryAppUsageForAllInstalledApps;
-(void)generateWidgetDiscoverabilityMetricsWithActivity:(id)arg0 ;
-(void)sendToCoreAnalytics;


@end


#endif