// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSPHERICALENVIRONMENTSHADEREFFECT_H
#define TSCH3DSPHERICALENVIRONMENTSHADEREFFECT_H

@class NSArray;


#import "TSCH3DShaderEffect.h"
#import "TSCH3DTexturePool.h"

@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect {
    NSArray *_materials;
    TSCH3DTexturePool *_pool;
}




+(Class)stateClass;
+(id)effectWithMaterials:(id)arg0 pool:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(id)initWithMaterials:(id)arg0 pool:(id)arg1 ;
-(id)textureVariablesArray;
-(void)addVariables:(id)arg0 ;
-(void)injectCommonShaderInto:(id)arg0 context:(id)arg1 ;
-(void)updateState:(id)arg0 effectsStates:(id)arg1 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif