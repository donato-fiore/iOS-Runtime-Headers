// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWEBSHEETSIGNUPFLOW_H
#define TSWEBSHEETSIGNUPFLOW_H

@class NSString, NSDictionary, UIViewController<TSSetupFlowItem>;
@protocol TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate, UINavigationControllerDelegate;


#import "TSSIMSetupFlow.h"

@interface TSWebsheetSignupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate, UINavigationControllerDelegate>

 {
    NSString *_websheetURL;
    NSDictionary *_postdata;
    NSUInteger _requestType;
    BOOL _skipIntroPaneForWebsheetFlow;
    UIViewController<TSSetupFlowItem> *_currentViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstViewController;
-(id)getWebsheetViewController;
-(id)initWithRequestType:(NSUInteger)arg0 skipIntroPaneForWebsheetFlow:(BOOL)arg1 websheetURL:(id)arg2 postdata:(id)arg3 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_createURLRequest:(id)arg0 ;
-(void)_showFailureAlert:(id)arg0 completion:(id)arg1 ;
-(void)accountCancelled;
-(void)accountPendingRelease;
-(void)didPurchasePlanSuccessfullyWithCarrier:(id)arg0 mnc:(id)arg1 gid1:(id)arg2 gid2:(id)arg3 state:(id)arg4 ;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 alternateSDMP:(id)arg4 state:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 srcIccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6 ;
-(void)firstViewController:(id)arg0 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif