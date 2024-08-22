// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTETRANSITION_H
#define PKPALETTETRANSITION_H

@class NSArray, UIViewFloatAnimatableProperty;
@protocol PKPaletteTransitionDelegate;

#import <Foundation/Foundation.h>


@interface PKPaletteTransition : NSObject

@property (retain, nonatomic) NSArray *_remainingTransitionStages; // ivar: __remainingTransitionStages
@property (weak, nonatomic) NSObject<PKPaletteTransitionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expandedToCollapsedAnimatableProperty; // ivar: _expandedToCollapsedAnimatableProperty
@property (readonly, nonatomic) CGFloat expandedToCollapsedRatio;
@property (readonly, nonatomic) NSInteger initialVisualState; // ivar: _initialVisualState
@property (nonatomic, setter=_setIntermediateVisualState:) NSInteger intermediateVisualState; // ivar: _intermediateVisualState
@property (nonatomic, setter=_setPointingDirection:) NSInteger pointingDirection; // ivar: _pointingDirection
@property (retain, nonatomic) UIViewFloatAnimatableProperty *rotationAngleAnimatableProperty; // ivar: _rotationAngleAnimatableProperty
@property (nonatomic, setter=_setTargetVisualState:) NSInteger targetVisualState; // ivar: _targetVisualState
@property (readonly, nonatomic, getter=isTransitionInProgress) BOOL transitionInProgress;


-(BOOL)_canMoveToNextTransitionStage;
-(NSInteger)_currentStage;
-(id)initWithInitialVisualState:(NSInteger)arg0 ;
-(void)_handleExpandedToCollapsedAnimatablePropertyPresentationValueChanged;
-(void)_handleRotationAnimatablePropertyPresentationValueChanged;
-(void)_moveToNextTransitionStageIfReady;
-(void)paletteDidBeginResizingAnimation;
-(void)paletteDidBeginRotationAnimation;
-(void)transitionToVisualState:(NSInteger)arg0 ;


@end


#endif