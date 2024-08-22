// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUEXPANDABLETILELAYOUTINFO_H
#define PUEXPANDABLETILELAYOUTINFO_H



#import "PUTileLayoutInfo.h"

@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) CGSize expandedSize; // ivar: _expandedSize
@property (readonly, nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (readonly, nonatomic) CGSize unexpandedSize; // ivar: _unexpandedSize


-(BOOL)isGeometryEqualToLayoutInfo:(id)arg0 ;
-(id)clone;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 isExpanded:(BOOL)arg7 expandedSize:(struct CGSize )arg8 unexpandedSize:(struct CGSize )arg9 ;


@end


#endif