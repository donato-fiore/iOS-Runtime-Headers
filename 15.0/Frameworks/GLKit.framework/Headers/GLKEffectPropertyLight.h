// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKEFFECTPROPERTYLIGHT_H
#define GLKEFFECTPROPERTYLIGHT_H



#import "GLKEffectProperty.h"
#import "GLKEffectPropertyTransform.h"

@interface GLKEffectPropertyLight : GLKEffectProperty

@property (readonly, nonatomic) GLKBigInt_s allFshMasks; // ivar: _allFshMasks
@property (readonly, nonatomic) GLKBigInt_s allVshMasks; // ivar: _allVshMasks
@property (nonatomic) unsigned long ambientColor; // ivar: _ambientColor
@property (nonatomic) int ambientLoc; // ivar: _ambientLoc
@property (nonatomic) int ambientTermLoc; // ivar: _ambientTermLoc
@property (nonatomic) float constantAttenuation; // ivar: _constantAttenuation
@property (nonatomic) int constantAttenuationLoc; // ivar: _constantAttenuationLoc
@property (nonatomic) unsigned long diffuseColor; // ivar: _diffuseColor
@property (nonatomic) int diffuseLoc; // ivar: _diffuseLoc
@property (nonatomic) *NSUInteger effectDirtyUniforms; // ivar: _effectDirtyUniforms
@property (nonatomic) unsigned char enabled; // ivar: _enabled
@property (nonatomic) unsigned char firstLight; // ivar: _firstLight
@property (readonly, nonatomic) unsigned char isAttenuated;
@property (readonly, nonatomic) unsigned char isSpot;
@property (nonatomic) int lightIndex; // ivar: _lightIndex
@property (nonatomic) int lightingType; // ivar: _lightingType
@property (nonatomic) float linearAttenuation; // ivar: _linearAttenuation
@property (nonatomic) int linearAttenuationLoc; // ivar: _linearAttenuationLoc
@property (nonatomic) int normalizeLoc; // ivar: _normalizeLoc
@property (nonatomic) unsigned long normalizedSpotDirectionEye; // ivar: _normalizedSpotDirectionEye
@property (nonatomic) int normalizedSpotDirectionEyeLoc; // ivar: _normalizedSpotDirectionEyeLoc
@property (nonatomic) unsigned long position; // ivar: _position
@property (nonatomic) unsigned long positionEye; // ivar: _positionEye
@property (nonatomic) int positionEyeLoc; // ivar: _positionEyeLoc
@property (nonatomic) unsigned char positionEyeStale; // ivar: _positionEyeStale
@property (nonatomic) float quadraticAttenuation; // ivar: _quadraticAttenuation
@property (nonatomic) int quadraticAttenuationLoc; // ivar: _quadraticAttenuationLoc
@property (nonatomic) unsigned long specularColor; // ivar: _specularColor
@property (nonatomic) int specularLoc; // ivar: _specularLoc
@property (nonatomic) float spotCutoff; // ivar: _spotCutoff
@property (nonatomic) float spotCutoffDegrees; // ivar: _spotCutoffDegrees
@property (nonatomic) int spotCutoffLoc; // ivar: _spotCutoffLoc
@property (nonatomic) unsigned long spotDirection; // ivar: _spotDirection
@property (nonatomic) float spotExponent; // ivar: _spotExponent
@property (nonatomic) int spotExponentLoc; // ivar: _spotExponentLoc
@property (retain, nonatomic) GLKEffectPropertyTransform *transform; // ivar: _transform


+(void)setStaticMasksWithVshRoot:(id)arg0 fshRoot:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg0 ;
-(BOOL)includeVshShaderTextForRootNode:(id)arg0 ;
-(id)description;
-(id)initWithTransform:(id)arg0 lightingType:(int)arg1 firstLight:(unsigned char)arg2 ;
-(void)bind;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)initializeMasks;
-(void)setGLDefaults;
-(void)setNormalize:(unsigned char)arg0 ;
-(void)setShaderBindings;


@end


#endif