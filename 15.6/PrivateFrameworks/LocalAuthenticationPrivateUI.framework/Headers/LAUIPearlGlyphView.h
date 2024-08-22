// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUIPEARLGLYPHVIEW_H
#define LAUIPEARLGLYPHVIEW_H

@class UIView, CALayer, CAShapeLayer, NSString, UIColor;
@protocol LAUIMetalRenderLoopDelegate, LAUIPearlGlyphViewDelegate;


#import "LAUIPearlGlyphViewStaticResources.h"
#import "LAUICheckmarkLayer.h"
#import "LAUIMetalRenderLoop.h"
#import "LAUICubicBSplineRenderer.h"

@interface LAUIPearlGlyphView : UIView <LAUIMetalRenderLoopDelegate>

 {
    LAUIPearlGlyphViewStaticResources *_sharedResources;
    CGFloat _maximumFramerate;
    CGFloat _scale;
    LAUICheckmarkLayer *_checkmarkLayer;
    BOOL _delegateRespondsToWillRender;
    UIView *_containerView;
    LAUIMetalRenderLoop *_renderLoop;
    CALayer *_layer;
    BOOL _invalidated;
    BOOL _rendererPaused;
    BOOL _inWindow;
    NSUInteger _externalAnimationCount;
    CGFloat _overdrawRatio;
    CGSize _boundsSize;
    CGSize _drawableSize;
    BOOL _contentLayerNeedsMaskUpdate;
    CAShapeLayer *_contentLayerMask;
    LAUICubicBSplineRenderer *_renderer;
    BOOL _modelDirty;
    BOOL _panning;
    CGFloat _lastUpdateTime;
    BOOL _animating;
    NSUInteger _cornerID;
    unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>>> _cornerStates;
    set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> _duplicateCornerIdentifiers;
    ? _ringPoint;
    NSUInteger _eyeID;
    NSUInteger _noseID;
    NSUInteger _mouthID;
    unordered_map<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>>> _faceStates;
    double4x4 _cameraTransform;
    map<unsigned long, std::set<unsigned long>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::set<unsigned long>>>> _rendererIdentifiers;
    global_state _normalRenderState;
    global_state _blurredRenderState;
    ? _idleColor;
    ? _defaultColor;
    ? _oscillatingColor;
    ? _successColor;
    ? _processingColor;
    ? _finishedColor;
    BOOL _finishedColorOverridden;
    BOOL _reduceBlur;
    NSInteger _priorState;
    BOOL _changingState;
    BOOL _stateChangeAnimated;
    NSUInteger _stateChangeCounter;
    vector<void (^)(bool), std::allocator<void (^)(bool)>> _completionHandlers;
    *CGColorSpace _colorSpace;
}


@property (readonly, nonatomic) CALayer *contentLayer; // ivar: _contentLayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LAUIPearlGlyphViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL feedbackEnabled; // ivar: _feedbackEnabled
@property (readonly, nonatomic) UIColor *finishedColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideFace; // ivar: _hideFace
@property (nonatomic) BOOL inApplicationContext;
@property (nonatomic) ? modelTransform;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic, getter=isWireframeEnabled) BOOL wireframeEnabled;


+(id)collectPipelineDescriptors;
+(id)sharedStaticResources;
+(void)invokeSuccessFeedback;
-(id)_extractColorVectorFromColor;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_applyBlurRadius;
-(void)_applyCheckmarkColor;
-(void)_applyStateAnimated:(BOOL)arg0 ;
-(void)_applyStyle;
-(void)_createStates;
-(void)_executeCompletionHandlers:(BOOL)arg0 ;
-(void)_updateReduceBlurState;
-(void)_updateRendererPaused:(BOOL)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)beginExternalAnimation;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)endExternalAnimation;
-(void)invalidate;
-(void)layoutSubviews;
-(void)purgeBuffers;
-(void)reduceMotionDidChange:(id)arg0 ;
-(void)reduceTransparencyDidChange:(id)arg0 ;
-(void)renderLoop:(id)arg0 drawAtTime:(CGFloat)arg1 ;
-(void)renderLoop:(id)arg0 drawableSizeDidChange:(struct CGSize )arg1 ;


@end


#endif