// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEADDNOISE_H
#define PAEADDNOISE_H



#import "PAEFilterDefaultBase.h"

@interface PAEAddNoise : PAEFilterDefaultBase



-(?)dynamicPropertiesAtTimewithError;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGRef<HGNode> )noiseNodeWithWidth:(int)arg0 height:(int)arg1 noiseType:(int)arg2 isMono:(BOOL)arg3 frameNum:(CGFloat)arg4 autoAnimate:(BOOL)arg5 randomSeed:(int)arg6 inputPixelTransform:(struct PCMatrix44Tmpl<double> )arg7 outputPixelTransform:(struct PCMatrix44Tmpl<double> )arg8 outputInvPixelTransform:(struct PCMatrix44Tmpl<double> )arg9 is360:(BOOL)arg10 ;
-(struct HGRef<HGNode> )translateNode:(struct HGRef<HGNode> )arg0 byAmount:(struct PCVector2<double> )arg1 andCropTo:(struct HGRect )arg2 ;


@end


#endif