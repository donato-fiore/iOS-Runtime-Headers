// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCOLLECTIONVIEWLAYOUTCACHE_H
#define PUCOLLECTIONVIEWLAYOUTCACHE_H

@class UICollectionViewLayout, NSMutableDictionary;
@protocol PUCollectionViewLayoutProvider;



@interface PUCollectionViewLayoutCache : UICollectionViewLayout {
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;
    ? _layoutProviderFlags;
}


@property (nonatomic) BOOL cachesResults; // ivar: _cachesResults
@property (readonly, weak, nonatomic) NSObject<PUCollectionViewLayoutProvider> *layoutProvider; // ivar: _layoutProvider


-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(id)init;
-(id)initWithProvider:(id)arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)invalidateLayoutCache;


@end


#endif