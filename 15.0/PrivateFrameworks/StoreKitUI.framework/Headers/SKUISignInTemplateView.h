// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISIGNINTEMPLATEVIEW_H
#define SKUISIGNINTEMPLATEVIEW_H

@class NSMapTable, NSString;
@protocol SKUIViewElementView, SKUISignInViewDelegate;


#import "SKUIViewReuseView.h"

@interface SKUISignInTemplateView : SKUIViewReuseView <SKUIViewElementView>

 {
    NSMapTable *_viewElements;
    NSMapTable *_viewMargins;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUISignInViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_useEditorialLayoutForLabelElement:(id)arg0 ;
+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForText:(id)arg0 style:(id)arg1 context:(id)arg2 ;
+(struct CGSize )_sizeForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(struct UIEdgeInsets )_marginsForViewElement:(id)arg0 index:(NSUInteger)arg1 width:(CGFloat)arg2 context:(id)arg3 ;
+(void)_enumerateChildrenOfViewElement:(id)arg0 usingBlock:(id)arg1 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif