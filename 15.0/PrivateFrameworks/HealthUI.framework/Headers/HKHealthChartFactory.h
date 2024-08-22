// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEALTHCHARTFACTORY_H
#define HKHEALTHCHARTFACTORY_H

@class HKHealthStore, NSDictionary, _HKWheelchairUseCharacteristicCache;
@protocol HKCardioFitnessDataSourceProvider, HKAddDataViewControllerProvider, HKSleepDataSourceProvider;

#import <Foundation/Foundation.h>

#import "HKChartDataCacheController.h"
#import "HKDateCache.h"
#import "HKDisplayCategoryController.h"
#import "HKDisplayTypeController.h"
#import "HKSampleTypeDateRangeController.h"
#import "HKSampleTypeUpdateController.h"
#import "HKSelectedTimeScopeController.h"
#import "HKInteractiveChartDataFormatter.h"
#import "HKUnitPreferenceController.h"

@interface HKHealthChartFactory : NSObject <HKCardioFitnessDataSourceProvider>



@property (retain, nonatomic) NSObject<HKAddDataViewControllerProvider> *addDataViewControllerProvider; // ivar: _addDataViewControllerProvider
@property (retain, nonatomic) NSObject<HKCardioFitnessDataSourceProvider> *cardioFitnessDataSourceProvider; // ivar: _cardioFitnessDataSourceProvider
@property (readonly, nonatomic) HKChartDataCacheController *chartDataCacheController; // ivar: _chartDataCacheController
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, nonatomic) HKDisplayCategoryController *displayCategoryController; // ivar: _displayCategoryController
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSDictionary *identifierToDisplayTypeMapping; // ivar: _identifierToDisplayTypeMapping
@property (readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController; // ivar: _sampleTypeDateRangeController
@property (readonly, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController; // ivar: _sampleTypeUpdateController
@property (readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController; // ivar: _selectedTimeScopeController
@property (retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter; // ivar: _sleepChartFormatter
@property (retain, nonatomic) NSObject<HKSleepDataSourceProvider> *sleepDataSourceProvider; // ivar: _sleepDataSourceProvider
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // ivar: _wheelchairUseCharacteristicCache


+(id)_standardIdentifierMappings;
-(BOOL)_oldStyleTrendableTypeIdentifier:(id)arg0 ;
-(NSInteger)_resolvedTimeScopeForTypeIdentifier:(id)arg0 displayDateInterval:(id)arg1 ;
-(NSInteger)_sourceFirstWeekdayFromModel:(id)arg0 ;
-(id)CHRRoomApplicationItems;
-(id)_buildApplicationItems;
-(id)_buildStandardRemoteChartViewControllerWithDisplayType:(id)arg0 timeScopeRanges:(id)arg1 initialTimeScope:(NSInteger)arg2 firstWeekday:(NSInteger)arg3 ;
-(id)_buildSummaryTrendOverlayChartViewControllerWithDisplayType:(id)arg0 timeScopeRanges:(id)arg1 initialTimeScope:(NSInteger)arg2 chartSummaryTrendModel:(id)arg3 firstWeekday:(NSInteger)arg4 ;
-(id)_cardioFitnessDataSourcesForDisplayType:(id)arg0 ;
-(id)_customTypeIdentifierController:(id)arg0 applicationItems:(id)arg1 displayDate:(id)arg2 preferredOverlay:(NSInteger)arg3 restorationUserActivity:(id)arg4 trendModel:(id)arg5 ;
-(id)_defaultRemoteDataSourcesForDisplayType:(id)arg0 ;
-(id)_displayTypeForTypeIdentifier:(id)arg0 ;
-(id)_mapTypeIdentifierToDisplayType:(id)arg0 ;
-(id)_remoteChartDisplayTypeForTypeIdentifier:(id)arg0 ;
-(id)_remoteCustomFormatterForDisplayType:(id)arg0 ;
-(id)_remoteDataSourcesForDisplayType:(id)arg0 ;
-(id)_remoteDateIntervals;
-(id)_remoteDisplayTypeConfigurationFromDataSources:(id)arg0 model:(id)arg1 originalDisplayType:(id)arg2 ;
-(id)_remoteGraphSeriesForDisplayType:(id)arg0 graphSeriesDataSource:(id)arg1 timeScope:(NSInteger)arg2 ;
-(id)_remoteStatisticsIntervalForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_sleepRemoteDataSourcesForDisplayType:(id)arg0 ;
-(id)_sleepRemoteGraphSeriesForDisplayType:(id)arg0 graphSeriesDataSource:(id)arg1 ;
-(id)_sourceTimeZoneFromModel:(id)arg0 ;
-(id)_standardRemoteGraphSeriesForDisplayType:(id)arg0 graphSeriesDataSource:(id)arg1 timeScope:(NSInteger)arg2 ;
-(id)_trendDisplayTypeForTypeIdentifier:(id)arg0 applicationItems:(id)arg1 overlayRoomViewController:(id)arg2 ;
-(id)activityChartForActivityMoveMode:(NSInteger)arg0 displayDate:(id)arg1 chartSharableModel:(id)arg2 ;
-(id)chartForTypeIdentifier:(id)arg0 dateRange:(id)arg1 minimumSize:(struct CGSize )arg2 ;
-(id)chartForTypeIdentifier:(id)arg0 dateRange:(id)arg1 minimumSize:(struct CGSize )arg2 disableXAxis:(BOOL)arg3 currentCalendar:(id)arg4 ;
-(id)createDisplayTypeForSleepDuration;
-(id)createInteractiveChartForSimpleDisplayType:(id)arg0 chartOptions:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)interactiveChartForTypeIdentifier:(id)arg0 preferredOverlay:(NSInteger)arg1 displayDateInterval:(id)arg2 restorationUserActivity:(id)arg3 chartSummaryTrendModel:(id)arg4 ;
-(id)makeCardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)arg0 applicationItems:(id)arg1 preferredOverlay:(NSInteger)arg2 trendModel:(id)arg3 ;
-(id)remoteInteractiveChartForTypeIdentifier:(id)arg0 model:(id)arg1 chartSummaryTrendModel:(id)arg2 ;
-(id)standardSleepChartFormatter;
-(id)supportedTypeIdentifiers;
-(void)encodeActivityChartDataForActivityMoveMode:(NSInteger)arg0 completion:(id)arg1 ;
-(void)encodeChartQueryDataForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif