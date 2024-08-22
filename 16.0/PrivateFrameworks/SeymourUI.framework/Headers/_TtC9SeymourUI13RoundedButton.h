// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI13ROUNDEDBUTTON_H
#define _TTC9SEYMOURUI13ROUNDEDBUTTON_H

@class UIButton, UIColor;



@interface _TtC9SeymourUI13RoundedButton : UIButton {
    ? currentState;
    ? layout;
    ? indefiniteSpinner;
    ? defaults;
    ? highlightTimer;
    ? lastFont;
    ? lastSymbolScale;
    ? shouldShowHighlight;
    ? undimmedBackgroundColor;
}


@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)handleTimer:(id)arg0 ;
-(void)handleTouchDown:(id)arg0 ;
-(void)handleTouchUp:(id)arg0 ;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)textSizeChanged:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif