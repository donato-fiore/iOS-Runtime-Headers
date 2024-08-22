// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUHORIZONTALTILEDCOLLECTIONVIEWLAYOUT_H
#define PUHORIZONTALTILEDCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, UICollectionViewLayoutAttributes;
@protocol PUHorizontalTiledCollectionViewLayoutDelegate;


#import "PUCollectionViewData.h"

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout {
    PUCollectionViewData *_data;
    UICollectionViewLayoutAttributes *_dummyAttrs;
}


@property (weak, nonatomic) NSObject<PUHorizontalTiledCollectionViewLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasReferenceIndexPath;
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) UIEdgeInsets itemsContentInset; // ivar: _itemsContentInset


+(Class)invalidationContextClass;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)_updateLayoutData:(id)arg0 inDirection:(NSInteger)arg1 outDeltaOriginX:(*CGFloat)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForItemsInRect:(struct CGRect )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_ensureIndexPath:(id)arg0 inData:(id)arg1 ;
-(void)_ensureRect:(struct CGRect )arg0 inData:(id)arg1 outDeltaOriginX:(*CGFloat)arg2 ;
-(void)invalidateCachedLayout;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif