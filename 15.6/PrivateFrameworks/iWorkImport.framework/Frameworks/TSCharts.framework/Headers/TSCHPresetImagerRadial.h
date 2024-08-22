// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHPRESETIMAGERRADIAL_H
#define TSCHPRESETIMAGERRADIAL_H



#import "TSCHPresetImager.h"

@interface TSCHPresetImagerRadial : TSCHPresetImager



-(id)fillFromStyle:(id)arg0 ;
-(id)strokeFromStyle:(id)arg0 ;
-(struct CGPath *)newMutablePathWithRadius:(CGFloat)arg0 center:(struct CGPoint )arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 ;
-(void)p_drawShadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 preset:(id)arg3 target:(int)arg4 shouldCache:(*BOOL)arg5 ;


@end


#endif