// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLREMOTEITEMVIEWCONTROLLER_H
#define QLREMOTEITEMVIEWCONTROLLER_H

@class QLItemViewController, NSExtension, NSDictionary, NSLayoutConstraint, NSString;
@protocol QLPrintingProtocol, QLCustomItemViewControllerHost, QLRemotePopoverTracker;


#import "QLPreviewExtensionHostContext.h"
#import "QLCustomItemViewControllerHostProxy.h"
#import "QLRemotePreviewHostViewController.h"

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol, QLCustomItemViewControllerHost, QLRemotePopoverTracker>

 {
    NSExtension *_extension;
    QLPreviewExtensionHostContext *_hostContext;
    NSDictionary *_hostConfiguration;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    id<QLPrintingProtocol> *_printer;
    id<QLRemotePopoverTracker> *_popoverTracker;
    QLCustomItemViewControllerHostProxy *_hostViewControllerProxy;
    BOOL _isVisible;
    BOOL _isAppearing;
    BOOL _fullScreen;
    BOOL _needsSetup;
    BOOL _readyToLoad;
    id *_readyToDisplay;
    id *_loadHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) QLRemotePreviewHostViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;


-(BOOL)canClickToToggleFullscreen;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canShowNavBar;
-(BOOL)canShowToolBar;
-(BOOL)canSwipeToDismiss;
-(BOOL)presenterShouldHandleLoadingView:(id)arg0 readyToDisplay:(id)arg1 ;
-(id)fullscreenBackgroundColor;
-(id)init;
-(id)printer;
-(void)_loadRemoteViewControllerForContext:(id)arg0 ;
-(void)_performLoadHandlerIfNeeded;
-(void)_performSetUpWithRemoteViewController:(id)arg0 extension:(id)arg1 request:(id)arg2 hostContext:(id)arg3 ;
-(void)_registerLoadingHandler:(id)arg0 ;
-(void)dealloc;
-(void)dismissQuickLook;
-(void)forwardMessageToHostOfCustomViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)getFrameWithCompletionBlock:(id)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)numberOfPagesWithSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(void)pdfDataForPageAtIndex:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)preloadViewControllerForContext:(id)arg0 ;
-(void)prepareForDrawingPages:(struct _NSRange )arg0 ofSize:(struct CGSize )arg1 ;
-(void)presentShareSheetWithPopoverTracker:(id)arg0 customSharedURL:(id)arg1 dismissCompletion:(id)arg2 ;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg0 ;
-(void)previewControllerDidUpdateTitle:(id)arg0 ;
-(void)previewControllerWantsFullScreen:(BOOL)arg0 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setFullScreen:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif