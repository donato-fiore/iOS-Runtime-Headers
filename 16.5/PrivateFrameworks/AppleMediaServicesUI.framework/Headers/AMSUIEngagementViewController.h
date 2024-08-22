// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIENGAGEMENTVIEWCONTROLLER_H
#define AMSUIENGAGEMENTVIEWCONTROLLER_H

@class UIViewController, AMSProcessInfo, NSString, AMSPromise, AMSEngagementRequest;
@protocol AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer, AMSBagProtocol, AMSUIEngagementViewControllerDelegate;


#import "AMSUICommonViewController.h"

@interface AMSUIEngagementViewController : AMSUICommonViewController <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) UIViewController *childController; // ivar: _childController
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIEngagementViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSPromise *loadVCPromise; // ivar: _loadVCPromise
@property (readonly, nonatomic) AMSEngagementRequest *request; // ivar: _request
@property (nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(BOOL)_isURLTrusted:(id)arg0 inDomains:(id)arg1 ;
-(BOOL)dynamicViewControllerShouldDismiss:(id)arg0 ;
-(NSInteger)_modalPresentationStyle;
-(id)_isOriginatingURLTrusted;
-(id)_preloadChildVC;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 delegate:(id)arg2 ;
-(void)_dismiss;
-(void)_receivedCarrierLinkResult:(id)arg0 ;
-(void)_receivedPurchaseResult:(id)arg0 ;
-(void)_setup;
-(void)_setupContentSize;
-(void)_startEngagement;
-(void)_updateChildViewController:(id)arg0 ;
-(void)dynamicViewController:(id)arg0 didFinishCarrierLinkingWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 ;
-(void)loadView;
-(void)resolveWithResult:(id)arg0 error:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)webViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)webViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 completion:(id)arg3 ;


@end


#endif