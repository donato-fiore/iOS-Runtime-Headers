// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSWEBAUTHENTICATIONVIEWCONTROLLER_H
#define VSWEBAUTHENTICATIONVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, WKWebView;
@protocol WKNavigationDelegate, VSMessageQueueDelegate, VSWebAuthenticationViewController, VSAuthenticationViewControllerDelegate;


#import "VSWebAuthenticationViewModel.h"

@interface VSWebAuthenticationViewController : UIViewController <WKNavigationDelegate, VSMessageQueueDelegate, VSWebAuthenticationViewController>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // ivar: _cancellationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSAuthenticationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize preferredLogoSize;
@property (readonly) Class superclass;
@property (retain, nonatomic) VSWebAuthenticationViewModel *viewModel; // ivar: _viewModel
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)_canonicalRequestForRequest:(id)arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_didBeginActivity;
-(void)_didEndActivity;
-(void)_retrieveMessages;
-(void)_sendMessage:(id)arg0 ;
-(void)_sendMessages:(id)arg0 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)dealloc;
-(void)didAddMessagesToMessageQueue:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;


@end


#endif