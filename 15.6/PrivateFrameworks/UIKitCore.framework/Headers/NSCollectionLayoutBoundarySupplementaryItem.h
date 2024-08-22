// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCOLLECTIONLAYOUTBOUNDARYSUPPLEMENTARYITEM_H
#define NSCOLLECTIONLAYOUTBOUNDARYSUPPLEMENTARYITEM_H

@protocol NSCopying;


#import "NSCollectionLayoutSupplementaryItem.h"

@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <NSCopying>



@property (nonatomic, getter=_pinningZIndex, setter=_setPinningZIndex:) NSInteger _pinningZIndex; // ivar: _pinningZIndex
@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) BOOL extendsBoundary; // ivar: _extendsBoundary
@property (readonly, nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) BOOL pinToVisibleBounds; // ivar: _pinToVisibleBounds


+(id)boundarySupplementaryItemWithLayoutSize:(id)arg0 elementKind:(id)arg1 alignment:(NSInteger)arg2 ;
+(id)boundarySupplementaryItemWithLayoutSize:(id)arg0 elementKind:(id)arg1 alignment:(NSInteger)arg2 absoluteOffset:(struct CGPoint )arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)boundarySupplementaryItem;
-(id)copyWithContainerAnchor:(id)arg0 itemAnchor:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(id)arg0 contentInsets:(struct NSDirectionalEdgeInsets )arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 zIndex:(NSInteger)arg5 alignment:(NSInteger)arg6 offset:(struct CGPoint )arg7 extendsBoundary:(BOOL)arg8 pinToVisibleBounds:(BOOL)arg9 ;
-(void)setPinningZIndex:(NSInteger)arg0 ;


@end


#endif