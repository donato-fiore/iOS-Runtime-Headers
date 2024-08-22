// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBSAFARIVIEWCONTROLLER_H
#define AMSUIWEBSAFARIVIEWCONTROLLER_H

@class NSString, UIViewController, UIToolbar, UIBarButtonItem;
@protocol WKNavigationDelegate, AMSUIWebSafariWebDelegate, UIAdaptivePresentationControllerDelegate, AMSUIWebPagePresenter;


#import "AMSUICommonViewController.h"
#import "AMSUIWebAppearance.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebSafariPageModel.h"
#import "AMSUIWebSafariWebView.h"

@interface AMSUIWebSafariViewController : AMSUICommonViewController <WKNavigationDelegate, AMSUIWebSafariWebDelegate, UIAdaptivePresentationControllerDelegate, AMSUIWebPagePresenter>



@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) AMSUIWebAppearance *appearance; // ivar: _appearance
@property (readonly, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didHandleDismiss; // ivar: _didHandleDismiss
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSUIWebSafariPageModel *model; // ivar: _model
@property (nonatomic) NSInteger pageState; // ivar: _pageState
@property (nonatomic) BOOL performingNavigation; // ivar: _performingNavigation
@property (retain, nonatomic) UIViewController *placeholderPage; // ivar: _placeholderPage
@property (nonatomic) BOOL shouldDismissOnCallback; // ivar: _shouldDismissOnCallback
@property (nonatomic) BOOL shouldSetPresentationDelegate; // ivar: _shouldSetPresentationDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) UIBarButtonItem *toolbarLeft; // ivar: _toolbarLeft
@property (readonly, nonatomic) UIBarButtonItem *toolbarRight; // ivar: _toolbarRight
@property (readonly, nonatomic) AMSUIWebSafariWebView *webView; // ivar: _webView


-(BOOL)_callActionHandlerWithURL:(id)arg0 error:(id)arg1 ;
-(id)_createToolBar;
-(id)initWithContext:(id)arg0 ;
-(void)_back:(id)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_dismiss;
-(void)_finishedLoadingWithSuccess:(BOOL)arg0 ;
-(void)_forward:(id)arg0 ;
-(void)_handleDismiss;
-(void)_pop;
-(void)_presentPlaceholderModel:(id)arg0 ;
-(void)_refresh:(id)arg0 ;
-(void)_setupPageForWebView;
-(void)_setupSafariNavBarWithSpinner:(BOOL)arg0 ;
-(void)_share:(id)arg0 ;
-(void)_startErrorTimer;
-(void)_startLoadingWebView;
-(void)_transitionToErrorViewWithError:(id)arg0 ;
-(void)_transitionToLoading;
-(void)_transitionToWebView;
-(void)_updateButtons;
-(void)dealloc;
-(void)loadActionURL:(id)arg0 data:(id)arg1 callbackScheme:(id)arg2 actionHandler:(id)arg3 ;
-(void)loadView;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)safariView:(id)arg0 didReceiveAction:(id)arg1 body:(id)arg2 replyHandler:(id)arg3 ;
-(void)safariView:(id)arg0 didRedirectToSchemeWithURL:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;
-(void)willPresentPageModel:(id)arg0 appearance:(id)arg1 ;


@end


#endif