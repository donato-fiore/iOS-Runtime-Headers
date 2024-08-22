// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIHORIZONTALLOCKUPCOLLECTIONVIEWCELL_H
#define SKUIHORIZONTALLOCKUPCOLLECTIONVIEWCELL_H

@class UIButton, UIImageView, UIView, UIColor, NSString;
@protocol UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView;


#import "SKUICollectionViewCell.h"
#import "SKUIButtonViewElement.h"
#import "SKUICellScrollView.h"
#import "SKUICheckboxInputViewElement.h"
#import "SKUIHorizontalLockupView.h"

@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell <UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView>

 {
    UIButton *_actionButton;
    SKUIButtonViewElement *_actionButtonViewElement;
    SKUICellScrollView *_actionsScrollView;
    SKUICheckboxInputViewElement *_editModeCheckboxElement;
    UIImageView *_editModeControl;
    UIView *_highlightBackgroundView;
    SKUIHorizontalLockupView *_lockupView;
    UIColor *_lockupViewBackgroundColor;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isScrollingCellToHideActionButton) BOOL scrollingCellToHideActionButton;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)_isActionsScrollViewEnabled;
-(BOOL)isDeleteButtonHidden;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)_attributedStringForActionButton:(id)arg0 context:(id)arg1 ;
-(id)_editControlImage;
-(id)_highlightBackgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_actionButtonAction:(id)arg0 ;
-(void)_addEditControlAnimated:(BOOL)arg0 ;
-(void)_reloadActionsScrollViewWithViewElement:(id)arg0 context:(id)arg1 ;
-(void)_reloadHighlightBackgroundView;
-(void)_reloadLockupViewBackgroundColor;
-(void)_removeEditControlAnimated:(BOOL)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)dealloc;
-(void)hideDeleteButton;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif