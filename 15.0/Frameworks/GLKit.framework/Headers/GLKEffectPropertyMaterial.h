// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKEFFECTPROPERTYMATERIAL_H
#define GLKEFFECTPROPERTYMATERIAL_H



#import "GLKEffectProperty.h"

@interface GLKEffectPropertyMaterial : GLKEffectProperty

@property (nonatomic) int _ambientColorLoc; // ivar: _ambientColorLoc
@property (nonatomic) GLKBigInt_s _colorMaterialEnabledMask; // ivar: _colorMaterialEnabledMask
@property (nonatomic) int _diffuseColorLoc; // ivar: _diffuseColorLoc
@property (nonatomic) int _emissiveColorLoc; // ivar: _emissiveColorLoc
@property (nonatomic) int _shininessLoc; // ivar: _shininessLoc
@property (nonatomic) int _specularColorLoc; // ivar: _specularColorLoc
@property (nonatomic) unsigned long ambientColor; // ivar: _ambientColor
@property (nonatomic) unsigned long diffuseColor; // ivar: _diffuseColor
@property (nonatomic) *NSUInteger effectDirtyUniforms; // ivar: _effectDirtyUniforms
@property (nonatomic) unsigned long emissiveColor; // ivar: _emissiveColor
@property (nonatomic) float shininess; // ivar: _shininess
@property (nonatomic) unsigned long specularColor; // ivar: _specularColor


+(void)setStaticMasksWithVshRoot:(id)arg0 fshRoot:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg0 ;
-(BOOL)includeVshShaderTextForRootNode:(id)arg0 ;
-(id)description;
-(id)init;
-(void)bind;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)initializeMasks;
-(void)setShaderBindings;


@end


#endif