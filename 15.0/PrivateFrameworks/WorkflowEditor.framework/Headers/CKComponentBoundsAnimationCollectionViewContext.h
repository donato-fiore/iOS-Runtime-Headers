// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPONENTBOUNDSANIMATIONCOLLECTIONVIEWCONTEXT_H
#define CKCOMPONENTBOUNDSANIMATIONCOLLECTIONVIEWCONTEXT_H

@class UICollectionView, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKComponentBoundsAnimationCollectionViewContext : NSObject {
    UICollectionView *_collectionView;
    NSInteger _numberOfSections;
    vector<unsigned long, std::allocator<unsigned long>> _numberOfItemsInSection;
    NSDictionary *_indexPathsToSnapshotViews;
    NSDictionary *_supplementaryElementIndexPathsToSnapshotViews;
    NSDictionary *_decorationElementIndexPathsToSnapshotViews;
    NSDictionary *_indexPathsToOriginalLayoutAttributes;
    NSDictionary *_supplementaryElementIndexPathsToOriginalLayoutAttributes;
    NSDictionary *_decorationElementIndexPathsToOriginalLayoutAttributes;
}




-(id)initWithCollectionView:(id)arg0 ;
-(void)applyBoundsAnimationToCollectionView:(struct CKComponentBoundsAnimation *)arg0 ;


@end


#endif