// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADTRANSPARENCYVIEWCONTROLLER_H
#define ADTRANSPARENCYVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, UILabel, WKWebView, NSDictionary, UINavigationBar;
@protocol WKNavigationDelegate, ADTransparencyViewControllerDelegate;



@interface ADTransparencyViewController : UIViewController <WKNavigationDelegate>

 {
    UIActivityIndicatorView *activityIndicator;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<ADTransparencyViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *errorLabel; // ivar: _errorLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isiPad; // ivar: _isiPad
@property (retain, nonatomic) WKWebView *myWebView; // ivar: _myWebView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transparencyDetails; // ivar: _transparencyDetails
@property (retain, nonatomic) NSDictionary *transparencyDetailsData; // ivar: _transparencyDetailsData
@property (readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage; // ivar: _transparencyDetailsUnavailableMessage
@property (retain, nonatomic) UINavigationBar *transparencyNavBar; // ivar: _transparencyNavBar
@property (readonly, nonatomic) NSString *transparencyRendererPayload; // ivar: _transparencyRendererPayload
@property (readonly, nonatomic) NSString *transparencyRendererURL; // ivar: _transparencyRendererURL


-(NSInteger)preferredInterfaceOrientationForPresentation;
-(id)initWithTransparencyDetails:(id)arg0 ;
-(void)_closeViewController:(id)arg0 ;
-(void)_commonInit;
-(void)_hideErrorMessage;
-(void)_reportTransparencyViewControllerEventWithType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_showErrorMessage:(id)arg0 ;
-(void)errorDelegate;
-(void)loadWebView;
-(void)presentViewDelegate;
-(void)requestViewWithTransparencyDetails:(id)arg0 ;
-(void)requestViewWithTransparencyDetailsDictionary:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif