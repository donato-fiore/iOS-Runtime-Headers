// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCARDIOFITNESSLEVELCONTEXT_H
#define _HKCARDIOFITNESSLEVELCONTEXT_H

@class HKCardioFitnessOverlayContext, HKHealthStore, HKUnit;
@protocol HKDateRangeDataSourceDelegate;


#import "HKDisplayType.h"
#import "HKGraphSeries.h"
#import "HKInteractiveChartDisplayType.h"

@interface _HKCardioFitnessLevelContext : HKCardioFitnessOverlayContext

@property (retain, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (nonatomic) NSInteger cardioFitnessLevel; // ivar: _cardioFitnessLevel
@property (retain, nonatomic) HKGraphSeries *cardioFitnessLevelSeries; // ivar: _cardioFitnessLevelSeries
@property (retain, nonatomic) NSObject<HKDateRangeDataSourceDelegate> *dataSourceDelegate; // ivar: _dataSourceDelegate
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKInteractiveChartDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (retain, nonatomic) HKUnit *unit; // ivar: _unit


-(id)_makeGraphSeriesWithDataSource:(id)arg0 color:(id)arg1 ;
-(id)initWithMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 baseDisplayType:(id)arg3 cardioFitnessLevel:(NSInteger)arg4 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(void)_updateContextItemWithChartPointCountForDateInterval:(id)arg0 timeScope:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_updateContextItemWithSampleCountForDateInterval:(id)arg0 timeScope:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif