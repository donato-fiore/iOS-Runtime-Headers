// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCOLLECTIONLAYOUTSUPPLEMENTARYITEM_H
#define NSCOLLECTIONLAYOUTSUPPLEMENTARYITEM_H

@class NSString;
@protocol _UICollectionLayoutAuxillaryItem, NSCopying;


#import "NSCollectionLayoutItem.h"
#import "NSCollectionLayoutBoundarySupplementaryItem.h"
#import "NSCollectionLayoutAnchor.h"
#import "NSCollectionLayoutDecorationItem.h"
#import "NSCollectionLayoutSize.h"
#import "NSCollectionLayoutSupplementaryItem.h"

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <_UICollectionLayoutAuxillaryItem, NSCopying>



@property (readonly, nonatomic) NSDirectionalEdgeInsets _effectiveContentInsets;
@property (readonly, nonatomic) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (nonatomic) BOOL canAdjustContentSize; // ivar: _canAdjustContentSize
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor; // ivar: _containerAnchor
@property (readonly, nonatomic) NSDirectionalEdgeInsets contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSCollectionLayoutDecorationItem *decorationItem;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *elementKind; // ivar: _elementKind
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor; // ivar: _itemAnchor
@property (readonly, nonatomic) NSCollectionLayoutSize *size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (nonatomic) NSInteger zIndex; // ivar: _zIndex


+(id)itemWithLayoutSize:(id)arg0 ;
+(id)itemWithLayoutSize:(id)arg0 supplementaryItems:(id)arg1 ;
+(id)supplementaryItemWithLayoutSize:(id)arg0 elementKind:(id)arg1 containerAnchor:(id)arg2 ;
+(id)supplementaryItemWithLayoutSize:(id)arg0 elementKind:(id)arg1 containerAnchor:(id)arg2 itemAnchor:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(id)arg0 contentInsets:(struct NSDirectionalEdgeInsets )arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 zIndex:(NSInteger)arg5 ;


@end


#endif