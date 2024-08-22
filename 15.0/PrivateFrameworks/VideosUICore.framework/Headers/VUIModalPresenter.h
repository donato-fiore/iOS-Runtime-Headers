// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMODALPRESENTER_H
#define VUIMODALPRESENTER_H

@class NSHashTable, _UIProgressiveBlurPresentationAnimator, NSArray;

#import <Foundation/Foundation.h>


@interface VUIModalPresenter : NSObject {
    NSHashTable *__presentationControllers;
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
}


@property (readonly, copy, nonatomic) NSArray *presentedViewControllers;


+(id)sharedInstance;
-(id)_presentationControllers;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)dismissViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentViewController:(id)arg0 fromViewController:(id)arg1 options:(id)arg2 completion:(id)arg3 ;


@end


#endif