// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DDIRECTIONALLIGHTSHADEREFFECT_H
#define TSCH3DDIRECTIONALLIGHTSHADEREFFECT_H



#import "TSCH3DLightShaderEffect.h"

@interface TSCH3DDirectionalLightShaderEffect : TSCH3DLightShaderEffect



+(id)variableDirectionalLightIntensities;
-(id)variableDirectionalLightIntensities;
-(id)variables;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif