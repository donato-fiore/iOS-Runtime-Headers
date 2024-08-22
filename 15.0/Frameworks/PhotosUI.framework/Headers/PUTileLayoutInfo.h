// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTILELAYOUTINFO_H
#define PUTILELAYOUTINFO_H

@class NSString, NSIndexPath;
@protocol NSCopying, PUTilingCoordinateSystem;

#import <Foundation/Foundation.h>

#import "PUTileIdentifier.h"

@interface PUTileLayoutInfo : NSObject <NSCopying>



@property (nonatomic, setter=_setAlpha:) CGFloat alpha; // ivar: _alpha
@property (nonatomic, setter=_setCenter:) CGPoint center; // ivar: _center
@property (readonly, nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (retain, nonatomic, setter=_setCoordinateSystem:) NSObject<PUTilingCoordinateSystem> *coordinateSystem; // ivar: _coordinateSystem
@property (retain, nonatomic, setter=_setCornerCurve:) NSString *cornerCurve; // ivar: _cornerCurve
@property (nonatomic, setter=_setCornerMask:) NSUInteger cornerMask; // ivar: _cornerMask
@property (nonatomic, setter=_setCornerRadius:) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSString *dataSourceIdentifier;
@property (nonatomic) ? expandedRectInsets; // ivar: _expandedRectInsets
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) UIEdgeInsets hitTestOutset; // ivar: _hitTestOutset
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (nonatomic, setter=_setSize:) CGSize size; // ivar: _size
@property (retain, nonatomic, setter=_setTileIdentifier:) PUTileIdentifier *tileIdentifier; // ivar: _tileIdentifier
@property (readonly, nonatomic) NSString *tileKind;
@property (nonatomic, setter=_setTransform:) CGAffineTransform transform; // ivar: _transform
@property (nonatomic, setter=_setZPosition:) CGFloat zPosition; // ivar: _zPosition


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)clone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 cornerRadius:(CGFloat)arg4 cornerCurve:(id)arg5 cornerMask:(NSUInteger)arg6 transform:(struct CGAffineTransform )arg7 zPosition:(CGFloat)arg8 contentsRect:(struct CGRect )arg9 coordinateSystem:(id)arg10 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 cornerRadius:(CGFloat)arg4 cornerCurve:(id)arg5 cornerMask:(NSUInteger)arg6 transform:(struct CGAffineTransform )arg7 zPosition:(CGFloat)arg8 contentsRect:(struct CGRect )arg9 hitTestOutset:(struct UIEdgeInsets )arg10 coordinateSystem:(id)arg11 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 contentsRect:(struct CGRect )arg6 coordinateSystem:(id)arg7 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 contentsRect:(struct CGRect )arg6 hitTestOutset:(struct UIEdgeInsets )arg7 coordinateSystem:(id)arg8 ;
-(id)initWithTileIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 alpha:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 zPosition:(CGFloat)arg5 coordinateSystem:(id)arg6 ;
-(id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg0 mixFactor:(CGFloat)arg1 coordinateSystem:(id)arg2 ;
-(id)layoutInfoWithAlpha:(CGFloat)arg0 ;
-(id)layoutInfoWithCenter:(struct CGPoint )arg0 size:(struct CGSize )arg1 alpha:(CGFloat)arg2 transform:(struct CGAffineTransform )arg3 zPosition:(CGFloat)arg4 coordinateSystem:(id)arg5 ;
-(id)layoutInfoWithCenter:(struct CGPoint )arg0 size:(struct CGSize )arg1 transform:(struct CGAffineTransform )arg2 ;
-(id)layoutInfoWithCoordinateSystem:(id)arg0 ;
-(id)layoutInfoWithIndexPath:(id)arg0 tileKind:(id)arg1 dataSourceIdentifier:(id)arg2 ;
-(id)layoutInfoWithZPosition:(CGFloat)arg0 ;
-(struct CGPoint )parallaxOffset;
-(struct UIEdgeInsets )cropInsets;


@end


#endif