// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENLOGSYSTEMEVENTDICTIONARIES_H
#define ATXHOMESCREENLOGSYSTEMEVENTDICTIONARIES_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogSystemEventDictionaries : NSObject {
    NSMutableDictionary *_systemLevelEventDictionary;
    NSMutableDictionary *_unlockSessionEngagementDictionary;
    NSMutableSet *_unique3PWidgetsOnHS;
}




+(id)_suggestionReasonToWidgetEventDictionariesProactiveWidgetRotationsKey:(int)arg0 ;
+(id)systemLevelDictionaryAccumulatorKeys;
+(id)systemLevelDictionaryAccumulatorSplitByLocationKeys;
-(id)_createNewSystemLevelDictionary;
-(id)_getOnboardingResultStringAndUpdateStackRemovedDateIfNeededWithDefaults:(id)arg0 ;
-(id)dryRunResult;
-(id)init;
-(void)_addKey:(id)arg0 splitByLocation:(NSUInteger)arg1 toAggregateKey:(id)arg2 ;
-(void)_populateSystemLevelDictionaryWithWidgetCohortAdoptionMetrics:(id)arg0 ;
-(void)populateHasBehavioralData;
-(void)populateLifetimeNPlusOneStatistics;
-(void)populateUnlockSessionEngagementSummaryFromManager:(id)arg0 ;
-(void)populateUsedKettle;
-(void)sendToCoreAnalytics;
-(void)updateNPlusOneLifetimeMetricsWithRotationSession:(id)arg0 ;
-(void)updateSystemLevelSummaryForHomeScreenEvent:(id)arg0 ;
-(void)updateSystemLevelSummaryForHomeScreenPages:(id)arg0 startDate:(id)arg1 ;
-(void)updateSystemLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)arg0 ;
-(void)updateSystemLevelSummaryTotalUnlockSessions:(NSUInteger)arg0 ;
-(void)updateSystemLevelSummaryWithRotationSession:(id)arg0 ;
-(void)updateSystemLevelUnlockSessionsWithWidgetDwell:(id)arg0 ;


@end


#endif