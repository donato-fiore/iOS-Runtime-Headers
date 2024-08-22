// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKKALEIDOSCOPEQUAD_H
#define NTKKALEIDOSCOPEQUAD_H

@class CLKUIQuad, CLKUITexture;
@protocol MTLBuffer, MTLRenderPipelineState;


#import "NTKKaleidoscopeResourceManager.h"

@interface NTKKaleidoscopeQuad : CLKUIQuad {
    NTKKaleidoscopeResourceManager *_loader;
    id<MTLBuffer> *_geomBuffer;
    id<MTLRenderPipelineState> *_mtlPipelineOpaque;
    id<MTLRenderPipelineState> *_mtlPipelineBlend;
    ? _aspect;
    ? _sampleCenter;
    ? _sampleRadius;
}


@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float dialRadius; // ivar: _dialRadius
@property (retain, nonatomic) CLKUITexture *primaryChromaTexture; // ivar: _primaryChromaTexture
@property (retain, nonatomic) CLKUITexture *primaryLumaTexture; // ivar: _primaryLumaTexture
@property (nonatomic) float rotation; // ivar: _rotation
@property ? sampleCenter;
@property ? sampleRadius;
@property (retain, nonatomic) CLKUITexture *secondaryTexture; // ivar: _secondaryTexture
@property (readonly, nonatomic) NSUInteger shaderType; // ivar: _shaderType


+(id)quadWithShaderType:(NSUInteger)arg0 ;
-(BOOL)prepareForTime:(CGFloat)arg0 ;
-(id)initWithShaderType:(NSUInteger)arg0 ;
-(void)renderForDisplayWithEncoder:(id)arg0 ;


@end


#endif