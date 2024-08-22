// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DLIGHTENSHADEREFFECT_H
#define TSCH3DLIGHTENSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DLightenShaderEffect : TSCH3DShaderEffect



+(struct tvec4<float> )lightenDiffuseFragmentColor:(*void)arg0 byPercent:(float)arg1 ;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif