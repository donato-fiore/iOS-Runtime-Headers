// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTRANSFERFLOWMODEL_H
#define TSTRANSFERFLOWMODEL_H

@class CTDisplayPlanList, NSDictionary, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TSTransferFlowModel : NSObject {
    BOOL _areTransferPlansReady;
    BOOL _hasPendingInstallPlansQueried;
    BOOL _isBootstrapTriggerred;
    BOOL _isProximityFlow;
    BOOL _hasCarrierSetupItemsQueried;
}


@property (retain, nonatomic) CTDisplayPlanList *carrierSetupItems; // ivar: _carrierSetupItems
@property (nonatomic) BOOL isActivationPolicyMismatch; // ivar: _isActivationPolicyMismatch
@property (nonatomic) BOOL isDualeSIMCapablityLoss; // ivar: _isDualeSIMCapablityLoss
@property (nonatomic) BOOL isStandaloneProximityTransfer; // ivar: _isStandaloneProximityTransfer
@property (retain, nonatomic) CTDisplayPlanList *pendingInstallItems; // ivar: _pendingInstallItems
@property (retain, nonatomic) NSDictionary *postdata; // ivar: _postdata
@property (nonatomic) BOOL showTransferredPane; // ivar: _showTransferredPane
@property (retain) id *transferBackPlan; // ivar: _transferBackPlan
@property (retain, nonatomic) NSMutableArray *transferItems; // ivar: _transferItems
@property (retain, nonatomic) NSString *websheetUrl; // ivar: _websheetUrl


+(id)sharedInstance;
-(BOOL)arePlansRequested;
-(BOOL)shouldShowCarrierSetupPane;
-(BOOL)shouldShowTransferredPane;
-(id)initWithIsStandaloneProximityTransfer:(BOOL)arg0 transferBackPlan:(id)arg1 ;
-(void)arePlansAvailable:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(void)bootstrap:(id)arg0 completion:(id)arg1 ;
-(void)clearCache;
-(void)filterCarrierSetupItems:(id)arg0 ;
-(void)filterTransferPlans:(id)arg0 ;
-(void)getWebsheetInfo:(id)arg0 completion:(id)arg1 ;
-(void)requestCarrierSetups:(id)arg0 ;
-(void)requestPendingInstallPlans:(id)arg0 ;
-(void)requestPlans:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(void)requestTransferPlans:(id)arg0 ;


@end


#endif