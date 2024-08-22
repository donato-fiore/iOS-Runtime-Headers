// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTRANSITIONCOORDINATOR_H
#define SFTRANSITIONCOORDINATOR_H

@class NSMutableArray, NSString;
@protocol SFTransitionCoordinating, SFTransitionContext;

#import <Foundation/Foundation.h>


@interface SFTransitionCoordinator : NSObject <SFTransitionCoordinating, SFTransitionContext>

 {
    NSMutableArray *_animations;
    NSMutableArray *_completionBlocks;
    NSInteger _keyframeAnimationMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTransition; // ivar: _isTransition
@property (readonly, nonatomic) NSObject<SFTransitionCoordinating> *publicCoordinator;
@property (readonly, nonatomic) BOOL requiresKeyframeAnimations;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesKeyframeAnimations;


// -(id)initWithAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)addKeyframeWithRelativeStartTime:(CGFloat)arg0 relativeDuration:(CGFloat)arg1 animations:(id)arg2 ;
-(void)addRetargetableAnimations:(id)arg0 ;
-(void)disableKeyframeAnimations;
-(void)invokeAnimations;
-(void)invokeCompletion;
-(void)performTransitionWithAnimation:(BOOL)arg0 inContextOfContainerView:(id)arg1 ;


@end


#endif