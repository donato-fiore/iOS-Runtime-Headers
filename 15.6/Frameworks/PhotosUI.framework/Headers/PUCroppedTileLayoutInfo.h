// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCROPPEDTILELAYOUTINFO_H
#define PUCROPPEDTILELAYOUTINFO_H



#import "PUTileLayoutInfo.h"

@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo

@property (nonatomic, setter=_setCropInsets:) UIEdgeInsets cropInsets; // ivar: _cropInsets


-(BOOL)isGeometryEqualToLayoutInfo:(id)arg0 ;
-(id)clone;
-(id)description;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 contentsRect:(struct CGRect )arg6 coordinateSystem:(id)arg7 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 cropInsets:(struct UIEdgeInsets )arg3 alpha:(CGFloat)arg4 cornerRadius:(CGFloat)arg5 cornerCurve:(id)arg6 cornerMask:(NSUInteger)arg7 transform:(struct CGAffineTransform )arg8 zPosition:(CGFloat)arg9 contentsRect:(struct CGRect )arg10 coordinateSystem:(id)arg11 ;
-(id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg0 mixFactor:(CGFloat)arg1 coordinateSystem:(id)arg2 ;


@end


#endif