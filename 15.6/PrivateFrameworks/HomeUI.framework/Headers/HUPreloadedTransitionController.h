// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPRELOADEDTRANSITIONCONTROLLER_H
#define HUPRELOADEDTRANSITIONCONTROLLER_H

@class NAFuture, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) NAFuture *completionFuture; // ivar: _completionFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(void)animateTransition:(id)arg0 ;


@end


#endif