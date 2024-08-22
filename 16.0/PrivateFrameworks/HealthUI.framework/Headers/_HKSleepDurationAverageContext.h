// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSLEEPDURATIONAVERAGECONTEXT_H
#define _HKSLEEPDURATIONAVERAGECONTEXT_H

@class NSString;
@protocol HKOverlayContext, HKOverlaySleepRoomContextChangeDelegate;

#import <Foundation/Foundation.h>

#import "_HKSleepDurationAverageFormatter.h"
#import "HKDisplayType.h"
#import "HKDisplayTypeContextItem.h"
#import "_HKSleepDurationAverageSeries.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface _HKSleepDurationAverageContext : NSObject <HKOverlayContext>



@property (readonly, nonatomic) _HKSleepDurationAverageFormatter *averageChartFormatter; // ivar: _averageChartFormatter
@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (readonly, weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate; // ivar: _contextChangeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) _HKSleepDurationAverageSeries *overlayAverageSeries; // ivar: _overlayAverageSeries
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useInBedAverage; // ivar: _useInBedAverage


-(BOOL)unselectedContextShouldUseContextBaseType;
-(CGFloat)_averageValueFromChartPoints:(id)arg0 useInBedAverage:(BOOL)arg1 ;
-(id)_averagePhraseFromAverageValue:(CGFloat)arg0 shortForm:(BOOL)arg1 timeScope:(NSInteger)arg2 ;
-(id)_contextItemWithAverageString:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_findSleepDurationSeriesForTimeScope:(NSInteger)arg0 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithBaseDisplayType:(id)arg0 overlayDisplayType:(id)arg1 overlayChartController:(id)arg2 useInBedAverage:(BOOL)arg3 contextChangeDelegate:(id)arg4 overlayAverageSeries:(id)arg5 averageChartFormatter:(id)arg6 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)_updateRangeDataWithChartPoints:(id)arg0 useInBedAverage:(BOOL)arg1 isHighlighted:(BOOL)arg2 timeScope:(NSInteger)arg3 ;
-(void)overlayStateWillChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif