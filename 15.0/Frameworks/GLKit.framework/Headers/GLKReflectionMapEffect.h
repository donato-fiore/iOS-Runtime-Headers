// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKREFLECTIONMAPEFFECT_H
#define GLKREFLECTIONMAPEFFECT_H

@protocol GLKNamedEffect;


#import "GLKBaseEffect.h"
#import "GLKEffectPropertyTexture.h"

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect>



@property (nonatomic) BOOL dirtyUniforms; // ivar: _dirtyUniforms
@property (nonatomic) unsigned long matrix; // ivar: _matrix
@property (nonatomic) int matrixLoc; // ivar: _matrixLoc
@property (readonly, nonatomic) GLKEffectPropertyTexture *textureCubeMap; // ivar: _textureCubeMap


-(id)description;
-(id)init;
-(void)dealloc;
-(void)prepareToDraw;


@end


#endif