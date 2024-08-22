// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKSLEEPSCHEDULECONTEXT_H
#define _HKSLEEPSCHEDULECONTEXT_H

@class NSString, HKSampleType;
@protocol HKOverlayContext, _HKContextChangeDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface _HKSleepScheduleContext : NSObject <HKOverlayContext>



@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (readonly, weak, nonatomic) NSObject<_HKContextChangeDelegate> *contextChangeDelegate; // ivar: _contextChangeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPrimaryContext; // ivar: _isPrimaryContext
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (retain, nonatomic) HKSampleType *monitoringSampleType; // ivar: _monitoringSampleType
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (readonly, nonatomic) NSInteger overlayMode; // ivar: _overlayMode
@property (readonly) Class superclass;


-(BOOL)unselectedContextShouldUseContextBaseType;
-(id)_scheduleContextItemWithPhrase:(id)arg0 ;
-(id)_schedulePhraseFromChartPoints:(id)arg0 ;
-(id)_schedulePhraseFromUpperGoal:(id)arg0 lowerGoal:(id)arg1 ;
-(id)_stringFromGoalOffset:(id)arg0 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithBaseDisplayType:(id)arg0 overlayDisplayType:(id)arg1 overlayChartController:(id)arg2 overlayMode:(NSInteger)arg3 isPrimaryContext:(BOOL)arg4 contextChangeDelegate:(id)arg5 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)overlayStateWillChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif