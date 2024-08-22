// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBREVERSIBLELAYERPROPERTYANIMATOR_H
#define SBREVERSIBLELAYERPROPERTYANIMATOR_H

@class BSAnimationSettings, NSString, CALayer, NSMutableArray;
@protocol CAAnimationDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBReversibleLayerPropertyAnimator : NSObject <CAAnimationDelegate, BSInvalidatable>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) BSAnimationSettings *currentAnimationSettings; // ivar: _currentAnimationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *forwardAnimationKey; // ivar: _forwardAnimationKey
@property (copy, nonatomic) NSString *forwardOffsetAnimationKey; // ivar: _forwardOffsetAnimationKey
@property (readonly, nonatomic, getter=isGoingForward) BOOL goingForward;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat initialValue; // ivar: _initialValue
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (nonatomic) NSUInteger outstandingCAAnimationCompletionCount; // ivar: _outstandingCAAnimationCompletionCount
@property (retain, nonatomic) NSMutableArray *reversalAnimationKeys; // ivar: _reversalAnimationKeys
@property (nonatomic) NSUInteger reversalCount; // ivar: _reversalCount
@property (readonly, nonatomic, getter=hasReversed) BOOL reversed;
@property (nonatomic, getter=hasReversedWithNewSettings) BOOL reversedWithNewSettings; // ivar: _reversedWithNewSettings
@property (nonatomic, getter=hasStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat targetValue; // ivar: _targetValue


-(CGFloat)_inputPercentCompleteForAnimation:(id)arg0 outputPercentComplete:(CGFloat)arg1 precision:(CGFloat)arg2 ;
-(CGFloat)_outputPercentCompleteForAnimation:(id)arg0 inputPercentComplete:(CGFloat)arg1 ;
-(CGFloat)_percentCompleteForAnimation:(id)arg0 time:(CGFloat)arg1 ;
-(id)_additiveAnimationForKeyPath:(id)arg0 withSettings:(id)arg1 beginTime:(id)arg2 fromRelativeValue:(CGFloat)arg3 toRelativeValue:(CGFloat)arg4 ;
-(id)_animationWithSettings:(id)arg0 ;
-(id)initWithLayer:(id)arg0 keyPath:(id)arg1 initialValue:(CGFloat)arg2 targetValue:(CGFloat)arg3 ;
-(void)_animateFromRelativeValue:(CGFloat)arg0 toRelativeValue:(CGFloat)arg1 withSettings:(id)arg2 beginTime:(id)arg3 ;
-(void)_animateFromValue:(CGFloat)arg0 toValue:(CGFloat)arg1 withSettings:(id)arg2 beginTime:(id)arg3 ;
-(void)_fireCompletionIfNecessary;
-(void)_reverseWithSettings:(id)arg0 directionChangeSettings:(id)arg1 headStart:(CGFloat)arg2 ;
-(void)animateWithSettings:(id)arg0 completion:(id)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)invalidate;
-(void)reverse;
-(void)reverseWithSettings:(id)arg0 directionChangeSettings:(id)arg1 headStart:(CGFloat)arg2 ;


@end


#endif