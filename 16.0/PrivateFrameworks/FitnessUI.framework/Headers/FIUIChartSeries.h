// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUICHARTSERIES_H
#define FIUICHARTSERIES_H

@class UIView, NSDate, NSNumber;
@protocol FIUIChartSeriesDataSource;


#import "FIUIChartDataSet.h"

@interface FIUIChartSeries : UIView {
    NSDate *_minXValue;
    NSDate *_maxXValue;
}


@property (retain, nonatomic) FIUIChartDataSet *dataSet; // ivar: _dataSet
@property (weak, nonatomic) NSObject<FIUIChartSeriesDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL displayAboveAxisLabels; // ivar: _displayAboveAxisLabels
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) CGRect insetBounds;
@property (retain, nonatomic) NSNumber *maxYValue; // ivar: _maxYValue
@property (retain, nonatomic) NSNumber *minYValue; // ivar: _minYValue


-(CGFloat)xValueForPointFromChartPoint:(id)arg0 ;
-(CGFloat)yValueForPointFromChartPointValue:(id)arg0 ;
-(float)_relativePositionForXPlaneValue:(id)arg0 ;
-(float)_relativePositionForYPlaneValue:(id)arg0 ;
-(id)init;
-(id)labelsFromDataSet;
-(void)_reloadMinMaxValues;
-(void)layoutSubviews;


@end


#endif