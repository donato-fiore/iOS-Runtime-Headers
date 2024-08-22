// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCARDINELIGIBLEVIEWCONTROLLER_H
#define PKPAYMENTCARDINELIGIBLEVIEWCONTROLLER_H

@class UIViewController, WKWebView, NSString, NSURL, PKPaymentProvisioningController;
@protocol WKNavigationDelegate, PKPaymentSetupViewControllerDelegate;



@interface PKPaymentCardIneligibleViewController : UIViewController <WKNavigationDelegate>

 {
    WKWebView *_webView;
    id *_preflightCompletion;
}


@property (nonatomic) NSInteger context; // ivar: _context
@property (copy, nonatomic) id *continueActionHandler; // ivar: _continueActionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *learnMorePresentationHandler; // ivar: _learnMorePresentationHandler
@property (retain, nonatomic) NSURL *learnMoreURL; // ivar: _learnMoreURL
@property BOOL preloadLearnMoreWebView; // ivar: _preloadLearnMoreWebView
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(id)_alertWithReason:(NSInteger)arg0 learnMoreURL:(id)arg1 isPreloaded:(BOOL)arg2 ;
-(id)initWithReason:(NSInteger)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 ;
-(id)webView;
-(void)_webViewDidLoad:(BOOL)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)handleDone:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif