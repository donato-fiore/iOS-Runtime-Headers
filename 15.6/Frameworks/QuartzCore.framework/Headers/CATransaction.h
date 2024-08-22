// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATRANSACTION_H
#define CATRANSACTION_H


#import <Foundation/Foundation.h>


@interface CATransaction : NSObject



// +(BOOL)addCommitHandler:(id)arg0 forPhase:(unk)arg1  ;
+(BOOL)animatesFromModelValues;
+(BOOL)boolValueForKey:(unsigned int)arg0 ;
+(BOOL)defaultDisableRunLoopObserverCommits;
+(BOOL)disableActions;
+(BOOL)disableRunLoopObserverCommits;
+(BOOL)disableSignPosts;
+(BOOL)frameStallSkipRequest;
+(BOOL)lowLatency;
+(CGFloat)animationDuration;
+(CGFloat)beginTime;
+(CGFloat)commitTime;
+(CGFloat)earliestAutomaticCommitTime;
+(CGFloat)inputTime;
+(CGFloat)updateDeadline;
+(id)_implicitAnimationForLayer:(id)arg0 keyPath:(id)arg1 ;
+(id)animationTimingFunction;
+(id)animator:(SEL)arg0 ;
+(id)committingContexts;
+(id)completionBlock:(SEL)arg0 ;
+(id)valueForKey:(id)arg0 ;
+(int)currentPhase;
+(unsigned int)currentState;
+(unsigned int)generateSeed;
+(unsigned int)registerBoolKey;
+(unsigned int)startFrameWithReason:(int)arg0 beginTime:(CGFloat)arg1 commitDeadline:(CGFloat)arg2 ;
+(void)activate;
+(void)activateBackground:(BOOL)arg0 ;
+(void)assertInactive;
+(void)begin;
+(void)commit;
+(void)finishFrameWithToken:(unsigned int)arg0 ;
+(void)flush;
+(void)flushAsRunLoopObserver;
+(void)lock;
+(void)popAnimator;
+(void)pushAnimator:(id)arg0 ;
+(void)setAnimatesFromModelValues:(BOOL)arg0 ;
+(void)setAnimationDuration:(CGFloat)arg0 ;
+(void)setAnimationTimingFunction:(id)arg0 ;
+(void)setBeginTime:(CGFloat)arg0 ;
+(void)setBoolValue:(BOOL)arg0 forKey:(unsigned int)arg1 ;
+(void)setCommitHandler:(id)arg0 ;
+(void)setCommitTime:(CGFloat)arg0 ;
+(void)setCommittingContexts:(id)arg0 ;
+(void)setCompletionBlock:(id)arg0 ;
+(void)setDefaultDisableRunLoopObserverCommits:(BOOL)arg0 ;
+(void)setDisableActions:(BOOL)arg0 ;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg0 ;
+(void)setDisableSignPosts:(BOOL)arg0 ;
+(void)setEarliestAutomaticCommitTime:(CGFloat)arg0 ;
+(void)setFrameInputTime:(CGFloat)arg0 withToken:(unsigned int)arg1 ;
+(void)setFrameStallSkipRequest:(BOOL)arg0 ;
+(void)setImplicitTransactionDidBeginHandler:(id)arg0 ;
+(void)setInputTime:(CGFloat)arg0 ;
+(void)setLowLatency:(BOOL)arg0 ;
// +(void)setPresentationHandler:(id)arg0 queue:(unk)arg1  ;
+(void)setUpdateDeadline:(CGFloat)arg0 ;
+(void)setValue:(id)arg0 forKey:(id)arg1 ;
+(void)synchronize;
+(void)unlock;


@end


#endif