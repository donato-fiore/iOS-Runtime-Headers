// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTBOUNDARYSUPPLEMENTARYITEM_H
#define _UICOLLECTIONLAYOUTBOUNDARYSUPPLEMENTARYITEM_H

@class UICollectionLayoutSupplementaryItem, NSString;
@protocol NSCopying, _UICollectionLayoutAPIRespresenting;



@interface _UICollectionLayoutBoundarySupplementaryItem : UICollectionLayoutSupplementaryItem <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    NSString *_elementKind;
}


@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) BOOL extendsBoundary; // ivar: _extendsBoundary
@property (readonly, nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) BOOL pinToVisibleBounds; // ivar: _pinToVisibleBounds


+(id)boundarySupplementaryItemWithSize:(id)arg0 elementKind:(id)arg1 alignment:(NSInteger)arg2 ;
+(id)boundarySupplementaryItemWithSize:(id)arg0 elementKind:(id)arg1 alignment:(NSInteger)arg2 offset:(struct CGPoint )arg3 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(id)arg0 elementKind:(id)arg1 alignment:(NSInteger)arg2 offset:(struct CGPoint )arg3 zIndex:(NSInteger)arg4 contentInsets:(struct NSDirectionalEdgeInsets )arg5 extendsBoundary:(BOOL)arg6 pinToVisibleBounds:(BOOL)arg7 ;


@end


#endif