// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSTRANSITIONFADEANIMATOR_H
#define VIDEOSTRANSITIONFADEANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface VideosTransitionFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transitionType; // ivar: _transitionType


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithTransitionType:(NSInteger)arg0 andDuration:(CGFloat)arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif