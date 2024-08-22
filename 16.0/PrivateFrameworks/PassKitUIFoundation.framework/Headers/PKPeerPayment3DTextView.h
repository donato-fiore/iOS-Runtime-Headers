// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENT3DTEXTVIEW_H
#define PKPEERPAYMENT3DTEXTVIEW_H

@class UIView, SCNView, NSMutableArray, NSString;
@protocol SCNSceneRendererDelegate;


#import "PKPeerPayment3DScene.h"
#import "PKPeerPayment3DStore.h"

@interface PKPeerPayment3DTextView : UIView <SCNSceneRendererDelegate>

 {
    SCNView *_sceneView;
    PKPeerPayment3DScene *_scene;
    CGFloat _sceneWidthUnits;
    CGFloat _sceneHeightUnits;
    NSMutableArray *_performHandlers;
    CGFloat _dynamicRollPitchMix;
    CGFloat _startAnimationTime;
    CGFloat _animationDuration;
    CGFloat _lastRenderTime;
    BOOL _liveMotionEnabled;
    BOOL _willAnimate;
    BOOL _snapshotRequested;
    BOOL _usedForSnapshotting;
    NSUInteger _framesFullyRendered;
    PKPeerPayment3DStore *_3DStore;
    BOOL _layoutRequested;
    NSMutableArray *_charactersToDraw;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger renderStyle; // ivar: _renderStyle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(id)supportedCharacterSet;
-(id)_fakeAnimationRollPitchWithElapsedTime;
-(id)generatedSnapshot;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 renderStyle:(NSUInteger)arg1 usedForSnapshotting:(BOOL)arg2 ;
-(void)dealloc;
-(void)didBecomeActive;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)layoutText;
-(void)loadCharactersAndLayout;
-(void)performPostRender:(id)arg0 ;
-(void)renderer:(id)arg0 didRenderScene:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)renderer:(id)arg0 updateAtTime:(CGFloat)arg1 ;
-(void)setMotionEffectEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateSceneUnits;
-(void)willResignActive;


@end


#endif