// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSTAGEDURATIONDAYSERIES_H
#define HKSLEEPSTAGEDURATIONDAYSERIES_H

@class NSCalendar;


#import "HKSleepStageDurationSeries.h"

@interface HKSleepStageDurationDaySeries : HKSleepStageDurationSeries

@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar


-(NSInteger)visibleBarCountWithZoomLevelConfiguration:(id)arg0 ;
-(id)_buildSleepDurationCoordinateWithDurationValue:(CGFloat)arg0 sleepValue:(NSInteger)arg1 barLocationIndex:(NSInteger)arg2 startOfCalendarDay:(id)arg3 xAxisTransform:(id)arg4 yAxisTransform:(id)arg5 userInfo:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;


@end


#endif