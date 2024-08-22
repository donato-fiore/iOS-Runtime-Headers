// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTOVERLAYSLEEPVIEWCONTROLLER_H
#define HKINTERACTIVECHARTOVERLAYSLEEPVIEWCONTROLLER_H

@class NSString;
@protocol HKSleepStageDayAxisDelegate;


#import "HKInteractiveChartOverlayViewController.h"

@interface HKInteractiveChartOverlaySleepViewController : HKInteractiveChartOverlayViewController <HKSleepStageDayAxisDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isSleepSeries:(id)arg0 ;
-(NSInteger)defaultAlignmentForTimeScope:(NSInteger)arg0 ;
-(NSInteger)effectiveAnnotationTimeScopeForTimeScope:(NSInteger)arg0 displayType:(id)arg1 segmentIndex:(NSInteger)arg2 sectionIndex:(NSInteger)arg3 ;
-(id)_customDateAxisForTimeScope:(NSInteger)arg0 segmentIndex:(NSInteger)arg1 sectionIndex:(NSInteger)arg2 currentCalendar:(id)arg3 ;
-(id)_dayTimeScopeDateAxisStyleWithTextAlignment:(NSInteger)arg0 hyphenationFactor:(id)arg1 ;
-(id)_sleepAnalysisDayAxisWithCalendar:(id)arg0 ;
-(id)_sleepComparisonDayAxisWithCalendar:(id)arg0 ;
-(id)_sleepStageDayAxisWithCalendar:(id)arg0 ;
-(id)_sleepStageDurationDayAxisWithCalendar:(id)arg0 ;
-(id)addNoDataEntries:(id)arg0 timeScope:(NSInteger)arg1 targetSeries:(id)arg2 ;
-(id)dateRangeFromSelectionContext:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)descriptionForStartX:(CGFloat)arg0 endX:(CGFloat)arg1 chartData:(id)arg2 timeScope:(NSInteger)arg3 graphView:(id)arg4 ;
-(id)makePrimaryGraphViewControllerWithDateZoom:(NSInteger)arg0 previousDateZoom:(NSInteger)arg1 previousXAxisSpace:(CGFloat)arg2 currentCalendar:(id)arg3 ;
-(id)sleepDaySummaryForDate:(id)arg0 ;
-(id)stringForValueRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(void)configureDisplayTypes:(id)arg0 timeScope:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(void)graphView:(id)arg0 didUpdateSeries:(id)arg1 newDataArrived:(BOOL)arg2 changeContext:(NSInteger)arg3 ;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg0 displayType:(id)arg1 timeScope:(NSInteger)arg2 ;


@end


#endif