// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCARDIOFITNESSUTILITIES_H
#define HKCARDIOFITNESSUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKCardioFitnessUtilities : NSObject



+(BOOL)cardioFitnessLevelChartShouldDisplayLowerBound:(NSInteger)arg0 ;
+(BOOL)cardioFitnessLevelChartShouldDisplayUpperBound:(NSInteger)arg0 ;
+(NSInteger)cardioFitnessLevelForVO2Max:(CGFloat)arg0 biologicalSex:(NSInteger)arg1 age:(NSInteger)arg2 ;
+(NSInteger)cardioFitnessLevelForVO2MaxSample:(id)arg0 inHealthStore:(id)arg1 ;
+(id)_localizationKeyForCardioFitnessLevel:(NSInteger)arg0 keyVariant:(id)arg1 ;
+(id)cardioFitnessDataForBiologicalSex:(NSInteger)arg0 ;
+(id)cardioFitnessDataForBiologicalSex:(NSInteger)arg0 age:(NSInteger)arg1 ;
+(id)cardioFitnessDataForLevel:(NSInteger)arg0 biologicalSex:(NSInteger)arg1 age:(NSInteger)arg2 ;
+(id)cardioFitnessDataForLevel:(NSInteger)arg0 date:(id)arg1 healthStore:(id)arg2 ;
+(id)cardioFitnessDataForVO2Max:(CGFloat)arg0 biologicalSex:(NSInteger)arg1 age:(NSInteger)arg2 ;
+(id)cardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)arg0 applicationItems:(id)arg1 preferredOverlay:(NSInteger)arg2 analyticsDelegate:(id)arg3 trendModel:(id)arg4 ;
+(id)cardioFitnessLevelDataForChartData:(id)arg0 ;
+(id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)arg0 healthStore:(id)arg1 ;
+(id)cardioFitnessLookupPropertiesForChartData:(id)arg0 ;
+(id)effectiveChartPointDateWithStatisticsInterval:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)flattenedCardioFitnessDataForBiologicalSex:(NSInteger)arg0 ;
+(id)localizationKeyForCardioFitnessLevel:(NSInteger)arg0 ;
+(id)localizedStringForCardioFitnessDescription:(NSInteger)arg0 age:(NSInteger)arg1 ;
+(id)localizedStringForCardioFitnessLevel:(NSInteger)arg0 ;
+(id)localizedStringForCardioFitnessLevelName:(NSInteger)arg0 ;
+(id)localizedStringForCardioFitnessTitle:(NSInteger)arg0 ;
+(id)vo2MaxInteractiveChartViewControllerWithDisplayDate:(id)arg0 applicationItems:(id)arg1 trendModel:(id)arg2 ;


@end


#endif