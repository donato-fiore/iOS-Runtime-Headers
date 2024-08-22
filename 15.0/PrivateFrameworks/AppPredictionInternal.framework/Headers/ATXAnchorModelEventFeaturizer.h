// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELEVENTFEATURIZER_H
#define ATXANCHORMODELEVENTFEATURIZER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelEventFeaturizer : NSObject {
    NSMutableDictionary *_bundleIdToLaunchHistoryDict;
}


@property (nonatomic) BOOL shouldComputeLaunchHistoryForActionKeyLaunches; // ivar: _shouldComputeLaunchHistoryForActionKeyLaunches
@property (nonatomic) BOOL shouldComputeLaunchHistoryForActionUUIDLaunches; // ivar: _shouldComputeLaunchHistoryForActionUUIDLaunches
@property (nonatomic) BOOL shouldComputeLaunchHistoryForAppLaunches; // ivar: _shouldComputeLaunchHistoryForAppLaunches


+(NSUInteger)getMinTemporalDistanceFromAnchorDate:(id)arg0 toTimeRange:(struct _NSRange )arg1 ;
+(id)locationOfInterestForAnchorOccurrenceDate:(id)arg0 ;
+(void)setHourofDayAndDayOfWeekFromDate:(id)arg0 anchorMetadata:(id)arg1 ;
+(void)setLocationAndLocationTypeOnDate:(id)arg0 anchorMetadata:(id)arg1 ;
+(void)setMonthAndDayOfMonthFromDate:(id)arg0 anchorMetadata:(id)arg1 ;
-(id)earliestDate:(id)arg0 ;
-(id)featurizeActionEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)featurizeActionKeyForActionEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)featurizeActionUUIDForActionEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)featurizeAnchorEvent:(id)arg0 anchor:(id)arg1 ;
-(id)featurizeAppLaunchEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)featurizeAppLaunchForActionEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)featurizeModeEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)historyForActionUUIDWithAppIntentDuetEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)historyForAppLaunchDuetEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)historyForModeChangeEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)init;
-(id)numAppLaunchesForBundleId:(id)arg0 endDate:(id)arg1 dateBuckets:(id)arg2 ;
-(id)numAppLaunchesForBundleIds:(id)arg0 endDate:(id)arg1 dateBuckets:(id)arg2 ;
-(id)numEventsForEventIds:(id)arg0 endDate:(id)arg1 dateBuckets:(id)arg2 biomePublisher:(id)arg3 ;
-(id)numModeChangesForModeCandidateId:(id)arg0 endDate:(id)arg1 dateBuckets:(id)arg2 ;
-(id)numModeChangesForModeCandidateIds:(id)arg0 endDate:(id)arg1 dateBuckets:(id)arg2 ;
-(id)recentHistoryForActionUUIDWithAppIntentDuetEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)recentHistoryForAppLaunchDuetEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(id)recentHistoryForModeWithModeEvent:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(void)warmLaunchHistoryForAppEvents:(id)arg0 anchorOccurrenceDate:(id)arg1 ;


@end


#endif