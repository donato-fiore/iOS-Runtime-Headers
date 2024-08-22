// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLSHADER_H
#define TSDGLSHADER_H

@class NSMutableDictionary, NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface TSDGLShader : NSObject {
    NSMutableDictionary *_uniforms;
    NSMutableSet *_uniformsNeedingUpdate;
    NSMutableDictionary *_attributeLocations;
}


@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int programObject; // ivar: _programObject


-(BOOL)loadVertexShader:(id)arg0 fragmentShader:(id)arg1 defines:(id)arg2 ;
-(BOOL)p_compileShader:(*unsigned int)arg0 withType:(unsigned int)arg1 shaderString:(id)arg2 defines:(id)arg3 ;
-(BOOL)validateUniforms;
-(id)description;
-(id)init;
-(id)initWithDefaultHorizontalBlurShader;
-(id)initWithDefaultRandomColorShader;
-(id)initWithDefaultRandomColorTextureShader;
-(id)initWithDefaultTextureAndOpacityShader;
-(id)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(BOOL)arg0 ignoreTextureOpacity:(BOOL)arg1 ;
-(id)initWithDefaultTextureCoordinatesShader;
-(id)initWithDefaultTextureShader;
-(id)initWithDefaultTextureShaderWithMotionBlur:(BOOL)arg0 ignoreTextureOpacity:(BOOL)arg1 ;
-(id)initWithDefaultUniformMotionBlurShader;
-(id)initWithDefaultVelocityCollectionShaderWithSampleCount:(NSUInteger)arg0 isSingleObject:(BOOL)arg1 ;
-(id)initWithDefaultVelocityMeshShader;
-(id)initWithDefaultVelocityShader;
-(id)initWithDefaultVelocityVisualizerShader;
-(id)initWithDefaultVerticalBlurShader;
-(id)initWithVertexShader:(id)arg0 fragmentShader:(id)arg1 defines:(id)arg2 ;
-(id)initWithVertexShaderFileName:(id)arg0 fragmentShaderFileName:(id)arg1 bundle:(id)arg2 defines:(id)arg3 ;
-(id)p_contentsOfShader:(id)arg0 extension:(id)arg1 bundle:(id)arg2 ;
-(id)p_qualifierForUniform:(id)arg0 class:(Class)arg1 ;
-(id)shaderQualifierForUniform:(id)arg0 type:(NSInteger)arg1 ;
-(int)locationForAttribute:(id)arg0 ;
-(int)locationForUniform:(id)arg0 ;
-(void)activate;
-(void)deactivate;
-(void)dealloc;
-(void)p_setQualifiersIfNecessary;
-(void)p_updateUniformsAndAttributesFromShader;
-(void)setCGFloat:(CGFloat)arg0 forUniform:(id)arg1 ;
-(void)setColor:(struct ? )arg0 forUniform:(id)arg1 ;
-(void)setGLFloat:(float)arg0 forShaderQualifier:(id)arg1 ;
-(void)setGLFloat:(float)arg0 forUniform:(id)arg1 ;
-(void)setGLint:(int)arg0 forShaderQualifier:(id)arg1 ;
-(void)setGLint:(int)arg0 forUniform:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forShaderQualifier:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forUniform:(id)arg1 ;
-(void)setLifeSpan:(struct ? )arg0 forUniform:(id)arg1 ;
-(void)setMat3WithAffineTransform:(struct CGAffineTransform )arg0 forShaderQualifier:(id)arg1 ;
-(void)setMat3WithAffineTransform:(struct CGAffineTransform )arg0 forUniform:(id)arg1 ;
-(void)setMat4WithTransform3D:(struct CATransform3D )arg0 forShaderQualifier:(id)arg1 ;
-(void)setMat4WithTransform3D:(struct CATransform3D )arg0 forUniform:(id)arg1 ;
-(void)setPoint2D:(struct ? )arg0 forShaderQualifier:(id)arg1 ;
-(void)setPoint2D:(struct ? )arg0 forUniform:(id)arg1 ;
-(void)setPoint3D:(struct ? )arg0 forShaderQualifier:(id)arg1 ;
-(void)setPoint3D:(struct ? )arg0 forUniform:(id)arg1 ;
-(void)setPoint4D:(struct ? )arg0 forShaderQualifier:(id)arg1 ;
-(void)setPoint4D:(struct ? )arg0 forUniform:(id)arg1 ;
-(void)teardown;


@end


#endif