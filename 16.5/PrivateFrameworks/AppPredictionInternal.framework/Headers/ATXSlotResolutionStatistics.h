// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSLOTRESOLUTIONSTATISTICS_H
#define ATXSLOTRESOLUTIONSTATISTICS_H

@class NSString, NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface ATXSlotResolutionStatistics : NSObject {
    NSString *_actionKey;
    NSMutableDictionary *_statisticsForParameters;
    NSMutableDictionary *_statisticsForSlotSet;
    CGFloat _totalLaunches;
    int _slotCount;
    CGFloat _totalTimeOfDayCount;
    CGFloat _totalThirtyMinuteWindowCount;
    CGFloat _totalHourWindowCount;
    CGFloat _totalEightHourWindowCount;
    CGFloat _totalCoarseTimeOfDayCount;
    CGFloat _totalDayOfWeekCount;
    CGFloat _totalPartOfWeekCount;
    CGFloat _totalLocationCount;
    CGFloat _totalMotionTypeCount;
    CGFloat _totalPrevLocationCount;
    NSMutableSet *_totalUniqueDaysLaunched;
    CGFloat _totalConfirmsForAllSlots;
    CGFloat _totalRejectsForAllSlots;
    CGFloat _totalExplicitRejectsForAllSlotsNoDecay;
    CGFloat _totalConfirmsInSpotlightForAllSlots;
    CGFloat _totalRejectsInSpotlightForAllSlots;
    CGFloat _totalConfirmsInSpotlightWithinMeanWindowForAllSlots;
    CGFloat _totalRejectsInSpotlightWithinMeanWindowForAllSlots;
    NSMutableSet *_totalUniqueDaysConfirmedOrRejectedInSpotlightWithinMeanWindowForAllSlots;
    CGFloat _totalConfirmsTodayInLockscreenForAllSlots;
    CGFloat _totalRejectsTodayInLockscreenForAllSlots;
    CGFloat _totalConfirmsInLockscreenForAllSlots;
    CGFloat _totalRejectsInLockscreenForAllSlots;
    CGFloat _totalTimeAndLocationCount;
    CGFloat _totalTimeAndDayCount;
    CGFloat _totalDayAndLocationCount;
    CGFloat _totalTimeAndDayAndLocationCount;
    CGFloat _totalPrevLocationAndMotionTypeCount;
    CGFloat _totalPrevLocationAndLocationCount;
    CGFloat _totalTimeAndPrevLocationCount;
    CGFloat _totalDayAndPrevLocationCount;
    CGFloat _totalPartOfWeekAndLocationCount;
    CGFloat _totalPartOfWeekAndTimeCount;
    CGFloat _totalTimeOfDayOccurrences;
    CGFloat _totalDayOfWeekOccurrences;
    CGFloat _totalLocationOccurrences;
    CGFloat _totalMotionTypeOccurrences;
    CGFloat _totalPreviousLocationOccurrences;
    CGFloat _totalPartOfWeekOccurrences;
    CGFloat _totalTimeAndDayOccurrences;
    CGFloat _totalTimeAndLocationOccurrences;
    CGFloat _totalDayAndLocationOccurrences;
    CGFloat _totalTimeAndDayAndLocationOccurrences;
    CGFloat _totalPrevLocationAndLocationOccurrences;
    CGFloat _totalPrevLocationAndMotionTypeOccurrences;
    CGFloat _totalTimeAndPrevLocationOccurrences;
    CGFloat _totalDayAndPrevLocationOccurrences;
    CGFloat _totalPartOfWeekAndLocationOccurrences;
    CGFloat _totalPartOfWeekAndTimeOccurrences;
    CGFloat _totalCoarseTimePOWLocationCount;
    CGFloat _totalCoarseTimePOWLocationOccurrences;
    CGFloat _totalConfirmsCoarseTimePOWLocationCount;
    CGFloat _totalConfirmsCoarseTimePOWLocationOccurrences;
    CGFloat _totalRejectsCoarseTimePOWLocationCount;
    CGFloat _totalRejectsCoarseTimePOWLocationOccurrences;
    CGFloat _totalSpecificTimeDOWLocationCount;
    CGFloat _totalSpecificTimeDOWLocationOccurrences;
    CGFloat _totalConfirmsSpecificTimeDOWLocationCount;
    CGFloat _totalConfirmsSpecificTimeDOWLocationOccurrences;
    CGFloat _totalRejectsSpecificTimeDOWLocationCount;
    CGFloat _totalRejectsSpecificTimeDOWLocationOccurrences;
    CGFloat _launchesDayOfWeekInContext;
    CGFloat _launchesCoarseGeoHashInContext;
    CGFloat _launchesSpecificGeoHashInContext;
    CGFloat _launchesTimeOfDayInContext;
    CGFloat _confirmsTimeOfDayInContext;
    CGFloat _rejectsTimeOfDayInContext;
    CGFloat _confirmsDayOfWeekInContext;
    CGFloat _rejectsDayOfWeekInContext;
    CGFloat _confirmsCoarseGeoHashInContext;
    CGFloat _rejectsCoarseGeoHashInContext;
    CGFloat _confirmsSpecificGeoHashInContext;
    CGFloat _rejectsSpecificGeoHashInContext;
    CGFloat _homeScreenActionConfirmsOnDayOfWeekInContext;
    CGFloat _homeScreenActionRejectsOnDayOfWeekInContext;
    CGFloat _homeScreenActionConfirmsAtTimeOfDayInContext;
    CGFloat _homeScreenActionRejectsAtTimeOfDayInContext;
    CGFloat _homeScreenActionConfirmsAtCoarseGeohashInContext;
    CGFloat _homeScreenActionRejectsAtCoarseGeohashInContext;
    CGFloat _homeScreenActionConfirmsAtSpecificGeohashInContext;
    CGFloat _homeScreenActionRejectsAtSpecificGeohashInContext;
    CGFloat _homeScreenActionConfirmsAtCoarseTimePOWLocationInContext;
    CGFloat _homeScreenActionRejectsAtCoarseTimePOWLocationInContext;
    CGFloat _homeScreenActionConfirmsAtSpecificTimeDOWLocationInContext;
    CGFloat _homeScreenActionRejectsAtSpecificTimeDOWLocationInContext;
    int _totalConfirmRatioCount;
    CGFloat _totalConfirmRatioMean;
    CGFloat _totalConfirmRatioSumOfSquaresOfDifferencesFromMean;
}




-(CGFloat)_totalConfirmRatioStandardDeviation;
-(id)init;
-(id)initWithActionKey:(id)arg0 ;
-(void)_updateConfirmRatioStatisticsForNewConfirmRatio:(CGFloat)arg0 ;


@end


#endif