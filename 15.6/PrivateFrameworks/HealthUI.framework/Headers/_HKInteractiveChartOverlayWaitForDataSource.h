// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKINTERACTIVECHARTOVERLAYWAITFORDATASOURCE_H
#define _HKINTERACTIVECHARTOVERLAYWAITFORDATASOURCE_H

@class NSString, NSMutableArray;
@protocol HKGraphSeriesDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKGraphSeriesDataSource.h"
#import "HKInteractiveChartOverlayViewController.h"
#import "_HKInteractiveChartOverlayWaitForCacheData.h"

@interface _HKInteractiveChartOverlayWaitForDataSource : NSObject <HKGraphSeriesDataSourceDelegate>



@property (readonly, nonatomic) HKGraphSeriesDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deliveries; // ivar: _deliveries
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayController; // ivar: _overlayController
@property (weak, nonatomic) _HKInteractiveChartOverlayWaitForCacheData *parent; // ivar: _parent
@property (retain, nonatomic) NSObject<HKGraphSeriesDataSourceDelegate> *previousDelegate; // ivar: _previousDelegate
@property (readonly) Class superclass;


-(id)initWithOverlayController:(id)arg0 dataSource:(id)arg1 parent:(id)arg2 ;
-(void)_requestDataForTimeScope:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 priorityDelegate:(id)arg3 ;
-(void)addWaitForDataGraphSeriesContext:(id)arg0 timeScope:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 priorityDelegate:(id)arg4 completion:(id)arg5 ;
-(void)dataSourceDidUpdateCache:(id)arg0 ;


@end


#endif