// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSTAGEPERCENTAGECONTEXT_H
#define HKSLEEPSTAGEPERCENTAGECONTEXT_H

@class NSString, NSNumberFormatter;
@protocol HKOverlayContext, HKOverlaySleepRoomContextChangeDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface HKSleepStagePercentageContext : NSObject <HKOverlayContext>



@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (readonly, weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate; // ivar: _contextChangeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (readonly, nonatomic) NSNumberFormatter *percentageFormatter; // ivar: _percentageFormatter
@property (readonly, nonatomic) NSInteger sleepStage; // ivar: _sleepStage
@property (readonly) Class superclass;


+(CGFloat)roundedSleepStageDurationPercentageFromDurations:(id)arg0 withCategoryValue:(NSInteger)arg1 ;
-(BOOL)unselectedContextShouldUseContextBaseType;
-(CGFloat)_computePercentageValueFromChartPoints:(id)arg0 ;
-(id)_contextItemWithPercentageString:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_percentageStringFromValue:(CGFloat)arg0 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithSleepStage:(NSInteger)arg0 baseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 contextChangeDelegate:(id)arg4 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)overlayStateDidChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)overlayStateWillChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif