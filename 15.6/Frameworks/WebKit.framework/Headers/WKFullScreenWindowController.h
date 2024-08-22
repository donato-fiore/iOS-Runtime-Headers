// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKFULLSCREENWINDOWCONTROLLER_H
#define WKFULLSCREENWINDOWCONTROLLER_H

@class NSString, UIView;
@protocol UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>

#import "WKWebView.h"

@interface WKFullScreenWindowController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

 {
    RetainPtr<WKFullScreenPlaceholderView> _webViewPlaceholder;
    NSInteger _fullScreenState;
    WKWebViewState _viewState;
    RetainPtr<UIWindow> _window;
    RetainPtr<UIViewController> _rootViewController;
    RetainPtr<UIViewController> _viewControllerForPresentation;
    RetainPtr<WKFullScreenViewController> _fullscreenViewController;
    RetainPtr<UISwipeGestureRecognizer> _startDismissGestureRecognizer;
    RetainPtr<UIPanGestureRecognizer> _interactivePanDismissGestureRecognizer;
    RetainPtr<UIPinchGestureRecognizer> _interactivePinchDismissGestureRecognizer;
    RetainPtr<WKFullScreenInteractiveTransition> _interactiveDismissTransitionCoordinator;
    unique_ptr<WTF::Observer<void (bool)>, std::default_delete<WTF::Observer<void (bool)>>> _pipObserver;
    BOOL _shouldReturnToFullscreenFromPictureInPicture;
    BOOL _enterFullscreenNeedsExitPictureInPicture;
    BOOL _returnToFullscreenFromPictureInPicture;
    BOOL _blocksReturnToFullscreenFromPictureInPicture;
    CGRect _initialFrame;
    CGRect _finalFrame;
    RetainPtr<NSString> _EVOrganizationName;
    BOOL _EVOrganizationNameIsValid;
    BOOL _inInteractiveDismiss;
    BOOL _exitRequested;
    BOOL _enterRequested;
    BOOL _exitingFullScreen;
    RetainPtr<id> _notificationListener;
}


@property (weak, nonatomic) WKWebView *_webView; // ivar: __webView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFullScreen;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) UIView *webViewPlaceholder;


-(*void)_manager;
-(*void)_videoFullscreenManager;
-(BOOL)_isSecure;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_EVOrganizationName;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithWebView:(id)arg0 ;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(struct __SecTrust *)_serverTrust;
-(void)_completedExitFullScreen;
-(void)_dismissFullscreenViewController;
-(void)_exitFullscreenImmediately;
-(void)_interactiveDismissChanged:(id)arg0 ;
-(void)_interactivePinchDismissChanged:(id)arg0 ;
-(void)_invalidateEVOrganizationName;
-(void)_reinsertWebViewUnderPlaceholder;
-(void)_startToDismissFullscreenChanged:(id)arg0 ;
-(void)_updateLocationInfo;
-(void)beganEnterFullScreenWithInitialFrame:(struct CGRect )arg0 finalFrame:(struct CGRect )arg1 ;
-(void)beganExitFullScreenWithInitialFrame:(struct CGRect )arg0 finalFrame:(struct CGRect )arg1 ;
-(void)close;
-(void)dealloc;
-(void)didEnterPictureInPicture;
-(void)didExitPictureInPicture;
-(void)enterFullScreen;
-(void)exitFullScreen;
-(void)placeholderWillMoveToSuperview:(id)arg0 ;
-(void)requestEnterFullScreen;
-(void)requestExitFullScreen;
-(void)videoControlsManagerDidChange;
-(void)webViewDidRemoveFromSuperviewWhileInFullscreen;


@end


#endif