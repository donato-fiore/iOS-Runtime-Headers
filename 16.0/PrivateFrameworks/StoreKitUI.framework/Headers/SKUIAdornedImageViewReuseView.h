// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIADORNEDIMAGEVIEWREUSEVIEW_H
#define SKUIADORNEDIMAGEVIEWREUSEVIEW_H

@class NSMapTable, NSString;
@protocol SKUIViewElementView, SKUIMediaPlayerObserver;


#import "SKUIViewReuseView.h"
#import "SKUIImageViewElement.h"
#import "SKUIPlayButton.h"

@interface SKUIAdornedImageViewReuseView : SKUIViewReuseView <SKUIViewElementView, SKUIMediaPlayerObserver>

 {
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUIImageViewElement *_imageViewElement;
    NSUInteger _playButtonPosition;
    NSMapTable *_viewElementViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIPlayButton *playButton; // ivar: _playButton
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForButtonText:(id)arg0 type:(NSInteger)arg1 style:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForMenuItem:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGRect )frameForView:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)mediaPlayer:(id)arg0 itemStateChanged:(id)arg1 ;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif