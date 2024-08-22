// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONLAYOUTSECTION_H
#define _UICOLLECTIONLAYOUTSECTION_H

@class NSArray, NSIndexSet;
@protocol NSCopying, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutGroup.h"

@interface _UICollectionLayoutSection : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    _UICollectionLayoutGroup *_layoutGroup;
}


@property (copy, nonatomic) NSArray *boundarySupplementaryItems; // ivar: _boundarySupplementaryItems
@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSArray *decorationItems; // ivar: _decorationItems
@property (nonatomic) CGFloat interGroupSpacing; // ivar: _interGroupSpacing
@property (nonatomic) NSInteger orthogonalScrollingBehavior; // ivar: _orthogonalScrollingBehavior
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // ivar: _pinnedSupplementaryItemIndexes
@property (nonatomic) BOOL supplementariesFollowContentInsets; // ivar: _supplementariesFollowContentInsets
@property (copy, nonatomic) NSArray *supplementaryItems; // ivar: _supplementaryItems
@property (copy, nonatomic) id *visibleItemsTransformer; // ivar: _visibleItemsTransformer


+(id)layoutSectionWithLayoutGroup:(id)arg0 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLayoutGroup:(id)arg0 ;
// -(id)initWithLayoutGroup:(id)arg0 contentInsets:(struct NSDirectionalEdgeInsets )arg1 interGroupSpacing:(CGFloat)arg2 orthogonalScrollingBehavior:(NSInteger)arg3 boundarySupplementaryItems:(id)arg4 supplementariesFollowContentInsets:(BOOL)arg5 visibleItemsTransformer:(id)arg6 decorationItems:(unk)arg7 supplementaryItems:(id)arg8 pinnedSupplementaryItemIndexes:(id)arg9  ;


@end


#endif