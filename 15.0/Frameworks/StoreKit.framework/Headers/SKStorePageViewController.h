// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSTOREPAGEVIEWCONTROLLER_H
#define SKSTOREPAGEVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, SKInvocationQueueProxy<SKUIServiceStorePageViewController>, NSString;
@protocol SKStoreProductViewControllerDelegate;


#import "SKStoreProductViewController.h"
#import "SKRemoteStorePageViewController.h"

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate>

 {
    _UIAsyncInvocation *_cancelRequest;
    id *_loadBlock;
    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addRemoteView;
-(void)_didFinishWithResult:(id)arg0 error:(id)arg1 ;
-(void)_didLoadWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_dismissProductPageViewController;
-(void)_prepareToLoadWithCompletionBlock:(id)arg0 ;
-(void)_requestRemoteViewController;
-(void)_showProductPageWithItemIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)loadPageWithURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadPageWithURLBagKey:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadView;
-(void)productViewControllerDidFinish:(id)arg0 ;


@end


#endif