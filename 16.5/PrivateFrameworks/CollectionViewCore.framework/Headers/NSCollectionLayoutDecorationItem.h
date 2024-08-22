// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOLLECTIONLAYOUTDECORATIONITEM_H
#define NSCOLLECTIONLAYOUTDECORATIONITEM_H

@class NSString;
@protocol _UICollectionLayoutAuxillaryItem, NSCopying;


#import "NSCollectionLayoutItem.h"
#import "NSCollectionLayoutBoundarySupplementaryItem.h"
#import "NSCollectionLayoutAnchor.h"
#import "NSCollectionLayoutDecorationItem.h"
#import "NSCollectionLayoutSize.h"
#import "NSCollectionLayoutSupplementaryItem.h"

@interface NSCollectionLayoutDecorationItem : NSCollectionLayoutItem <_UICollectionLayoutAuxillaryItem, NSCopying>



@property (readonly, nonatomic) NSDirectionalEdgeInsets _effectiveContentInsets;
@property (retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass; // ivar: __registrationViewClass
@property (readonly, nonatomic) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor; // ivar: _containerAnchor
@property (readonly, nonatomic) NSDirectionalEdgeInsets contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSCollectionLayoutDecorationItem *decorationItem;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *elementKind; // ivar: _elementKind
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBackgroundDecoration; // ivar: _isBackgroundDecoration
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor; // ivar: _itemAnchor
@property (readonly, nonatomic) NSCollectionLayoutSize *size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (nonatomic) NSInteger zIndex; // ivar: _zIndex


+(id)backgroundDecorationItemWithElementKind:(id)arg0 ;
+(id)decorationItemWithSize:(id)arg0 elementKind:(id)arg1 containerAnchor:(id)arg2 ;
+(id)itemWithLayoutSize:(id)arg0 ;
+(id)itemWithLayoutSize:(id)arg0 supplementaryItems:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElementKind:(id)arg0 size:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets )arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 zIndex:(NSInteger)arg5 registrationViewClass:(Class)arg6 isBackgroundDecoration:(BOOL)arg7 ;


@end


#endif