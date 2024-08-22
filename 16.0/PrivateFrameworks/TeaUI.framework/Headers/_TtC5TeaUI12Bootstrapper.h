// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI12BOOTSTRAPPER_H
#define _TTC5TEAUI12BOOTSTRAPPER_H


#import <Foundation/Foundation.h>


@interface _TtC5TeaUI12Bootstrapper : NSObject {
    ? mainViewControllerFactory;
    ? onboardingViewControllerFactory;
    ? onboardingViewDismissalAnimator;
    ? deferredPromise;
    ? deferringGroup;
    ? shouldCollapseSidebar;
}




-(id)init;
-(void)afterBootstrapOnQueue:(id)arg0 runBootstrapCallbackBlock:(id)arg1 ;
-(void)startBootstrappingWithWindow:(id)arg0 shouldOnboard:(BOOL)arg1 ;
-(void)startBootstrappingWithWindow:(id)arg0 shouldOnboard:(BOOL)arg1 shouldCollapseSidebar:(BOOL)arg2 ;


@end


#endif