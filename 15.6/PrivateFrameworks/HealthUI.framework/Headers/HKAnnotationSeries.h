// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKANNOTATIONSERIES_H
#define HKANNOTATIONSERIES_H

@class NSArray;
@protocol HKDateRangeDataSourceDelegate;


#import "HKGraphSeries.h"

@interface HKAnnotationSeries : HKGraphSeries <HKDateRangeDataSourceDelegate>



@property (readonly, nonatomic) NSArray *chartPoints; // ivar: _chartPoints


+(id)_buildChartPointsForDateInterval:(id)arg0 trendData:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)dataForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)initWithDateInterval:(id)arg0 trendData:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif