// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBADGETILELAYOUTINFO_H
#define PUBADGETILELAYOUTINFO_H



#import "PUTileLayoutInfo.h"

@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) CGFloat contentWidth; // ivar: _contentWidth
@property (readonly, nonatomic) BOOL isOverContent; // ivar: _isOverContent
@property (readonly, nonatomic) CGFloat leadingContentWidth; // ivar: _leadingContentWidth


-(BOOL)isGeometryEqualToLayoutInfo:(id)arg0 ;
-(id)clone;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 hitTestOutset:(struct UIEdgeInsets )arg6 coordinateSystem:(id)arg7 isOverContent:(BOOL)arg8 contentWidth:(CGFloat)arg9 leadingContentWidth:(CGFloat)arg10 ;


@end


#endif