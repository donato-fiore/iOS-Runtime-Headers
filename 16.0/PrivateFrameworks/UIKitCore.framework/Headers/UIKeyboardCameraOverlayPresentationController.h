// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDCAMERAOVERLAYPRESENTATIONCONTROLLER_H
#define UIKEYBOARDCAMERAOVERLAYPRESENTATIONCONTROLLER_H

@class NSLayoutConstraint;


#import "UIKeyboardCameraBasePresentationController.h"
#import "UIPanGestureRecognizer.h"
#import "UIKeyboardCameraGrabberView.h"

@interface UIKeyboardCameraOverlayPresentationController : UIKeyboardCameraBasePresentationController {
    NSLayoutConstraint *_topLayoutConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIKeyboardCameraGrabberView *_grabberView;
    CGFloat _keyboardCameraNormalHeight;
    CGFloat _keyboardCameraFullScreenHeight;
    CGFloat _keyboardCameraHeight;
    CGFloat _panningStartingHeight;
    BOOL _isLandscape;
}




-(BOOL)updatesGuideDuringRotation;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_determinePortraitHeights;
-(void)_handlePan:(id)arg0 ;
-(void)_installGrabber;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif