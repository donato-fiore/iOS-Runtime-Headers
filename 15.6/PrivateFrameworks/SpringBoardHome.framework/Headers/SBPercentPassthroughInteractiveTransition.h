// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBPERCENTPASSTHROUGHINTERACTIVETRANSITION_H
#define SBPERCENTPASSTHROUGHINTERACTIVETRANSITION_H

@class NSString;
@protocol SBViewControllerInteractiveTransitioning, SBViewControllerContextTransitioning;

#import <Foundation/Foundation.h>


@interface SBPercentPassthroughInteractiveTransition : NSObject <SBViewControllerInteractiveTransitioning>

 {
    id<SBViewControllerContextTransitioning> *_transitionContext;
}


@property (nonatomic) NSInteger completionCurve; // ivar: _completionCurve
@property (nonatomic) CGFloat completionSpeed; // ivar: _completionSpeed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(BOOL)supportsRestarting;
-(id)init;
-(void)cancelTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateTransition:(CGFloat)arg0 ;


@end


#endif