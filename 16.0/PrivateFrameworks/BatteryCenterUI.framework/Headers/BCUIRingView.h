// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCUIRINGVIEW_H
#define BCUIRINGVIEW_H

@class UIView, UIColor;



@interface BCUIRingView : UIView

@property (copy, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGFloat ringEnd; // ivar: _ringEnd
@property (nonatomic) CGFloat ringStart; // ivar: _ringStart
@property (copy, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_shapeLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidatePath;
-(void)layoutSubviews;
-(void)mt_applyVisualStyling:(id)arg0 ;
-(void)setFractionComplete:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif