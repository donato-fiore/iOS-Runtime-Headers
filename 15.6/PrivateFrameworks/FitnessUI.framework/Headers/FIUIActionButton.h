// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIACTIONBUTTON_H
#define FIUIACTIONBUTTON_H

@class UIButton, UIColor, UIImageView;



@interface FIUIActionButton : UIButton

@property (nonatomic) BOOL animatingTouchDown; // ivar: _animatingTouchDown
@property (retain, nonatomic) UIColor *backgroundImageColor; // ivar: _backgroundImageColor
@property (retain, nonatomic) UIColor *imageViewTintColor; // ivar: _imageViewTintColor
@property (copy, nonatomic) id *touchUpAnimationCompleteHandler; // ivar: _touchUpAnimationCompleteHandler
@property (retain, nonatomic) UIImageView *transformingImageView; // ivar: _transformingImageView


+(id)buttonWithTitle:(id)arg0 color:(id)arg1 icon:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )backgroundImageFrame;
-(struct CGRect )backgroundRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateHighlighted:(BOOL)arg0 ;
-(void)_setupInternalTouchActions;
-(void)_touchDown;
-(void)_touchUp;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)tintColorDidChange;
-(void)turnIntoSolidDotWithDuration:(CGFloat)arg0 completion:(id)arg1 ;


@end


#endif