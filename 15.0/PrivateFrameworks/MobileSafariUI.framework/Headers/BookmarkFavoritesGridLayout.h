// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKFAVORITESGRIDLAYOUT_H
#define BOOKMARKFAVORITESGRIDLAYOUT_H

@class UICollectionViewFlowLayout, NSSet, NSDictionary;



@interface BookmarkFavoritesGridLayout : UICollectionViewFlowLayout {
    NSSet *_deletedIndexPaths;
    NSSet *_insertedIndexPaths;
    NSSet *_reloadedIndexPaths;
    NSDictionary *_originIndexPathsForAppearingIndexPaths;
    NSDictionary *_destinationIndexPathsForDisappearingIndexPaths;
    BOOL _disableScaleTransforms;
}




-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;


@end


#endif