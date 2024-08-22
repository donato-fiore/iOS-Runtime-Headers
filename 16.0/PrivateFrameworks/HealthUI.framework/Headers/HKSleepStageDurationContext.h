// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSTAGEDURATIONCONTEXT_H
#define HKSLEEPSTAGEDURATIONCONTEXT_H

@class NSString;
@protocol HKOverlayContext, HKOverlaySleepRoomContextChangeDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface HKSleepStageDurationContext : NSObject <HKOverlayContext>



@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (readonly, weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate; // ivar: _contextChangeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (readonly, nonatomic) NSInteger sleepValue; // ivar: _sleepValue
@property (readonly) Class superclass;


-(BOOL)unselectedContextShouldUseContextBaseType;
-(CGFloat)_computeAverageValueFromChartPoints:(id)arg0 ;
-(id)_amountStringFromAverageValue:(CGFloat)arg0 timeScope:(NSInteger)arg1 ;
-(id)_contextItemWithAmountString:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithBaseDisplayType:(id)arg0 overlayDisplayType:(id)arg1 overlayChartController:(id)arg2 contextChangeDelegate:(id)arg3 sleepValue:(NSInteger)arg4 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)overlayStateWillChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif