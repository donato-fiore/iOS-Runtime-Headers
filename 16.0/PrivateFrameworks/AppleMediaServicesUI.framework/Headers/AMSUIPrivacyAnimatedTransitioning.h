// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIPRIVACYANIMATEDTRANSITIONING_H
#define AMSUIPRIVACYANIMATEDTRANSITIONING_H

@class NSString, UIViewController;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface AMSUIPrivacyAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isPresentation) BOOL presentation; // ivar: _presentation
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_presentedViewControllerForContext:(id)arg0 ;
-(void)_animateTransition:(id)arg0 completionBlock:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif