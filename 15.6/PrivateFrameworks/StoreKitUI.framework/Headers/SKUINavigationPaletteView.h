// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUINAVIGATIONPALETTEVIEW_H
#define SKUINAVIGATIONPALETTEVIEW_H

@class NSHashTable, NSMapTable, NSMutableArray, NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseView.h"

@interface SKUINavigationPaletteView : SKUIViewReuseView <SKUIViewElementView>

 {
    NSHashTable *_artworkRelatedChildViewElementViews;
    UIEdgeInsets _contentInset;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSMutableArray *_segmentedControls;
    NSMutableArray *_stretchViews;
    NSMapTable *_viewElementViews;
    NSMapTable *_viewSpacings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForText:(id)arg0 style:(id)arg1 context:(id)arg2 ;
+(struct CGSize )_sizeForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
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