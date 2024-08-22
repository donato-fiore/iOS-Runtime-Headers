// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBROWSERDRAGSTICKERVIEW_H
#define CKBROWSERDRAGSTICKERVIEW_H

@class UIView, UIImage, NSString, CADisplayLink, NSArray, CALayer, NSMutableDictionary;
@protocol CKAnimationTimerObserver;


#import "CKElasticFunction.h"

@interface CKBrowserDragStickerView : UIView <CKAnimationTimerObserver>



@property (nonatomic) CGPoint anchorOffset; // ivar: _anchorOffset
@property (nonatomic) BOOL canPeel; // ivar: _canPeel
@property (nonatomic) BOOL canRotate; // ivar: _canRotate
@property (retain, nonatomic) UIImage *currentFrameImage; // ivar: _currentFrameImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) NSArray *dragImageFrames; // ivar: _dragImageFrames
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
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialDragStartPosition; // ivar: _initialDragStartPosition
@property (nonatomic) CGFloat initialScale; // ivar: _initialScale
@property (nonatomic) CGSize initialSize; // ivar: _initialSize
@property (retain, nonatomic) CALayer *meshLayer; // ivar: _meshLayer
@property (nonatomic) CGPoint meshLayerStartPosition; // ivar: _meshLayerStartPosition
@property (retain, nonatomic) CALayer *peelImageLayer; // ivar: _peelImageLayer
@property (retain, nonatomic) CALayer *peelLayer; // ivar: _peelLayer
@property (nonatomic) CGPoint peelLayerStartPosition; // ivar: _peelLayerStartPosition
@property (retain, nonatomic) NSMutableDictionary *peelMaskImageCache; // ivar: _peelMaskImageCache
@property (retain, nonatomic) CALayer *peelMaskLayer; // ivar: _peelMaskLayer
@property (retain, nonatomic) CALayer *perspectiveLayer; // ivar: _perspectiveLayer
@property (retain, nonatomic) UIView *plusImageView; // ivar: _plusImageView
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
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


+(id)meshTransform;
+(id)springAnimationWithKeyPath:(id)arg0 speed:(float)arg1 ;
-(CGFloat)dragViewRotation;
-(id)initWithSourceRect:(struct CGRect )arg0 dragImage:(id)arg1 ;
-(id)peelMaskImageFromImage:(id)arg0 ;
-(id)scaleImage:(id)arg0 toSize:(struct CGSize )arg1 ;
-(struct CGPoint )dragViewCenter;
-(void)_displayLinkCallback:(id)arg0 ;
-(void)animatePeelWithCompletion:(id)arg0 ;
-(void)animateScaleDown;
-(void)animationTimerFired:(NSUInteger)arg0 ;
-(void)applyTransforms;
-(void)attachElasticEffectsForLocation:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)detachElasticEffects;
-(void)reversePeelAnimationToPoint:(struct CGPoint )arg0 forPlacement:(BOOL)arg1 shouldShrink:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)setUpPeelLayers;
-(void)updateAnimationTimerObserving;
-(void)updateElasticEffectsForLocation:(struct CGPoint )arg0 ;


@end


#endif