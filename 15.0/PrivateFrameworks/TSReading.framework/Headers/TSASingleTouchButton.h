// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSASINGLETOUCHBUTTON_H
#define TSASINGLETOUCHBUTTON_H

@class UIButton, UIImage;



@interface TSASingleTouchButton : UIButton

@property (nonatomic) BOOL showsTouchOnTopWhenHighlighted; // ivar: _showsTouchOnTopWhenHighlighted
@property (retain, nonatomic) UIImage *touchImage; // ivar: _touchImage


-(id)_pressFeedbackImage;
-(struct CGPoint )_pressFeedbackPosition;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif