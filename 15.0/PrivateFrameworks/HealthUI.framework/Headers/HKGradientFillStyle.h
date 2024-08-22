// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKGRADIENTFILLSTYLE_H
#define HKGRADIENTFILLSTYLE_H

@class UIImage, UIColor;


#import "HKFillStyle.h"

@interface HKGradientFillStyle : HKFillStyle

@property (retain, nonatomic) UIImage *cachedImage; // ivar: _cachedImage
@property (nonatomic) NSInteger fillDirection; // ivar: _fillDirection
@property (nonatomic) CGFloat fillPercentage; // ivar: _fillPercentage
@property (retain, nonatomic) UIColor *firstColor; // ivar: _firstColor
@property (nonatomic) CGFloat gradientSize; // ivar: _gradientSize
@property (retain, nonatomic) UIColor *secondColor; // ivar: _secondColor


-(BOOL)_needsRenderForSize:(struct CGSize )arg0 ;
-(BOOL)_useReversedFillDirection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fillImageWithHeight:(CGFloat)arg0 ;
-(id)fillImageWithWidth:(CGFloat)arg0 ;
-(id)init;
-(void)_renderCacheIfNecessaryForHeight:(CGFloat)arg0 ;
-(void)_renderCacheIfNecessaryForSize:(struct CGSize )arg0 ;
-(void)_renderCacheIfNecessaryForWidth:(CGFloat)arg0 ;
-(void)_renderInContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 ;
-(void)clearCache;
-(void)renderPath:(struct CGPath *)arg0 context:(struct CGContext *)arg1 axisRect:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;


@end


#endif