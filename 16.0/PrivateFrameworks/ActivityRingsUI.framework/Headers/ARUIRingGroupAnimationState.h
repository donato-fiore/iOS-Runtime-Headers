// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUIRINGGROUPANIMATIONSTATE_H
#define ARUIRINGGROUPANIMATIONSTATE_H

@class NSString, CAMediaTimingFunction, NSMutableSet;
@protocol ARUIRingGroupAnimationDelegate;

#import <Foundation/Foundation.h>

#import "ARUIRingGroupAnimationState.h"

@interface ARUIRingGroupAnimationState : NSObject <ARUIRingGroupAnimationDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ARUIRingGroupAnimationState *nextAnimationState; // ivar: _nextAnimationState
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (retain, nonatomic) NSMutableSet *trackedAnimations; // ivar: _trackedAnimations


+(id)currentAnimationState;
+(void)popAnimationState;
+(void)pushAnimationState:(id)arg0 ;
-(id)init;
-(void)addAnimation:(id)arg0 ;
-(void)animationDidComplete:(id)arg0 ;


@end


#endif