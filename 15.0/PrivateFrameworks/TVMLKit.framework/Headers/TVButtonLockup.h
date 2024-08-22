// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVBUTTONLOCKUP_H
#define TVBUTTONLOCKUP_H

@class UIView, _UIFloatingContentView, UILabel, CALayer, UIColor, IKViewElement;


#import "_TVVisualEffectView.h"
#import "_TVImageView.h"

@interface TVButtonLockup : UIView {
    _UIFloatingContentView *_floatingView;
    _TVVisualEffectView *_backdropView;
    UIView *_overlayView;
    UILabel *_textView;
    UILabel *_textMask;
    CALayer *_imageMask;
    UIColor *__backgroundColor;
}


@property (readonly, nonatomic) NSInteger backdropStyle; // ivar: _backdropStyle
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) _TVImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *titleView; // ivar: _titleView
@property (nonatomic) NSInteger vibrantLabelThemeOverride; // ivar: _vibrantLabelThemeOverride
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(BOOL)canBecomeFocused;
-(NSInteger)_focusedSound;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 blurEffectStyle:(NSInteger)arg1 groupName:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_playButtonAction:(id)arg0 ;
-(void)_selectButtonAction:(id)arg0 ;
-(void)_updateForAccessibilityChange;
-(void)_updateForFocusStateChange;
-(void)_updateImageMask;
-(void)_updateShadowForLabel:(id)arg0 inFocus:(BOOL)arg1 ;
-(void)_updateTextForAccessibilityAndFocus;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setText:(id)arg0 minimumScale:(CGFloat)arg1 maxNumberOfLines:(NSUInteger)arg2 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif