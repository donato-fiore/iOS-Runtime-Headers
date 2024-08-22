// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBVIEWCONTROLLER_H
#define AMSUIWEBVIEWCONTROLLER_H

@class ACAccount, UILabel, UIViewController, NSDictionary, AMSProcessInfo, NSString, NSURL;
@protocol AMSUIWebActionRunnerDelegate, AMSUIWebPageViewControllerDelegate, AMSUIWebProtocolDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate, PSStateRestoration, AMSBagConsumer, AMSBagProtocol, AMSUIWebDelegate;


#import "AMSUICommonViewController.h"
#import "AMSUIWebAppearance.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebContainerViewController.h"
#import "AMSUIWebPageViewController.h"

@interface AMSUIWebViewController : AMSUICommonViewController <AMSUIWebActionRunnerDelegate, AMSUIWebPageViewControllerDelegate, AMSUIWebProtocolDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate, PSStateRestoration, AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (retain, nonatomic) UILabel *automationView; // ivar: _automationView
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) UIViewController *childViewController; // ivar: _childViewController
@property (retain, nonatomic) NSDictionary *clientData;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *clientOptions;
@property (readonly, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (nonatomic) NSInteger currentLoadState; // ivar: _currentLoadState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIWebDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (nonatomic) BOOL hasStarted; // ivar: _hasStarted
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *lastLoadedURL; // ivar: _lastLoadedURL
@property (nonatomic) BOOL loadUsingWebKit;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (readonly, nonatomic) AMSUIWebContainerViewController *rootContainer; // ivar: _rootContainer
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSUIWebPageViewController *webPage; // ivar: _webPage


+(id)createBagForSubProfile;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_applyMappingsToURL:(id)arg0 ;
-(id)_buildRequestWithRequest:(id)arg0 bagValue:(id)arg1 ;
-(id)_handleAuthenticateCloudRequest:(id)arg0 pauseTimeouts:(BOOL)arg1 ;
-(id)_handleAuthenticateRequest:(id)arg0 pauseTimeouts:(BOOL)arg1 ;
-(id)_handleDialogRequest:(id)arg0 pauseTimeouts:(BOOL)arg1 ;
-(id)_handleEngagementRequest:(id)arg0 pauseTimeouts:(BOOL)arg1 ;
-(id)_lazyPromiseForBagSnapshot;
-(id)_lazyPromiseForLoadingRequest:(id)arg0 bagValue:(id)arg1 ;
-(id)_lazyPromiseForLoadingSession;
-(id)_lazyPromiseForPageLoad;
-(id)_loadMescalSessionForRequestWithURL:(id)arg0 ;
-(id)_loadRequest:(id)arg0 bagValue:(id)arg1 ;
-(id)_parseWebPropertiesFromRequest:(id)arg0 ;
-(id)_rootNavigationController;
-(id)_stringForLoadState:(NSInteger)arg0 ;
-(id)action:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 ;
-(id)action:(id)arg0 handleActionObject:(id)arg1 ;
-(id)action:(id)arg0 pauseTimeouts:(BOOL)arg1 handleAuthenticateCloudRequest:(id)arg2 ;
-(id)action:(id)arg0 pauseTimeouts:(BOOL)arg1 handleAuthenticateRequest:(id)arg2 ;
-(id)action:(id)arg0 pauseTimeouts:(BOOL)arg1 handleDialogRequest:(id)arg2 ;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)initWithBag:(id)arg0 ;
-(id)initWithBag:(id)arg0 account:(id)arg1 clientInfo:(id)arg2 ;
-(id)loadBagValue:(id)arg0 ;
-(id)loadRequest:(id)arg0 ;
-(id)loadURL:(id)arg0 ;
-(id)runJSRequest:(id)arg0 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id)arg3 ;
-(void)_dismiss;
-(void)_handleDidEncodeNetworkRequest:(id)arg0 ;
-(void)_showErrorViewWithError:(id)arg0 request:(id)arg1 bagValue:(id)arg2 ;
-(void)action:(id)arg0 didEncodeNetworkRequest:(id)arg1 ;
-(void)actionDidFinishPurchaseWithResult:(id)arg0 error:(id)arg1 ;
-(void)loadView;
-(void)protocolHandler:(id)arg0 didEncodeNetworkRequest:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)webPageViewController:(id)arg0 didEncodeNetworkRequest:(id)arg1 ;


@end


#endif