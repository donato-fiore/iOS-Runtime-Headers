// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUACCESSORYTILELAYOUTINFO_H
#define PUACCESSORYTILELAYOUTINFO_H



#import "PUTileLayoutInfo.h"

@interface PUAccessoryTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) CGFloat minimumVisibleHeight; // ivar: _minimumVisibleHeight
@property (readonly, nonatomic) CGRect untransformedContentFrame; // ivar: _untransformedContentFrame


-(BOOL)isGeometryEqualToLayoutInfo:(id)arg0 ;
-(id)clone;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 untransformedContentFrame:(struct CGRect )arg7 contentInsets:(struct UIEdgeInsets )arg8 minimumVisibleHeight:(CGFloat)arg9 ;


@end


#endif