// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKSKYBOXEFFECT_H
#define GLKSKYBOXEFFECT_H

@class NSString, NSMutableArray;
@protocol GLKNamedEffect;

#import <Foundation/Foundation.h>

#import "GLKEffect.h"
#import "GLKEffectPropertyTexture.h"
#import "GLKEffectPropertyTransform.h"

@interface GLKSkyboxEffect : NSObject <GLKNamedEffect>



@property (nonatomic) unsigned long center; // ivar: _center
@property (nonatomic) unsigned char centerChanged; // ivar: _centerChanged
@property (nonatomic) GLKEffect *effect; // ivar: _effect
@property (nonatomic) unsigned char effectStale; // ivar: _effectStale
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int positionVBO; // ivar: _positionVBO
@property (nonatomic) unsigned int programName; // ivar: _programName
@property (readonly, nonatomic) NSMutableArray *propertyArray; // ivar: _propertyArray
@property (nonatomic) unsigned int texCoordVBO; // ivar: _texCoordVBO
@property (readonly, nonatomic) GLKEffectPropertyTexture *textureCubeMap; // ivar: _textureCubeMap
@property (readonly, nonatomic) GLKEffectPropertyTransform *transform; // ivar: _transform
@property (nonatomic) unsigned int vao; // ivar: _vao
@property (nonatomic) float xSize; // ivar: _xSize
@property (nonatomic) float ySize; // ivar: _ySize
@property (nonatomic) float zSize; // ivar: _zSize


-(id)description;
-(id)init;
-(void)createAndBindVAOWithPositions:(*float)arg0 texCoords:(*float)arg1 ;
-(void)dealloc;
-(void)draw;
-(void)prepareToDraw;
-(void)updateSkyboxEffect;


@end


#endif