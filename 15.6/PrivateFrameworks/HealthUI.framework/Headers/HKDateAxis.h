// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATEAXIS_H
#define HKDATEAXIS_H

@class NSArray, NSCalendar;


#import "HKAxis.h"
#import "HKDateIntervalCache.h"

@interface HKDateAxis : HKAxis {
    HKDateIntervalCache *_intervalCache;
    NSArray *_cachedAxisLabels;
}


@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (nonatomic) NSInteger dayScopeType; // ivar: _dayScopeType


-(BOOL)_labelsOutsideStartDate:(id)arg0 endDate:(id)arg1 ;
-(NSInteger)dateZoomForZoomScale:(CGFloat)arg0 ;
-(NSUInteger)_anchorUnitForZoom:(NSInteger)arg0 ;
-(id)_axisLabelsWithModelRange:(id)arg0 zoom:(NSInteger)arg1 ;
-(id)_dateRangeForChartRange:(struct HKRange )arg0 zoomScale:(CGFloat)arg1 ;
-(id)_formattedStringForDate:(id)arg0 zoom:(NSInteger)arg1 ;
-(id)extendedModelRangeWithRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithCurrentCalendar:(id)arg0 ;
-(id)rangeForChartRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 contentOffset:(struct CGPoint )arg2 ;
-(id)stringForDate:(id)arg0 zoom:(NSInteger)arg1 labelType:(NSInteger)arg2 ;
-(id)zoomScaleEngine;
-(void)_clearCachedAxisLabels;
-(void)_enumerateCachedCoordinatesInModelRange:(id)arg0 withHandler:(id)arg1 ;
-(void)_setRangeForDateRange:(id)arg0 ;
-(void)_updateIntervalCacheWithModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(void)offsetForValueRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScaleOut:(*CGFloat)arg2 contentOffsetOut:(struct CGPoint *)arg3 ;


@end


#endif