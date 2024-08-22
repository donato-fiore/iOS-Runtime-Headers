// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USERTRANSPARENCYVIEWCONTROLLER_H
#define USERTRANSPARENCYVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, UILabel, WKWebView, UINavigationBar, ADUserTransparencyResponse;
@protocol WKNavigationDelegate, UserTransparencyViewControllerDelegate;



@interface UserTransparencyViewController : UIViewController <WKNavigationDelegate>

 {
    UIActivityIndicatorView *activityIndicator;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<UserTransparencyViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *errorLabel; // ivar: _errorLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isiPad; // ivar: _isiPad
@property (retain, nonatomic) WKWebView *myUserPrivacyWebView; // ivar: _myUserPrivacyWebView
@property (readonly) Class superclass;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar; // ivar: _transparencyNavBar
@property (copy, nonatomic) NSString *userTransparencyDetails; // ivar: _userTransparencyDetails
@property (retain, nonatomic) NSString *userTransparencyDetailsUnavailableMessage; // ivar: _userTransparencyDetailsUnavailableMessage
@property (retain, nonatomic) NSString *userTransparencyRendererPayload; // ivar: _userTransparencyRendererPayload
@property (retain, nonatomic) NSString *userTransparencyRendererURL; // ivar: _userTransparencyRendererURL
@property (retain, nonatomic) ADUserTransparencyResponse *userTransparencyResponseData; // ivar: _userTransparencyResponseData


-(id)initWithUserTransparencyDetails:(id)arg0 ;
-(id)normalizeChineseLanguage:(id)arg0 ;
-(void)_closeViewController:(id)arg0 ;
-(void)_commonInit;
-(void)_hideErrorMessage;
-(void)_reportUserTransparencyViewControllerEventWithType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_showErrorMessage:(id)arg0 ;
-(void)errorDelegate;
-(void)immediatelyLoadViewControllerBeforeNetworkRequest;
-(void)loadWebView;
-(void)presentViewDelegate;
-(void)requestUserTransparencyDetailsWithCompletionHandler:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif