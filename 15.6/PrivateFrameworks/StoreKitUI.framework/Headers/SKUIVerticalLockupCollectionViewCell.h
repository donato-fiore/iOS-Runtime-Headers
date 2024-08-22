// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIVERTICALLOCKUPCOLLECTIONVIEWCELL_H
#define SKUIVERTICALLOCKUPCOLLECTIONVIEWCELL_H

@class NSString;
@protocol SKUIPerspectiveView, SKUIViewElementView;


#import "SKUICollectionViewCell.h"
#import "SKUIImageView.h"
#import "SKUIVerticalLockupView.h"

@interface SKUIVerticalLockupCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView, SKUIViewElementView>

 {
    SKUIImageView *_highlightImageView;
    SKUIVerticalLockupView *_lockupView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_reloadHighlightImageView;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif