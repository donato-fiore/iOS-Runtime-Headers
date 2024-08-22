// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKEFFECTPROPERTYCONSTANTCOLOR_H
#define GLKEFFECTPROPERTYCONSTANTCOLOR_H



#import "GLKEffectProperty.h"

@interface GLKEffectPropertyConstantColor : GLKEffectProperty

@property (nonatomic) unsigned long color; // ivar: _color
@property (nonatomic) unsigned char enabled; // ivar: _enabled


+(void)setStaticMasksWithVshRoot:(id)arg0 fshRoot:(id)arg1 ;
-(id)description;
-(id)init;
-(void)bind;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)setShaderBindings;


@end


#endif