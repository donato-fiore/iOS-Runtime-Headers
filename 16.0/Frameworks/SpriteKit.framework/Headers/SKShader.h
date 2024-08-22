// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSHADER_H
#define SKSHADER_H

@class NSMutableArray, NSArray, NSMutableDictionary, NSString, NSPointerArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKShader : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_uniforms;
    NSArray *_attributes;
    NSMutableDictionary *_uniformData;
    NSString *_source;
    NSString *_fileName;
    BOOL _isPrecompiledMetal;
    NSString *_compileLog;
    BOOL _programDirty;
    BOOL _programWithTransformDirty;
    NSPointerArray *_targetNodes;
    BOOL _usesTimeUniform;
    BOOL _usesPathLengthUniform;
    BOOL _usesSpriteSizeUniform;
    ? _backingProgram;
    ? _backingProgramWithTransform;
    map<std::string, std::shared_ptr<jet_buffer_pool>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<jet_buffer_pool>>>> _attributeBuffers;
}


@property (readonly) *void _attributeBuffers;
@property (readonly) shared_ptr<jet_program> _backingProgram;
@property (readonly) shared_ptr<jet_program> _backingProgramWithTransform;
@property (readonly) shared_ptr<jet_command_buffer> _commands;
@property (readonly) NSArray *_textureUniforms;
@property (copy, nonatomic) NSArray *attributes;
@property BOOL performFullCapture; // ivar: _performFullCapture
@property (copy) NSString *source;
@property (copy) NSArray *uniforms;


+(BOOL)supportsSecureCoding;
+(id)precompiledMetalShaderWithFile:(id)arg0 uniforms:(id)arg1 ;
+(id)shader;
+(id)shaderWithFileNamed:(id)arg0 ;
+(id)shaderWithSource:(id)arg0 ;
+(id)shaderWithSource:(id)arg0 uniforms:(id)arg1 ;
-(?)_commandsForBatchOffsetcount;
-(?)_makeBackingProgramWithImplementation;
-(BOOL)_usesPathLengthUniform;
-(BOOL)_usesTimeUniform;
-(BOOL)isEqualToShader:(id)arg0 ;
-(BOOL)isValid;
-(id)_fullMetalVertexSourceWithImplementation:(BOOL)arg0 ;
-(id)_fullVertexSourceWithImplementation:(NSInteger)arg0 ;
-(id)_generateMetalSource;
-(id)_getLegacyUniformData;
-(id)_getMetalFragmentFunctionName;
-(id)_getMetalFragmentShaderSource;
-(id)_getMetalVertexOutDefinition;
-(id)_getMetalVertexShaderSource:(BOOL)arg0 ;
-(id)_getShaderCompilationLog;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fragmentPrelude;
-(id)fragmentPreludeMetal;
-(id)fullFragmentSource;
-(id)fullMetalFragmentSource;
-(id)fullMetalVertexSource;
-(id)fullMetalVertexWithTransformSource;
-(id)fullVertexSource;
-(id)fullVertexWithTransformSource;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 uniforms:(id)arg1 ;
-(id)uniformNamed:(id)arg0 ;
-(void)_addTargetNode:(id)arg0 ;
-(void)_removeTargetNode:(id)arg0 ;
-(void)addUniform:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFragmentAttributeDeclares:(*id)arg0 ;
-(void)generateVertexAttributeDeclares:(*id)arg0 statements:(*id)arg1 ;
-(void)removeUniformNamed:(id)arg0 ;


@end


#endif