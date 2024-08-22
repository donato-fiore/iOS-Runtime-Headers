// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIPLANPENDINGTRANSFERACTIVATIONBUTTONSPECIFIER_H
#define PSUIPLANPENDINGTRANSFERACTIVATIONBUTTONSPECIFIER_H

@class PSSpecifier, CTCellularPlanManager, CTCellularPlanPendingTransfer;



@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier

@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // ivar: _cellularPlanManager
@property (retain, nonatomic) CTCellularPlanPendingTransfer *plan; // ivar: _plan


-(id)initWithListController:(id)arg0 planPendingTransfer:(id)arg1 ;
-(void)activatePlanPendingTransfer:(id)arg0 ;
-(void)setSpecifierProperties;


@end


#endif