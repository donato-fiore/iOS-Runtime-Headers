// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSACTIVATIONFLOWWITHSIMSETUPFLOW_H
#define TSACTIVATIONFLOWWITHSIMSETUPFLOW_H

@class NSError, NSMutableArray, CTDisplayPlanList, NSString, NSDictionary, UIBarButtonItem, CoreTelephonyClient;
@protocol TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate, OS_dispatch_group;


#import "TSSIMSetupFlow.h"

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate>

 {
    BOOL _confirmationCodeRequired;
    BOOL _isTransferCapable;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapabilityLoss;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSMutableArray *_transferItems;
    CTDisplayPlanList *_pendingInstallPlans;
    CTDisplayPlanList *_carrierSetupItems;
    NSString *_name;
    NSString *_carrierSetupUrl;
    NSDictionary *_carrierSetupPostData;
    NSUInteger _userConsentType;
    UIBarButtonItem *_cancelButton;
    CoreTelephonyClient *_client;
    NSInteger _signupConsentResponse;
    NSObject<OS_dispatch_group> *_queryGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isPreinstallingViewControllerActive; // ivar: _isPreinstallingViewControllerActive
@property BOOL requireSetup; // ivar: _requireSetup
@property (readonly) Class superclass;
@property (retain) id *transferBackPlan; // ivar: _transferBackPlan
@property (retain) NSString *transferBackPlanPhoneNumber; // ivar: _transferBackPlanPhoneNumber


-(NSInteger)signupUserConsentResponse;
-(id)_createFirstViewController:(id)arg0 ;
-(id)firstViewController;
-(id)initRequireSetup:(BOOL)arg0 transferBackPlan:(id)arg1 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_filterCarrierSetupItems:(id)arg0 ;
-(void)_maybeShowPreinstallConsentOnViewController:(id)arg0 planItems:(id)arg1 ;
-(void)_requestCarrierSetupsWithCompletion:(id)arg0 ;
-(void)_requestPendingInstallItemsWithCompletion:(id)arg0 ;
-(void)_requestPlansWithCompletion:(id)arg0 ;
-(void)_requestTransferPlanListWithCompletion:(id)arg0 ;
-(void)_sendSIMSetupReadyNotification;
-(void)_userDidTapCancel;
-(void)accountCancelled;
-(void)accountPendingRelease;
-(void)dealloc;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 alternateSDMP:(id)arg4 state:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 srcIccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6 ;
-(void)firstViewController:(id)arg0 ;
-(void)getWebsheetInfo:(id)arg0 completion:(id)arg1 ;
-(void)planItemsUpdated:(id)arg0 planListError:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)startOverWithFirstViewController:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif