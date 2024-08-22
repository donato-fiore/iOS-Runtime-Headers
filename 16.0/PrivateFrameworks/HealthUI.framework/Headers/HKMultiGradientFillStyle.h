// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMULTIGRADIENTFILLSTYLE_H
#define HKMULTIGRADIENTFILLSTYLE_H

@class UIImage, NSArray, NSLock;


#import "HKFillStyle.h"

@interface HKMultiGradientFillStyle : HKFillStyle

@property (readonly, nonatomic) UIImage *cachedImageStorage; // ivar: _cachedImageStorage
@property (readonly, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, nonatomic) NSLock *multiGradientFillStyleLock; // ivar: _multiGradientFillStyleLock


-(BOOL)_needsRenderForSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fillImageWithHeight:(CGFloat)arg0 ;
-(id)fillImageWithWidth:(CGFloat)arg0 ;
-(id)initWithColors:(id)arg0 ;
-(void)_renderCacheIfNecessaryForHeight:(CGFloat)arg0 ;
-(void)_renderCacheIfNecessaryForSize:(struct CGSize )arg0 ;
-(void)_renderCacheIfNecessaryForWidth:(CGFloat)arg0 ;
-(void)_renderInContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 ;
-(void)clearCache;
-(void)renderPath:(struct CGPath *)arg0 context:(struct CGContext *)arg1 axisRect:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;


@end


#endif