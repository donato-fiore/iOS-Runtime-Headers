// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIFILTERBARVIEW_H
#define SKUIFILTERBARVIEW_H

@class NSMutableArray, UIControl, NSMapTable, NSString;
@protocol SKUIItemOfferButtonDelegate, SKUIMenuPopoverDelegate, SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUIDividerView.h"
#import "SKUIMenuPopoverController.h"

@interface SKUIFilterBarView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIMenuPopoverDelegate, SKUIViewElementView>

 {
    SKUIDividerView *_bottomDividerView;
    NSMutableArray *_centerElementViews;
    UIEdgeInsets _contentInset;
    NSMutableArray *_elementControllers;
    UIControl *_focusedMenuButton;
    NSMutableArray *_leftElementViews;
    SKUIMenuPopoverController *_popoverController;
    NSMutableArray *_rightElementViews;
    NSMapTable *_viewElementViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForButtonText:(id)arg0 style:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForMenuItem:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_destroyMenuPopover;
-(void)_imageTapAction:(id)arg0 ;
-(void)_menuButtonAction:(id)arg0 ;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)dealloc;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)menuPopover:(id)arg0 didSelectMenuItemAtIndex:(NSInteger)arg1 ;
-(void)menuPopover:(id)arg0 willRepositionToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)menuPopoverDidCancel:(id)arg0 ;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif