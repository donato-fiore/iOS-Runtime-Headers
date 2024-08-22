// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIREMOVECELLULARPLANSPECIFIER_H
#define PSUIREMOVECELLULARPLANSPECIFIER_H

@class PSConfirmationSpecifier, CTCellularPlanManager, PSListController;


#import "PSUICellularPlanManagerCache.h"
#import "PSUICellularPlanUniversalReference.h"

@interface PSUIRemoveCellularPlanSpecifier : PSConfirmationSpecifier

@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // ivar: _cellularPlanManager
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // ivar: _planReference
@property (nonatomic) BOOL popViewControllerOnPlanDeletion; // ivar: _popViewControllerOnPlanDeletion


-(id)initWithPlanUniversalReference:(id)arg0 cellularPlanManager:(id)arg1 planManagerCache:(id)arg2 hostController:(id)arg3 popViewControllerOnPlanDeletion:(BOOL)arg4 ;
-(void)alignLeft;
-(void)removeCellularPlan:(id)arg0 ;
-(void)removeCellularPlanConfirmed:(id)arg0 ;


@end


#endif