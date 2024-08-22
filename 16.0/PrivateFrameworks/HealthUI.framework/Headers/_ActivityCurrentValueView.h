// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ACTIVITYCURRENTVALUEVIEW_H
#define _ACTIVITYCURRENTVALUEVIEW_H

@class UIView, NSLayoutConstraint;


#import "HKActivitySummaryDataProvider.h"
#import "HKInteractiveChartAnnotationView.h"
#import "_ActivityCurrentValueDataSource.h"

@interface _ActivityCurrentValueView : UIView

@property (retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryDataProvider; // ivar: _activitySummaryDataProvider
@property (readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView; // ivar: _annotationView
@property (retain, nonatomic) _ActivityCurrentValueDataSource *currentValueDataSource; // ivar: _currentValueDataSource
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint; // ivar: _leadingMarginConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint; // ivar: _trailingMarginConstraint


-(id)_findFirstActivitySeriesInGraphView:(id)arg0 ;
-(id)initWithDisplayTypeController:(id)arg0 unitPreferenceController:(id)arg1 wheelchairUseCharacteristicCache:(id)arg2 currentValueViewCallbacks:(id)arg3 activitySummaryDataProvider:(id)arg4 activityOptions:(NSUInteger)arg5 firstWeekday:(NSInteger)arg6 ;
-(void)_updateForDayWithGraphView:(id)arg0 ;
-(void)_updateWithGraphView:(id)arg0 forTimeScopeAboveDay:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)updateWithGraphView:(id)arg0 timeScope:(NSInteger)arg1 ;


@end


#endif