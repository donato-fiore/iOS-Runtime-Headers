// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREMOTEDOCUMENTATIONVIEWCONTROLLER_H
#define PKREMOTEDOCUMENTATIONVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, UIBarButtonItem, NSURL, WKWebView;
@protocol WKNavigationDelegate;



@interface PKRemoteDocumentationViewController : UIViewController <WKNavigationDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLoading; // ivar: _isLoading
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(BOOL)isWithinBuddy;
-(NSInteger)handleNavigationAction:(id)arg0 ;
-(id)initWithContext:(NSInteger)arg0 URL:(id)arg1 ;
-(void)dismiss;
-(void)handleDismiss:(id)arg0 ;
-(void)loadContent;
-(void)navigation:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)openURLInSafari:(id)arg0 ;
-(void)presentFatalErrorAlert;
-(void)setupActivityIndicatorView;
-(void)setupDismissButton;
-(void)setupWebView;
-(void)viewDidLoad;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif