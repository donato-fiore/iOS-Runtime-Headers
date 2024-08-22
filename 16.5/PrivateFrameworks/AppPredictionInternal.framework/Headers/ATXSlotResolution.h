// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSLOTRESOLUTION_H
#define ATXSLOTRESOLUTION_H


#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "_ATXScoreInterpreter.h"

@interface ATXSlotResolution : NSObject {
    _ATXDataStore *_dataStore;
    _ATXScoreInterpreter *_slotResolutionInterpreter;
}




+(BOOL)isNotLaunchedWithinShortTimeSpan:(id)arg0 ;
+(BOOL)matchForCurrentGeohash:(NSInteger)arg0 rowGeohash:(NSInteger)arg1 ;
+(BOOL)shouldCountRowForGeohashIndividualContextStatistics:(NSInteger)arg0 rowGeohash:(NSInteger)arg1 ;
+(BOOL)shouldCountRowForGeohashOccurrencesCalculationForCurrentGeohash:(NSInteger)arg0 rowGeohash:(NSInteger)arg1 ;
+(CGFloat)exponentialDecay:(CGFloat)arg0 withHalflife:(CGFloat)arg1 ;
+(id)yearMonthDayComponentsForDate:(id)arg0 ;
+(void)setDistributionBasedScoreInputsForDayOfWeekForItem:(struct ATXPredictionItem *)arg0 withLaunchDistribution:(id)arg1 ;
+(void)setDistributionBasedScoreInputsForItem:(struct ATXPredictionItem *)arg0 withGeoHashResolution:(NSUInteger)arg1 withLaunchCounts:(id)arg2 ;
+(void)setDistributionBasedScoreInputsForTimeOfDayForItem:(struct ATXPredictionItem *)arg0 withLaunchDistribution:(id)arg1 ;
+(void)setSlotLogProbabilityForCandidateActionPredictions:(id)arg0 ;
+(void)setSlotResolutionPredictionItemForTopUpcomingMediaActionContainer:(id)arg0 appActionPredictionItem:(struct ATXPredictionItem *)arg1 appActionLogProbability:(CGFloat)arg2 ;
-(id)actionPredictionsForStatistics:(id)arg0 ;
-(id)actionPredictionsForStatistics:(id)arg0 appActionPredictionItem:(struct ATXPredictionItem *)arg1 appActionLogProbability:(CGFloat)arg2 scoreLogger:(id)arg3 currentDate:(id)arg4 ;
-(id)fastStatisticsOnSlotsForBundleId:(id)arg0 actionType:(id)arg1 currentDate:(id)arg2 previousLocationUUID:(id)arg3 currentLocationUUID:(id)arg4 currentMotionType:(NSInteger)arg5 currentGeohash:(NSInteger)arg6 currentCoarseGeohash:(NSInteger)arg7 ;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)statisticsForActionKey:(id)arg0 ;
-(id)statisticsForActionKey:(id)arg0 context:(id)arg1 ;
-(id)statisticsForActionKey:(id)arg0 currentDate:(id)arg1 previousLocationUUID:(id)arg2 currentLocationUUID:(id)arg3 currentMotionType:(NSInteger)arg4 currentGeohash:(NSInteger)arg5 currentCoarseGeohash:(NSInteger)arg6 ;
-(id)updateStatisticsWithFeedbackForBundleId:(id)arg0 actionType:(id)arg1 statistics:(id)arg2 currentDate:(id)arg3 currentGeohash:(NSInteger)arg4 currentCoarseGeohash:(NSInteger)arg5 ;
-(id)updateStatisticsWithHigherLevelFeaturesForStatistics:(id)arg0 ;


@end


#endif