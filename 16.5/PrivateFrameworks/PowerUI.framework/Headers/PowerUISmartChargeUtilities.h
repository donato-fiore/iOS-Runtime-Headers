// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUISMARTCHARGEUTILITIES_H
#define POWERUISMARTCHARGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PowerUISmartChargeUtilities : NSObject



+(BOOL)deviceConnectedToWirelessChargerWithContext:(id)arg0 ;
+(BOOL)deviceHasEnoughPluggedInTimeWithMinimumDays:(CGFloat)arg0 withContext:(id)arg1 withKnowledgeStore:(id)arg2 withDefaultsDomain:(id)arg3 ;
+(BOOL)deviceWasActiveWithinSeconds:(CGFloat)arg0 withContext:(id)arg1 withStore:(id)arg2 ;
+(BOOL)deviceWasConnectedToChargerWithinSeconds:(CGFloat)arg0 withContext:(id)arg1 ;
+(BOOL)isDesktopDeviceWithDurations:(*CGFloat)arg0 withAOEThreshold:(CGFloat)arg1 withStore:(id)arg2 withContext:(id)arg3 ;
+(BOOL)isInflowInhibitSupported;
+(BOOL)isInternalBuild;
+(BOOL)isOBCSupported;
+(BOOL)isPluggedInWithContext:(id)arg0 ;
+(BOOL)isiPad;
+(BOOL)isiPhone;
+(BOOL)isiPod;
+(CGFloat)areaOverEightyWithStore:(id)arg0 withContext:(id)arg1 withBatteryLevelDurations:(*CGFloat)arg2 ;
+(CGFloat)batteryLevelAtDate:(id)arg0 withCurrentBatteryLevel:(CGFloat)arg1 withKnowledgeStore:(id)arg2 withContextStore:(id)arg3 ;
+(CGFloat)percentageOfBatteryDurations:(*CGFloat)arg0 aboveBatteryLevel:(CGFloat)arg1 ;
+(CGFloat)totalPluginDurationAfter:(id)arg0 withMinimumDuration:(CGFloat)arg1 withPluginEvents:(id)arg2 ;
+(NSInteger)currentBatteryLevelWithContext:(id)arg0 ;
+(NSUInteger)decileClassificationWithStore:(id)arg0 withTopBinCutOff:(*float)arg1 withContext:(id)arg2 ;
+(id)batteryLevelHistogramAroundTime:(id)arg0 withDelta:(CGFloat)arg1 withOffset:(CGFloat)arg2 ;
+(id)batteryProperties;
+(id)concatenateContinuousEventsOfSameState:(id)arg0 sortedAscending:(BOOL)arg1 ;
+(id)concatenateEventsPrivate:(id)arg0 withMaxDeltaSecondsBetweenEvents:(NSUInteger)arg1 ;
+(id)curentDateStringFromDate:(id)arg0 withFormat:(id)arg1 ;
+(id)dateForPreferenceKey:(id)arg0 inDomain:(id)arg1 ;
+(id)drainBetweenRelevantEventsBefore:(id)arg0 withMinimumDuration:(CGFloat)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3 withDefaultsDomain:(id)arg4 ;
+(id)drainBetweenRelevantEventsFromDrainSessionInfo:(id)arg0 ;
+(id)drainSessionsInfoBetweenRelevantChargesBefore:(id)arg0 withMinimumDuration:(CGFloat)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3 withDefaultsDomain:(id)arg4 ;
+(id)engagementMetricsByModeOfOperationWithStore:(id)arg0 ;
+(id)eventsAdjustedForTimeZoneOffsets:(id)arg0 ;
+(id)getCurrentBootSessionUUID;
+(id)getEngagementMetricsForDevice:(id)arg0 withKnowledgeStore:(id)arg1 ;
+(id)getEngagementMetricsWithDefaultKnowledgeStore;
+(id)getEngagementMetricsWithDefaultKnowledgeStoreForDevice:(id)arg0 ;
+(id)getEngagementMetricsWithKnowledgeStore:(id)arg0 ;
+(id)getPossibleEngagmentEventsWithKnowledgeStore:(id)arg0 ;
+(id)getTestVector:(id)arg0 ;
+(id)historicalChargeDurationsFromLevel:(int)arg0 toLevel:(int)arg1 filteredByMinimumPluginDuration:(CGFloat)arg2 withStore:(id)arg3 ;
+(id)historicalEngagementsWithStore:(id)arg0 sortedAscending:(BOOL)arg1 ;
+(id)historicalTopOffDurationsWithStore:(id)arg0 ;
+(id)lastPluggedInDateWithContext:(id)arg0 withStore:(id)arg1 ;
+(id)log;
+(id)numberForPreferenceKey:(id)arg0 inDomain:(id)arg1 ;
+(id)percentageOfTimeForBatteryLevels:(*CGFloat)arg0 withLog:(id)arg1 ;
+(id)pluginEvents:(id)arg0 withMinimumDuration:(CGFloat)arg1 ;
+(id)pluginEventsBefore:(id)arg0 withMinimumDuration:(CGFloat)arg1 withMinimumPlugoutBatteryLevel:(CGFloat)arg2 withStore:(id)arg3 ;
+(id)pluginEventsBefore:(id)arg0 withMinimumDuration:(CGFloat)arg1 withStore:(id)arg2 ;
+(id)predicateForEventsWithinSeconds:(CGFloat)arg0 aroundTimeOfDay:(id)arg1 goingDaysBack:(int)arg2 ;
+(id)printTimesPluginDate:(id)arg0 plugOutDate:(id)arg1 batteryEvent:(id)arg2 withPluginIterator:(int)arg3 withBatteryIterator:(int)arg4 ;
+(id)readDictForPreferenceKey:(id)arg0 inDomain:(id)arg1 ;
+(id)readStringForPreferenceKey:(id)arg0 inDomain:(id)arg1 ;
+(id)recentEngagementHistoryWithStore:(id)arg0 ;
+(id)roundedDateFromDate:(id)arg0 ;
+(id)timeStringFromDate:(id)arg0 ;
+(id)timelineEventDate:(id)arg0 withDefaultsDomain:(id)arg1 ;
+(void)batteryLevelsWithStore:(id)arg0 withContext:(id)arg1 withBatteryLevelDurations:(*CGFloat)arg2 ;
+(void)mergeDrainSessionsInfo:(id)arg0 intoResult:(id)arg1 ;
+(void)recordEngagementEventAt:(id)arg0 withEngagedMinutes:(NSInteger)arg1 withEligibleDurationMins:(NSInteger)arg2 wasUndercharged:(BOOL)arg3 forDevice:(id)arg4 withKnowledgeStore:(id)arg5 ;
+(void)recordEngagementEventAt:(id)arg0 withEngagedMinutes:(NSInteger)arg1 withEligibleDurationMins:(NSInteger)arg2 wasUndercharged:(BOOL)arg3 withKnowledgeStore:(id)arg4 ;
+(void)recordPossibleEngagementEventAt:(id)arg0 withPluginDate:(CGFloat)arg1 withPluginDuration:(NSInteger)arg2 absoluteShouldHaveEngaged:(BOOL)arg3 withEngagedMinutes:(NSInteger)arg4 withEligibleDurationMins:(NSInteger)arg5 withTotalEligibleDurationMins:(NSInteger)arg6 wasUndercharged:(BOOL)arg7 withKnowledgeStore:(id)arg8 ;
+(void)setDate:(id)arg0 forPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setDict:(id)arg0 forPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setNumber:(id)arg0 forPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setString:(id)arg0 forPreferenceKey:(id)arg1 inDomain:(id)arg2 ;


@end


#endif