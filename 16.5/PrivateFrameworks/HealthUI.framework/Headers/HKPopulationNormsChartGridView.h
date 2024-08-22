// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPOPULATIONNORMSCHARTGRIDVIEW_H
#define HKPOPULATIONNORMSCHARTGRIDVIEW_H

@class UIView;


#import "HKPopulationNormsAxisView.h"

@interface HKPopulationNormsChartGridView : UIView

@property (readonly, nonatomic) NSUInteger xAxisSegmentCount; // ivar: _xAxisSegmentCount
@property (retain, nonatomic) HKPopulationNormsAxisView *xAxisView; // ivar: _xAxisView
@property (readonly, nonatomic) NSUInteger yAxisSegmentCount; // ivar: _yAxisSegmentCount
@property (retain, nonatomic) HKPopulationNormsAxisView *yAxisView; // ivar: _yAxisView


-(CGFloat)_determineXAxisHeight;
-(CGFloat)_determineYAxisWidth;
-(id)initWithXAxisLabels:(id)arg0 YAxisLabels:(id)arg1 ;
-(struct CGRect )_determineCanvasRectInRect:(struct CGRect )arg0 yAxisWidth:(CGFloat)arg1 xAxisHeight:(CGFloat)arg2 ;
-(struct CGRect )determineCanvasRect;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)relocalizeAxisLabels;


@end


#endif