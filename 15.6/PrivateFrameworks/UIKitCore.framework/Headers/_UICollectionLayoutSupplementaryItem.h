// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTSUPPLEMENTARYITEM_H
#define _UICOLLECTIONLAYOUTSUPPLEMENTARYITEM_H

@class UICollectionLayoutItem, NSString;
@protocol NSCopying, _UICollectionLayoutAPIRespresenting;


#import "_UICollectionLayoutEdgeSpacing.h"
#import "_UICollectionLayoutAnchor.h"

@interface _UICollectionLayoutSupplementaryItem : UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    _UICollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
}


@property (nonatomic) BOOL canAdjustContentSize; // ivar: _canAdjustContentSize
@property (readonly, nonatomic) _UICollectionLayoutAnchor *containerAnchor; // ivar: _containerAnchor
@property (readonly, nonatomic) NSString *elementKind; // ivar: _elementKind
@property (readonly, nonatomic) _UICollectionLayoutAnchor *itemAnchor; // ivar: _itemAnchor
@property (nonatomic) NSInteger zIndex; // ivar: _zIndex


+(id)supplementaryItemWithSize:(id)arg0 elementKind:(id)arg1 containerAnchor:(id)arg2 ;
+(id)supplementaryItemWithSize:(id)arg0 elementKind:(id)arg1 containerAnchor:(id)arg2 itemAnchor:(id)arg3 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(id)arg0 elementKind:(id)arg1 zIndex:(NSInteger)arg2 contentInsets:(struct NSDirectionalEdgeInsets )arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 edgeSpacing:(id)arg6 name:(id)arg7 canAdjustContentSize:(BOOL)arg8 ;


@end


#endif