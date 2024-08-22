// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICFLAMESVIEWLEGACY_H
#define SUICFLAMESVIEWLEGACY_H

@class UIView, CADisplayLink, EAGLContext, NSMutableSet, NSMutableArray, UIScreen, UIImageView, NSString, UIColor, UIImage;
@protocol SUICFlamesViewProviding, SUICFlamesViewProvidingDelegate;


#import "SUICFlameGroup.h"
#import "SUICAudioLevelSmoother.h"

@interface SUICFlamesViewLegacy : UIView <SUICFlamesViewProviding>

 {
    CADisplayLink *_displayLink;
    EAGLContext *_eaglContext;
    EAGLContext *_previousContext;
    NSInteger _currentContextCount;
    NSMutableSet *_renderingDisabledReasons;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    int _flameProgramHandle;
    int _auraProgramHandle;
    int _vShadID;
    int _fShadID;
    unsigned int _vertexArrayObjectHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _elementArrayHandle;
    unsigned int _numVertices;
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _maxVertexCircles;
    unsigned int _auraVertexCircles;
    float _maxSubdivisionLevel;
    float _auraMinSubdivisionLevel;
    float _auraMaxSubdivisionLevel;
    NSMutableArray *_flameGroups;
    SUICFlameGroup *_currentFlameGroup;
    int _viewWidth;
    int _viewHeight;
    float _dictationUnitSize;
    UIScreen *_screen;
    UIImageView *_overlayImageView;
    CGFloat _startTime;
    CGFloat _dictationRedColor;
    CGFloat _dictationGreenColor;
    CGFloat _dictationBlueColor;
    SUICAudioLevelSmoother *_levelSmoother;
    NSInteger _fidelity;
    CGFloat _frameRateScalingFactor;
    BOOL _transitionFinished;
    BOOL _isInitialized;
    BOOL _hasCustomActiveFrame;
    BOOL _shadersAreCompiled;
    BOOL _reduceMotionEnabled;
}


@property (nonatomic) BOOL accelerateTransitions; // ivar: _accelerateTransitions
@property (nonatomic) CGRect activeFrame; // ivar: _activeFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *dictationColor; // ivar: _dictationColor
@property (weak, nonatomic) NSObject<SUICFlamesViewProvidingDelegate> *flamesDelegate; // ivar: _flamesDelegate
@property (nonatomic) BOOL flamesPaused; // ivar: _flamesPaused
@property (nonatomic) BOOL freezesAura; // ivar: _freezesAura
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalScaleFactor; // ivar: _horizontalScaleFactor
@property (readonly, nonatomic) BOOL isRenderingEnabled;
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UIImage *overlayImage; // ivar: _overlayImage
@property (nonatomic) BOOL reduceFrameRate; // ivar: _reduceFrameRate
@property (nonatomic) BOOL reduceThinkingFramerate; // ivar: _reduceThinkingFramerate
@property (nonatomic) BOOL renderInBackground; // ivar: _renderInBackground
@property (nonatomic) BOOL showAura; // ivar: _showAura
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)_supportsAdaptiveFramerate;
+(Class)layerClass;
+(id)_indexCache;
+(void)prewarmShadersForScreen:(id)arg0 activeFrame:(struct CGRect )arg1 fidelity:(NSInteger)arg2 ;
+(void)prewarmShadersForScreen:(id)arg0 initialFrame:(struct CGRect )arg1 activeFrame:(struct CGRect )arg2 fidelity:(NSInteger)arg3 prewarmInBackground:(BOOL)arg4 ;
+(void)prewarmShadersForScreen:(id)arg0 size:(struct CGSize )arg1 ;
+(void)prewarmShadersForScreen:(id)arg0 size:(struct CGSize )arg1 fidelity:(NSInteger)arg2 ;
+(void)prewarmShadersForScreen:(id)arg0 size:(struct CGSize )arg1 fidelity:(NSInteger)arg2 prewarmInBackground:(BOOL)arg3 ;
+(void)setIndexCacheSize:(NSUInteger)arg0 ;
-(BOOL)_deviceNeeds2xFlamesWithCurrentScale:(CGFloat)arg0 ;
-(BOOL)_initGLAndSetupDisplayLink:(BOOL)arg0 ;
-(BOOL)_isOriginatingProcessInBackground;
-(BOOL)_resizeFromLayer:(id)arg0 ;
-(BOOL)_setCurrentContext;
-(BOOL)_setupFramebuffer;
-(BOOL)_setupShaders;
-(BOOL)_setupVertexBuffer;
-(BOOL)inDictationMode;
-(BOOL)inSiriMode;
-(CGFloat)_currentDisplayScale;
-(NSInteger)_preferredFramesPerSecond;
-(float)_currentMicPowerLevel;
-(id)_predeterminedVertexPositionForAuraWithPolarVertex;
-(id)initWithFrame:(struct CGRect )arg0 screen:(id)arg1 fidelity:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 screenScale:(CGFloat)arg1 fidelity:(NSInteger)arg2 ;
-(int)_generateIndicesForNumCircleShapes:(int)arg0 withMaxSubdivisionLevel:(float)arg1 startingWithNumSubdivisionLevel:(float)arg2 forIndices:(**unsigned int)arg3 atStartIndex:(int)arg4 withFill:(BOOL)arg5 withCullingForAura:(BOOL)arg6 forVertices:(struct ? *)arg7 ;
-(unsigned int)_numVerticesPerCircle;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_cleanupGL;
-(void)_didFinishTransition;
-(void)_prewarmShaders;
-(void)_reduceMotionStatusChanged:(id)arg0 ;
-(void)_restoreCurrentContext;
-(void)_setPreferredFramesPerSecond;
-(void)_setValuesForFidelity:(NSInteger)arg0 ;
-(void)_setupDisplayLink;
-(void)_tearDownDisplayLink;
-(void)_updateCurveLayer:(id)arg0 ;
-(void)_updateDisplayLinkPausedState;
-(void)_updateOrthoProjection;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)fadeOutCurrentAura;
-(void)layoutSubviews;
-(void)prewarmShadersForCurrentMode;
-(void)resetAndReinitialize:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setRenderingEnabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)stopRenderingAndCleanupGL;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif