// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DFRAMEBUFFERCOPYPIPELINE_H
#define TSCH3DFRAMEBUFFERCOPYPIPELINE_H

@class NSArray;


#import "TSCH3DFramebufferTransformPipeline.h"
#import "TSCH3DResource.h"

@interface TSCH3DFramebufferCopyPipeline : TSCH3DFramebufferTransformPipeline {
    RenderState _renderState;
}


@property (copy, nonatomic) NSArray *effects; // ivar: _effects
@property ? renderState;
@property (nonatomic) box<glm::detail::tvec2<int>> targetViewport; // ivar: _targetViewport
@property (retain, nonatomic) TSCH3DResource *texcoords; // ivar: _texcoords
@property (nonatomic) tmat4x4<float> transform; // ivar: _transform
@property (copy, nonatomic) id *updateShaderEffectsStatesBlock; // ivar: _updateShaderEffectsStatesBlock
@property (retain, nonatomic) TSCH3DResource *vertices; // ivar: _vertices
@property (nonatomic) tvec4<float> wipeColor; // ivar: _wipeColor
@property (nonatomic) BOOL wipeTarget; // ivar: _wipeTarget


-(id)initWithProcessor:(id)arg0 session:(id)arg1 ;


@end


#endif