// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCARDIOFITNESSOVERLAYCONTEXT_H
#define _HKCARDIOFITNESSOVERLAYCONTEXT_H

@class NSString, HKSampleType;
@protocol HKOverlayContext;

#import <Foundation/Foundation.h>

#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface _HKCardioFitnessOverlayContext : NSObject <HKOverlayContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) HKSampleType *monitoringSampleType; // ivar: _monitoringSampleType
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly) Class superclass;


-(id)_cardioFitnessContextItemWithLevel:(NSInteger)arg0 chartPointCount:(id)arg1 forTimeScope:(NSInteger)arg2 ;
-(id)_cardioFitnessContextItemWithLevel:(NSInteger)arg0 count:(id)arg1 unitString:(id)arg2 ;
-(id)_cardioFitnessContextItemWithLevel:(NSInteger)arg0 sampleCount:(id)arg1 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif