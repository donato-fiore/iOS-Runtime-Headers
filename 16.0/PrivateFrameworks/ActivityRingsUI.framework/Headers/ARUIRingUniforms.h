// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUIRINGUNIFORMS_H
#define ARUIRINGUNIFORMS_H


#import <Foundation/Foundation.h>


@interface ARUIRingUniforms : NSObject

@property (readonly, nonatomic) ? uniforms; // ivar: _uniforms
@property (readonly, nonatomic) ? vertexAttributes; // ivar: _vertexAttributes


-(id)initWithRing:(id)arg0 inContext:(id)arg1 ;
-(void)_updateUniformsWithRing:(id)arg0 inContext:(id)arg1 ;
-(void)_updateVertexAttributesWithRing:(id)arg0 inContext:(id)arg1 ;


@end


#endif