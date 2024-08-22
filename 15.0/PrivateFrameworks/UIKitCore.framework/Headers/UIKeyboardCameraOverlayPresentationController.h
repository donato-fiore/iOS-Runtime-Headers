// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDCAMERAOVERLAYPRESENTATIONCONTROLLER_H
#define UIKEYBOARDCAMERAOVERLAYPRESENTATIONCONTROLLER_H

@class NSLayoutConstraint;


#import "UIPresentationController.h"
#import "UIPanGestureRecognizer.h"
#import "UIKeyboardCameraGrabberView.h"

@interface UIKeyboardCameraOverlayPresentationController : UIPresentationController {
    NSLayoutConstraint *_topLayoutConstraint;
    BOOL _presentingOverKeyboard;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIKeyboardCameraGrabberView *_grabberView;
    CGFloat _keyboardCameraNormalHeight;
    CGFloat _keyboardCameraFullScreenHeight;
    CGFloat _keyboardCameraHeight;
    CGFloat _panningStartingHeight;
    BOOL _isLandscape;
}




-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_determinePortraitHeights;
-(void)_handlePan:(id)arg0 ;
-(void)_installGrabber;
-(void)_postNotificationsForType:(NSUInteger)arg0 forStart:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif