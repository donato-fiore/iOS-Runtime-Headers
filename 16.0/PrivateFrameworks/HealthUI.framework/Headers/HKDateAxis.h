// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATEAXIS_H
#define HKDATEAXIS_H

@class NSCalendar;


#import "HKAxis.h"

@interface HKDateAxis : HKAxis

@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar


-(BOOL)canAddLabelForAxisLabelType:(NSInteger)arg0 ;
-(NSInteger)dateZoomForZoomScale:(CGFloat)arg0 ;
-(NSUInteger)_anchorUnitForZoom:(NSInteger)arg0 ;
-(id)_axisLabelsWithModelRange:(id)arg0 zoom:(NSInteger)arg1 ;
-(id)_baseDateForDate:(id)arg0 components:(id)arg1 calendar:(id)arg2 ;
-(id)_dateRangeForChartRange:(struct HKRange )arg0 zoomScale:(CGFloat)arg1 ;
-(id)_firstDateAfter:(id)arg0 matchingComponents:(id)arg1 timeScope:(NSInteger)arg2 calendar:(id)arg3 ;
-(id)_formattedStringForDate:(id)arg0 zoom:(NSInteger)arg1 ;
-(id)_nextDateForDate:(id)arg0 components:(id)arg1 timeScope:(NSInteger)arg2 calendar:(id)arg3 ;
-(id)axisLabelIntervalComponentsForZoomLevelConfiguration:(id)arg0 ;
-(id)cacheKeysForModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)extendModelRangeWithRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithCurrentCalendar:(id)arg0 axisStyle:(id)arg1 ;
-(id)minorAxisIntervalComponentsForZoomLevelConfiguration:(id)arg0 ;
-(id)rangeForChartRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 contentOffset:(struct CGPoint )arg2 ;
-(id)stringForDate:(id)arg0 zoom:(NSInteger)arg1 labelType:(NSInteger)arg2 ;
-(void)_enumerateCoordinatesInModelRange:(id)arg0 timeScope:(NSInteger)arg1 withHandler:(id)arg2 ;
-(void)_setRangeForDateRange:(id)arg0 ;
-(void)offsetForValueRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScaleOut:(*CGFloat)arg2 contentOffsetOut:(struct CGPoint *)arg3 ;


@end


#endif