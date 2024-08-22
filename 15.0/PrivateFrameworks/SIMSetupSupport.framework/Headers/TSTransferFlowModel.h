// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTRANSFERFLOWMODEL_H
#define TSTRANSFERFLOWMODEL_H

@class CTDisplayPlanList, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSTransferFlowModel : NSObject {
    BOOL _areTransferPlansReady;
    BOOL _hasPendingInstallPlansQueried;
    BOOL _isBootstrapTriggerred;
    BOOL _isProximityFlow;
}


@property (nonatomic) BOOL isActivationPolicyMismatch; // ivar: _isActivationPolicyMismatch
@property (nonatomic) BOOL isDualeSIMCapablityLoss; // ivar: _isDualeSIMCapablityLoss
@property (retain, nonatomic) CTDisplayPlanList *pendingInstallItems; // ivar: _pendingInstallItems
@property (nonatomic) BOOL showTransferredPane; // ivar: _showTransferredPane
@property (retain, nonatomic) NSMutableArray *transferItems; // ivar: _transferItems


+(id)sharedInstance;
-(BOOL)shouldShowTransferredPane;
-(void)arePlansAvailable:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(void)bootstrap:(id)arg0 completion:(id)arg1 ;
-(void)filterTransferPlans:(id)arg0 ;
-(void)requestPendingInstallPlans:(id)arg0 ;
-(void)requestPlans:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(void)requestTransferPlans:(id)arg0 ;


@end


#endif