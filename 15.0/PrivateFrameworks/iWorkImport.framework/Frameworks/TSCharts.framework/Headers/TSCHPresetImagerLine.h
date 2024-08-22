// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHPRESETIMAGERLINE_H
#define TSCHPRESETIMAGERLINE_H



#import "TSCHPresetImagerLineFamily.h"

@interface TSCHPresetImagerLine : TSCHPresetImagerLineFamily



-(id)p_chartType;
-(id)p_strokeFromStyle:(id)arg0 specific:(int)arg1 default:(int)arg2 ;
-(struct UIEdgeInsets )swatchImageEdgeInsetsForSize:(struct CGSize )arg0 ;
-(void)p_drawShadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 preset:(id)arg3 target:(int)arg4 shouldCache:(*BOOL)arg5 ;


@end


#endif