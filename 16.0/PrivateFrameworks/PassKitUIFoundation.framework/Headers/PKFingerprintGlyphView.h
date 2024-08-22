// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFINGERPRINTGLYPHVIEW_H
#define PKFINGERPRINTGLYPHVIEW_H

@class UIView, CALayer, NSArray, NSMutableArray, NSString, UIColor;
@protocol PKMicaResizableView, PKFingerprintGlyphViewDelegate;



@interface PKFingerprintGlyphView : UIView <PKMicaResizableView>

 {
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    NSUInteger _transitionIndex;
    BOOL _transitioning;
    NSInteger _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    CGFloat _lastAnimationWillFinish;
    BOOL _rotatingRing;
    NSString *_rotationAnimationKey;
}


@property (readonly, nonatomic) CALayer *contentLayer; // ivar: _contentLayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKFingerprintGlyphViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadeOnRecognized; // ivar: _fadeOnRecognized
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (copy, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(CGFloat)_minimumAnimationDurationForStateTransition;
-(CGFloat)pointScaleToMatchBoundsSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pathStateForLayer:(id)arg0 ;
-(struct CGSize )boundsSizeToMatchPointScale:(CGFloat)arg0 ;
-(void)_applyColor:(id)arg0 toShapeLayers:(id)arg1 animated:(BOOL)arg2 ;
-(void)_applyPrimaryColorAnimated:(BOOL)arg0 ;
-(void)_applySecondaryColorAnimated:(BOOL)arg0 ;
-(void)_continueHoldingStateForPathAtIndex:(NSUInteger)arg0 withTransitionIndex:(NSUInteger)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_endRotationAnimation;
-(void)_executeAfterMinimumAnimationDurationForStateTransition:(id)arg0 ;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg0 ;
-(void)_finishTransitionForIndex:(NSUInteger)arg0 ;
-(void)_performTransitionWithTransitionIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_restartRotationIfNecessary;
-(void)_setProgress:(CGFloat)arg0 withDuration:(CGFloat)arg1 forShapeLayerAtIndex:(NSUInteger)arg2 ;
-(void)_setRingState:(NSUInteger)arg0 withTransitionIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_showFingerprintWithTransitionIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_startRecognitionHoldingStateWithTransitionIndex:(NSUInteger)arg0 ;
-(void)_startRotationAnimation;
-(void)_updateLastAnimationTimeWithAnimationOfDuration:(CGFloat)arg0 ;
-(void)_updateRotationAnimationsIfNecessary;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setPathState:(id)arg0 forLayer:(id)arg1 ;
-(void)setProgress:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(void)setRecognizedIfNecessaryWithCompletion:(id)arg0 ;


@end


#endif