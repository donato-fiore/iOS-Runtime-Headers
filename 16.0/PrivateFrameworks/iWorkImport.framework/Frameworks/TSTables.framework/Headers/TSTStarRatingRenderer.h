// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSTARRATINGRENDERER_H
#define TSTSTARRATINGRENDERER_H


#import <Foundation/Foundation.h>


@interface TSTStarRatingRenderer : NSObject



+(struct CGPath *)p_newStarPath:(CGFloat)arg0 ;
+(void)renderRating:(CGFloat)arg0 intoContext:(struct CGContext *)arg1 rect:(struct CGRect )arg2 showDots:(BOOL)arg3 color:(struct CGColor *)arg4 ;
+(void)renderRating:(CGFloat)arg0 intoContext:(struct CGContext *)arg1 rect:(struct CGRect )arg2 showDots:(BOOL)arg3 color:(struct CGColor *)arg4 useMinimalSpace:(BOOL)arg5 ;


@end


#endif