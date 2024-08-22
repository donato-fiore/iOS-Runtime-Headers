// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTOVERLAYVIEWCONTROLLER_H
#define HKINTERACTIVECHARTOVERLAYVIEWCONTROLLER_H

@class UIColor, NSMutableDictionary, NSString;
@protocol HKInteractiveChartViewObserver;


#import "HKInteractiveChartViewController.h"
#import "HKValueRange.h"
#import "HKDisplayType.h"
#import "_HKInteractiveChartOverlayWaitForCacheData.h"

@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver>



@property (retain, nonatomic) UIColor *currentOverlayColor; // ivar: _currentOverlayColor
@property (retain, nonatomic) NSMutableDictionary *customNamedCaches; // ivar: _customNamedCaches
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKValueRange *initialVisibleDateRange; // ivar: _initialVisibleDateRange
@property (retain, nonatomic) NSMutableDictionary *overlayChartCaches; // ivar: _overlayChartCaches
@property (retain, nonatomic) HKDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (readonly, nonatomic) HKDisplayType *primaryDisplayType; // ivar: _primaryDisplayType
@property (readonly) Class superclass;
@property (retain, nonatomic) _HKInteractiveChartOverlayWaitForCacheData *waitForCacheData; // ivar: _waitForCacheData


-(BOOL)_deliverCachedDataFromSource:(id)arg0 graphSeriesContext:(id)arg1 timeScope:(NSInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(id)arg5 ;
-(BOOL)_displayTypeRequiresAverageAndDuration:(id)arg0 ;
-(CGFloat)minimumHeightForChart;
-(id)_dataSourceForDistributionStyle:(NSInteger)arg0 timeScope:(NSInteger)arg1 namedPredicate:(id)arg2 ;
-(id)_dataSourceForNamedDataSource:(id)arg0 templateDisplayType:(id)arg1 ;
-(id)_dataSourceForQuantityType:(id)arg0 timeScope:(NSInteger)arg1 customDataSource:(id)arg2 ;
-(id)_overlayChartCacheForDataSource:(id)arg0 templateDisplayType:(id)arg1 ;
-(id)_overlayChartCacheForDistributionStyle:(NSInteger)arg0 timeScope:(NSInteger)arg1 namedPredicate:(id)arg2 ;
-(id)displayTypeForGraphSeries:(id)arg0 namedDataSource:(id)arg1 templateDisplayType:(id)arg2 timeScope:(NSInteger)arg3 formatter:(id)arg4 ;
-(id)displayTypeForQuantityDistributionStyle:(NSInteger)arg0 timeScope:(NSInteger)arg1 overlayColor:(id)arg2 options:(NSInteger)arg3 alternateFormatter:(id)arg4 namedPredicate:(id)arg5 ;
-(id)displayTypeForQuantityIdentifier:(id)arg0 timeScope:(NSInteger)arg1 displayTypeController:(id)arg2 overlayColor:(id)arg3 cacheDataSource:(id)arg4 alternateLineSeries:(id)arg5 alternateFormatter:(id)arg6 seriesOptions:(NSInteger)arg7 ;
-(id)initWithHealthStore:(id)arg0 primaryDisplayType:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 sampleTypeDateRangeController:(id)arg6 initialXValue:(id)arg7 currentCalendarOverride:(id)arg8 options:(NSUInteger)arg9 ;
-(id)initWithTimeScopeRanges:(id)arg0 healthStore:(id)arg1 primaryDisplayType:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 currentCalendarOverride:(id)arg9 options:(NSUInteger)arg10 ;
-(id)lollipopAnnotationColor;
-(id)lollipopExtensionColor;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(id)visibleRangeForTimeScope:(NSInteger)arg0 proposedRange:(id)arg1 ;
-(void)_commonInitializationWithDisplayType:(id)arg0 ;
-(void)_deliverOrWaitForDataSource:(id)arg0 graphSeriesContext:(id)arg1 priorityDelegate:(id)arg2 timeScope:(NSInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 queryIfNeeded:(BOOL)arg6 completion:(id)arg7 ;
-(void)_modifyFormatter:(id)arg0 forTitleOptions:(NSInteger)arg1 ;
-(void)cachedDataForCustomGraphSeries:(id)arg0 timeScope:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(id)arg4 ;
-(void)cachedDataForCustomGraphSeries:(id)arg0 timeScope:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 queryIfNeeded:(BOOL)arg4 completion:(id)arg5 ;
-(void)cachedDataForQuantityDistributionStyle:(NSInteger)arg0 timeScope:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 namedPredicate:(id)arg4 completion:(id)arg5 ;
-(void)cachedDataForQuantityIdentifier:(id)arg0 timeScope:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 cacheDataSource:(id)arg4 completion:(id)arg5 ;
-(void)cachedDataForStandardDisplayType:(id)arg0 timeScope:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(id)arg4 ;
-(void)clearDisplayTypeStack;
-(void)clearOverlayDisplayType;
-(void)clearOverlayDisplayTypeWithAutomaticAutoscale:(BOOL)arg0 ;
-(void)configureDisplayTypes:(id)arg0 timeScope:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(void)installOverlayDisplayType:(id)arg0 ;
-(void)installStackedDisplayType:(id)arg0 ;
-(void)unitPreferencesWillUpdate:(id)arg0 ;


@end


#endif