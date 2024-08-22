// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSLEEPCOMPARISONCONTEXT_H
#define _HKSLEEPCOMPARISONCONTEXT_H

@protocol HKOverlaySleepRoomContextChangeDelegate;


#import "HKOverlayRoomStackedContext.h"

@interface _HKSleepComparisonContext : HKOverlayRoomStackedContext

@property (readonly, weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate; // ivar: _contextChangeDelegate


-(BOOL)_sampleTypeShouldUseSleepQuantityDistribution:(id)arg0 ;
-(BOOL)unselectedContextShouldUseContextBaseType;
-(id)_defaultStackedInteractiveChartDisplayTypeForSampleType:(id)arg0 overlayChartController:(id)arg1 applicationItems:(id)arg2 formatterTimeScope:(NSInteger)arg3 ;
-(id)_generateSleepDistributionDisplayTypeForStackedSampleType:(id)arg0 currentCalendarOverride:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 ;
-(id)contextItemForLastUpdate;
-(id)initWithStackedSampleType:(id)arg0 currentCalendarOverride:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 contextChangeDelegate:(id)arg4 primarySleepDisplayType:(id)arg5 ;
-(void)overlayStateWillChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)stackedOverlayStateWillChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;


@end


#endif