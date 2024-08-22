// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DMATERIALSHADEREFFECT_H
#define TSCH3DMATERIALSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"
#import "TSCH3DTexturePool.h"
#import "TSCH3DTexturesMaterial.h"
#import "TSCH3DMaterialShaderVariables.h"

@interface TSCH3DMaterialShaderEffect : TSCH3DShaderEffect {
    TSCH3DTexturePool *_pool;
    TSCH3DTexturesMaterial *_material;
    TSCH3DMaterialShaderVariables *_variables;
}




+(id)effectWithPool:(id)arg0 material:(id)arg1 variables:(id)arg2 ;
+(id)stateSharingID;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPool:(id)arg0 material:(id)arg1 variables:(id)arg2 ;
-(id)stateSharingID;
-(void)addVariables:(id)arg0 ;
-(void)affectStates:(id)arg0 ;
-(void)updateState:(id)arg0 effectsStates:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif