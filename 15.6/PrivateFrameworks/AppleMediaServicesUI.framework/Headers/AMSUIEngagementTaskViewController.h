// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIENGAGEMENTTASKVIEWCONTROLLER_H
#define AMSUIENGAGEMENTTASKVIEWCONTROLLER_H

@class UIViewController, AMSPromise, AMSProcessInfo, NSString, NSError, AMSEngagementRequest, AMSEngagementResult;
@protocol AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate, AMSBagConsumer, AMSBagProtocol;


#import "AMSUICommonViewController.h"

@interface AMSUIEngagementTaskViewController : AMSUICommonViewController <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate, AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) UIViewController *childController; // ivar: _childController
@property (retain, nonatomic) AMSPromise *childPromise; // ivar: _childPromise
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissBlock; // ivar: _dismissBlock
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresDismissDetection; // ivar: _ignoresDismissDetection
@property (nonatomic) BOOL presented; // ivar: _presented
@property (retain, nonatomic) AMSEngagementRequest *request; // ivar: _request
@property (retain, nonatomic) AMSEngagementResult *result; // ivar: _result
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(BOOL)_isURLTrusted:(id)arg0 inDomains:(id)arg1 ;
-(BOOL)dynamicViewControllerShouldDismiss:(id)arg0 ;
-(NSInteger)_modalPresentationStyle;
-(id)_isOriginatingURLTrusted;
-(id)_preloadChild;
-(id)_viewControllerForType:(id)arg0 ;
-(id)canPresent;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)startEngagement;
-(void)_finishWithResultInfo:(id)arg0 error:(id)arg1 ;
-(void)_receivedPurchaseResult:(id)arg0 ;
-(void)_setup;
-(void)_setupContentSize;
-(void)_updateChildViewController:(id)arg0 ;
-(void)dealloc;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 ;
-(void)loadView;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)webViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)webViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 completion:(id)arg3 ;


@end


#endif