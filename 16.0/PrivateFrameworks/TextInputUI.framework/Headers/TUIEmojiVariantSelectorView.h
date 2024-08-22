// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIEMOJIVARIANTSELECTORVIEW_H
#define TUIEMOJIVARIANTSELECTORVIEW_H

@class UIControl, NSArray, UIView, EMFEmojiToken;


#import "TUIDrawingView.h"

@interface TUIEmojiVariantSelectorView : UIControl

@property (readonly, nonatomic) NSArray *allVariants; // ivar: _allVariants
@property (retain, nonatomic) NSArray *arrangedVariantCells; // ivar: _arrangedVariantCells
@property (retain, nonatomic) UIView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) TUIDrawingView *backgroundMaskView; // ivar: _backgroundMaskView
@property (retain, nonatomic) EMFEmojiToken *baseEmojiToken; // ivar: _baseEmojiToken
@property (retain, nonatomic) TUIDrawingView *borderView; // ivar: _borderView
@property (retain, nonatomic) UIView *deepShadowView; // ivar: _deepShadowView
@property (retain, nonatomic) UIView *keyShadowView; // ivar: _keyShadowView
@property (nonatomic) CGRect originRect; // ivar: _originRect
@property (readonly, nonatomic) EMFEmojiToken *selectedVariant; // ivar: _selectedVariant
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly, nonatomic) UIView *variantCellContainerView; // ivar: _variantCellContainerView


+(id)emojiTextAttributes;
-(BOOL)_highlightCellAtLocation:(struct CGPoint )arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(NSUInteger)_numberOfVariants;
-(id)_backgroundBezierPathForContainerRect:(struct CGRect )arg0 originRect:(struct CGRect )arg1 ;
-(id)_variantCellAtLocation:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 emojiToken:(id)arg1 originRect:(struct CGRect )arg2 ;
-(struct CGSize )_emojiCellSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_unhighlightAllViews;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif