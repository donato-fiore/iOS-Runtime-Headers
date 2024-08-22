// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVBUTTON_H
#define TVBUTTON_H

@class UIControl, _UIFloatingContentView, UIColor, UIView, UILabel, IKViewElement;


#import "_TVImageView.h"
#import "TVButtonContent.h"

@interface TVButton : UIControl

@property (retain, nonatomic) _TVImageView *accessoryView;
@property (readonly, nonatomic) NSInteger backdropStyle;
@property (readonly, nonatomic) BOOL blurEnabled;
@property (readonly, nonatomic) TVButtonContent *buttonContent; // ivar: _buttonContent
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) _UIFloatingContentView *floatingView;
@property (nonatomic) CGFloat focusSizeIncrease;
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) _TVImageView *imageView;
@property (readonly, nonatomic) UIView *overlayView;
@property (copy, nonatomic) id *playActionHandler; // ivar: _playActionHandler
@property (copy, nonatomic) id *selectActionHandler; // ivar: _selectActionHandler
@property (retain, nonatomic) UILabel *textContentView;
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


+(id)_buttonContentWithFrame:(struct CGRect )arg0 blurEffectStyle:(NSInteger)arg1 blurEnabled:(BOOL)arg2 ;
-(BOOL)canBecomeFocused;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 blurEffectStyle:(NSInteger)arg1 blurEnabled:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_playButtonAction:(id)arg0 ;
-(void)_selectButtonAction:(id)arg0 ;
-(void)_setFocused:(BOOL)arg0 animationCoordinator:(id)arg1 ;
-(void)_updateBackgroundColorForState:(NSUInteger)arg0 ;
-(void)_updateFocusStateWithCoordinator:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContentMotionRotation:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setGroupName:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImageTrailsTextContent:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)tv_setLayout:(id)arg0 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg0 ;


@end


#endif