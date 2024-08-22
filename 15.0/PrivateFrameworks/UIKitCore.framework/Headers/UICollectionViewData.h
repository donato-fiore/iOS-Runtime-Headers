// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWDATA_H
#define UICOLLECTIONVIEWDATA_H

@class NSMapTable, NSMutableIndexSet, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UICollectionViewLayout.h"

@interface UICollectionViewData : NSObject {
    UICollectionView *_collectionView;
    UICollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    CGRect _validLayoutRect;
    NSInteger _lastSectionTestedForNumberOfItemsBeforeSection;
    NSInteger _lastResultForNumberOfItemsBeforeSection;
    CGSize _contentSize;
    NSMutableArray *_clonedCellAttributes;
    NSMutableArray *_clonedSupplementaryAttributes;
    NSMutableArray *_clonedDecorationAttributes;
    ? _collectionViewDataFlags;
    vector<long, std::allocator<long>> _sectionItemCounts;
    unordered_map<long, UICollectionViewLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, UICollectionViewLayoutAttributes *>>> _globalItemMap;
    NSInteger _totalItemCount;
}




+(void)initialize;
-(struct CGRect )_TEST_validLayoutRect;


@end


#endif