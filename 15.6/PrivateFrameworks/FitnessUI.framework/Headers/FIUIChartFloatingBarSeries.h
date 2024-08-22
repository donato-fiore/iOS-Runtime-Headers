// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUICHARTFLOATINGBARSERIES_H
#define FIUICHARTFLOATINGBARSERIES_H

@class NSArray, NSMutableArray, UIColor, NSDictionary;


#import "FIUIChartSeries.h"

@interface FIUIChartFloatingBarSeries : FIUIChartSeries {
    NSArray *_barRects;
    NSMutableArray *_barLabelTopPoints;
    NSMutableArray *_barLabelBottomPoints;
    NSMutableArray *_barLabels;
}


@property (retain, nonatomic) UIColor *barColor; // ivar: _barColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) NSDictionary *labelAttributes; // ivar: _labelAttributes


-(void)_loadFromDataSet;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSubviews;


@end


#endif