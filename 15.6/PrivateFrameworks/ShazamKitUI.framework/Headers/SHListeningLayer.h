// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHLISTENINGLAYER_H
#define SHLISTENINGLAYER_H

@class CALayer;
@protocol SHShazamButtonViewDelegate, SHListeningLayerDelegate;


#import "SHTaggingViewAutoShadowLayer.h"
#import "SHInnerCircleMaskLayer.h"
#import "SHTaggingViewInnerCirclesLayer.h"
#import "SHTaggingViewOuterCirclesLayer.h"
#import "SHShazamButtonLayer.h"

@interface SHListeningLayer : CALayer <SHShazamButtonViewDelegate>



@property (retain, nonatomic) CALayer *autoShadowContainerLayer; // ivar: _autoShadowContainerLayer
@property (retain, nonatomic) SHTaggingViewAutoShadowLayer *autoShadowLayer; // ivar: _autoShadowLayer
@property (retain, nonatomic) SHInnerCircleMaskLayer *autoShadowToShazamButtonMaskLayer; // ivar: _autoShadowToShazamButtonMaskLayer
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToAutoShadowMaskLayer; // ivar: _innerCircleToAutoShadowMaskLayer
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToShazamButtonMaskLayer; // ivar: _innerCircleToShazamButtonMaskLayer
@property (retain, nonatomic) CALayer *innerCirclesContainerLayer; // ivar: _innerCirclesContainerLayer
@property (retain, nonatomic) SHTaggingViewInnerCirclesLayer *innerCirclesLayer; // ivar: _innerCirclesLayer
@property (retain, nonatomic) CALayer *innerCirclesSecondaryContainerLayer; // ivar: _innerCirclesSecondaryContainerLayer
@property (retain, nonatomic) SHTaggingViewOuterCirclesLayer *outerCirclesLayer; // ivar: _outerCirclesLayer
@property (retain, nonatomic) SHShazamButtonLayer *shazamButtonLayer; // ivar: _shazamButtonLayer
@property (nonatomic) NSInteger state; // ivar: _state
@property (weak, nonatomic) NSObject<SHListeningLayerDelegate> *viewDelegate; // ivar: _viewDelegate


-(id)init;
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
-(void)startAutoTaggingAnimation;
-(void)startIdleAnimation;
-(void)startManualTaggingAnimation;
-(void)startPassiveListeningAnimation;
-(void)stopListeningAnimations;


@end


#endif