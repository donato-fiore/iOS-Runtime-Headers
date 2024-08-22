// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNPPLATTERTRANSITIONINGDELEGATE_H
#define PNPPLATTERTRANSITIONINGDELEGATE_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface PNPPlatterTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;


@end


#endif