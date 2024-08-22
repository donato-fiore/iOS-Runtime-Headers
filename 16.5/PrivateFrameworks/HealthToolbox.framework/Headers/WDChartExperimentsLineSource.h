// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCHARTEXPERIMENTSLINESOURCE_H
#define WDCHARTEXPERIMENTSLINESOURCE_H

@class HKGraphSeriesDataSource, NSArray;



@interface WDChartExperimentsLineSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) NSArray *chartPoints; // ivar: _chartPoints


-(id)_chartPointsFromDataSpec:(id)arg0 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif