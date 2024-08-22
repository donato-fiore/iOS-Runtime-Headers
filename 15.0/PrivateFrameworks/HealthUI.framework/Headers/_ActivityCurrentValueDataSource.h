// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ACTIVITYCURRENTVALUEDATASOURCE_H
#define _ACTIVITYCURRENTVALUEDATASOURCE_H

@class UIView;
@protocol HKInteractiveChartCurrentValueViewCallbacks;


#import "HKActivitySummaryAnnotationViewDataSource.h"

@interface _ActivityCurrentValueDataSource : HKActivitySummaryAnnotationViewDataSource

@property (weak, nonatomic) NSObject<HKInteractiveChartCurrentValueViewCallbacks> *currentValueViewCallbacks; // ivar: _currentValueViewCallbacks
@property (nonatomic) BOOL currentValueViewHasNoData; // ivar: _currentValueViewHasNoData
@property (readonly, nonatomic) UIView *noDataView; // ivar: _noDataView


-(NSInteger)numberOfValuesForAnnotationView:(id)arg0 ;
-(id)_buildNoDataView;
-(id)_dateRangeFromComponents;
-(id)_dateRangeFromStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)_localizedCurrentValueViewDateRange;
-(id)dateViewWithOrientation:(NSInteger)arg0 ;
-(id)initWithDisplayTypeController:(id)arg0 unitController:(id)arg1 wheelchairUseCharacteristicCache:(id)arg2 currentValueViewContext:(BOOL)arg3 firstWeekday:(NSInteger)arg4 currentValueViewCallbacks:(id)arg5 ;
-(id)leftMarginViewWithOrientation:(NSInteger)arg0 ;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;


@end


#endif