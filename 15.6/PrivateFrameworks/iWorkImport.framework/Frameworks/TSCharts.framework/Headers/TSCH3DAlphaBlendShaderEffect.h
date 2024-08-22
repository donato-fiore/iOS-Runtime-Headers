// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DALPHABLENDSHADEREFFECT_H
#define TSCH3DALPHABLENDSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DAlphaBlendShaderEffect : TSCH3DShaderEffect



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)effect;
+(id)variableAlphaBlendValue;
+(void)setChartAlpha:(float)arg0 effectsStates:(id)arg1 ;
+(void)setElementAlpha:(float)arg0 effectsStates:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)variableAlphaBlendValue;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif