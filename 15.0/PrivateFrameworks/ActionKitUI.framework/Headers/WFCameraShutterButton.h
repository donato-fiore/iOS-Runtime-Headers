// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCAMERASHUTTERBUTTON_H
#define WFCAMERASHUTTERBUTTON_H

@class UIControl, CAShapeLayer;



@interface WFCameraShutterButton : UIControl

@property (weak, nonatomic) CAShapeLayer *buttonLayer; // ivar: _buttonLayer
@property (weak, nonatomic) CAShapeLayer *outlineLayer; // ivar: _outlineLayer


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif