// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUIBANNERTRANSITIONINGDELEGATE_H
#define CPUIBANNERTRANSITIONINGDELEGATE_H

@class NSString;
@protocol BNBannerTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface CPUIBannerTransitioningDelegate : NSObject <BNBannerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isResizeAnimationCustomizationPermitted) BOOL resizeAnimationCustomizationPermitted;
@property (readonly) Class superclass;


-(Class)_bannerTransitionAnimatorClassForAnimationStyle:(NSInteger)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 userInfo:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 userInfo:(id)arg3 ;
-(id)animationControllerForResizingController:(id)arg0 userInfo:(id)arg1 ;


@end


#endif