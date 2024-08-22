// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPARALLAXEDTILELAYOUTINFO_H
#define PUPARALLAXEDTILELAYOUTINFO_H



#import "PUTileLayoutInfo.h"

@interface PUParallaxedTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) CGPoint parallaxOffset; // ivar: _parallaxOffset


-(BOOL)isGeometryEqualToLayoutInfo:(id)arg0 ;
-(id)clone;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 parallaxOffset:(struct CGPoint )arg6 contentsRect:(struct CGRect )arg7 coordinateSystem:(id)arg8 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 parallaxOffset:(struct CGPoint )arg6 coordinateSystem:(id)arg7 ;


@end


#endif