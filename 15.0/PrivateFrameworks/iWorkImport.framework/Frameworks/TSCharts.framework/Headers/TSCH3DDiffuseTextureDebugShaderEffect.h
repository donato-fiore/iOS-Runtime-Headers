// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DDIFFUSETEXTUREDEBUGSHADEREFFECT_H
#define TSCH3DDIFFUSETEXTUREDEBUGSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DDiffuseTextureDebugShaderEffect : TSCH3DShaderEffect



+(id)variableTexture;
-(id)variableDiffuseTexture;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;


@end


#endif