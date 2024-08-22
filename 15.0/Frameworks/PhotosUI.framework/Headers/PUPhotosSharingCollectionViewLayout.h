// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSSHARINGCOLLECTIONVIEWLAYOUT_H
#define PUPHOTOSSHARINGCOLLECTIONVIEWLAYOUT_H

@class NSMutableDictionary, NSIndexPath;
@protocol PUPhotosSharingCollectionViewLayoutDelegate;


#import "PUHorizontalTiledCollectionViewLayout.h"

@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout {
    NSMutableDictionary *_cachedItemSublayouts;
}


@property (weak, nonatomic) NSObject<PUPhotosSharingCollectionViewLayoutDelegate> *delegate;
@property (nonatomic) NSUInteger sharingBadgesCorner; // ivar: _sharingBadgesCorner
@property (nonatomic) UIOffset sharingBadgesOffset; // ivar: _sharingBadgesOffset
@property (retain, nonatomic) NSIndexPath *zoomingCellIndexPath; // ivar: _zoomingCellIndexPath


-(BOOL)_supportsAdvancedTransitionAnimations;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_sublayoutForItemLayoutAttributes:(id)arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGRect )_floatingBadgeContainerFrameForBadgeContainerFrame:(struct CGRect )arg0 itemFrame:(struct CGRect )arg1 visibleItemFrame:(struct CGRect )arg2 ;
-(struct UIOffset )_floatingBadgeOffsetForBadgesContainerFrame:(struct CGRect )arg0 ItemFrame:(struct CGRect )arg1 visibleItemFrame:(struct CGRect )arg2 ;
-(void)_didFinishLayoutTransitionAnimations:(BOOL)arg0 ;
-(void)invalidateCachedLayout;


@end


#endif