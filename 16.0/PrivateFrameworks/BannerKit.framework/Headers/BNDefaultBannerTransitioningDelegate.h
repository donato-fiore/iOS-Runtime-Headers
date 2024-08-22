// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNDEFAULTBANNERTRANSITIONINGDELEGATE_H
#define BNDEFAULTBANNERTRANSITIONINGDELEGATE_H

@class NSString;
@protocol BNPresentedBannerAnimationCustomizing, BNBannerTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface BNDefaultBannerTransitioningDelegate : NSObject <BNPresentedBannerAnimationCustomizing, BNBannerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isResizeAnimationCustomizationPermitted) BOOL resizeAnimationCustomizationPermitted; // ivar: _resizeAnimationCustomizationPermitted
@property (readonly) Class superclass;


-(Class)_bannerTransitionAnimatorClassForAnimationStyle:(NSInteger)arg0 ;
-(id)_sizeTransitionAnimationSettingsForViewController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 userInfo:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 userInfo:(id)arg3 ;
-(id)animationControllerForResizingController:(id)arg0 userInfo:(id)arg1 ;
-(id)init;
-(id)sizeTransitionAnimationSettingsForPresentable:(id)arg0 ;


@end


#endif