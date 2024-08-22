// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIIMAGECOLLECTIONVIEWCELL_H
#define SKUIIMAGECOLLECTIONVIEWCELL_H

@class NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"
#import "SKUIImageView.h"

@interface SKUIImageCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>

 {
    SKUIImageView *_highlightImageView;
    id *_imageRequestCacheKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsReflectionImage; // ivar: _showsReflectionImage
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_reloadHighlightImageView;
-(void)layoutSubviews;
-(void)reloadWithCarouselItem:(id)arg0 size:(struct CGSize )arg1 context:(id)arg2 ;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif