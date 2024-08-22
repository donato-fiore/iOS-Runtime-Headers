// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKEFFECTPROPERTYTEXTURE_H
#define GLKEFFECTPROPERTYTEXTURE_H

@class NSString, NSMutableArray;


#import "GLKEffectProperty.h"
#import "GLKEffectPropertyTexGen.h"

@interface GLKEffectPropertyTexture : GLKEffectProperty

@property (readonly, nonatomic) GLKBigInt_s allFshMasks; // ivar: _allFshMasks
@property (nonatomic) unsigned char enabled; // ivar: _enabled
@property (nonatomic) int envMode; // ivar: _envMode
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (nonatomic) unsigned char matrixEnabled; // ivar: _matrixEnabled
@property (nonatomic) unsigned int name; // ivar: _name
@property (readonly, nonatomic) unsigned char normalizedNormalsMask;
@property (nonatomic) unsigned int target; // ivar: _target
@property (readonly, nonatomic) NSMutableArray *texGenArray; // ivar: _texGenArray
@property (readonly, nonatomic) GLKEffectPropertyTexGen *texGenR; // ivar: _texGenR
@property (readonly, nonatomic) GLKEffectPropertyTexGen *texGenS; // ivar: _texGenS
@property (readonly, nonatomic) GLKEffectPropertyTexGen *texGenT; // ivar: _texGenT
@property (nonatomic) int textureIndex; // ivar: _textureIndex
@property (nonatomic) int unit2dLoc; // ivar: _unit2dLoc
@property (nonatomic) char * unit2dNameString; // ivar: _unit2dNameString
@property (nonatomic) int unitCubeLoc; // ivar: _unitCubeLoc
@property (nonatomic) char * unitCubeNameString; // ivar: _unitCubeNameString
@property (readonly, nonatomic) unsigned char useTexCoordAttribMask;
@property (readonly, nonatomic) unsigned char vNormalEyeMask;
@property (readonly, nonatomic) unsigned char vPositionEyeMask;


+(void)clearAllTexturingMasks:(struct GLKBigInt_s *)arg0 fshMask:(struct GLKBigInt_s *)arg1 ;
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