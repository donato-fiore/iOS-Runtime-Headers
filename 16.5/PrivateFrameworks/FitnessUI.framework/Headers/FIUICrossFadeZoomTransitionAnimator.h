// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUICROSSFADEZOOMTRANSITIONANIMATOR_H
#define FIUICROSSFADEZOOMTRANSITIONANIMATOR_H

@class NSString, UIView;
@protocol FIUIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface FIUICrossFadeZoomTransitionAnimator : NSObject <FIUIViewControllerAnimatedTransitioning>

 {
    id *_animationCompletionBlock;
    BOOL _transitionCompleted;
}


@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *largeView; // ivar: _largeView
@property (retain, nonatomic) UIView *smallView; // ivar: _smallView
@property (readonly) Class superclass;
@property (nonatomic) BOOL zoomingUp; // ivar: _zoomingUp


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)completeTransitionImmediately;


@end


#endif