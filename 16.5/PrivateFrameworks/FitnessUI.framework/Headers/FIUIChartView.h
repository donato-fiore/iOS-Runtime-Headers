// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUICHARTVIEW_H
#define FIUICHARTVIEW_H

@class UIView, NSArray, NSDateInterval, NSString, NSNumber;
@protocol FIUIChartDataGroupDataSource, FIUIChartSeriesDataSource, FIUIChartDataSource, FIUIChartAxisDescriptor;


#import "FIUIChartDataGroup.h"
#import "FIUIChartBackgroundView.h"
#import "FIUIChartTimeAxisDescriptor.h"

@interface FIUIChartView : UIView <FIUIChartDataGroupDataSource, FIUIChartSeriesDataSource>

 {
    FIUIChartDataGroup *_dataGroup;
    NSArray *_xAxisLabels;
    NSArray *_xAxisSubLabels;
    NSArray *_yAxisLabels;
    NSArray *_chartSeries;
    UIView *_containerView;
}


@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (retain, nonatomic) FIUIChartBackgroundView *backgroundView; // ivar: _backgroundView
@property (nonatomic) UIEdgeInsets contentBufferEdgeInsets; // ivar: _contentBufferEdgeInsets
@property (weak, nonatomic) NSObject<FIUIChartDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *highlightedYValue; // ivar: _highlightedYValue
@property (nonatomic) BOOL labelsInsetChartBackground; // ivar: _labelsInsetChartBackground
@property (copy, nonatomic) NSNumber *maxYValue; // ivar: _maxYValue
@property (copy, nonatomic) NSNumber *minYValue; // ivar: _minYValue
@property (nonatomic) UIEdgeInsets seriesEdgeInsets; // ivar: _seriesEdgeInsets
@property (readonly) Class superclass;
@property (retain, nonatomic) FIUIChartTimeAxisDescriptor *xAxisDescriptor; // ivar: _xAxisDescriptor
@property (nonatomic) BOOL xAxisLabelsShouldBaselineAlign; // ivar: _xAxisLabelsShouldBaselineAlign
@property (nonatomic) CGFloat xAxisToLabelPadding; // ivar: _xAxisToLabelPadding
@property (retain, nonatomic) NSObject<FIUIChartAxisDescriptor> *yAxisDescriptor; // ivar: _yAxisDescriptor
@property (nonatomic) CGFloat yAxisEdgeInset; // ivar: _yAxisEdgeInset


-(CGFloat)_absolutePositionForXPlaneValue:(id)arg0 ;
-(CGFloat)_xAxisLabelPaddingForBackground:(BOOL)arg0 ;
-(CGFloat)_yAxisLabelPadding;
-(NSUInteger)_numberOfDataPointsForSeriesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_numberOfSeries;
-(NSUInteger)dataGroup:(id)arg0 numberOfPointsInSetAtIndex:(NSUInteger)arg1 ;
-(NSUInteger)numberOfDataSetsInGroup:(id)arg0 ;
-(float)_relativePositionForXPlaneValue:(id)arg0 ;
-(id)_dataPointAtIndex:(NSUInteger)arg0 forSeriesAtIndex:(NSUInteger)arg1 ;
-(id)_dataPointsForSeriesAtIndex:(NSUInteger)arg0 ;
-(id)_labelsForSeriesAtIndex:(NSUInteger)arg0 ;
-(id)_seriesAtIndex:(NSUInteger)arg0 ;
-(id)dataGroup:(id)arg0 dataPointsForSetAtIndex:(NSUInteger)arg1 ;
-(id)dataGroup:(id)arg0 labelsForSetAtIndex:(NSUInteger)arg1 ;
-(id)dataGroup:(id)arg0 pointForSetAtIndex:(NSUInteger)arg1 pointIndex:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithDateInterval:(id)arg0 ;
-(id)maxXValueForChartSeries:(id)arg0 ;
-(id)maxYValueForChartSeries:(id)arg0 ;
-(id)minXValueForChartSeries:(id)arg0 ;
-(id)minYValueForChartSeries:(id)arg0 ;
-(struct CGRect )_chartRect;
-(struct CGRect )_insetChartRect;
-(void)_adjustMinMaxValues;
-(void)_layoutAxisLabels;
-(void)_layoutChartSeries;
-(void)_layoutContainerView;
-(void)_layoutXAxisLabels;
-(void)_layoutYAxisLabels;
-(void)_orderSubviews;
-(void)_reloadDataSeries;
-(void)_updateBackgroundView;
-(void)_updateDataSeries;
-(void)_updateHighlightedValue;
-(void)layoutSubviews;
-(void)reloadData;
-(void)selectAxisPoint:(NSInteger)arg0 selected:(BOOL)arg1 ;


@end


#endif