// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTARMASKRENDERER_H
#define AVTARMASKRENDERER_H

@class ARFrame, ARMatteGenerator, MTLRenderPassDescriptor, SCNTechnique;
@protocol SCNTechniqueSupport><SCNSceneRenderer, MTLLibrary, MTLTexture, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface AVTARMaskRenderer : NSObject {
    id<SCNTechniqueSupport><SCNSceneRenderer> *_owner;
    BOOL _ownerIsView;
    BOOL _clearWithCamera;
    NSUInteger _antialiasingMode;
    BOOL _writeID;
    BOOL _isFirstFrame;
    BOOL _debugMode;
    CGSize _renderSize;
    NSUInteger _pipelineKind;
    float _headZ;
    ARFrame *_arFrame;
    ARMatteGenerator *_matteGenerator;
    BOOL _depthDataIsMirrored;
    NSInteger _interfaceOrientation;
    id<MTLLibrary> *_library;
    NSUInteger _capturedDataWidth;
    NSUInteger _capturedDataHeight;
    id<MTLTexture> *_lastCapturedDepth;
    id<MTLTexture>" _rawMaskTexture;
    id<MTLTexture> *_tmpMaskBlurTexture;
    id<MTLRenderPipelineState> *_dbgCamDepthPipeline;
    id<MTLRenderPipelineState> *_maskPipeline;
    id<MTLRenderPipelineState> *_maskPipelineBlurXHigh;
    id<MTLRenderPipelineState> *_maskPipelineBlurYHigh;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    *__CVMetalTextureCache _textureCache;
    SCNTechnique *_technique;
    id *_techniqueDidChangeHandler;
}


@property (retain) NSObject<MTLTexture> *capturedDepth;
@property (nonatomic) float depthSmoothingFactor; // ivar: _depthSmoothingFactor
@property (nonatomic) BOOL flipDepth; // ivar: _flipDepth


-(id)init;
-(id)initWithOwner:(id)arg0 techniqueDidChangeHandler:(id)arg1 ;
-(void)dealloc;
-(void)reloadDepthShaders;
-(void)reloadTechnique;
-(void)render:(id)arg0 ;
-(void)setClearWithCamera:(BOOL)arg0 antialiasingMode:(NSUInteger)arg1 ;
-(void)setup:(struct CGSize )arg0 context:(id)arg1 colorPixelFormat:(NSUInteger)arg2 ;
-(void)updateMaskParametersWithNeckPivotNode:(id)arg0 ;
-(void)updateWithARFrame:(id)arg0 fallBackDepthData:(id)arg1 captureOrientation:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 mirroredDepthData:(BOOL)arg4 ;
-(void)updateWithDepthTexture:(id)arg0 captureOrientation:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 mirroredDepthData:(BOOL)arg3 ;


@end


#endif