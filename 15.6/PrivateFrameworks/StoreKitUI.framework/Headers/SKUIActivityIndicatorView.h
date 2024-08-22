// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIACTIVITYINDICATORVIEW_H
#define SKUIACTIVITYINDICATORVIEW_H

@class UIImageView, UIActivityIndicatorView, NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUIAttributedStringView.h"

@interface SKUIActivityIndicatorView : SKUIViewReuseView <SKUIViewElementView>

 {
    NSUInteger _alignment;
    BOOL _animating;
    UIEdgeInsets _contentInset;
    UIImageView *_imageView;
    UIActivityIndicatorView *_indicatorView;
    SKUIAttributedStringView *_stringView;
    CGFloat _period;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringWithLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )_activityIndicatorSize;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)_isAnimating;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_startAnimating;
-(void)_stopAnimating;
-(void)_updateSpinnerAnimation;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif