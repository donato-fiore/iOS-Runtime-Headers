// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKINTERACTIVECHARTOVERLAYDELIVERCACHEDDATA_H
#define _HKINTERACTIVECHARTOVERLAYDELIVERCACHEDDATA_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "HKGraphSeriesDataSource.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface _HKInteractiveChartOverlayDeliverCachedData : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) HKGraphSeriesDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) id *graphSeriesContext; // ivar: _graphSeriesContext
@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayController; // ivar: _overlayController
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSInteger timeScope; // ivar: _timeScope


-(BOOL)deliverDataToCompletion;
-(id)initWithOverlayController:(id)arg0 dataSource:(id)arg1 graphSeriesContext:(id)arg2 timeScope:(NSInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(id)arg6 ;


@end


#endif