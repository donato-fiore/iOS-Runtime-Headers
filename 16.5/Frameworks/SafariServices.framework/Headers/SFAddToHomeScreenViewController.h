// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFADDTOHOMESCREENVIEWCONTROLLER_H
#define SFADDTOHOMESCREENVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, SFQueueingServiceViewControllerProxy<SFAddToHomeScreenServiceProtocol>, NSURL, WKWebView, _WKApplicationManifest, NSDictionary, _UIRemoteViewController, NSString;
@protocol SFQueueingServiceViewControllerProxyDelegate, SFAddToHomeScreenRemoteViewControllerDelegate, _UIRemoteViewControllerContaining;


#import "SFAddToHomeScreenRemoteViewController.h"

@interface SFAddToHomeScreenViewController : UIViewController <SFQueueingServiceViewControllerProxyDelegate, SFAddToHomeScreenRemoteViewControllerDelegate, _UIRemoteViewControllerContaining>

 {
    SFAddToHomeScreenRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    SFQueueingServiceViewControllerProxy<SFAddToHomeScreenServiceProtocol> *_serviceProxy;
    NSURL *_initialURL;
    WKWebView *_webView;
    _WKApplicationManifest *_manifest;
    NSDictionary *_webClipMetadataFetcherResult;
    id *_completionHandler;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithURL:(id)arg0 completion:(id)arg1 ;
-(id)initWithWebView:(id)arg0 completion:(id)arg1 ;
-(id)serviceProxy;
-(void)_addRemoteViewControllerIfNeeded;
-(void)_connectToService;
-(void)_didLoadRemoteViewController:(id)arg0 ;
-(void)_fetchWebClipMetadataViaJavaScript;
-(void)_initializeViewService;
-(void)remoteViewController:(id)arg0 didFinishWithResult:(BOOL)arg1 ;
-(void)serviceProxyWillQueueInvocation:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif