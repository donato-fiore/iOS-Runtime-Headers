// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIITEMOFFERBUTTON_H
#define SKUIITEMOFFERBUTTON_H

@class UIControl, UIColor, UIView, UIImage, NSMutableAttributedString, UIImageView, UILabel, NSString;
@protocol SKUIViewElementOfferButton, SKUIItemOfferButtonDelegate;


#import "SKUIFocusedTouchGestureRecognizer.h"
#import "SKUICircleProgressIndicator.h"
#import "SKUIBuyButtonDescriptor.h"
#import "SKUIButtonViewElement.h"

@interface SKUIItemOfferButton : UIControl <SKUIViewElementOfferButton>

 {
    UIColor *_backgroundColor;
    BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    UIImage *_cloudImage;
    UIColor *_confirmationColor;
    NSMutableAttributedString *_confirmationTitleAttributedString;
    CGSize _confirmationTitleFitSize;
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_borderedImageView;
    SKUICircleProgressIndicator *_progressIndicator;
    NSMutableAttributedString *_titleAttributedString;
    CGSize _titleFitSize;
    UILabel *_titleLabel;
    BOOL _usesDrawRectPath;
    UIImageView *_universalImageView;
    BOOL _downloadRestores;
    NSString *_offerButtonStateDescription;
}


@property (nonatomic) CGFloat borderColorAlphaMultiplier; // ivar: _borderColorAlphaMultiplier
@property (retain, nonatomic) UIImage *borderedImage; // ivar: _borderedImage
@property (retain, nonatomic) SKUIBuyButtonDescriptor *buttonDescriptor; // ivar: _buttonDescriptor
@property (copy, nonatomic) NSString *buyType; // ivar: _buyType
@property (copy, nonatomic) id *centerImageProvider; // ivar: _centerImageProvider
@property (copy, nonatomic) UIColor *cloudTintColor; // ivar: _cloudTintColor
@property (copy, nonatomic) NSString *confirmationTitle;
@property (nonatomic) NSInteger confirmationTitleStyle; // ivar: _confirmationTitleStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIItemOfferButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable; // ivar: _disabledButSelectable
@property (retain, nonatomic) SKUIButtonViewElement *element; // ivar: _element
@property (nonatomic) NSInteger fillStyle; // ivar: _fillStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) NSObject<SKUIItemOfferButtonDelegate> *itemOfferDelegate;
@property (readonly, nonatomic) NSString *offerButtonStateDescription;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) NSInteger progressType;
@property (readonly, nonatomic) BOOL restores;
@property (readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property (nonatomic) BOOL showsConfirmationState; // ivar: _showsConfirmationState
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPlayButton;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger titleStyle; // ivar: _titleStyle
@property (nonatomic, getter=isUniversal) BOOL universal; // ivar: _universal


+(BOOL)_sizeMattersForTitleStyle:(NSInteger)arg0 ;
+(BOOL)canOpenItemForItemState:(id)arg0 clientContext:(id)arg1 ;
+(id)_basicAnimationWithKeyPath:(id)arg0 ;
+(id)_cachedImageForAttributedTitle:(id)arg0 titleStyle:(NSInteger)arg1 size:(struct CGSize )arg2 fillStyle:(NSInteger)arg3 universal:(BOOL)arg4 tintColor:(id)arg5 interfaceStyle:(NSInteger)arg6 ;
+(id)_defaultTitleAttributes;
+(id)_imageForAttributedTitle:(id)arg0 titleStyle:(NSInteger)arg1 size:(struct CGSize )arg2 fillStyle:(NSInteger)arg3 universal:(BOOL)arg4 tintColor:(id)arg5 ;
+(id)_imageForProgressType:(NSInteger)arg0 ;
+(id)_universalPlusImageWithTintColor:(id)arg0 ;
+(id)cloudImageWithTintColor:(id)arg0 arrowTintColor:(id)arg1 ;
+(id)cloudTintColorForBackgroundColor:(id)arg0 ;
+(id)itemOfferButtonWithAppearance:(id)arg0 ;
+(id)localizedTitleForItemState:(id)arg0 clientContext:(id)arg1 ;
+(id)playHighlightImageWithTintColor:(id)arg0 ;
+(id)playImageWithTintColor:(id)arg0 ;
+(id)playTintColorForBackgroundColor:(id)arg0 ;
+(struct CGSize )_titleSizeThatFitsForSize:(struct CGSize )arg0 titleStyle:(NSInteger)arg1 mutableAttributedString:(id)arg2 ;
+(struct UIEdgeInsets )_imageInsetsForProgressType:(NSInteger)arg0 ;
-(BOOL)_touchInBounds:(id)arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)hasBorderedImage;
-(BOOL)hasNonBorderedImage;
-(BOOL)setValuesUsingBuyButtonDescriptor:(id)arg0 itemState:(id)arg1 clientContext:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)setValuesUsingItemOffer:(id)arg0 itemState:(id)arg1 clientContext:(id)arg2 animated:(BOOL)arg3 ;
-(CGFloat)_horizontalInsetForTitleStyle:(NSInteger)arg0 ;
-(id)_buttonPropertiesForState:(id)arg0 ;
-(id)_imageForProgressType:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )layoutSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustViewOrderingForProperties:(id)arg0 ;
-(void)_cancelGestureAction:(id)arg0 ;
-(void)_insertBorderView;
-(void)_insertBorderedImageView;
-(void)_insertCancelGestureRecognizer;
-(void)_insertImageView;
-(void)_insertLabel;
-(void)_insertProgressIndicator;
-(void)_insertUniversalView;
-(void)_reloadForCurrentState:(BOOL)arg0 ;
-(void)_removeAllAnimations:(BOOL)arg0 ;
-(void)_removeCancelGestureRecognizer;
-(void)_sendDidAnimate;
-(void)_sendWillAnimate;
-(void)_transitionFromBorderedImage:(id)arg0 toTitle:(id)arg1 withDuration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_transitionFromImage:(id)arg0 toImage:(id)arg1 withDuration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_transitionFromProgress:(id)arg0 toProgress:(id)arg1 withDuration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_transitionFromProgress:(id)arg0 toTitleOrImage:(id)arg1 withDuration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_transitionFromTitle:(id)arg0 toTitle:(id)arg1 withDuration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_transitionFromTitleOrImage:(id)arg0 toProgress:(id)arg1 withDuration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_updateForChangedConfirmationTitleProperty;
-(void)_updateForChangedTitleProperty;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeButtonStateAnimations;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithAppearance:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)showCloudImage;
-(void)tintColorDidChange;


@end


#endif