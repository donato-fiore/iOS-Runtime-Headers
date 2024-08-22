// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DFIXEDFUNCTIONSHADEREFFECT_H
#define TSCH3DFIXEDFUNCTIONSHADEREFFECT_H



#import "TSCH3DPhongLikeShaderEffect.h"

@interface TSCH3DFixedFunctionShaderEffect : TSCH3DPhongLikeShaderEffect



-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)injectDiffuseToProgram:(id)arg0 ;
-(void)injectFinalColorToProgram:(id)arg0 ;


@end


#endif