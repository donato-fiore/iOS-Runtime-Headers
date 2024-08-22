// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DPOINTLIGHTSHADEREFFECT_H
#define TSCH3DPOINTLIGHTSHADEREFFECT_H



#import "TSCH3DLightShaderEffect.h"

@interface TSCH3DPointLightShaderEffect : TSCH3DLightShaderEffect



+(id)variableLightIntensities;
-(id)variableLightIntensities;
-(id)variables;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif