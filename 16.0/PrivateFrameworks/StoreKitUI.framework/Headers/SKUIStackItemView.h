// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTACKITEMVIEW_H
#define SKUISTACKITEMVIEW_H

@class NSString, NSMapTable, NSArray;
@protocol SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIAttributedStringView.h"
#import "SKUIStackItemViewElement.h"

@interface SKUIStackItemView : SKUIViewReuseView <SKUIViewElementView>



@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *imageViewToImageResourceCacheKey; // ivar: _imageViewToImageResourceCacheKey
@property (copy, nonatomic) NSArray *imageViews; // ivar: _imageViews
@property (retain, nonatomic) SKUIViewElementLayoutContext *lastContext; // ivar: _lastContext
@property (readonly, nonatomic) NSUInteger numberOfLines;
@property (readonly) Class superclass;
@property (retain, nonatomic) SKUIAttributedStringView *textView; // ivar: _textView
@property (retain, nonatomic) SKUIStackItemViewElement *viewElement; // ivar: _viewElement


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(id)_textViewLayoutWithWidth:(CGFloat)arg0 string:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 numberOfLines:(*NSUInteger)arg3 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif