// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUUSERTRANSFORMTILELAYOUTINFO_H
#define PUUSERTRANSFORMTILELAYOUTINFO_H



#import "PUTileLayoutInfo.h"
#import "PUDisplayTileTransform.h"

@interface PUUserTransformTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) PUDisplayTileTransform *displayTileTransform; // ivar: _displayTileTransform
@property (readonly, nonatomic) CGRect untransformedContentFrame; // ivar: _untransformedContentFrame


-(BOOL)isGeometryEqualToLayoutInfo:(id)arg0 ;
-(id)clone;
-(id)description;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 untransformedContentFrame:(struct CGRect )arg7 displayTileTransform:(id)arg8 ;


@end


#endif