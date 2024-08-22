// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUICORBVIEW_H
#define SUICORBVIEW_H

@class UIView, CAMetalLayer, CADisplayLink, MTLRenderPassDescriptor, MPSImageGaussianBlur, NSTimer;
@protocol MTLDevice, MTLCommandQueue, MTLBuffer, MTLRenderPipelineState, MTLTexture;



@interface SUICOrbView : UIView {
    CAMetalLayer *_metalLayer;
    CADisplayLink *_displayLink;
    id *_offCompletion;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLBuffer> *_dynamicUniformBuffer;
    id<MTLRenderPipelineState> *_siriChipBackfacePipeline;
    id<MTLRenderPipelineState> *_siriChipFrontfacePipeline;
    id<MTLRenderPipelineState> *_siriCompositePipeline;
    id<MTLRenderPipelineState> *_sphereMaskPipeline;
    id<MTLRenderPipelineState> *_siriAddBlitPipeline;
    id<MTLTexture> *_siriChipsTexture;
    id<MTLTexture> *_sphereMaskTexture;
    id<MTLTexture> *_siriChipsTextureMSAA;
    id<MTLTexture> *_sphereMaskTextureMSAA;
    id<MTLTexture> *_compositeTextureMSAA;
    id<MTLTexture> *_blurChipsTexture;
    id<MTLTexture> *_smoothStepTexture;
    id<MTLTexture> *_noiseTexture;
    id<MTLRenderPipelineState> *_siriShadowPipeline;
    id<MTLTexture> *_blurMaskTexture;
    MTLRenderPassDescriptor *_siriChipRenderPassDesc;
    MTLRenderPassDescriptor *_sphereMaskRenderPassDesc;
    MTLRenderPassDescriptor *_finalRenderPassDesc;
    MPSImageGaussianBlur *_mpsBlur;
    ? _mpsChipBlurOffset;
    id<MTLBuffer> *_siriChipGeom;
    int _chipNumIndexes;
    int _chipIndexBufferOffset;
    id<MTLBuffer> *_sphereGeom;
    int _sphereNumIndexes;
    int _sphereIndexBufferOffet;
    *void _uniformBufferAddress;
    ? _projectionMatrix;
    ? _sphereUniforms;
    ? _bubbleSpring;
    ? _energySpring;
    ? _volumeSpring;
    ? _chipsSpring;
    ? _specularSpring;
    ? _thinkingSpring;
    ? _speakingSpring;
    ? _glowSpring;
    ? _onSpring;
    ? _chipSpring;
    ? _setupRasterSize;
    NSInteger _renderMode;
    float _delayUntilThinking;
    float _bubbleDrawnSize;
    float _averageChipSize;
    float _maxChipSize;
    float _chipRotation;
    float _chipRandomOffset;
    float _time;
    float _sinTime;
    float _thinkRotation;
    float _rotationEnergy;
    float _frameEnergy;
    float _framerateEnergyModifier;
    float _thinkingTimeStart;
    BOOL _startingThinkingModeNow;
    BOOL _fullyThinkingModeNow;
    BOOL _drawingVeryLastFrame;
    BOOL _resetOnNextFrame;
    BOOL _reduceMotion;
    BOOL _reallocTextures;
    float _powerLevel;
    NSUInteger _framerateType;
    int _dynamicFramerate;
    int _maxPhysicsIterationsPerFrame;
    int _framesPerSecond;
    float _physicsRate;
    float _oneOverFPS;
}


@property (nonatomic) float bias; // ivar: _bias
@property (nonatomic) int currentlyShownChannel; // ivar: _currentlyShownChannel
@property (retain, nonatomic) NSTimer *invalidateTimer; // ivar: _invalidateTimer
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) int numberOfChips; // ivar: _numberOfChips
@property (nonatomic) float power; // ivar: _power
@property (nonatomic) BOOL reduceThinkingModeFramerate; // ivar: _reduceThinkingModeFramerate
@property (nonatomic) float scale; // ivar: _scale
@property (nonatomic) BOOL suppressTTSAnimations; // ivar: _suppressTTSAnimations


+(Class)layerClass;
-(float)linearPowerLevel;
-(id)_from:(id)arg0 getComputePipeline:(id)arg1 err:(*id)arg2 ;
-(id)_from:(id)arg0 getRenderPipeline:(id)arg1 err:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_choosePhysicsRate:(int)arg0 ;
-(void)_commonInitWithFrame:(struct CGRect )arg0 ;
-(void)_configurePreferredFramesPerSecond:(int)arg0 ;
-(void)_createNoiseTexture;
-(void)_createSiriChipBuffer;
-(void)_createSmoothStepTexture;
-(void)_createSphereBuffer;
-(void)_didSetRenderModeFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)_drawSiriFrame:(id)arg0 ;
-(void)_drawingVeryLastFrameLogic:(id)arg0 ;
-(void)_endReducedFramerateForPerf;
-(void)_initCommandQueue;
-(void)_initNoiseOffsets;
-(void)_initSprings;
-(void)_invalidateDisplayLink;
-(void)_loadAssets;
-(void)_loadMetalPipelines;
-(void)_loadMetalState;
-(void)_resetDisplayLinkFramerate;
-(void)_setPaused:(BOOL)arg0 ;
-(void)_setupSpring:(struct ? *)arg0 withType:(NSUInteger)arg1 initialValue:(float)arg2 ;
-(void)_startReducedFramerateForPerf;
-(void)_updateChipsSizesForOnOff;
-(void)_updateDynamicBufferState;
-(void)_updateMetalTextureRasterSize:(struct CGSize )arg0 ;
-(void)_updateRenderModeWithDelta:(float)arg0 ;
-(void)_updateSiriGraphicsState:(CGFloat)arg0 ;
-(void)_updateSiriPhysics:(float)arg0 ;
-(void)animateToOffWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)pauseAnimationAndReset;
-(void)prewarmOrb;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif