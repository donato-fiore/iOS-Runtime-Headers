// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTUMBLRVIEWCONTROLLER_H
#define WFTUMBLRVIEWCONTROLLER_H

@class UIViewController, TMTumblrAuthenticator, NSString, WKWebView;
@protocol WKNavigationDelegate, WFTumblrViewControllerDelegate;



@interface WFTumblrViewController : UIViewController <WKNavigationDelegate>



@property (retain, nonatomic) TMTumblrAuthenticator *authenticator; // ivar: _authenticator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTumblrViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithOAuthConsumerKey:(id)arg0 OAuthConsumerSecret:(id)arg1 ;
-(void)cancel;
-(void)loadView;
-(void)viewDidLoad;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif