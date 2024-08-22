// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTLOCKUPCOLLECTIONVIEWCELL_H
#define SKUIPRODUCTLOCKUPCOLLECTIONVIEWCELL_H

@class NSHashTable, NSMapTable, NSMutableArray, NSString;
@protocol SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"
#import "SKUIProductLockupLayout.h"
#import "SKUILockupViewElement.h"
#import "SKUIGradientView.h"

@interface SKUIProductLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIViewElementView>

 {
    NSHashTable *_artworkRelatedChildViewElementViews;
    NSMapTable *_buyButtonDescriptorToButton;
    NSMapTable *_elementViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUIProductLockupLayout *_layout;
    SKUILockupViewElement *_lockup;
    SKUIGradientView *_offerConfirmationGradientView;
    NSInteger _offerMetadataPosition;
    NSHashTable *_offerViews;
    NSMutableArray *_segmentedControlControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)_requestLayoutForViewElements:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)offerViewAnimateTransition:(id)arg0 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)_viewElementForView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGRect )_frameForSection:(NSInteger)arg0 ;
-(struct CGRect )_stackBottomRightElements:(id)arg0 inRect:(struct CGRect )arg1 ;
-(struct CGRect )_stackElements:(id)arg0 alignment:(NSInteger)arg1 inRect:(struct CGRect )arg2 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_imageTapAction:(id)arg0 ;
-(void)_layoutConfirmationGradientRelativeToSection:(NSInteger)arg0 alpha:(CGFloat)arg1 ;
-(void)_prepareOfferConfirmationGradientForView:(id)arg0 ;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)_updateLayoutToAnimateOfferTransitionForView:(id)arg0 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg0 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)offerViewDidAnimateTransition:(id)arg0 ;
-(void)offerViewWillAnimateTransition:(id)arg0 ;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif