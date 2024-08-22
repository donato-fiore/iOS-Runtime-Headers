// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKINTERACTIVECHARTOVERLAYWAITFORCACHEDATA_H
#define _HKINTERACTIVECHARTOVERLAYWAITFORCACHEDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "HKInteractiveChartOverlayViewController.h"

@interface _HKInteractiveChartOverlayWaitForCacheData : NSObject

@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayController; // ivar: _overlayController
@property (retain, nonatomic) NSMutableArray *waitForDataSources; // ivar: _waitForDataSources


-(id)_findDataSource:(id)arg0 ;
-(id)initWithOverlayController:(id)arg0 ;
-(void)addWaitForDataSource:(id)arg0 graphSeriesContext:(id)arg1 timeScope:(NSInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 priorityDelegate:(id)arg5 completion:(id)arg6 ;
-(void)removeWaitForDataSource:(id)arg0 ;


@end


#endif