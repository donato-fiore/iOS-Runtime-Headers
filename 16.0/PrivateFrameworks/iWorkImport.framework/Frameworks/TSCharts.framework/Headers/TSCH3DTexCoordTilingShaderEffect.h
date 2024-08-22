// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DTEXCOORDTILINGSHADEREFFECT_H
#define TSCH3DTEXCOORDTILINGSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DTexCoordTilingShaderEffect : TSCH3DShaderEffect



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)effect;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)transformedTexcoordBuffer:(id)arg0 effectsStates:(id)arg1 ;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif