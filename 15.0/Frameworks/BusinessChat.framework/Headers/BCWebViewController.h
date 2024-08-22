// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCWEBVIEWCONTROLLER_H
#define BCWEBVIEWCONTROLLER_H

@class UIViewController, NSURL, NSString, WKWebView;
@protocol WKNavigationDelegate, BCWebViewControllerDelegate;


#import "BCInvalidCertificatView.h"
#import "BCProgressIndicatorView.h"
#import "BCServerErrorView.h"

@interface BCWebViewController : UIViewController <WKNavigationDelegate>

 {
    BOOL _wasCallbackCaptured;
    BCInvalidCertificatView *_invalidCertificatView;
    BCProgressIndicatorView *_progressIndicatorView;
    BCServerErrorView *_serverErrorView;
    NSURL *_originURL;
}


@property (retain, nonatomic) NSString *callbackURI; // ivar: _callbackURI
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BCWebViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WKWebView *webkitView; // ivar: _webkitView


-(id)initWithCallbackURI:(id)arg0 ;
-(void)loadURL:(id)arg0 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentCertificatErrorForHost:(id)arg0 ;
-(void)reload;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)viewDidLoad;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;


@end


#endif