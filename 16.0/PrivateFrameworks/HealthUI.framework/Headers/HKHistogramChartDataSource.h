// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHISTOGRAMCHARTDATASOURCE_H
#define HKHISTOGRAMCHARTDATASOURCE_H

@class NSString, HKHealthStore, HKQuantitySample, NSPredicate, HKQuantityType, NSArray, NSDate, HKUnit;
@protocol HKHistogramAxisDimensionDataSource, HKHistogramChartDataSourceDataFetchObserver;


#import "HKGraphSeriesDataSource.h"
#import "HKGraphSeriesDataBlock.h"
#import "HKUnitPreferenceController.h"
#import "HKValueRange.h"

@interface HKHistogramChartDataSource : HKGraphSeriesDataSource <HKHistogramAxisDimensionDataSource>



@property (nonatomic) NSUInteger binCalculation; // ivar: _binCalculation
@property (nonatomic) NSUInteger binWidth; // ivar: _binWidth
@property (nonatomic) NSUInteger binningMode; // ivar: _binningMode
@property (retain, nonatomic) HKGraphSeriesDataBlock *dataBlock; // ivar: _dataBlock
@property (copy, nonatomic) id *dataBlockBuilder; // ivar: _dataBlockBuilder
@property (nonatomic) NSUInteger dateBasedBinModeConfig; // ivar: _dateBasedBinModeConfig
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char didExecuteQuery; // ivar: _didExecuteQuery
@property (weak, nonatomic) NSObject<HKHistogramChartDataSourceDataFetchObserver> *fetchObserver; // ivar: _fetchObserver
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKQuantitySample *maximumSample; // ivar: _maximumSample
@property (retain, nonatomic) HKQuantitySample *minimumSample; // ivar: _minimumSample
@property (nonatomic) NSUInteger numberOfBins; // ivar: _numberOfBins
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSString *quantityIdentifier; // ivar: _quantityIdentifier
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (retain, nonatomic) NSArray *quantityValueRanges; // ivar: _quantityValueRanges
@property (retain, nonatomic) NSDate *samplesEndDate; // ivar: _samplesEndDate
@property (retain, nonatomic) NSDate *samplesStartDate; // ivar: _samplesStartDate
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKUnit *unit;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController
@property (readonly, nonatomic) HKValueRange *xAxisRange; // ivar: _xAxisRange
@property (copy, nonatomic) id *xAxisStringForLocation; // ivar: _xAxisStringForLocation
@property (readonly, nonatomic) HKValueRange *yAxisRange; // ivar: _yAxisRange


+(id)_daysInWeekXValueRange;
+(id)_hoursInDayXValueRange;
-(NSUInteger)_binIndexForSample:(id)arg0 ;
-(NSUInteger)_dateBasedBinIndexForSample:(id)arg0 ;
-(NSUInteger)_dayIndexForDayName:(id)arg0 ;
-(NSUInteger)_normalBinIndexForSample:(id)arg0 ;
-(id)_buildQuantityValueRangesFromSortedSamples:(id)arg0 ;
-(id)_dateBasedXValueRangeForConfig:(NSUInteger)arg0 ;
-(id)_dayNameFormatter;
-(id)_dayNameFromDayIndex:(NSUInteger)arg0 ;
-(id)_dayXAxisStringForLocation:(id)arg0 ;
-(id)_daysOfTheWeek;
-(id)_displayType;
-(id)_hourNameFromHourIndex:(NSUInteger)arg0 ;
-(id)_hourOfTheDayFormatter;
-(id)_hourXAxisStringForLocation:(id)arg0 ;
-(id)_initWithQuantityTypeIdentifier:(id)arg0 healthStore:(id)arg1 unitPreferenceController:(id)arg2 predicate:(id)arg3 xAxisRange:(id)arg4 yAxisRange:(id)arg5 binMode:(NSUInteger)arg6 binCalculation:(NSUInteger)arg7 binWidth:(CGFloat)arg8 numberOfBins:(NSUInteger)arg9 dateBasedBinModeConfig:(NSUInteger)arg10 ;
-(id)_query;
-(id)_samplesSortedByQuantity:(id)arg0 ;
-(id)buildBinsWithSamples:(id)arg0 ;
-(id)buildGraphSeriesDataBlockFromSamples:(id)arg0 ;
-(id)buildGraphSeriesDataBlockWithCalculatedBinValues:(id)arg0 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)calculateBinValueForBins:(id)arg0 usingCalculation:(NSUInteger)arg1 ;
-(id)initWithQuantityTypeIdentifier:(id)arg0 healthStore:(id)arg1 unitPreferenceController:(id)arg2 predicate:(id)arg3 yAxisRange:(id)arg4 binCalculation:(NSUInteger)arg5 dateBasedBinModeConfig:(NSUInteger)arg6 ;
-(id)initWithQuantityTypeIdentifier:(id)arg0 healthStore:(id)arg1 unitPreferenceController:(id)arg2 predicate:(id)arg3 yAxisRange:(id)arg4 binWidth:(CGFloat)arg5 ;
-(id)stringForLocation:(id)arg0 ;
-(id)xAxisStringForLocation:(id)arg0 ;
-(struct ? )blockPathForX:(id)arg0 zoom:(NSInteger)arg1 ;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;
-(void)didCompleteFetch;
-(void)fetchData;


@end


#endif