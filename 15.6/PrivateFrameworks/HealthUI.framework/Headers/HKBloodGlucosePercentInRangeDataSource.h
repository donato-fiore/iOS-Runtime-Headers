// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBLOODGLUCOSEPERCENTINRANGEDATASOURCE_H
#define HKBLOODGLUCOSEPERCENTINRANGEDATASOURCE_H



#import "HKHealthQueryChartCacheDataSource.h"
#import "HKUnitPreferenceController.h"

@interface HKBloodGlucosePercentInRangeDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(NSInteger)_requiredSampleCountForHistogramForStatisticsInterval:(id)arg0 ;
-(id)_dataBlockFromHistogramCollection:(id)arg0 requiredSampleCountForHistogram:(NSInteger)arg1 ;
-(id)initWithHealthStore:(id)arg0 unitController:(id)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDescription;


@end


#endif