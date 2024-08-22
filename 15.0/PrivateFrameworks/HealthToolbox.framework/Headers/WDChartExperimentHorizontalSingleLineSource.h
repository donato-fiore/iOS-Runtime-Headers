// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCHARTEXPERIMENTHORIZONTALSINGLELINESOURCE_H
#define WDCHARTEXPERIMENTHORIZONTALSINGLELINESOURCE_H

@class HKGraphSeriesDataSource, NSArray;



@interface WDChartExperimentHorizontalSingleLineSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) NSArray *chartPoints; // ivar: _chartPoints


-(id)_appointmentsToChartPoints:(id)arg0 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)initWithAppointments:(id)arg0 ;
-(id)initWithHorizontalSingleLineChartPoints:(id)arg0 ;


@end


#endif