// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICONTENTUNAVAILABLEVIEW_H
#define SKUICONTENTUNAVAILABLEVIEW_H

@class UIControl, NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUIButtonViewElement.h"
#import "SKUIImageView.h"
#import "SKUIImageViewElement.h"
#import "SKUIAttributedStringView.h"

@interface SKUIContentUnavailableView : SKUIViewReuseView <SKUIViewElementView>

 {
    UIControl *_button;
    SKUIButtonViewElement *_buttonElement;
    UIEdgeInsets _contentInset;
    SKUIImageView *_imageView;
    SKUIImageViewElement *_imageElement;
    SKUIAttributedStringView *_messageView;
    SKUIAttributedStringView *_titleView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringWithButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringWithMessageLabel:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringWithTitleLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)_baselineOffsetForView:(id)arg0 ;
-(CGFloat)_firstBaselineOffsetForView:(id)arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif