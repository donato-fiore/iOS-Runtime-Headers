// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGRADIENTFILLSTYLE_H
#define HKGRADIENTFILLSTYLE_H

@class UIImage, UIColor, NSLock;


#import "HKFillStyle.h"

@interface HKGradientFillStyle : HKFillStyle

@property (readonly, nonatomic) UIImage *cachedImageStorage; // ivar: _cachedImageStorage
@property (readonly, nonatomic) NSInteger fillDirection; // ivar: _fillDirection
@property (readonly, nonatomic) CGFloat fillPercentage; // ivar: _fillPercentage
@property (readonly, nonatomic) UIColor *firstColor; // ivar: _firstColor
@property (readonly, nonatomic) NSLock *gradientFillStyleLock; // ivar: _gradientFillStyleLock
@property (readonly, nonatomic) CGFloat gradientSize; // ivar: _gradientSize
@property (readonly, nonatomic) UIColor *secondColor; // ivar: _secondColor


-(BOOL)_needsRenderForSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fillImageWithHeight:(CGFloat)arg0 ;
-(id)fillImageWithWidth:(CGFloat)arg0 ;
-(id)initWithFirstColor:(id)arg0 secondColor:(id)arg1 ;
-(id)initWithFirstColor:(id)arg0 secondColor:(id)arg1 fillPercentage:(CGFloat)arg2 fillDirection:(NSInteger)arg3 gradientSize:(CGFloat)arg4 ;
-(void)_renderCacheIfNecessaryForHeight:(CGFloat)arg0 ;
-(void)_renderCacheIfNecessaryForSize:(struct CGSize )arg0 ;
-(void)_renderCacheIfNecessaryForWidth:(CGFloat)arg0 ;
-(void)_renderInContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 ;
-(void)clearCache;
-(void)renderPath:(struct CGPath *)arg0 context:(struct CGContext *)arg1 axisRect:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;


@end


#endif