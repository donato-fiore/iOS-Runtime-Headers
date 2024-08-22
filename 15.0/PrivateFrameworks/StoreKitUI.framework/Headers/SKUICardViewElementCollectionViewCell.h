// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICARDVIEWELEMENTCOLLECTIONVIEWCELL_H
#define SKUICARDVIEWELEMENTCOLLECTIONVIEWCELL_H

@class NSHashTable, NSMapTable, UIView, CALayer, NSString;
@protocol SKUIAdvertisingSelectable, SKUIAdvertisingSelectionForardingTargetAction, SKUIPerspectiveView, SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"
#import "SKUIBackgroundImageWrapperForHorizontalLockup.h"
#import "SKUICardViewElement.h"
#import "SKUICardLayout.h"
#import "SKUIViewElement.h"
#import "SKUISizeValue.h"

@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIAdvertisingSelectable, SKUIAdvertisingSelectionForardingTargetAction, SKUIPerspectiveView, SKUIViewElementView>

 {
    NSHashTable *_artworkRelatedChildViewElementViews;
    id<SKUIPerspectiveView> *_backgroundViewWithParallax;
    SKUIBackgroundImageWrapperForHorizontalLockup *_backgroundWrapper;
    SKUICardViewElement *_cardElement;
    BOOL _hasBottomAlignedItems;
    NSMapTable *_imageViewToImageResourceCacheKey;
    BOOL _isActivityCard;
    SKUICardLayout *_layout;
    UIView *_programmedCardBackgroundView;
    SKUIViewElement *_productImageElement;
    NSMapTable *_viewElements;
}


@property (retain, nonatomic) UIView *adCardBackgroundView; // ivar: _adCardBackgroundView
@property (copy, nonatomic) SKUISizeValue *artworkBoundingSize; // ivar: _artworkBoundingSize
@property (retain, nonatomic) CALayer *compactAdCardHairlineLayer; // ivar: _compactAdCardHairlineLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *impressionIdentifier;
@property (readonly, nonatomic) NSString *lineItem;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)_defaultWidthForLockupWithContext:(id)arg0 ;
+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
+(struct CGSize )artworkBoundingSizeWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)_dividerHeight:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_imageTapAction:(id)arg0 ;
-(void)_performDefaultActionForViewElement:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)skuiadvertising_advertSelectionEventShouldBeForwarded:(id)arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif