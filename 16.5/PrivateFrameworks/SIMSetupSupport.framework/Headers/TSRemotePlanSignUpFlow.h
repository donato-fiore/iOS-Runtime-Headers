// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSREMOTEPLANSIGNUPFLOW_H
#define TSREMOTEPLANSIGNUPFLOW_H

@class CoreTelephonyClient, NSString;
@protocol TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate;


#import "TSSIMSetupFlow.h"
#import "TSRemotePlanWebsheetContext.h"

@interface TSRemotePlanSignUpFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate>

 {
    CoreTelephonyClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) TSRemotePlanWebsheetContext *remotePlanWebsheetContext; // ivar: _remotePlanWebsheetContext
@property (readonly) Class superclass;


-(id)firstViewController;
-(id)initWithRemotePlanWebsheetContext:(id)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)accountCancelled;
-(void)accountPendingRelease;
-(void)appBackgrounded;
-(void)appForegrounded;
-(void)dealloc;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 alternateSDMP:(id)arg4 state:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 srcIccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6 ;
-(void)firstViewController:(id)arg0 ;


@end


#endif