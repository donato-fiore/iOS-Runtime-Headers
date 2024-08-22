// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSLEEPDURATIONAMOUNTCONTEXT_H
#define _HKSLEEPDURATIONAMOUNTCONTEXT_H

@class NSString;
@protocol HKOverlayContext, _HKContextChangeDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface _HKSleepDurationAmountContext : NSObject <HKOverlayContext>



@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (readonly, weak, nonatomic) NSObject<_HKContextChangeDelegate> *contextChangeDelegate; // ivar: _contextChangeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly) Class superclass;


-(BOOL)unselectedContextShouldUseContextBaseType;
-(id)_amountStringFromCounts:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_contextItemWithAmountString:(id)arg0 ;
-(id)_daysWithSleepDataFromChartPoints:(id)arg0 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithBaseDisplayType:(id)arg0 overlayChartController:(id)arg1 contextChangeDelegate:(id)arg2 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif