// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDCAMERASESSION_H
#define UIKEYBOARDCAMERASESSION_H

@class NSString, UIResponder<UIKeyInput>;
@protocol UIKeyboardCameraViewControllerDelegate, UIDimmingViewDelegate, UIViewControllerTransitioningDelegate, UIAdaptivePresentationControllerDelegate, UITextInputSessionActionAnalyticsDelegateSource, UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "UIKeyboardCameraViewController.h"
#import "UIKeyboardCameraBasePresentationController.h"
#import "UITextInputSessionActionAnalytics.h"

@interface UIKeyboardCameraSession : NSObject <UIKeyboardCameraViewControllerDelegate, UIDimmingViewDelegate, UIViewControllerTransitioningDelegate, UIAdaptivePresentationControllerDelegate, UITextInputSessionActionAnalyticsDelegateSource>

 {
    UIKeyboardCameraViewController *_keyboardCameraViewController;
    UIKeyboardCameraBasePresentationController *_presentationController;
    id<UIViewControllerAnimatedTransitioning> *_animationController;
    BOOL _didFindText;
    NSString *_keyboardCameraCandidateString;
    id *_sender;
    BOOL _presentingOverKeyboard;
    BOOL _isTextInputResponder;
    BOOL _isWebKitResponder;
    BOOL _respondsToKeyboardInputShouldInsertText;
    BOOL _isSingleLineDocument;
    BOOL _didCleanup;
    BOOL _isSecureFieldEditor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissedHandler; // ivar: _dismissedHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIResponder<UIKeyInput> *responder; // ivar: _responder
@property (readonly) UITextInputSessionActionAnalytics *sessionAnalytics; // ivar: _sessionAnalytics
@property (readonly) Class superclass;


+(BOOL)isEnabled;
+(BOOL)shouldShowTextSuggestionForResponder:(id)arg0 ;
+(BOOL)updatesGuideDuringRotation;
+(id)_textContentTypesForDataDetection;
+(id)keyboardCameraContentTypeForResponder:(id)arg0 ;
+(id)showForResponder:(id)arg0 sender:(id)arg1 ;
-(NSInteger)_overrideTextInputSource;
-(id)_delegateAsResponder;
-(id)_sessionIdentifier;
-(id)_textInputResponder;
-(id)_webKitResponder;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_addObservers;
-(void)_cleanupKeyboardCameraAndShouldInsertText:(BOOL)arg0 ;
-(void)_didEnterBackground:(id)arg0 ;
-(void)_dismissKeyboardCamera;
-(void)_firstResponderDidChange:(id)arg0 ;
-(void)_inputModeDidChange:(id)arg0 ;
-(void)_keyboardAboutToHide:(id)arg0 ;
-(void)_keyboardCameraPreparationDidComplete;
-(void)_show;
-(void)_updatePreviewWithString:(id)arg0 ;
-(void)dealloc;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)keyboardCameraDidAccept;
-(void)keyboardCameraDidCancel;
-(void)keyboardCameraDidUpdateString:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif