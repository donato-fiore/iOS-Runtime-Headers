// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOVERLAYROOMTRENDCONTEXT_H
#define HKOVERLAYROOMTRENDCONTEXT_H

@class NSString;
@protocol HKOverlayContext, HKTrendAccessibilityDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"
#import "HKGraphSeries.h"
#import "HKInteractiveChartDisplayType.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomTrendContext : NSObject <HKOverlayContext, HKTrendAccessibilityDelegate>



@property (readonly, nonatomic) NSInteger categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly, nonatomic) NSInteger overlayMode; // ivar: _overlayMode
@property (retain, nonatomic) HKGraphSeries *seriesForSelectedTrend; // ivar: _seriesForSelectedTrend
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *trendDisplayType; // ivar: _trendDisplayType
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel


+(NSInteger)findStartingTimeScopeFromTrendModel:(id)arg0 ;
+(id)findInitialDateFromTrendModel:(id)arg0 ;
-(BOOL)_timeScopeHasTrendSpans:(NSInteger)arg0 ;
-(BOOL)_timeScopeMayHaveTrends:(NSInteger)arg0 ;
-(BOOL)canSelectOverlayContextItem:(id)arg0 isDeselecting:(BOOL)arg1 timeScope:(NSInteger)arg2 chartController:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_adjustTrendValueRange:(id)arg0 timescope:(NSInteger)arg1 calendar:(id)arg2 ;
-(id)_buildAnnotatedHorizontalLineSeriesUsingDisplayType:(id)arg0 unitController:(id)arg1 categoryController:(id)arg2 ;
-(id)_buildTrendDisplayTypeFromModel:(id)arg0 baseDisplayType:(id)arg1 unitController:(id)arg2 categoryController:(id)arg3 ;
-(id)_buildTrendOverlayValueFormatterUsingDisplayType:(id)arg0 unitController:(id)arg1 ;
-(id)_buildTrendingLineSeriesStyleWithColor:(id)arg0 formattingDisplayType:(id)arg1 unitController:(id)arg2 annotationFormatter:(id)arg3 ;
-(id)_durationContextItemWithSummaryPhrase:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_representativeDisplayTypeFromDisplayType:(id)arg0 ;
-(id)_summaryGivenChartPoints:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_trendTitle;
-(id)_trendValueRangeForTimescope:(NSInteger)arg0 calendar:(id)arg1 ;
-(id)_unselectedMetricColorsUserInteractive:(BOOL)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithBaseDisplayType:(id)arg0 trendModel:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 overlayMode:(NSInteger)arg4 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)trendAccessibilitySeries;
-(void)overlayStateDidChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif