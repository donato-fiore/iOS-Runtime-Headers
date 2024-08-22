// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICONFIRMATIONTRANSITIONINGDELEGATE_H
#define VUICONFIRMATIONTRANSITIONINGDELEGATE_H

@class NSString;
@protocol VUIConfirmationAnimatedTransitioningDelegate, UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>

#import "VUIConfirmationAnimatedTransitioning.h"

@interface VUIConfirmationTransitioningDelegate : NSObject <VUIConfirmationAnimatedTransitioningDelegate, UIViewControllerTransitioningDelegate>

 {
    VUIConfirmationAnimatedTransitioning *_presentTransition;
    VUIConfirmationAnimatedTransitioning *_dismissTransition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissedHandlerBlock; // ivar: _dismissedHandlerBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *presentedHandlerBlock; // ivar: _presentedHandlerBlock
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(void)confirmationAnimatedTransitioningAnimationDidEnd:(id)arg0 ;


@end


#endif