// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTAUXILLARYITEMSOLVER_H
#define _UICOLLECTIONLAYOUTAUXILLARYITEMSOLVER_H

@class NSArray, NSSet, NSIndexSet, NSDictionary;
@protocol _UICollectionLayoutAuxillaryHosting;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutAuxillaryOffsets.h"
#import "_UIRTree.h"

@interface _UICollectionLayoutAuxillaryItemSolver : NSObject {
    NSInteger _memoizedSupplementaryKind;
    NSArray *_memoizedAuxillaryItems;
    NSSet *_elementKinds;
    BOOL _hasEstimatedSizes;
    NSIndexSet *_pinnedSupplementaryIndexes;
    _UICollectionLayoutAuxillaryOffsets *_supplementariesThatCanAffectContentSize;
    id<_UICollectionLayoutAuxillaryHosting> *_auxillaryHost;
    NSArray *_frames;
    NSArray *_unpinnedFrames;
    NSDictionary *_enrolledSupplementaryFramesDict;
    NSDictionary *_supplementaryFramesKeyedByKindIndex;
    _UIRTree *_supplementaryItemGeometricIndexer;
    CGSize _contentSize;
    CGPoint _hostContentOffset;
    NSDirectionalEdgeInsets _hostContentSizeInsets;
}






@end


#endif