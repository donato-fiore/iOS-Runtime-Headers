// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDOAPPLECAREWEBVIEWCONTROLLER_H
#define NDOAPPLECAREWEBVIEWCONTROLLER_H

@class UIViewController, NSString, UINavigationBar, UIActivityIndicatorView, NDOWarranty, UINavigationItem, WKWebView;
@protocol UINavigationBarDelegate, WKNavigationDelegate, NDOAppleCareWebViewPresenterProtocol;



@interface NDOAppleCareWebViewController : UIViewController <UINavigationBarDelegate, WKNavigationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) UINavigationBar *headerView; // ivar: _headerView
@property BOOL initialLoadCompleted; // ivar: _initialLoadCompleted
@property (retain) NSString *params; // ivar: _params
@property (weak) NSObject<NDOAppleCareWebViewPresenterProtocol> *presenter; // ivar: _presenter
@property int retriesRemaining; // ivar: _retriesRemaining
@property (retain) NSString *serialNumber; // ivar: _serialNumber
@property (weak, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (retain) NDOWarranty *warranty; // ivar: _warranty
@property (retain) UINavigationItem *webViewNavigationItem; // ivar: _webViewNavigationItem
@property (weak) WKWebView *webview; // ivar: _webview


-(BOOL)navigationBar:(id)arg0 shouldPopItem:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithWarranty:(id)arg0 serialNumber:(id)arg1 ;
-(id)initWithWarranty:(id)arg0 serialNumber:(id)arg1 params:(id)arg2 ;
-(void)cancelTapped:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)loadWebview:(BOOL)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setIsLoading:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;


@end


#endif