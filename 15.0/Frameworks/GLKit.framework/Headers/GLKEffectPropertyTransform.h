// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKEFFECTPROPERTYTRANSFORM_H
#define GLKEFFECTPROPERTYTRANSFORM_H



#import "GLKEffectProperty.h"

@interface GLKEffectPropertyTransform : GLKEffectProperty

@property (nonatomic) unsigned long invModelviewMatrix; // ivar: _invModelviewMatrix
@property (nonatomic) int invModelviewMatrixLoc; // ivar: _invModelviewMatrixLoc
@property (nonatomic) unsigned long modelviewMatrix; // ivar: _modelviewMatrix
@property (nonatomic) int modelviewMatrixLoc; // ivar: _modelviewMatrixLoc
@property (nonatomic) unsigned long mvpMatrix; // ivar: _mvpMatrix
@property (nonatomic) int mvpMatrixLoc; // ivar: _mvpMatrixLoc
@property (readonly, nonatomic) unsigned long normalMatrix; // ivar: _normalMatrix
@property (nonatomic) int normalMatrixLoc; // ivar: _normalMatrixLoc
@property (nonatomic) unsigned long projectionMatrix; // ivar: _projectionMatrix
@property (nonatomic) int projectionMatrixLoc; // ivar: _projectionMatrixLoc


+(void)setStaticMasksWithVshRoot:(id)arg0 fshRoot:(id)arg1 ;
-(id)description;
-(id)init;
-(void)bind;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)loadIdentity:(int)arg0 ;
-(void)loadMatrix:(int)arg0 matrix:(unsigned long)arg1 ;
-(void)setShaderBindings;


@end


#endif