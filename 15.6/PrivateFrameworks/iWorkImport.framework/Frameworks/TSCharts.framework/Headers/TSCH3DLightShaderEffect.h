// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DLIGHTSHADEREFFECT_H
#define TSCH3DLIGHTSHADEREFFECT_H



#import "TSCH3DShaderEffect.h"

@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect {
    NSUInteger _lightCount;
}




+(Class)stateClass;
+(id)effectWithLightCount:(NSUInteger)arg0 ;
+(void)createStateInEffectsStates:(id)arg0 ;
+(void)updatePackageState:(*void)arg0 effectsStates:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLightCount:(NSUInteger)arg0 ;
-(void)addVariables:(id)arg0 ;
-(void)uploadData:(id)arg0 effectsStates:(id)arg1 ;
-(void)uploadLightDirectionalWithUploader:(id)arg0 effectsStates:(id)arg1 ;
-(void)uploadLightPositionablesWithUploader:(id)arg0 effectsStates:(id)arg1 ;


@end


#endif