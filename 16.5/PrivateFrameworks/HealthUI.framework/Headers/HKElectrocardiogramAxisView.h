// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKELECTROCARDIOGRAMAXISVIEW_H
#define HKELECTROCARDIOGRAMAXISVIEW_H

@class UIView, UIFont, UIColor, UIFontMetrics, CAReplicatorLayer;


#import "HKElectrocardiogramAxisOptions.h"

@interface HKElectrocardiogramAxisView : UIView

@property (readonly, nonatomic) UIFont *axisLabelFont;
@property (nonatomic) CGFloat axisSpacing; // ivar: _axisSpacing
@property (nonatomic) CGSize lastBoundsSize; // ivar: _lastBoundsSize
@property (readonly, nonatomic) UIColor *lineColor;
@property (readonly, nonatomic) CGFloat lineWidth;
@property (retain, nonatomic) UIFontMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) HKElectrocardiogramAxisOptions *options; // ivar: _options
@property (nonatomic) NSInteger startingIndex; // ivar: _startingIndex
@property (retain, nonatomic) CAReplicatorLayer *ticksLayer; // ivar: _ticksLayer


-(id)_createLabel;
-(id)initWithAxisSpacing:(CGFloat)arg0 lineColor:(id)arg1 lineWidth:(CGFloat)arg2 ;
-(id)initWithAxisSpacing:(CGFloat)arg0 options:(id)arg1 startingIndex:(NSInteger)arg2 ;
-(void)_drawAxis;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif