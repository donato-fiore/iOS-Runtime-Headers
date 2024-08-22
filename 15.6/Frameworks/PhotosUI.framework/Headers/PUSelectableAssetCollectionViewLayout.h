// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSELECTABLEASSETCOLLECTIONVIEWLAYOUT_H
#define PUSELECTABLEASSETCOLLECTIONVIEWLAYOUT_H

@class NSSet;
@protocol PUSelectableAssetCollectionViewLayoutDelegate;


#import "PUHorizontalCollectionViewLayout.h"

@interface PUSelectableAssetCollectionViewLayout : PUHorizontalCollectionViewLayout

@property (weak, nonatomic) NSObject<PUSelectableAssetCollectionViewLayoutDelegate> *delegate;
@property (retain, nonatomic) NSSet *floatingCellIndexPaths; // ivar: _floatingCellIndexPaths
@property (nonatomic) CGSize layoutReferenceSize; // ivar: _layoutReferenceSize
@property (nonatomic) UIOffset sharingBadgeOffset; // ivar: _sharingBadgeOffset


-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGRect )_floatingSelectionBadgeFrameForItemFrame:(struct CGRect )arg0 visibleItemFrame:(struct CGRect )arg1 atIndexPath:(id)arg2 ;
-(struct CGRect )collectionViewBounds;


@end


#endif