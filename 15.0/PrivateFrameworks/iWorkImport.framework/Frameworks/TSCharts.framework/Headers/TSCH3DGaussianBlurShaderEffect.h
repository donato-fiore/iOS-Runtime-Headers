// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DGAUSSIANBLURSHADEREFFECT_H
#define TSCH3DGAUSSIANBLURSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"
#import "TSCH3DShaderVariable.h"

@interface TSCH3DGaussianBlurShaderEffect : TSCH3DShaderEffect {
    TSCH3DShaderVariable *_samplingTexcoords;
}




+(id)variableAccum;
+(id)variableTapUnit;
+(id)variableTexture;
+(void)setTapUnit:(struct tvec2<float> )arg0 effectsStates:(id)arg1 ;
-(id)init;
-(id)variableAccum;
-(id)variableTapUnit;
-(id)variableTexture;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif