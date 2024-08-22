// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKBASEEFFECT_H
#define GLKBASEEFFECT_H

@class NSString, NSMutableArray, NSArray;
@protocol GLKNamedEffect;

#import <Foundation/Foundation.h>

#import "GLKEffectPropertyConstantColor.h"
#import "GLKEffect.h"
#import "GLKEffectPropertyFog.h"
#import "GLKEffectPropertyLight.h"
#import "GLKEffectPropertyMaterial.h"
#import "GLKEffectPropertyTexture.h"
#import "GLKEffectPropertyTransform.h"

@interface GLKBaseEffect : NSObject <GLKNamedEffect>

 {
    unsigned char _fogEnabled;
}


@property (nonatomic) unsigned char colorMaterialEnabled; // ivar: _colorMaterialEnabled
@property (nonatomic) unsigned long constantColor; // ivar: _constantColor
@property (readonly, nonatomic) GLKEffectPropertyConstantColor *constantColorProp; // ivar: _constantColorProp
@property (nonatomic) GLKEffect *effect; // ivar: _effect
@property (nonatomic) unsigned char effectStale; // ivar: _effectStale
@property (readonly, nonatomic) GLKEffectPropertyFog *fog; // ivar: _fog
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) GLKEffectPropertyLight *light0; // ivar: _light0
@property (readonly, nonatomic) GLKEffectPropertyLight *light1; // ivar: _light1
@property (readonly, nonatomic) GLKEffectPropertyLight *light2; // ivar: _light2
@property (nonatomic) unsigned long lightModelAmbientColor; // ivar: _lightModelAmbientColor
@property (nonatomic) unsigned char lightModelTwoSided; // ivar: _lightModelTwoSided
@property (nonatomic) int lightingType; // ivar: _lightingType
@property (readonly, nonatomic) GLKEffectPropertyMaterial *material; // ivar: _material
@property (nonatomic) unsigned int programName; // ivar: _programName
@property (readonly, nonatomic) NSMutableArray *propertyArray; // ivar: _propertyArray
@property (nonatomic) unsigned char propertyArrayStale; // ivar: _propertyArrayStale
@property (readonly, nonatomic) GLKEffectPropertyTexture *texture2d0; // ivar: _texture2d0
@property (readonly, nonatomic) GLKEffectPropertyTexture *texture2d1; // ivar: _texture2d1
@property (copy, nonatomic) NSArray *textureOrder; // ivar: _textureOrder
@property (readonly, nonatomic) GLKEffectPropertyTransform *transform; // ivar: _transform
@property (nonatomic) unsigned char useConstantColor; // ivar: _useConstantColor


-(BOOL)perPixelLightingEnabled;
-(BOOL)perVertexLightingEnabled;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)prepareToDraw;
-(void)updateBaseEffect;


@end


#endif