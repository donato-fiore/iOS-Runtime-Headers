// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVBUTTONCONTENT_H
#define TVBUTTONCONTENT_H

@class UIFloatingContentView, UIColor, UIVisualEffectView, NSString, UIView, UILabel, IKViewElement;


#import "_TVImageView.h"

@interface TVButtonContent : UIFloatingContentView {
    UIColor *__backgroundColor;
}


@property (retain, nonatomic) _TVImageView *accessoryView; // ivar: _accessoryView
@property (readonly, nonatomic) NSInteger backdropStyle; // ivar: _backdropStyle
@property (readonly, nonatomic) UIVisualEffectView *backdropView; // ivar: _backdropView
@property (readonly, nonatomic) BOOL blurEnabled; // ivar: _blurEnabled
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic) CGFloat focusSizeIncrease; // ivar: _focusSizeIncrease
@property (readonly, nonatomic, getter=isFocused) BOOL focused; // ivar: _focused
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) BOOL imageTrailsTextContent; // ivar: _imageTrailsTextContent
@property (retain, nonatomic) _TVImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UILabel *textContentView; // ivar: _textContentView
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(BOOL)canBecomeFocused;
-(CGFloat)_imageMarginFromText;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 blurEffectStyle:(NSInteger)arg1 blurEnabled:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateBackgroundColorForState:(NSUInteger)arg0 ;
-(void)_updateFloaingViewFocusState:(BOOL)arg0 coordinator:(id)arg1 ;
-(void)_updateFocusStateWithCoordinator:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif