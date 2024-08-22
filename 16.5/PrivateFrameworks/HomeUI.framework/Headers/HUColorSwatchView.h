// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCOLORSWATCHVIEW_H
#define HUCOLORSWATCHVIEW_H

@class UIView, CAShapeLayer, UIColor, UILabel, NSString;



@interface HUColorSwatchView : UIView

@property (retain, nonatomic) CAShapeLayer *circleLayer; // ivar: _circleLayer
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) BOOL labelHidden; // ivar: _labelHidden
@property (retain, nonatomic) CAShapeLayer *selectedCircleInnerLayer; // ivar: _selectedCircleInnerLayer
@property (retain, nonatomic) CAShapeLayer *selectedCircleLayer; // ivar: _selectedCircleLayer
@property (retain, nonatomic) CAShapeLayer *selectedCircleOuterLayer; // ivar: _selectedCircleOuterLayer
@property (nonatomic) NSUInteger selectionState; // ivar: _selectionState
@property (retain, nonatomic) NSString *text; // ivar: _text


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 text:(id)arg1 ;
-(void)_updateLayout;
-(void)_updateTextColor;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif