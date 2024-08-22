// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASCAROUSELCOLLECTIONVIEWLAYOUT_H
#define VIDEOSEXTRASCAROUSELCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSDictionary;
@protocol VideosExtrasCarouselCollectionViewLayout;



@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout <VideosExtrasCarouselCollectionViewLayout>



@property (nonatomic) CGSize cachedCollectionViewContentSize; // ivar: _cachedCollectionViewContentSize
@property (retain, nonatomic) NSDictionary *cachedLayoutAttributes; // ivar: _cachedLayoutAttributes
@property (nonatomic) NSInteger indexOfVisibleItemForBoundsChange; // ivar: _indexOfVisibleItemForBoundsChange


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)_neighboringItemVisibleWidth;
-(CGFloat)_spaceBetweenItems;
-(CGFloat)_spaceBetweenItemsForCollectionViewBounds:(struct CGRect )arg0 ;
-(CGFloat)itemWidth;
-(NSInteger)_indexOfVisibleItemForContentOffset:(struct CGPoint )arg0 collectionViewBounds:(struct CGRect )arg1 ;
-(NSUInteger)indexOfVisibleItem;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )_contentOffsetForItemAtIndex:(NSInteger)arg0 collectionViewBounds:(struct CGRect )arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)finalizeAnimatedBoundsChange;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;
-(void)prepareLayout;
-(void)setIndexOfVisibleItem:(NSUInteger)arg0 ;
-(void)setIndexOfVisibleItem:(NSUInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif