// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERDRAGVIEWCONTROLLER_H
#define CKBROWSERDRAGVIEWCONTROLLER_H

@class UIViewController, UIImage, NSString, CADisplayLink, NSArray, UIView, CALayer, UILongPressGestureRecognizer, UIPanGestureRecognizer, NSMutableDictionary;
@protocol UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKAnimationTimerObserver, CKBrowserDragViewControllerDelegate;


#import "CKAnimatedImage.h"
#import "CKElasticFunction.h"

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKAnimationTimerObserver>



@property (readonly, nonatomic) CGFloat absoluteScale;
@property (nonatomic) CGPoint anchorOffset; // ivar: _anchorOffset
@property (nonatomic) BOOL canPeel; // ivar: _canPeel
@property (nonatomic) BOOL canRotate; // ivar: _canRotate
@property (nonatomic) BOOL canScale; // ivar: _canScale
@property (retain, nonatomic) UIImage *currentFrameImage; // ivar: _currentFrameImage
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserDragViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) CKAnimatedImage *dragImage; // ivar: _dragImage
@property (retain, nonatomic) NSArray *dragImageFrames; // ivar: _dragImageFrames
@property (retain, nonatomic) UIView *dragView; // ivar: _dragView
@property (readonly, nonatomic) CGPoint dragViewCenter;
@property (readonly, nonatomic) CGFloat dragViewRotation;
@property (nonatomic) CGFloat dragViewScale; // ivar: _dragViewScale
@property (retain, nonatomic) CALayer *dropShadowLayer; // ivar: _dropShadowLayer
@property (nonatomic) CGPoint dropShadowLayerStartPosition; // ivar: _dropShadowLayerStartPosition
@property (retain, nonatomic) CKElasticFunction *elasticFunctionPositionX; // ivar: _elasticFunctionPositionX
@property (retain, nonatomic) CKElasticFunction *elasticFunctionPositionY; // ivar: _elasticFunctionPositionY
@property (retain, nonatomic) CKElasticFunction *elasticFunctionRotation; // ivar: _elasticFunctionRotation
@property (retain, nonatomic) CKElasticFunction *elasticFunctionScaleX; // ivar: _elasticFunctionScaleX
@property (retain, nonatomic) CKElasticFunction *elasticFunctionScaleY; // ivar: _elasticFunctionScaleY
@property (nonatomic) CGFloat elasticLastTime; // ivar: _elasticLastTime
@property (nonatomic) CGFloat elasticRemainingTime; // ivar: _elasticRemainingTime
@property (nonatomic) CGFloat elasticRotationAngle; // ivar: _elasticRotationAngle
@property (nonatomic) CGFloat elasticScaleX; // ivar: _elasticScaleX
@property (nonatomic) CGFloat elasticScaleY; // ivar: _elasticScaleY
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (nonatomic) BOOL hasMovedToWindow; // ivar: _hasMovedToWindow
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialDragStartPosition; // ivar: _initialDragStartPosition
@property (nonatomic) CGFloat initialScale; // ivar: _initialScale
@property (nonatomic) CGSize initialSize; // ivar: _initialSize
@property (retain, nonatomic) CALayer *meshLayer; // ivar: _meshLayer
@property (nonatomic) CGPoint meshLayerStartPosition; // ivar: _meshLayerStartPosition
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) CALayer *peelImageLayer; // ivar: _peelImageLayer
@property (retain, nonatomic) CALayer *peelLayer; // ivar: _peelLayer
@property (nonatomic) CGPoint peelLayerStartPosition; // ivar: _peelLayerStartPosition
@property (retain, nonatomic) NSMutableDictionary *peelMaskImageCache; // ivar: _peelMaskImageCache
@property (retain, nonatomic) CALayer *peelMaskLayer; // ivar: _peelMaskLayer
@property (retain, nonatomic) CALayer *perspectiveLayer; // ivar: _perspectiveLayer
@property (retain, nonatomic) UIView *plusImageView; // ivar: _plusImageView
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic) CGPoint previousPanLocationInView; // ivar: _previousPanLocationInView
@property (nonatomic) CGSize rasterizedImageSize; // ivar: _rasterizedImageSize
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (nonatomic, getter=isScaledDown) BOOL scaledDown; // ivar: _scaledDown
@property (retain, nonatomic) CALayer *shadowLayer; // ivar: _shadowLayer
@property (nonatomic) CGPoint shadowLayerStartPosition; // ivar: _shadowLayerStartPosition
@property (retain, nonatomic) CALayer *shineLayer; // ivar: _shineLayer
@property (nonatomic) CGPoint shineLayerStartPosition; // ivar: _shineLayerStartPosition
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *whiteBackground; // ivar: _whiteBackground


+(BOOL)supportsForceTouch;
+(id)meshTransform;
+(id)springAnimationWithKeyPath:(id)arg0 speed:(float)arg1 ;
-(BOOL)_orbScalingEnabled;
-(id)initWithDragImage:(id)arg0 inSourceRect:(struct CGRect )arg1 withSourcePoint:(struct CGPoint )arg2 withGestureRecognizer:(id)arg3 ;
-(id)peelMaskImageFromImage:(id)arg0 ;
-(id)scaleImage:(id)arg0 toSize:(struct CGSize )arg1 ;
-(void)_attachElasticEffectsForLocation:(struct CGPoint )arg0 ;
-(void)_detachElasticEffects;
-(void)_displayLinkCallback:(id)arg0 ;
-(void)_updateElasticEffectsForLocation:(struct CGPoint )arg0 ;
-(void)animateBackToSourceCompletionBlock:(id)arg0 ;
-(void)animatePeelWithCompletion:(id)arg0 ;
-(void)animatePlacementAtPoint:(struct CGPoint )arg0 shouldShrink:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)animateScaleDown;
-(void)animationTimerFired:(NSUInteger)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applyTransforms;
-(void)commitDrag;
-(void)dealloc;
-(void)gestureRecognized:(id)arg0 ;
-(void)manuallyInitializeDragAtPoint:(struct CGPoint )arg0 ;
-(void)manuallyUpdateDragPositionToPoint:(struct CGPoint )arg0 ;
-(void)panGestureRecognized:(id)arg0 ;
-(void)reversePeelAnimationToPoint:(struct CGPoint )arg0 forPlacement:(BOOL)arg1 shouldShrink:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)setUpPeelLayers;
-(void)updateAnimationTimerObserving;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif