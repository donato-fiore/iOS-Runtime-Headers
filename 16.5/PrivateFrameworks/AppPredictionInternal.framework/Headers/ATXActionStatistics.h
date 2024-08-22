// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONSTATISTICS_H
#define ATXACTIONSTATISTICS_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface ATXActionStatistics : NSObject {
    NSMutableDictionary *_statisticsForParameters;
    CGFloat _totalLaunches;
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
    CGFloat _totalConfirms;
    CGFloat _totalRejects;
    CGFloat _totalExplicitRejectsNoDecay;
    CGFloat _totalConfirmsInSpotlight;
    CGFloat _totalRejectsInSpotlight;
    CGFloat _totalConfirmsInSpotlightWithinMeanWindow;
    CGFloat _totalRejectsInSpotlightWithinMeanWindow;
    NSMutableSet *_totalUniqueDaysConfirmedOrRejectedInSpotlightWithinMeanWindow;
    CGFloat _totalConfirmsTodayInLockscreen;
    CGFloat _totalRejectsTodayInLockscreen;
    CGFloat _totalConfirmsInLockscreen;
    CGFloat _totalRejectsInLockscreen;
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
}




-(id)init;
-(void)updateActionStatisticsForSlotResolutionStatistics:(id)arg0 candidateActionPredictions:(id)arg1 ;


@end


#endif