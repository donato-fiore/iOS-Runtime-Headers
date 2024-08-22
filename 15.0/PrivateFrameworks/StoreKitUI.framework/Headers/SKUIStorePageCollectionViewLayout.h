// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTOREPAGECOLLECTIONVIEWLAYOUT_H
#define SKUISTOREPAGECOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, UIColor, NSMapTable, NSArray, NSString, NSIndexSet;
@protocol SKUIStorePageCollectionViewLayout;



@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout>

 {
    UIColor *_collectionViewBackgroundColor;
    BOOL _hasValidGradientIndexPaths;
    BOOL _hasValidIndexPathsForPinningItems;
    BOOL _hasValidPinnedBackdropViewStyle;
    BOOL _hasValidPinningLayoutInformation;
    NSInteger _inLayoutAttributesForElementsCount;
    NSMapTable *_indexPathToItemPinningConfiguration;
    NSMapTable *_indexPathToPinningLayoutInformation;
    NSArray *_indexPathsForPinningItems;
    NSInteger _pinnedBackdropViewStyle;
    ? _collectionViewDelegateFlags;
    NSArray *_updateItems;
}


@property (nonatomic) BOOL allowsPinningTransitions; // ivar: _allowsPinningTransitions
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSIndexSet *expandChildPageSectionsIndexSet; // ivar: _expandChildPageSectionsIndexSet
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems; // ivar: _indexPathsForGradientItems
@property (readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property (nonatomic) CGFloat overrideContentWidth; // ivar: _overrideContentWidth
@property (nonatomic) BOOL rendersWithParallax; // ivar: _rendersWithParallax
@property (nonatomic) BOOL rendersWithPerspective; // ivar: _rendersWithPerspective
@property (readonly) Class superclass;


+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(BOOL)_allowsBackdropDecorationForItemPinningConfiguration:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSInteger)_pinnedBackdropViewStyle;
-(NSInteger)_pinningGroupForItemPinningConfiguration:(id)arg0 atIndexPath:(id)arg1 ;
-(NSInteger)_pinningStyleForItemPinningConfiguration:(id)arg0 atIndexPath:(id)arg1 ;
-(NSInteger)_pinningTransitionStyleForItemPinningConfiguration:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_getCollectionViewUpdateItemForItemFromIndex:(NSInteger)arg0 initalLayout:(BOOL)arg1 ;
-(id)_indexPathsForBackgroundGradients;
-(id)_itemPinningConfigurationForItemAtIndexPath:(id)arg0 ;
-(id)_itemPinningLayoutInformationForItemAtIndexPath:(id)arg0 ;
-(id)_layoutAttributesForGradientDecorationViewAtIndexPath:(id)arg0 currentAttributes:(id)arg1 ;
-(id)_layoutAttributesForPinnedBackdropDecorationViewAtIndexPath:(id)arg0 pinningConfiguration:(id)arg1 layoutInformation:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg0 ;
-(id)pinnedLayoutAttributesForItemsInRect:(struct CGRect )arg0 ;
-(struct CGRect )_pinningFrameForStartingFrame:(struct CGRect )arg0 itemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2 ;
-(struct CGRect )_targetFrameForStartingFrame:(struct CGRect )arg0 itemPinningConfiguration:(id)arg1 layoutInformation:(id)arg2 atIndexPath:(id)arg3 returningIsPinning:(*BOOL)arg4 ;
-(struct CGSize )collectionViewContentSize;
-(struct UIEdgeInsets )_pinningContentInsetForItemPinningConfiguration:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_alginCellsToTop:(id)arg0 ;
-(void)_appendAdditionalLayoutAttributesForPinningItemsInRect:(struct CGRect )arg0 toArray:(id)arg1 ;
-(void)_calculatePinningLayoutInformation;
-(void)_configureCellLayoutAttributes:(id)arg0 forItemWithPinningConfiguration:(id)arg1 layoutInformation:(id)arg2 atIndexPath:(id)arg3 allowPinning:(BOOL)arg4 returningIsPinning:(*BOOL)arg5 ;
-(void)_invalidatePinningLayoutInformation;
-(void)_updateItemsLayoutForRect:(struct CGRect )arg0 ;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareLayout;


@end


#endif