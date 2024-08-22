// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBWRAPPERVIEWCONTROLLER_H
#define AMSUIWEBWRAPPERVIEWCONTROLLER_H

@class NSString;
@protocol AMSUIWebPagePresenter, AMSUIWebDelegate;


#import "AMSUIWebViewController.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebWrapperViewController : AMSUIWebViewController <AMSUIWebPagePresenter, AMSUIWebDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSUIWebClientContext *wrapperContext; // ivar: _wrapperContext


-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(id)initWithContext:(id)arg0 ;
-(void)webViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)webViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)webViewController:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)webViewController:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)willPresentPageModel:(id)arg0 appearance:(id)arg1 ;


@end


#endif