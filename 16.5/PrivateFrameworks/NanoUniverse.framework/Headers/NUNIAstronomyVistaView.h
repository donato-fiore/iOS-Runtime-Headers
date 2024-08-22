// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNIASTRONOMYVISTAVIEW_H
#define NUNIASTRONOMYVISTAVIEW_H

@class UIView, CLKUIQuadView, CALayer, NSMutableSet, NSString, CLKDevice, NSArray;
@protocol NUNIAnimationObserver, CLKUIQuadViewDelegate, NUNIAstronomyVistaViewObserver;


#import "NUNIQuad.h"
#import "NUNIScene.h"
#import "NUNIRenderer.h"
#import "NUNIAstronomyVistaConfiguration.h"

@interface NUNIAstronomyVistaView : UIView <NUNIAnimationObserver, CLKUIQuadViewDelegate>

 {
    CLKUIQuadView *_quadView0;
    NUNIQuad *_quad;
    NUNIScene *_scene;
    NUNIRenderer *_renderer;
    CALayer *_contentMaskLayer;
    NSMutableSet *_activeContentsAnimations;
    NSUInteger _vista;
    BOOL _isSupplemental;
    BOOL _isDisplayOn;
    BOOL _isAnimating;
    NUNIAstronomyVistaConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NUNIAstronomyVistaViewObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSArray *quadViews; // ivar: _quadViews
@property (retain, nonatomic) NUNIScene *scene;
@property (readonly) Class superclass;
@property (nonatomic) float supplementalBottomInset; // ivar: _supplementalBottomInset
@property (nonatomic) float supplementalHorizontalInset; // ivar: _supplementalHorizontalInset
@property (nonatomic) float supplementalSpheroidSize; // ivar: _supplementalSpheroidSize
@property (nonatomic) float supplementalTopInset; // ivar: _supplementalTopInset


-(NSUInteger)vista;
-(float)computeDimming;
-(id)_earthLunaPanAnimationArrayFromSceneDescription:(id)arg0 toSceneDescription:(id)arg1 ;
-(id)_mtlQuadView;
-(id)_panAnimationArrayFromSceneDescription:(id)arg0 toSceneDescription:(id)arg1 ;
-(id)_zoomAnimationArrayFromSceneDescription:(id)arg0 toSceneDescription:(id)arg1 ;
-(id)contentMaskLayer;
-(id)generateAnimationArrayFromSceneDescription:(id)arg0 toSceneDescription:(id)arg1 transitionStyle:(NSUInteger)arg2 ;
// -(id)generateAnimationArrayFromVista:(NSUInteger)arg0 fromSceneBlock:(id)arg1 toVista:(unk)arg2 toSceneBlock:(NSUInteger)arg3 transitionStyle:(id)arg4  ;
-(id)generateAnimationArrayFromVista:(NSUInteger)arg0 toVista:(NSUInteger)arg1 transitionStyle:(NSUInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(id)rotatable:(NSUInteger)arg0 ;
-(id)snapshotImage;
-(void)_setVista:(NSUInteger)arg0 scene:(id)arg1 ;
-(void)_startAnimation;
-(void)_stopAnimation;
-(void)_updateAnimation;
-(void)dealloc;
-(void)disableCloudDataFetch:(BOOL)arg0 ;
-(void)discardContents;
-(void)layoutSubviews;
-(void)purgeUnused;
-(void)quadViewWillDisplay:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)removeBackBuffers;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setAPLFilterAmount:(CGFloat)arg0 ;
-(void)setCacheDirectory:(id)arg0 ;
-(void)setMinFrameInterval:(int)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setTritiumBrightness:(CGFloat)arg0 ;
-(void)setVista:(NSUInteger)arg0 ;
-(void)showSupplemental:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)startAnimation;
-(void)stopAnimation;
-(void)universeAnimationFinished:(id)arg0 ;
-(void)updateSunLocationAnimated:(BOOL)arg0 ;


@end


#endif