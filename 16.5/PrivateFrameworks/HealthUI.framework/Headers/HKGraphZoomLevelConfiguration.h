// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGRAPHZOOMLEVELCONFIGURATION_H
#define HKGRAPHZOOMLEVELCONFIGURATION_H

@class NSDateComponents;

#import <Foundation/Foundation.h>


@interface HKGraphZoomLevelConfiguration : NSObject

@property (readonly, nonatomic) CGFloat approximateAxisLabelInterval; // ivar: _approximateAxisLabelInterval
@property (readonly, nonatomic) CGFloat approximateSeriesPointInterval; // ivar: _approximateSeriesPointInterval
@property (readonly, nonatomic) NSDateComponents *axisLabelIntervalComponents; // ivar: _axisLabelIntervalComponents
@property (readonly, nonatomic) CGFloat canonicalSize; // ivar: _canonicalSize
@property (readonly, nonatomic) NSInteger intendedTimeScope; // ivar: _intendedTimeScope
@property (readonly, nonatomic) NSUInteger majorTickCalendarUnit; // ivar: _majorTickCalendarUnit
@property (readonly, nonatomic) NSDateComponents *minorAxisIntervalComponents; // ivar: _minorAxisIntervalComponents
@property (readonly, nonatomic) NSDateComponents *referencePointIntervalComponents; // ivar: _referencePointIntervalComponents
@property (readonly, nonatomic) CGFloat seriesBlockSize; // ivar: _seriesBlockSize
@property (readonly, nonatomic) NSDateComponents *seriesPointIntervalComponents; // ivar: _seriesPointIntervalComponents
@property (readonly, nonatomic) CGFloat todayOffsetSize; // ivar: _todayOffsetSize
@property (readonly, nonatomic) CGFloat zoomLevelThreshold; // ivar: _zoomLevelThreshold


+(NSInteger)timeScopeForDateRange:(id)arg0 ;
+(id)_axisSpanDateComponentsWithTimeScope:(NSInteger)arg0 ;
+(id)_dateOffsetByHalfCanonicalSizeOfDate:(id)arg0 timeScope:(NSInteger)arg1 ;
+(id)_findVisibleRangeForTimeScope:(NSInteger)arg0 anchorDate:(id)arg1 alignment:(NSInteger)arg2 calendar:(id)arg3 ;
+(id)_fitRange:(id)arg0 toDateRange:(id)arg1 timeScope:(NSInteger)arg2 alignment:(NSInteger)arg3 calendar:(id)arg4 firstWeekday:(NSInteger)arg5 cadence:(NSInteger)arg6 level:(NSInteger)arg7 ;
+(id)_generateConfigurationForZoomLevel:(NSInteger)arg0 ;
+(id)_gregorianCalendarForCalendar:(id)arg0 ;
+(id)_snappingStartDateWithStartDate:(id)arg0 velocity:(struct CGPoint )arg1 calendar:(id)arg2 timeScope:(NSInteger)arg3 options:(NSInteger)arg4 alignment:(NSInteger)arg5 ;
+(id)_visibleRangeDateFromAnchor:(id)arg0 timeScope:(NSInteger)arg1 calendar:(id)arg2 offset:(NSInteger)arg3 ;
+(id)_visibleRangeDateFromDate:(id)arg0 timeScope:(NSInteger)arg1 calendar:(id)arg2 offset:(NSInteger)arg3 ;
+(id)activeRangeFromCadenceRange:(id)arg0 timeScope:(NSInteger)arg1 axisRange:(id)arg2 calendar:(id)arg3 ;
+(id)chartDataRangeForTimeScope:(NSInteger)arg0 dataRange:(id)arg1 firstWeekday:(NSInteger)arg2 calendar:(id)arg3 cadence:(NSInteger)arg4 alignment:(NSInteger)arg5 ;
+(id)chartVisibleRangeForTimeScope:(NSInteger)arg0 anchorDate:(id)arg1 alignment:(NSInteger)arg2 dataRange:(id)arg3 calendar:(id)arg4 firstWeekday:(NSInteger)arg5 cadence:(NSInteger)arg6 level:(NSInteger)arg7 ;
+(id)configurationForZoomLevel:(NSInteger)arg0 ;
+(id)defaultCalendar;
+(id)seriesPointIntervalUnitForTimeScope:(NSInteger)arg0 pointCount:(NSInteger)arg1 ;
+(id)snappingRangeForRange:(id)arg0 axisRange:(id)arg1 timeScope:(NSInteger)arg2 velocity:(struct CGPoint )arg3 calendar:(id)arg4 options:(NSInteger)arg5 alignment:(NSInteger)arg6 ;


@end


#endif