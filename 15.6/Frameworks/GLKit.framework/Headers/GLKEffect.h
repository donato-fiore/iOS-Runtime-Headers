// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKEFFECT_H
#define GLKEFFECT_H

@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "GLKShaderBlockNode.h"

@interface GLKEffect : NSObject

@property (nonatomic) int aColorLoc; // ivar: _aColorLoc
@property (nonatomic) unsigned long baseLightingColor; // ivar: _baseLightingColor
@property (nonatomic) int baseLightingColorLoc; // ivar: _baseLightingColorLoc
@property (nonatomic) unsigned char colorMaterialEnabled; // ivar: _colorMaterialEnabled
@property (nonatomic) NSUInteger dirtyUniforms; // ivar: _dirtyUniforms
@property (nonatomic) *id effectShaderArray; // ivar: _effectShaderArray
@property (nonatomic) *GLKBigInt_s fshMask; // ivar: _fshMask
@property (nonatomic) unsigned int fshName; // ivar: _fshName
@property (readonly, nonatomic) GLKShaderBlockNode *fshRootNode; // ivar: _fshRootNode
@property (nonatomic) *char * fshStrings; // ivar: _fshStrings
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned long lightModelAmbientColor; // ivar: _lightModelAmbientColor
@property (nonatomic) int lightModelAmbientColorLoc; // ivar: _lightModelAmbientColorLoc
@property (nonatomic) unsigned char lightModelTwoSided; // ivar: _lightModelTwoSided
@property (retain, nonatomic) NSMutableArray *lightProperties; // ivar: _lightProperties
@property (nonatomic) unsigned char masksInitialized; // ivar: _masksInitialized
@property (readonly, nonatomic) *float materialAmbientColor; // ivar: _materialAmbientColor
@property (readonly, nonatomic) *float materialDiffuseColor; // ivar: _materialDiffuseColor
@property (nonatomic) unsigned int numFshStrings; // ivar: _numFshStrings
@property (nonatomic) unsigned int numLights; // ivar: _numLights
@property (nonatomic) unsigned int numTextures; // ivar: _numTextures
@property (nonatomic) unsigned int numVshStrings; // ivar: _numVshStrings
@property (nonatomic) unsigned char perPixelLightingEnabled; // ivar: _perPixelLightingEnabled
@property (nonatomic) unsigned char perVertexLightingEnabled; // ivar: _perVertexLightingEnabled
@property (nonatomic) GLKBigInt_s prevFshMask; // ivar: _prevFshMask
@property (nonatomic) GLKBigInt_s prevVshMask; // ivar: _prevVshMask
@property (readonly, nonatomic) NSMutableDictionary *programHash; // ivar: _programHash
@property (nonatomic) unsigned int programName; // ivar: _programName
@property (retain, nonatomic) NSMutableArray *properties; // ivar: _properties
@property (copy, nonatomic) NSArray *textureOrder; // ivar: _textureOrder
@property (nonatomic) BOOL textureOrderStale; // ivar: _textureOrderStale
@property (nonatomic) unsigned char texturingEnabled; // ivar: _texturingEnabled
@property (nonatomic) *GLKBigInt_s vshMask; // ivar: _vshMask
@property (nonatomic) unsigned int vshName; // ivar: _vshName
@property (readonly, nonatomic) GLKShaderBlockNode *vshRootNode; // ivar: _vshRootNode
@property (nonatomic) *char * vshStrings; // ivar: _vshStrings


+(BOOL)parseXMLFile:(id)arg0 rootNode:(id)arg1 ;
+(id)programInfoLogForName:(unsigned int)arg0 effectLabel:(id)arg1 msg:(char *)arg2 ;
+(id)shaderInfoLogForName:(unsigned int)arg0 effectLabel:(id)arg1 msg:(char *)arg2 ;
+(void)initialize;
+(void)initializeStaticMasks;
+(void)setStaticMasksWithVshRoot:(id)arg0 fshRoot:(id)arg1 ;
+(void)unrollLoopNodesForStaticTreeWithRoot:(id)arg0 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg0 ;
-(BOOL)includeShaderTextForRootNode:(id)arg0 ;
-(BOOL)includeVshShaderTextForRootNode:(id)arg0 ;
-(BOOL)useColorAttrib;
-(BOOL)useTexCoordAttrib;
-(id)description;
-(id)init;
-(id)initWithPropertyArray:(id)arg0 ;
-(void)addTransformProperty;
-(void)bind;
-(void)createAndUseProgramWithShadingHash:(id)arg0 ;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)initializeMasks;
-(void)setShaderBindings;
-(void)setTextureIndices;
-(void)updateFshStringsWithRoot:(id)arg0 enabled:(struct GLKBigInt_s )arg1 ;
-(void)updateVshStringsWithRoot:(id)arg0 enabled:(struct GLKBigInt_s )arg1 ;


@end


#endif