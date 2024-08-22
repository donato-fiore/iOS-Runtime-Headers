// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSGRIDLAYOUT_H
#define STSGRIDLAYOUT_H

@class UICollectionViewLayout, NSDictionary, UICollectionViewLayoutAttributes, NSMutableDictionary, NSNumber;



@interface STSGridLayout : UICollectionViewLayout {
    NSDictionary *_headerAttributes;
    NSDictionary *_cellAttributes;
    NSDictionary *_tileAttributes;
    UICollectionViewLayoutAttributes *_footerAttributes;
    NSMutableDictionary *_tileSmallFrameCache;
    NSNumber *_hasOnlyLargeItems;
    CGFloat _contentSizeMaxY;
}


@property (nonatomic) CGFloat footerHeight; // ivar: _footerHeight
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing


-(BOOL)_hasOnlyLargeItems;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSInteger)maximumCellsPerRow;
-(NSUInteger)_tilesPerRowAndWidth:(*CGFloat)arg0 ;
-(id)_gridLayoutDelegate;
-(id)_gridTilesForCurrentDataSource;
-(id)_tileSmallFramesForSize:(struct CGSize )arg0 ;
-(id)init;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGRect )_gridFrameForRow:(NSUInteger)arg0 andColumn:(NSUInteger)arg1 inSize:(struct CGSize )arg2 ;
-(struct CGSize )_availableContentSize;
-(struct CGSize )collectionViewContentSize;
-(void)_redistributeLastRowItemsInTiles:(id)arg0 withTilesPerRow:(NSUInteger)arg1 ;
-(void)invalidateLayout;
-(void)prepareLayout;


@end


#endif