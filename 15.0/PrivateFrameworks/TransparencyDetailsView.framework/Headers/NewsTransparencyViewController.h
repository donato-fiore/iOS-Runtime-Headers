// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEWSTRANSPARENCYVIEWCONTROLLER_H
#define NEWSTRANSPARENCYVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UIBarButtonItem, NSString, UILabel, WKWebView, NSDictionary;
@protocol WKNavigationDelegate, NewsTransparencyViewControllerDelegate;



@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate>

 {
    UIActivityIndicatorView *activityIndicator;
    UIBarButtonItem *leftButton;
    UIViewController *debugViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<NewsTransparencyViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *errorLabel; // ivar: _errorLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isClientTodayWidget; // ivar: _isClientTodayWidget
@property (nonatomic) BOOL isiPad; // ivar: _isiPad
@property (retain, nonatomic) WKWebView *myNewsPrivacyWebView; // ivar: _myNewsPrivacyWebView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *transparencyDetailsDictionary; // ivar: _transparencyDetailsDictionary
@property (readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage; // ivar: _transparencyDetailsUnavailableMessage
@property (readonly, nonatomic) NSString *transparencyRendererPayload; // ivar: _transparencyRendererPayload
@property (readonly, nonatomic) NSString *transparencyRendererURL; // ivar: _transparencyRendererURL


-(BOOL)isDeviceLocked;
-(id)initWithNewsTransparencyDetailsDictionary:(id)arg0 ;
-(void)_closeViewController:(id)arg0 ;
-(void)_commonInit;
-(void)_hideErrorMessage;
-(void)_openDebugView:(id)arg0 ;
-(void)_showErrorMessage:(id)arg0 ;
-(void)debugDetailsViewControllerReady:(id)arg0 ;
-(void)displayDebugButtonWaitingIndicator;
-(void)errorDelegate;
-(void)loadWebView;
-(void)presentViewDelegate;
-(void)requestUserPassCodeUnlockUIWithBlock:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif