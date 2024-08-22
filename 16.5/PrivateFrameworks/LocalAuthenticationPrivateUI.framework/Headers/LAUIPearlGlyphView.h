// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAUIPEARLGLYPHVIEW_H
#define LAUIPEARLGLYPHVIEW_H

@class UIView, CALayer, CAShapeLayer, NSString, UIColor;
@protocol LAUIMetalRenderLoopDelegate, LAUIPearlGlyphViewDelegate;


#import "LAUIPearlGlyphViewStaticResources.h"
#import "LAUICheckmarkLayer.h"
#import "LAUIMetalRenderLoop.h"

@interface LAUIPearlGlyphView : UIView <LAUIMetalRenderLoopDelegate>

 {
    LAUIPearlGlyphViewStaticResources *_sharedResources;
    configuration_t _configuration;
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
    unique_ptr<LAUI_uniform_cubic_b_spline_renderer::renderer_t, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> _renderer;
    unique_ptr<(anonymous namespace)::face_id_animator_t, std::default_delete<(anonymous namespace)::face_id_animator_t>> _animator;
    BOOL _modelDirty;
    BOOL _panning;
    CGFloat _lastUpdateTime;
    BOOL _animating;
    overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))> _idleColor;
    ? _defaultColor;
    ? _oscillatingColor;
    ? _successColor;
    overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))> _finishedColor;
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
@property (readonly, nonatomic) NSUInteger faceVisibility; // ivar: _faceVisibility
@property (nonatomic) BOOL feedbackEnabled; // ivar: _feedbackEnabled
@property (readonly, nonatomic) UIColor *finishedColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideFace;
@property (readonly, nonatomic) UIColor *idleColor;
@property (nonatomic) BOOL inApplicationContext;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL shakeEnabled; // ivar: _shakeEnabled
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;


+(id)sharedStaticResources;
+(void)invokeSuccessFeedback;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)purgeBuffers;
-(void)reduceMotionDidChange:(id)arg0 ;
-(void)reduceTransparencyDidChange:(id)arg0 ;
-(void)renderLoop:(id)arg0 drawAtTime:(CGFloat)arg1 ;
-(void)renderLoop:(id)arg0 drawableSizeDidChange:(struct CGSize )arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif