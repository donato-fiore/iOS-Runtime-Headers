// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCARRIERSIGNUPFLOW_H
#define TSCARRIERSIGNUPFLOW_H

@class CoreTelephonyClient, CTPlan, NSDictionary, NSString;
@protocol TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate;


#import "TSSIMSetupFlow.h"
#import "TSBuddyMLController.h"

@interface TSCarrierSignupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate>

 {
    CoreTelephonyClient *_client;
    CTPlan *_plan;
    NSDictionary *_postdata;
    TSBuddyMLController *_buddyMLController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_handleCarrierInfoWithUrl:(id)arg0 postdata:(id)arg1 type:(id)arg2 error:(id)arg3 ;
-(id)initWithPlan:(id)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)dealloc;
-(void)didPurchasePlanSuccessfullyWithCarrier:(id)arg0 mnc:(id)arg1 gid1:(id)arg2 gid2:(id)arg3 state:(id)arg4 ;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 alternateSDMP:(id)arg4 state:(id)arg5 ;
-(void)showFirstViewControllerWithHostController:(id)arg0 completion:(id)arg1 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif