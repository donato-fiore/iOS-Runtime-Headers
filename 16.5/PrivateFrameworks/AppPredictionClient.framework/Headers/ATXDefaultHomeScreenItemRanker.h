// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTHOMESCREENITEMRANKER_H
#define ATXDEFAULTHOMESCREENITEMRANKER_H

@class NSMutableDictionary, NSDictionary;
@protocol ATXCategoricalHistogramProtocol;

#import <Foundation/Foundation.h>


@interface ATXDefaultHomeScreenItemRanker : NSObject {
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;
    NSDictionary *_cachedRankerDictionary;
    id<ATXCategoricalHistogramProtocol> *_spotlightAppLaunchHistogram;
    NSDictionary *_appLaunchCounts;
}




+(BOOL)_shouldDownrankWidget:(id)arg0 ;
+(NSInteger)_downrankComparator:(id)arg0 widget2:(id)arg1 ;
+(id)stringForAlgorithmType:(int)arg0 ;
+(void)filterOutDuplicateWidgetsFromSameAppBundleId:(id)arg0 ;
-(CGFloat)_rawLaunchScoreForWidget:(id)arg0 ;
-(CGFloat)_uniqueDaysLaunchedScoreForWidget:(id)arg0 ;
-(NSInteger)_rankerDictionaryComparator:(id)arg0 timelineRelevanceAdoptionHelper:(id)arg1 widget1:(id)arg2 widget2:(id)arg3 ;
-(NSInteger)_uniqueDaysLaunchedComparatorForWidget1:(id)arg0 widget2:(id)arg1 ;
-(NSUInteger)_appUsageFrequencyForWidget:(id)arg0 regularlyUsedThreshold:(CGFloat)arg1 ;
-(id)_globalPopularityPlistStringKey:(int)arg0 ;
-(id)_rankerPlistToDictionary:(int)arg0 ;
-(id)_scoreForWidget:(id)arg0 withGlobalPopularityDictionary:(id)arg1 ;
-(id)_timelineRelevanceAdoptionHelper:(int)arg0 ;
-(id)_widgetsBySortingAndFilteringWidgets:(id)arg0 byAppLaunchAndRankerPlist:(int)arg1 regularlyUsedThreshold:(CGFloat)arg2 ;
-(id)initWithCachedWidgetPersonalityToAppScore:(id)arg0 spotlightAppLaunchHistogram:(id)arg1 appLaunchCounts:(id)arg2 ;
-(id)widgetsBySortingAndFilteringWidgetsUsingOnboardingStacksAlgorithm:(id)arg0 algorithm:(int)arg1 regularlyUsedThreshold:(CGFloat)arg2 ;
-(id)widgetsBySortingAndFilteringWidgetsUsingPersonalizedGalleryAlgorithm:(id)arg0 rankerPlistType:(int)arg1 regularlyUsedThreshold:(CGFloat)arg2 ;
-(id)widgetsBySortingAndFilteringWidgetsUsingPersonalizedTodayandAddSheetStackAlgorithm:(id)arg0 rankerPlistType:(int)arg1 regularlyUsedThreshold:(CGFloat)arg2 ;
-(id)widgetsBySortingWidgetsUsingDayZeroGalleryAlgorithm:(id)arg0 ;
-(void)_filterOutWidgetsNotFromTopLaunchedApps:(id)arg0 ;
-(void)_filterOutWidgetsThatAreNotRegularlyUsed:(id)arg0 regularlyUsedThreshold:(CGFloat)arg1 ;
-(void)_sortWidgets:(id)arg0 byRankerPlist:(int)arg1 shouldDownRankAlreadyInstalledWidgets:(BOOL)arg2 ;
-(void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)arg0 shouldDownRankAlreadyInstalledWidgets:(BOOL)arg1 ;
-(void)_sortWidgetsByRawLaunchCounts:(id)arg0 shouldDownRankAlreadyInstalledWidgets:(BOOL)arg1 ;


@end


#endif