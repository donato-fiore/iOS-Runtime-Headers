// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIEDITORIALLOCKUPCELLLAYOUT_H
#define SKUIEDITORIALLOCKUPCELLLAYOUT_H

@class UIView, UIColor;


#import "SKUIItemCellLayout.h"
#import "SKUIEditorialCellLayout.h"
#import "SKUILockupItemCellLayout.h"
#import "SKUICellLayoutView.h"
#import "SKUITextBoxView.h"

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout {
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
    CGFloat _editorialHeight;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    UIColor *_offerNoticeTextColor;
    SKUITextBoxView *_textBoxView;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (readonly, nonatomic) SKUILockupItemCellLayout *lockupCellLayout;
@property (readonly, nonatomic) SKUITextBoxView *textBoxView;
@property (nonatomic) NSUInteger visibleFields; // ivar: _visibleFields


+(CGFloat)_imagePaddingForArtworkSize:(NSInteger)arg0 ;
+(CGFloat)editorialWidthForCellWidth:(CGFloat)arg0 lockupStyle:(struct SKUILockupStyle )arg1 ;
-(BOOL)_isItemOfferButtonHidden;
-(BOOL)_showsItemOfferUnderEditorial;
-(BOOL)isIconImageHidden;
-(id)_editorialCellLayout;
-(id)_editorialContainerView;
-(id)_lockupView;
-(id)iconImage;
-(id)iconImageView;
-(id)itemOffer;
-(id)itemOfferNoticeString;
-(id)itemState;
-(void)applyEditorialLayout:(id)arg0 withOrientation:(NSInteger)arg1 ;
-(void)layoutForItemOfferChange;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setClientContext:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setIconImage:(id)arg0 ;
-(void)setIconImageHidden:(BOOL)arg0 ;
-(void)setItemOffer:(id)arg0 ;
-(void)setItemOfferButtonAppearance:(id)arg0 ;
-(void)setItemOfferNoticeString:(id)arg0 ;
-(void)setItemState:(id)arg0 animated:(BOOL)arg1 ;
-(void)setRestricted:(BOOL)arg0 ;


@end


#endif