// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNTRANSACTION_H
#define SCNTRANSACTION_H


#import <Foundation/Foundation.h>


@interface SCNTransaction : NSObject



+(BOOL)disableActions;
+(BOOL)immediateMode;
+(CGFloat)animationDuration;
+(id)animationTimingFunction;
+(id)completionBlock:(SEL)arg0 ;
+(id)valueForKey:(id)arg0 ;
+(struct __C3DScene *)immediateModeRestrictedContext;
+(unsigned int)currentState;
+(void)begin;
+(void)checkUncommittedTransactions;
+(void)commit;
+(void)commitImmediate;
+(void)enqueueCommandForObject:(id)arg0 immediateTransactionBlock:(id)arg1 ;
+(void)flush;
+(void)lock;
+(void)postCommandWithContext:(struct __C3DScene *)arg0 object:(id)arg1 applyBlock:(id)arg2 ;
+(void)postCommandWithContext:(struct __C3DScene *)arg0 object:(id)arg1 key:(id)arg2 applyBlock:(id)arg3 ;
+(void)postCommandWithContext:(struct __C3DScene *)arg0 object:(id)arg1 keyPath:(id)arg2 applyBlock:(id)arg3 ;
+(void)setAnimationDuration:(CGFloat)arg0 ;
+(void)setAnimationTimingFunction:(id)arg0 ;
+(void)setCompletionBlock:(id)arg0 ;
+(void)setDisableActions:(BOOL)arg0 ;
+(void)setImmediateMode:(BOOL)arg0 ;
+(void)setImmediateModeRestrictedContext:(struct __C3DScene *)arg0 ;
+(void)setValue:(id)arg0 forKey:(id)arg1 ;
+(void)unlock;
-(BOOL)disableActions;
-(CGFloat)animationDuration;
-(id)animationTimingFunction;
-(void)begin;
-(void)commit;
-(void)flush;
-(void)lock;
-(void)setAnimationDuration:(CGFloat)arg0 ;
-(void)setAnimationTimingFunction:(id)arg0 ;
-(void)setDisableActions:(BOOL)arg0 ;
-(void)unlock;


@end


#endif