// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUHORIZONTALCOLLECTIONVIEWLAYOUT_H
#define PUHORIZONTALCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSArray;
@protocol PUHorizontalCollectionViewLayoutDelegate;



@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout {
    CGSize _contentSize;
    NSArray *_cachedItemLayoutAttributes;
    NSArray *_cachedSectionFrames;
    CGRect _lastRequestedRect;
    NSArray *_lastRequestedLayoutAttributesInRect;
}


@property (readonly, nonatomic) CGRect collectionViewBounds;
@property (weak, nonatomic) NSObject<PUHorizontalCollectionViewLayoutDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (nonatomic) UIEdgeInsets itemsContentInset; // ivar: _itemsContentInset


+(Class)invalidationContextClass;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif