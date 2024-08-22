// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSTROKEPATTERNSHADEREFFECT_H
#define TSCH3DSTROKEPATTERNSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DStrokePatternShaderEffect : TSCH3DShaderEffect



+(id)variableStrokeTexture;
+(id)variableTexture;
-(id)variableStrokeTexture;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif