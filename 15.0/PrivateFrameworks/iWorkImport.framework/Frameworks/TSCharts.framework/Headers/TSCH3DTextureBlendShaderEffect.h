// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DTEXTUREBLENDSHADEREFFECT_H
#define TSCH3DTEXTUREBLENDSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)effect;
+(id)variableBlendFactor;
+(id)variableBlendTexture;
+(id)variableTexture;
+(void)setBlendFactor:(float)arg0 unit:(NSInteger)arg1 effectsStates:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)variableBlendFactor;
-(id)variableBlendTexture;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif