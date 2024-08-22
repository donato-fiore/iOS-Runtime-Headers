// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUICHARTHORIZONTALLINESERIES_H
#define FIUICHARTHORIZONTALLINESERIES_H

@class NSArray, UIColor;


#import "FIUIChartNumericSeries.h"

@interface FIUIChartHorizontalLineSeries : FIUIChartNumericSeries {
    NSArray *_dataPoints;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGFloat sidePadding; // ivar: _sidePadding


-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSubviews;


@end


#endif