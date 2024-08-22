// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCLOUDCALLINGWEBVIEWCONTROLLER_H
#define TPSCLOUDCALLINGWEBVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSData, NSString, NSURL, UIWebView;
@protocol UIWebViewDelegate;



@interface TPSCloudCallingWebViewController : UIViewController <UIWebViewDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) NSData *body; // ivar: _body
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPresentingURL) BOOL presentingURL;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (readonly, retain, nonatomic) UIWebView *webView; // ivar: _webView


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_cancelButtonClicked:(id)arg0 ;
-(void)cancelWebView;
-(void)doProvisioningCanceled;
-(void)doProvisioningDone;
-(void)doProvisioningFailed;
-(void)doWebViewTimedOut;
-(void)loadURL:(id)arg0 body:(id)arg1 completion:(id)arg2 ;
-(void)loadView;
-(void)loadWebViewWithSpinner:(id)arg0 ;
-(void)setupControllerInWebFrame:(id)arg0 ;
-(void)uiWebView:(id)arg0 didClearWindowObject:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 ;


@end


#endif