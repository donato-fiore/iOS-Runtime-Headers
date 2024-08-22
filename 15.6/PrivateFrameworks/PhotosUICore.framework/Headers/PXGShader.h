// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGSHADER_H
#define PXGSHADER_H

@class NSDictionary, NSArray, NSMutableData;

#import <Foundation/Foundation.h>

#import "PXGShaderSource.h"

@interface PXGShader : NSObject {
    NSDictionary *_sourceByShaderFunction;
    NSArray *_valueUniforms;
    NSArray *_texture2DUniforms;
    NSArray *_texture3DUniforms;
    NSMutableData *_valueUniformsData;
}


@property (readonly, copy, nonatomic) NSDictionary *components; // ivar: _components
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) ? opcodes; // ivar: _opcodes
@property (nonatomic) NSUInteger sampler; // ivar: _sampler
@property (readonly, copy, nonatomic) PXGShaderSource *source; // ivar: _source
@property (readonly, copy, nonatomic) NSArray *uniforms; // ivar: _uniforms


-(BOOL)isEquivalentToShader:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOpcodes:(struct ? )arg0 source:(id)arg1 uniforms:(id)arg2 components:(id)arg3 ;
-(id)parameterBindingDeclarations;
-(void)encodeBindableArgumentsWithEncoder:(id)arg0 ;


@end


#endif