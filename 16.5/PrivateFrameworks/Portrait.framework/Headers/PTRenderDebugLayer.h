// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTRENDERDEBUGLAYER_H
#define PTRENDERDEBUGLAYER_H


#import <Foundation/Foundation.h>


@interface PTRenderDebugLayer : NSObject



-(id)getBiasedDisparityVisualizationRange;
-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(void)dumpDebug:(id)arg0 renderRequest:(id)arg1 debugTextures:(id)arg2 ;
-(void)renderDebugLayer:(id)arg0 renderRequest:(id)arg1 inDisparity:(id)arg2 disparityOffset:(float)arg3 focusObject:(struct PTFocus )arg4 quality:(int)arg5 edgeTolerance:(float)arg6 debugTextures:(id)arg7 debugRendering:(NSInteger)arg8 ;
-(void)renderTurbo:(id)arg0 inTex:(id)arg1 outRGBA:(id)arg2 valueOffset:(float)arg3 valueMinMax:(BOOL)arg4 valueAbs:(float)arg5 colorRangeMax:(struct ? )arg6 channelMultiplierregion;
-(void)renderTurboMix:(id)arg0 inTex:(id)arg1 inRGBA:(id)arg2 outRGBA:(id)arg3 valueOffset:(float)arg4 valueMinMax:(BOOL)arg5 valueAbs:(float)arg6 colorRangeMax:(float)arg7 channelMultiplier:(struct ? )arg8 mixFractionregion;


@end


#endif