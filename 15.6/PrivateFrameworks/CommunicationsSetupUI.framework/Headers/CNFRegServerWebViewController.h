// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGSERVERWEBVIEWCONTROLLER_H
#define CNFREGSERVERWEBVIEWCONTROLLER_H

@class UIViewController, NSTimer, RUILoader, NSMutableArray, NSString, UIWebView;
@protocol UIWebViewDelegate, RUIObjectModelDelegate;


#import "CNFRegLoadingView.h"
#import "CNFRegController.h"

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, RUIObjectModelDelegate>

 {
    CNFRegLoadingView *_loadingView;
    NSTimer *_timeoutTimer;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    ? _webControllerFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLoaded;
@property (readonly, nonatomic) BOOL isLoading;
@property (retain, nonatomic) CNFRegController *regController; // ivar: _regController
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL timedOut;
@property (retain, nonatomic) UIWebView *webView; // ivar: _webView


-(BOOL)_shouldLog;
-(BOOL)canSendURLRequest:(id)arg0 ;
-(BOOL)shouldSetHeadersForRequest:(id)arg0 ;
-(id)init;
-(id)initWithRegController:(id)arg0 ;
-(id)logName;
-(id)overrideURLForURL:(id)arg0 ;
-(id)parentViewControllerForObjectModel:(id)arg0 ;
-(void)_cleanupLoader;
-(void)_handleTimeout;
-(void)_popObjectModelAnimated:(BOOL)arg0 ;
-(void)_startTimeoutWithDuration:(CGFloat)arg0 ;
-(void)_stopTimeout;
-(void)_timeoutFired:(id)arg0 ;
-(void)applicationWillSuspend;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)hideSpinner;
-(void)loadURL:(id)arg0 ;
-(void)loadView;
-(void)loader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)loader:(id)arg0 receivedObjectModel:(id)arg1 actionSignal:(NSUInteger)arg2 ;
-(void)objectModel:(id)arg0 pressedButton:(id)arg1 attributes:(id)arg2 ;
-(void)objectModel:(id)arg0 pressedLink:(id)arg1 httpMethod:(id)arg2 ;
-(void)objectModelDidChange:(id)arg0 ;
-(void)objectModelPressedBack:(id)arg0 ;
-(void)receivedStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)setHeadersForRequest:(id)arg0 ;
-(void)setWantsWifi:(BOOL)arg0 ;
-(void)showSpinner;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif