// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESSGESTURERECOGNIZER_H
#define SBPRESSGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSSet, NSMutableArray, BSTimer, BSMonotonicReferenceTime, NSArray;



@interface SBPressGestureRecognizer : UIGestureRecognizer {
    NSSet *_delayablePressTypes;
    NSSet *_precedencePressTypes;
    NSInteger _internalGestureState;
    NSMutableArray *_delayedPressesInfo;
    CGFloat _latestDispatchedPressTimestamp;
    NSInteger _latestDispatchedPressPhase;
    NSInteger _latestDispatchedPressType;
    NSMutableArray *_unbalancedPressBeganTypes;
    BSTimer *_waitingGestureStateExpirationTimer;
    BOOL _isDispatchingPresses;
    BSTimer *_waitingForPreemptionTimer;
    BSMonotonicReferenceTime *_precedencePressesReferenceTime;
    CGFloat _waitForPreemptionTimeInterval;
}


@property (retain, nonatomic) NSArray *pressTypesWithPrecedence;


-(BOOL)_didGestureBegin;
-(BOOL)_isDispatchingDelayedPresses;
-(BOOL)_isGestureFailedOrCancelled;
-(BOOL)_shouldStopDispatching;
-(CGFloat)latestPressTimestamp;
-(CGFloat)waitForPreemptionTimeInterval;
-(NSInteger)_delayedPressesCount;
-(NSInteger)latestPressPhase;
-(NSInteger)latestPressType;
-(NSInteger)requiredPressTypesCount;
-(id)_allowedPressTypes;
-(id)_gestureStateInfoForPressInfo:(id)arg0 ;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(NSInteger)arg0 previousCount:(NSInteger)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)name;
-(void)_addDelayedPress:(id)arg0 ;
-(void)_applyGestureStateInfo:(id)arg0 ;
-(void)_cancelGesture;
-(void)_processDelayablePresses:(id)arg0 ;
-(void)_processPrecedencePresses:(id)arg0 ;
-(void)_processPresses:(id)arg0 ;
-(void)_reallyStartDispatchingDelayedPresses;
-(void)_resetDelayedPresses;
-(void)_resetPublishedPressInfo;
-(void)_resetState;
-(void)_startDispatchingDelayedPresses;
-(void)_stopWaitingGestureStateExpiration;
-(void)_updatePublicPressInfo:(id)arg0 ;
-(void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(NSInteger)arg0 andPhase:(NSInteger)arg1 result:(*NSInteger)arg2 ;
-(void)_waitGestureStateExpirationWithFireInterval:(CGFloat)arg0 timerExpiredActionBlock:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;
-(void)setAllowedPressTypes:(id)arg0 ;
-(void)setWaitForPreemptionTimeInterval:(CGFloat)arg0 ;


@end


#endif