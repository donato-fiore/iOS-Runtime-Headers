// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDICTATETEXTACTIONSTOPBUTTON_H
#define WFDICTATETEXTACTIONSTOPBUTTON_H

@class UIButton, UIView, NSLayoutConstraint;



@interface WFDictateTextActionStopButton : UIButton

@property (nonatomic) BOOL recording; // ivar: _recording
@property (weak, nonatomic) UIView *redSquare; // ivar: _redSquare
@property (weak, nonatomic) NSLayoutConstraint *redSquareWidthConstraint; // ivar: _redSquareWidthConstraint


-(CGFloat)currentInnerCircleRadius;
-(CGFloat)currentLineWidth;
-(CGFloat)currentStopButtonSize;
-(id)accessibilityLabel;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif