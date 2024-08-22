// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTYLEDBUTTON_H
#define SKUISTYLEDBUTTON_H

@class UIControl, UIImageView, NSString;
@protocol SKUIViewElementOfferButton, SKUIItemOfferButtonDelegate;


#import "SKUIAttributedStringView.h"
#import "SKUIShapeView.h"
#import "SKUIItemOfferButton.h"
#import "SKUIButtonBorderStyle.h"
#import "SKUIImageView.h"
#import "SKUIAttributedStringLayout.h"

@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton>

 {
    SKUIAttributedStringView *_attributedStringView;
    SKUIShapeView *_borderView;
    BOOL _didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    SKUIItemOfferButton *_itemOfferButton;
}


@property (readonly, nonatomic) CGFloat baselineOffset;
@property (nonatomic) UIEdgeInsets bigHitInsets; // ivar: _bigHitInsets
@property (copy, nonatomic) SKUIButtonBorderStyle *borderStyle; // ivar: _borderStyle
@property (nonatomic) UIEdgeInsets buttonPadding; // ivar: _buttonPadding
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstBaselineOffset;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imageTextPaddingInterior; // ivar: _imageTextPaddingInterior
@property (readonly, nonatomic) SKUIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat imageYAdjustment; // ivar: _imageYAdjustment
@property (weak, nonatomic) NSObject<SKUIItemOfferButtonDelegate> *itemOfferDelegate; // ivar: _itemOfferDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) SKUIAttributedStringLayout *titleLayout;
@property (nonatomic) BOOL useBigHitTarget; // ivar: _useBigHitTarget
@property (nonatomic) BOOL usesTintColor; // ivar: _usesTintColor
@property (readonly, nonatomic, getter=isUsingItemOfferAppearance) BOOL usingItemOfferAppearance;


+(BOOL)usesItemOfferAppearanceForButtonType:(NSInteger)arg0 itemState:(id)arg1 ;
+(NSInteger)buttonTypeForElement:(id)arg0 ;
+(struct CGSize )sizeForTextSize:(struct CGSize )arg0 buttonType:(NSInteger)arg1 ;
+(struct CGSize )sizeForTextSize:(struct CGSize )arg0 buttonType:(NSInteger)arg1 borderStyle:(id)arg2 ;
+(struct CGSize )sizeForTextSize:(struct CGSize )arg0 buttonType:(NSInteger)arg1 borderStyle:(id)arg2 interiorPadding:(CGFloat)arg3 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)setValuesUsingBuyButtonDescriptor:(id)arg0 itemState:(id)arg1 clientContext:(id)arg2 animated:(BOOL)arg3 ;
-(id)_borderColor;
-(id)_borderFillColor;
-(id)_textBackgroundColor;
-(id)_textColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )hitRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_itemOfferButtonAction:(id)arg0 ;
-(void)_reloadDisclosureImage;
-(void)_reloadImageView;
-(void)_reloadOverrideTextColor;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif