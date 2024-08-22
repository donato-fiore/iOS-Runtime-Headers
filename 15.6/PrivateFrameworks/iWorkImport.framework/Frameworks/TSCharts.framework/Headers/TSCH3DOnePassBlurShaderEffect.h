// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DONEPASSBLURSHADEREFFECT_H
#define TSCH3DONEPASSBLURSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DOnePassBlurShaderEffect : TSCH3DShaderEffect



+(id)variableBlurTexCoord;
+(id)variablePixelSize;
+(id)variableTexture;
-(id)variableBlurTexCoord;
-(id)variablePixelSize;
-(id)variableTexture;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif