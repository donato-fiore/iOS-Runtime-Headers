// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DMETALVERSION_H
#define TSCH3DMETALVERSION_H



#import "TSCH3DVersion.h"

@interface TSCH3DMetalVersion : TSCH3DVersion



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)version;
-(BOOL)deprecatesLuminanceAlpha;
-(BOOL)isMetal;
-(BOOL)isShaderGenerationFromContext:(id)arg0 equalToContext:(id)arg1 ;
-(BOOL)supportsClipDistances;
-(id)additionalConclusionsForShaderType:(struct TSCH3DShaderType )arg0 ;
-(id)additionalGlobalsForShaderType:(struct TSCH3DShaderType )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)discardStatement;
-(id)preprocessorDefinitions;
-(id)shaderTypeDefinitions;
-(id)textureFunctionPrefixForVariable:(id)arg0 context:(id)arg1 ;
-(id)textureUsagesForContext:(id)arg0 ;
-(id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType )arg0 ;
-(id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType )arg0 ;
-(void)addCompatibilityFunctionsForShaderProgram:(id)arg0 ;


@end


#endif