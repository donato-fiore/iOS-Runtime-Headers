// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIANIMATIONPROPERTYANIMATOR_H
#define SBUIANIMATIONPROPERTYANIMATOR_H

@class NSMutableArray, NSString, UIViewPropertyAnimator;
@protocol SBViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface SBUIAnimationPropertyAnimator : NSObject <SBViewControllerAnimatedTransitioning>

 {
    NSMutableArray *_completionBlocks;
    BOOL _wasStarted;
    NSUInteger _reverseCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) id *generator; // ivar: _generator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReversed;
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // ivar: _propertyAnimator
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wasReversed;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithPropertyAnimator:(id)arg0 duration:(CGFloat)arg1 ;
-(id)initWithPropertyAnimatorGenerator:(id)arg0 ;
-(void)_executeGenerator:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)cancelTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)prepareToRunAnimation:(id)arg0 ;
-(void)reverseAnimation;


@end


#endif