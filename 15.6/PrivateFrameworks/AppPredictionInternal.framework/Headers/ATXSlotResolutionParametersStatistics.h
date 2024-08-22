// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSLOTRESOLUTIONPARAMETERSSTATISTICS_H
#define ATXSLOTRESOLUTIONPARAMETERSSTATISTICS_H

@class NSDate, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXSlotResolutionParametersStatistics : NSObject {
    int _totalUndecayedOccurrences;
    CGFloat _weightedNumOccurrences;
    int _numParameters;
    NSDate *_latestAppSessionStartDate;
    NSMutableSet *_uniqueDaysLaunched;
    NSDate *_earliestOccurrenceTime;
    NSDate *_latestOccurrenceTime;
    CGFloat _totalConfirms;
    CGFloat _totalRejects;
    CGFloat _totalExplicitRejectsNoDecay;
    CGFloat _minutesSinceLastConfirmInSpotlight;
    CGFloat _minutesSinceLastExplicitRejectInSpotlight;
    CGFloat _minutesSinceLastConfirmInLockscreen;
    CGFloat _minutesSinceLastRejectInLockscreen;
    CGFloat _minutesSinceLastExplicitRejectInLockscreen;
    CGFloat _minutesSinceLastExplicitRejectInHomeScreen;
    CGFloat _totalConfirmsInLastHourInSpotlight;
    CGFloat _totalRejectsInLastHourInSpotlight;
    CGFloat _totalConfirmsInLastTwoHoursInSpotlight;
    CGFloat _totalRejectsInLastTwoHoursInSpotlight;
    CGFloat _totalConfirmsTodayInSpotlight;
    CGFloat _totalRejectsTodayInSpotlight;
    CGFloat _totalConfirmsInSpotlight;
    CGFloat _totalRejectsInSpotlight;
    CGFloat _totalConfirmsTodayInLockscreen;
    CGFloat _totalRejectsTodayInLockscreen;
    CGFloat _totalConfirmsInLockscreen;
    CGFloat _totalRejectsInLockscreen;
    CGFloat _totalOccurrences;
    CGFloat _totalTimeOfDayOccurrences;
    CGFloat _totalDayOfWeekOccurrences;
    CGFloat _totalPartOfWeekOccurrences;
    CGFloat _totalLocationOccurrences;
    CGFloat _totalPreviousLocationOccurrences;
    CGFloat _totalMotionTypeOccurrences;
    CGFloat _totalTimeAndDayOccurrences;
    CGFloat _totalTimeAndLocationOccurrences;
    CGFloat _totalDayAndLocationOccurrences;
    CGFloat _totalTimeAndDayAndLocationOccurrences;
    CGFloat _totalPrevLocationAndMotionTypeOccurrences;
    CGFloat _totalPrevLocationAndLocationOccurrences;
    CGFloat _totalTimeAndPrevLocationOccurrences;
    CGFloat _totalDayAndPrevLocationOccurrences;
    CGFloat _totalPartOfWeekAndLocationOccurrences;
    CGFloat _totalPartOfWeekAndTimeOccurrences;
    CGFloat _timeOfDayCount;
    CGFloat _thirtyMinuteWindowCount;
    CGFloat _hourWindowCount;
    CGFloat _eightHourWindowCount;
    CGFloat _coarseTimeOfDayCount;
    CGFloat _dayOfWeekCount;
    CGFloat _partOfWeekCount;
    CGFloat _partOfWeekAndLocationCount;
    CGFloat _locationCount;
    CGFloat _motionTypeCount;
    CGFloat _prevLocationCount;
    CGFloat _timeAndLocationCount;
    CGFloat _timeAndDayCount;
    CGFloat _dayAndLocationCount;
    CGFloat _timeAndDayAndLocationCount;
    CGFloat _prevLocationAndMotionTypeCount;
    CGFloat _prevLocationAndLocationCount;
    CGFloat _timeAndPrevLocationCount;
    CGFloat _dayAndPrevLocationCount;
    CGFloat _partOfWeekAndTimeCount;
    CGFloat _confirmsPartOfWeekCountInSpotlight;
    CGFloat _confirmsDayCountInSpotlight;
    CGFloat _confirmsTimeOfDayCountInSpotlight;
    CGFloat _confirmsCoarseTimeOfDayCountInSpotlight;
    CGFloat _confirmsPartOfWeekCountInLockscreen;
    CGFloat _confirmsDayCountInLockscreen;
    CGFloat _confirmsTimeOfDayCountInLockscreen;
    CGFloat _confirmsCoarseTimeOfDayCountInLockscreen;
    CGFloat _appSessionCountAsDocFreq;
    CGFloat _timeOfDayBudgetMean;
    CGFloat _timeOfDayBudgetCount;
    CGFloat _timeOfDayBudgetSumOfSquaresOfDifferencesFromMean;
    CGFloat _todaysTimeOfDayBudget;
    CGFloat _timeOfDayBudget;
    CGFloat _coarseTimePOWLocationCount;
    CGFloat _totalCoarseTimePOWLocationOccurrences;
    CGFloat _confirmsCoarseTimePOWLocationCount;
    CGFloat _totalConfirmsCoarseTimePOWLocationOccurrences;
    CGFloat _rejectsCoarseTimePOWLocationCount;
    CGFloat _totalRejectsCoarseTimePOWLocationOccurrences;
    CGFloat _specificTimeDOWLocationCount;
    CGFloat _totalSpecificTimeDOWLocationOccurrences;
    CGFloat _confirmsSpecificTimeDOWLocationCount;
    CGFloat _totalConfirmsSpecificTimeDOWLocationOccurrences;
    CGFloat _rejectsSpecificTimeDOWLocationCount;
    CGFloat _totalRejectsSpecificTimeDOWLocationOccurrences;
    CGFloat _launchesDayOfWeekForAction;
    CGFloat _launchesCoarseGeoHashForActionInContext;
    CGFloat _launchesCoarseGeoHashForAction;
    CGFloat _launchesSpecificGeoHashForActionInContext;
    CGFloat _launchesSpecificGeoHashForAction;
    CGFloat _launchesTimeOfDayForAction;
    CGFloat _confirmsTimeOfDayForActionInContext;
    CGFloat _confirmsTimeOfDayForAction;
    CGFloat _rejectsTimeOfDayForActionInContext;
    CGFloat _rejectsTimeOfDayForAction;
    CGFloat _confirmsDayOfWeekForActionInContext;
    CGFloat _confirmsDayOfWeekForAction;
    CGFloat _rejectsDayOfWeekForActionInContext;
    CGFloat _rejectsDayOfWeekForAction;
    CGFloat _confirmsCoarseGeoHashForActionInContext;
    CGFloat _confirmsCoarseGeoHashForAction;
    CGFloat _rejectsCoarseGeoHashForActionInContext;
    CGFloat _rejectsCoarseGeoHashForAction;
    CGFloat _confirmsSpecificGeoHashForActionInContext;
    CGFloat _confirmsSpecificGeoHashForAction;
    CGFloat _rejectsSpecificGeoHashForActionInContext;
    CGFloat _rejectsSpecificGeoHashForAction;
    CGFloat _homeScreenActionConfirmsOnDayOfWeekForActionInContext;
    CGFloat _homeScreenActionConfirmsOnDayOfWeekForAction;
    CGFloat _homeScreenActionRejectsOnDayOfWeekForActionInContext;
    CGFloat _homeScreenActionRejectsOnDayOfWeekForAction;
    CGFloat _homeScreenActionConfirmsAtTimeOfDayForActionInContext;
    CGFloat _homeScreenActionConfirmsAtTimeOfDayForAction;
    CGFloat _homeScreenActionRejectsAtTimeOfDayForActionInContext;
    CGFloat _homeScreenActionRejectsAtTimeOfDayForAction;
    CGFloat _homeScreenActionConfirmsAtCoarseGeohashForActionInContext;
    CGFloat _homeScreenActionConfirmsAtCoarseGeohashForAction;
    CGFloat _homeScreenActionRejectsAtCoarseGeohashForActionInContext;
    CGFloat _homeScreenActionRejectsAtCoarseGeohashForAction;
    CGFloat _homeScreenActionConfirmsAtSpecificGeohashForActionInContext;
    CGFloat _homeScreenActionConfirmsAtSpecificGeohashForAction;
    CGFloat _homeScreenActionRejectsAtSpecificGeohashForActionInContext;
    CGFloat _homeScreenActionRejectsAtSpecificGeohashForAction;
    CGFloat _homeScreenActionConfirmsAtCoarseTimePOWLocationForActionInContext;
    CGFloat _homeScreenActionConfirmsAtCoarseTimePOWLocationForAction;
    CGFloat _homeScreenActionRejectsAtCoarseTimePOWLocationForActionInContext;
    CGFloat _homeScreenActionRejectsAtCoarseTimePOWLocationForAction;
    CGFloat _homeScreenActionConfirmsAtSpecificTimeDOWLocationForActionInContext;
    CGFloat _homeScreenActionConfirmsAtSpecificTimeDOWLocationForAction;
    CGFloat _homeScreenActionRejectsAtSpecificTimeDOWLocationForActionInContext;
    CGFloat _homeScreenActionRejectsAtSpecificTimeDOWLocationForAction;
    CGFloat _entropyTimeOfDayForAction;
    CGFloat _entropyDayOfWeekForAction;
    CGFloat _entropyCoarseGeoHashForAction;
    CGFloat _entropySpecificGeoHashForAction;
    NSMutableDictionary *_dayOfWeekDistributionOfLaunches;
    NSMutableDictionary *_timeOfDayDistributionOfLaunches;
    NSMutableDictionary *_coarseGeoHashDistributionOfLaunches;
    NSMutableDictionary *_specificGeoHashDistributionOfLaunches;
}




+(CGFloat)_smoothedBudgetForTimeOfDay:(NSInteger)arg0 currentTimeOfDay:(NSInteger)arg1 ;
+(CGFloat)_smoothedCountForCoarseTimeOfDay:(NSInteger)arg0 currentTimeOfDay:(NSInteger)arg1 ;
+(CGFloat)_smoothedCountForEightHourWindow:(NSInteger)arg0 currentTimeOfDay:(NSInteger)arg1 ;
+(CGFloat)_smoothedCountForHourWindow:(NSInteger)arg0 currentTimeOfDay:(NSInteger)arg1 ;
+(CGFloat)_smoothedCountForThirtyMinuteWindow:(NSInteger)arg0 currentTimeOfDay:(NSInteger)arg1 ;
+(CGFloat)_smoothedCountForTimeOfDay:(NSInteger)arg0 currentTimeOfDay:(NSInteger)arg1 ;
+(CGFloat)smoothedRatio:(CGFloat)arg0 over:(CGFloat)arg1 ;
-(CGFloat)_confirmRatio;
-(CGFloat)_timeOfDayBudgetStandardDeviation;
-(CGFloat)_totalFeedbackEvents;
-(id)description;
-(id)init;
-(id)initWithNumParameters:(int)arg0 ;
-(void)_updateTimeOfDayBudgetStatisticsForNewTimeOfDayBudget:(CGFloat)arg0 ;


@end


#endif