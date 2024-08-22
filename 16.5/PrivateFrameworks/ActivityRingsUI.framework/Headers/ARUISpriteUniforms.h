// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUISPRITEUNIFORMS_H
#define ARUISPRITEUNIFORMS_H


#import <Foundation/Foundation.h>


@interface ARUISpriteUniforms : NSObject

@property (readonly, nonatomic) ? uniforms; // ivar: _uniforms
@property (readonly, nonatomic) ? vertexAttributes; // ivar: _vertexAttributes


-(id)initWithSprite:(id)arg0 inContext:(id)arg1 ;
-(void)_updateUniformsWithSprite:(id)arg0 ;
-(void)_updateVertexAttributesWithSprite:(id)arg0 inContet:(id)arg1 ;


@end


#endif