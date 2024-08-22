// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DPHONGLIKESHADEREFFECT_H
#define TSCH3DPHONGLIKESHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DPhongLikeShaderEffect : TSCH3DShaderEffect



-(void)injectAmbientToProgram:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)injectDiffuseToProgram:(id)arg0 ;
-(void)injectEmissiveToProgram:(id)arg0 ;
-(void)injectSpecularToProgram:(id)arg0 ;


@end


#endif