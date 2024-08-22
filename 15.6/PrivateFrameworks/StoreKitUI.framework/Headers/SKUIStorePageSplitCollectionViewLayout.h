// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTOREPAGESPLITCOLLECTIONVIEWLAYOUT_H
#define SKUISTOREPAGESPLITCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewCompositionLayout, NSMutableArray, NSMapTable, NSString, NSArray;
@protocol SKUIStorePageCollectionViewLayout;



@interface SKUIStorePageSplitCollectionViewLayout : UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout>

 {
    NSMutableArray *_orderedSublayouts;
    NSMapTable *_sublayoutToSectionsToIndexRanges;
}


@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems; // ivar: _indexPathsForGradientItems
@property (readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property (nonatomic) BOOL rendersWithParallax; // ivar: _rendersWithParallax
@property (nonatomic) BOOL rendersWithPerspective; // ivar: _rendersWithPerspective
@property (readonly) Class superclass;


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_newStorePageCollectionViewLayout;
-(id)init;
-(id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg0 ;
-(id)pinnedLayoutAttributesForItemsInRect:(struct CGRect )arg0 ;
-(id)sublayouts;
-(struct CGRect )_frameForLayout:(id)arg0 offset:(struct CGPoint )arg1 relativeToEdges:(NSUInteger)arg2 fromSiblingLayout:(id)arg3 ;
-(void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg0 ;
-(void)addSublayout:(id)arg0 forElementKinds:(id)arg1 ;
-(void)addSublayout:(id)arg0 forItems:(id)arg1 inSection:(NSInteger)arg2 offset:(struct CGPoint )arg3 relativeToEdges:(NSUInteger)arg4 fromSiblingLayout:(id)arg5 ;
-(void)addSublayout:(id)arg0 forSections:(id)arg1 offset:(struct CGPoint )arg2 relativeToEdges:(NSUInteger)arg3 fromSiblingLayout:(id)arg4 ;
-(void)addSublayoutsUsingSplitsDescription:(id)arg0 ;
-(void)removeSublayout:(id)arg0 ;


@end


#endif