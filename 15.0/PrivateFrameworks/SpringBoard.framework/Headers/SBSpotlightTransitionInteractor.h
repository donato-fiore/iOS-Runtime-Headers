// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPOTLIGHTTRANSITIONINTERACTOR_H
#define SBSPOTLIGHTTRANSITIONINTERACTOR_H

@class NSString;
@protocol SBViewControllerInteractiveTransitioning, SBViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface SBSpotlightTransitionInteractor : NSObject <SBViewControllerInteractiveTransitioning>

 {
    id<SBViewControllerContextTransitioning> *_transitionContext;
    id<UIViewControllerAnimatedTransitioning> *_animator;
}


@property (nonatomic) NSInteger completionCurve; // ivar: _completionCurve
@property (nonatomic) CGFloat completionSpeed; // ivar: _completionSpeed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(id)init;
-(id)initWithAnimator:(id)arg0 ;
-(void)cancelTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateTransition:(CGFloat)arg0 ;


@end


#endif