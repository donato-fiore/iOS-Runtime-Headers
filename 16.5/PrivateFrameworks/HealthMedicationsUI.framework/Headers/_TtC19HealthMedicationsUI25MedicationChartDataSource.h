// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI25MEDICATIONCHARTDATASOURCE_H
#define _TTC19HEALTHMEDICATIONSUI25MEDICATIONCHARTDATASOURCE_H

@class HKHealthQueryChartCacheDataSource;



@interface _TtC19HealthMedicationsUI25MedicationChartDataSource : HKHealthQueryChartCacheDataSource {
    ? medication;
    ? encoder;
    ? decoder;
    ? sortDescriptors;
}




-(BOOL)supportsChartQueryDataGeneration;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)init;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif