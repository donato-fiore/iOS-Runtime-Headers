// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNPPLATTERANIMATOR_H
#define PNPPLATTERANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface PNPPlatterAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPresenting; // ivar: _isPresenting
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif