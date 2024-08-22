// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DDIFFUSETEXTURESHADEREFFECT_H
#define TSCH3DDIFFUSETEXTURESHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DDiffuseTextureShaderEffect : TSCH3DShaderEffect



+(Class)stateClass;
+(id)variableTexture;
-(id)variableDiffuseTexture;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif