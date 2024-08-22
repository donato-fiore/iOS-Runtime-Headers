// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKELECTROCARDIOGRAMAXISOPTIONS_H
#define HKELECTROCARDIOGRAMAXISOPTIONS_H

@class UIFont, UIColor;

#import <Foundation/Foundation.h>


@interface HKElectrocardiogramAxisOptions : NSObject

@property (readonly, nonatomic) UIFont *axisLabelFont; // ivar: _axisLabelFont
@property (readonly, nonatomic) UIColor *axisLabelTextColor; // ivar: _axisLabelTextColor
@property (readonly, nonatomic) CGFloat axisLineToLabelSpacing; // ivar: _axisLineToLabelSpacing
@property (readonly, nonatomic) CGFloat bottomBaselineMargin; // ivar: _bottomBaselineMargin
@property (readonly, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (readonly, nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (readonly, nonatomic) BOOL scaleMetricsAutomatically; // ivar: _scaleMetricsAutomatically
@property (readonly, nonatomic) CGFloat topBaselineMargin; // ivar: _topBaselineMargin


-(id)initWithAxisLabelFont:(id)arg0 axisLabelTextColor:(id)arg1 scaleMetricsAutomatically:(BOOL)arg2 lineColor:(id)arg3 lineWidth:(CGFloat)arg4 axisLineToLabelSpacing:(CGFloat)arg5 topBaselineMargin:(CGFloat)arg6 bottomBaselineMargin:(CGFloat)arg7 ;


@end


#endif