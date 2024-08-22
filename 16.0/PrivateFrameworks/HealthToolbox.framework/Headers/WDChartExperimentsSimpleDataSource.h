// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCHARTEXPERIMENTSSIMPLEDATASOURCE_H
#define WDCHARTEXPERIMENTSSIMPLEDATASOURCE_H

@class HKGraphSeriesDataSource, NSArray;



@interface WDChartExperimentsSimpleDataSource : HKGraphSeriesDataSource

@property (retain, nonatomic) NSArray *chartPoints; // ivar: _chartPoints


-(id)_computeSineData:(CGFloat)arg0 ;
-(id)_dosagesToChartPoints:(id)arg0 unit:(id)arg1 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)initWithDosages:(id)arg0 unit:(id)arg1 ;
-(id)initWithSineData:(CGFloat)arg0 ;


@end


#endif