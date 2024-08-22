// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSACTIVATIONFLOWWITHSIMSETUPFLOW_H
#define TSACTIVATIONFLOWWITHSIMSETUPFLOW_H

@class NSError, NSMutableArray, CTDisplayPlanList, NSString, UIBarButtonItem, UIViewController<TSSetupFlowItem>;
@protocol TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate, OS_dispatch_group;


#import "TSSIMSetupFlow.h"

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate>

 {
    BOOL _requireSetup;
    BOOL _confirmationCodeRequired;
    BOOL _isTransferCapable;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapabilityLoss;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSMutableArray *_transferItems;
    CTDisplayPlanList *_pendingInstallPlans;
    NSString *_name;
    NSUInteger _userConsentType;
    UIBarButtonItem *_cancelButton;
    NSInteger _signupConsentResponse;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    NSObject<OS_dispatch_group> *_queryGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isPreinstallingViewControllerActive; // ivar: _isPreinstallingViewControllerActive
@property (readonly) Class superclass;


-(NSInteger)signupUserConsentResponse;
-(id)_createViewController:(id)arg0 ;
-(id)firstViewController;
-(id)initRequireSetup:(BOOL)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_maybeShowPreinstallConsentOnViewController:(id)arg0 planItems:(id)arg1 ;
-(void)_requestPendingInstallItemsWithCompletion:(id)arg0 ;
-(void)_requestPlansWithCompletion:(id)arg0 ;
-(void)_requestTransferPlanListWithCompletion:(id)arg0 ;
-(void)_userDidTapCancel;
-(void)accountCancelled;
-(void)accountPendingRelease;
-(void)dealloc;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 alternateSDMP:(id)arg4 state:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 srcIccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6 ;
-(void)firstViewController:(id)arg0 ;
-(void)planItemsUpdated:(id)arg0 planListError:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif