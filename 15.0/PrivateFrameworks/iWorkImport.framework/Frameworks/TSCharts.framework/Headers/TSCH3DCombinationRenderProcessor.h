// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCOMBINATIONRENDERPROCESSOR_H
#define TSCH3DCOMBINATIONRENDERPROCESSOR_H

@class NSIndexSet, NSMutableArray;


#import "TSCH3DRetargetRenderProcessor.h"
#import "TSCH3DShaderEffects.h"
#import "TSCH3DShaderEffectsStates.h"

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSIndexSet *_enabled;
    StateStack<glm::detail::tmat4x4<float>, 8> _transformStack;
    tmat4x4<float> _projection;
    StateStack<TSCH3D::ObjectState, 6> _objectStateStack;
    StateStack<TSCH3D::RenderState, 10> _renderStateStack;
    TSCH3DShaderEffects *_effects;
}


@property (readonly, nonatomic) TSCH3DShaderEffectsStates *currentEffectsStates;
@property (retain, nonatomic) NSMutableArray *effectsStatesStack; // ivar: _effectsStatesStack
@property (readonly, nonatomic) BOOL projectionChanged; // ivar: _projectionChanged
@property (readonly, nonatomic) BOOL transformChanged; // ivar: _transformChanged


+(id)processorWithOriginal:(id)arg0 enableTypes:(id)arg1 ;
-(*void)currentTransform;
-(*void)objectStateStack;
-(*void)projectionTransform;
-(BOOL)matrixEnabled;
-(BOOL)objectStateEnabled;
-(BOOL)renderStateEnabled;
-(BOOL)shaderEnabled;
-(id)effects;
-(id)effectsStates;
-(id)initWithOriginal:(id)arg0 ;
-(id)initWithOriginal:(id)arg0 enableTypes:(id)arg1 ;
-(struct RenderState )renderState;
-(void)copyProjectionInto:(*void)arg0 ;
-(void)copyTransformInto:(*void)arg0 ;
-(void)multiply:(*void)arg0 ;
-(void)popMatrix;
-(void)popRenderState;
-(void)popState;
-(void)projection:(*void)arg0 ;
-(void)pushMatrix;
-(void)pushRenderState;
-(void)pushState;
-(void)replace:(*void)arg0 ;
-(void)resetBuffers;
-(void)resetTransformChangeFlags;
-(void)scale:(*void)arg0 ;
-(void)setRenderState:(*void)arg0 ;
-(void)translate:(*void)arg0 ;


@end


#endif