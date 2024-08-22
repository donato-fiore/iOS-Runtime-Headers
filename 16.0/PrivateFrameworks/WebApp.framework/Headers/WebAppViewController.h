// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBAPPVIEWCONTROLLER_H
#define WEBAPPVIEWCONTROLLER_H

@class UIViewController, _SFWebAppViewController, _UIAsyncInvocation, NSTimer, CPSPromise, NSString, UIWebClip;
@protocol _SFWebAppViewControllerDelegate;


#import "LoadingViewController.h"

@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate>

 {
    _SFWebAppViewController *_contentViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    BOOL _hasShownLoadingViewController;
    BOOL _hasCustomScheme;
    LoadingViewController *_loadingViewController;
    NSInteger _orientation;
    NSTimer *_hideSnapshotTimer;
    CPSPromise *_connectionPromiseForPush;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasLaunchedForWebPush; // ivar: _wasLaunchedForWebPush
@property (readonly, nonatomic) UIWebClip *webClip; // ivar: _webClip


-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)initWithWebClip:(id)arg0 ;
-(void)_cancelHideSnapshotTimer;
-(void)_connectToService;
-(void)_removeRemoteView;
-(void)_setUpContentViewController:(id)arg0 ;
-(void)dealloc;
-(void)hideLoadingView;
-(void)openURLWithCustomSchemeIfNeeded;
-(void)processWebPushWithIdentifier:(id)arg0 ;
-(void)timeLimitForLoadCompletionExpired;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)webAppViewController:(id)arg0 didChangeLoadingState:(BOOL)arg1 ;
-(void)webAppViewController:(id)arg0 viewServiceDidTerminateWithError:(id)arg1 ;
-(void)webAppViewControllerDidFinishInitialLoad:(id)arg0 ;


@end


#endif