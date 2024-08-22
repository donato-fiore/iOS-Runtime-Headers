// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIHORIZONTALLISTVIEW_H
#define SKUIHORIZONTALLISTVIEW_H

@class NSMutableArray, UIControl, NSMapTable, NSArray, NSString;
@protocol SKUIMenuPopoverDelegate, SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUIListViewElement.h"
#import "SKUIMenuPopoverController.h"

@interface SKUIHorizontalListView : SKUIViewReuseView <SKUIMenuPopoverDelegate, SKUIViewElementView>

 {
    NSMutableArray *_artworkRequestPassthroughViews;
    UIEdgeInsets _contentInset;
    UIEdgeInsets _bigHitInsets;
    CGFloat _elementSpacing;
    UIControl *_focusedMenuButton;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSArray *_lines;
    SKUIListViewElement *_listElement;
    SKUIMenuPopoverController *_popoverController;
    BOOL _useBigHitTarget;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)_elementSpacingForViewElement:(id)arg0 ;
+(CGFloat)_lineSpacingForLineElements:(id)arg0 ;
+(CGFloat)_lineSpacingForViewElement:(id)arg0 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForButtonText:(id)arg0 type:(NSInteger)arg1 style:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForMenuItem:(id)arg0 context:(id)arg1 ;
+(id)_linesWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(struct CGSize )_sizeForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)_viewElementForView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGRect )hitRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_destroyMenuPopover;
-(void)_imageTapAction:(id)arg0 ;
-(void)_menuButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)menuPopover:(id)arg0 didSelectMenuItemAtIndex:(NSInteger)arg1 ;
-(void)menuPopover:(id)arg0 willRepositionToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)menuPopoverDidCancel:(id)arg0 ;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif