// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENOAUTHVIEWCONTROLLER_H
#define ENOAUTHVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSURL, NSString, UIWebView;
@protocol UIWebViewDelegate, ENOAuthViewControllerDelegate;



@interface ENOAuthViewController : UIViewController <UIWebViewDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) NSURL *authorizationURL; // ivar: _authorizationURL
@property (copy, nonatomic) NSString *currentProfileName; // ivar: _currentProfileName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENOAuthViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSwitchingAllowed; // ivar: _isSwitchingAllowed
@property (retain, nonatomic) NSString *oauthCallbackPrefix; // ivar: _oauthCallbackPrefix
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWebView *webView; // ivar: _webView


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(id)initWithAuthorizationURL:(id)arg0 oauthCallbackPrefix:(id)arg1 profileName:(id)arg2 allowSwitching:(BOOL)arg3 delegate:(id)arg4 ;
-(void)animationDidStop:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)cancel:(id)arg0 ;
-(void)dealloc;
-(void)loadWebView;
-(void)switchProfile:(id)arg0 ;
-(void)updateUIForNewProfile:(id)arg0 withAuthorizationURL:(id)arg1 ;
-(void)viewDidLoad;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg0 ;


@end


#endif