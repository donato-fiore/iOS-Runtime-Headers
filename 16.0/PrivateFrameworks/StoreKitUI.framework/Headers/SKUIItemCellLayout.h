// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMCELLLAYOUT_H
#define SKUIITEMCELLLAYOUT_H

@class NSString, UIImage, UIView, UILabel;
@protocol SKUIItemOfferButtonDelegate;


#import "SKUICellLayout.h"
#import "SKUIItemOffer.h"
#import "SKUIItemOfferButton.h"
#import "SKUIItemOfferButtonAppearance.h"
#import "SKUIItemState.h"

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate>

 {
    BOOL _hidesItemOfferButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysItemOfferButton;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic, getter=isIconImageHidden) BOOL iconImageHidden; // ivar: _iconImageHidden
@property (readonly, nonatomic) UIView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) SKUIItemOffer *itemOffer; // ivar: _itemOffer
@property (readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // ivar: _itemOfferButton
@property (retain, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance; // ivar: _itemOfferButtonAppearance
@property (readonly, nonatomic) UILabel *itemOfferNoticeLabel; // ivar: _itemOfferNoticeLabel
@property (copy, nonatomic) NSString *itemOfferNoticeString;
@property (copy, nonatomic) SKUIItemState *itemState; // ivar: _itemState
@property (readonly, nonatomic) UIView *removeControlView; // ivar: _removeControlView
@property (nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


-(BOOL)_canShowItemOfferNotice;
-(BOOL)_useCloudButtonForItemState:(id)arg0 ;
-(id)_parentCollectionViewCell;
-(void)_cancelItemOfferConfirmationAction:(id)arg0 ;
-(void)_getParentTableView:(*id)arg0 collectionView:(*id)arg1 ;
-(void)_itemOfferConfirmAction:(id)arg0 ;
-(void)_reloadItemOfferButton:(BOOL)arg0 ;
-(void)_reloadItemOfferVisibility;
-(void)_showItemOfferConfirmationAction:(id)arg0 ;
-(void)dealloc;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutForItemOfferChange;
-(void)prepareForReuse;
-(void)resetLayout;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif