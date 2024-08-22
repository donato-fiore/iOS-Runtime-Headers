// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHLISTENINGLAYER_H
#define SHLISTENINGLAYER_H

@class CALayer;
@protocol SHShazamButtonViewDelegate, SHListeningLayerDelegate;


#import "SHListeningAutoShadowLayer.h"
#import "SHInnerCircleMaskLayer.h"
#import "SHListeningInnerCirclesLayer.h"
#import "SHListeningOuterCirclesLayer.h"
#import "SHPalette.h"
#import "SHShazamButtonLayer.h"

@interface SHListeningLayer : CALayer <SHShazamButtonViewDelegate>



@property (retain, nonatomic) CALayer *autoShadowContainerLayer; // ivar: _autoShadowContainerLayer
@property (retain, nonatomic) SHListeningAutoShadowLayer *autoShadowLayer; // ivar: _autoShadowLayer
@property (retain, nonatomic) SHInnerCircleMaskLayer *autoShadowToShazamButtonMaskLayer; // ivar: _autoShadowToShazamButtonMaskLayer
@property (nonatomic) CGFloat bass; // ivar: _bass
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToAutoShadowMaskLayer; // ivar: _innerCircleToAutoShadowMaskLayer
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToShazamButtonMaskLayer; // ivar: _innerCircleToShazamButtonMaskLayer
@property (retain, nonatomic) CALayer *innerCirclesContainerLayer; // ivar: _innerCirclesContainerLayer
@property (retain, nonatomic) SHListeningInnerCirclesLayer *innerCirclesLayer; // ivar: _innerCirclesLayer
@property (retain, nonatomic) CALayer *innerCirclesSecondaryContainerLayer; // ivar: _innerCirclesSecondaryContainerLayer
@property (retain, nonatomic) SHListeningOuterCirclesLayer *outerCirclesLayer; // ivar: _outerCirclesLayer
@property (readonly, nonatomic) SHPalette *palette; // ivar: _palette
@property (retain, nonatomic) SHShazamButtonLayer *shazamButtonLayer; // ivar: _shazamButtonLayer
@property (nonatomic) BOOL shouldPerformIntroAnimation; // ivar: _shouldPerformIntroAnimation
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) CGFloat treble; // ivar: _treble
@property (weak, nonatomic) NSObject<SHListeningLayerDelegate> *viewDelegate; // ivar: _viewDelegate


-(id)init;
-(id)initWithIntroAnimation:(BOOL)arg0 useCustomCompatibleBackground:(BOOL)arg1 ;
-(void)addAutoAnimationInitialShazamButtonPulse;
-(void)addAutoShadowLayer;
-(void)addAutoShadowToShazamButtonMaskLayer;
-(void)addInnerCircleToAutoShadowMaskLayer;
-(void)addInnerCirclesLayer;
-(void)addInnerCirclesToShazamButtonMaskLayer;
-(void)addOuterCirclesLayer;
-(void)addTouchDownAnimation;
-(void)animateToIdleStateWithCompletion:(id)arg0 ;
-(void)buildView;
-(void)buttonDidFinishDrawingShazamShape;
-(void)buttonWillFinishDrawingShazamShape;
-(void)centerLayer:(id)arg0 inSuperLayer:(id)arg1 withRelativeSize:(CGFloat)arg2 ;
-(void)layoutSublayers;
-(void)processBass:(CGFloat)arg0 treble:(CGFloat)arg1 ;
-(void)processBassForInnerCircle:(CGFloat)arg0 ;
-(void)processBassForShazamButton:(CGFloat)arg0 ;
-(void)processTrebleForOuterCircles:(CGFloat)arg0 ;
-(void)removeAnimationLayers;
-(void)startActiveListeningAnimation;
-(void)startIdleAnimation;
-(void)startPassiveListeningAnimation;
-(void)stopAllAnimations;
-(void)stopAllAnimationsWithCompletionHandler:(id)arg0 ;
-(void)stopListeningAnimations;


@end


#endif