// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKEFFECTPROPERTYFOG_H
#define GLKEFFECTPROPERTYFOG_H



#import "GLKEffectProperty.h"

@interface GLKEffectPropertyFog : GLKEffectProperty

@property (nonatomic) unsigned long color; // ivar: _color
@property (nonatomic) int colorLoc; // ivar: _colorLoc
@property (nonatomic) float density; // ivar: _density
@property (nonatomic) int densityLoc; // ivar: _densityLoc
@property (nonatomic) unsigned char enabled; // ivar: _enabled
@property (nonatomic) float end; // ivar: _end
@property (nonatomic) int endLoc; // ivar: _endLoc
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) int modeLoc; // ivar: _modeLoc
@property (nonatomic) float start; // ivar: _start
@property (nonatomic) int startLoc; // ivar: _startLoc


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