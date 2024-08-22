// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLRINGSLIDERHANDLEVIEW_H
#define HUQUICKCONTROLRINGSLIDERHANDLEVIEW_H

@class UIView, CAShapeLayer;



@interface HUQuickControlRingSliderHandleView : UIView

@property (retain, nonatomic) CAShapeLayer *circleLayer; // ivar: _circleLayer
@property (nonatomic) NSUInteger handleViewStyle; // ivar: _handleViewStyle
@property (retain, nonatomic) UIView *lineView; // ivar: _lineView


-(CGFloat)outerRadius;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 ;
-(void)_setColor:(id)arg0 ;
-(void)_updateCircleLayer;
-(void)layoutSubviews;


@end


#endif