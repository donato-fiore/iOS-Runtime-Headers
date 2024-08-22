// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHPRESETIMAGERBARFAMILY_H
#define TSCHPRESETIMAGERBARFAMILY_H



#import "TSCHPresetImager.h"

@interface TSCHPresetImagerBarFamily : TSCHPresetImager



-(BOOL)hasRoundedCornersForPreset:(id)arg0 ;
-(struct CGPath *)roundedCornerClippingPathForPreset:(id)arg0 frame:(struct CGRect )arg1 isVertical:(BOOL)arg2 ;
-(void)addRoundedCornerClipPathToContext:(struct CGContext *)arg0 forPreset:(id)arg1 frame:(struct CGRect )arg2 isVertical:(BOOL)arg3 ;
-(void)p_drawBarInContext:(struct CGContext *)arg0 frame:(struct CGRect )arg1 stroke:(id)arg2 fill:(id)arg3 ;
-(void)renderInRoundedCornerClippedContext:(struct CGContext *)arg0 forPreset:(id)arg1 stroke:(id)arg2 barRect:(struct CGRect )arg3 clipRect:(struct CGRect )arg4 isVertical:(BOOL)arg5 renderBlock:(id)arg6 ;


@end


#endif