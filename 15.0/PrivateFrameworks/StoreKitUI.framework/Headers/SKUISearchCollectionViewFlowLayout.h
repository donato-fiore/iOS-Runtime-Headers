// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISEARCHCOLLECTIONVIEWFLOWLAYOUT_H
#define SKUISEARCHCOLLECTIONVIEWFLOWLAYOUT_H

@class UICollectionView;


#import "SKUIItemGridCollectionViewLayout.h"

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {
    UICollectionView *_collectionView;
    NSInteger _numberOfRows;
    NSInteger _numberOfColumns;
    CGSize _headerSize;
}


@property (nonatomic) BOOL backfills; // ivar: _backfills
@property (nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (nonatomic) CGFloat verticalPadding; // ivar: _verticalPadding


-(id)init;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(void)prepareLayout;


@end


#endif