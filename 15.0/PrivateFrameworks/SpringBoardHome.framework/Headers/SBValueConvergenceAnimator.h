// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVALUECONVERGENCEANIMATOR_H
#define SBVALUECONVERGENCEANIMATOR_H


#import <Foundation/Foundation.h>


@interface SBValueConvergenceAnimator : NSObject {
    CGFloat _previousForce;
    CGFloat _diff;
}


@property (copy, nonatomic) id *applier; // ivar: _applier
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) id *convergenceFunction; // ivar: _convergenceFunction
@property (nonatomic) CGFloat currentValue; // ivar: _currentValue
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (nonatomic) BOOL finishesOnValueConvergence; // ivar: _finishesOnValueConvergence
@property (nonatomic) NSInteger frameInterval; // ivar: _frameInterval
@property (nonatomic) CGFloat lastFireTime; // ivar: _lastFireTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) CGFloat targetValue; // ivar: _targetValue


-(BOOL)isRunning;
-(id)init;
-(void)_convergeValue;
-(void)_invokeApplier;
-(void)_invokeCompletionWithFinished:(BOOL)arg0 ;
-(void)_reset;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif