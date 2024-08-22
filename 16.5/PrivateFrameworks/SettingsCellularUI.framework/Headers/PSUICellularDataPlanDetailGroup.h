// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARDATAPLANDETAILGROUP_H
#define PSUICELLULARDATAPLANDETAILGROUP_H

@class TSSIMSetupFlow, NSString, PSSpecifier, PSListController;
@protocol TSSIMSetupDelegate, PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUICellularDataPlanDetailGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup>

 {
    TSSIMSetupFlow *_flow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly) Class superclass;


+(id)accountManageButtonForPlanItem:(id)arg0 target:(id)arg1 ;
+(id)specifiersFromCellularPlanItem:(id)arg0 target:(id)arg1 ;
+(void)configurePlanSpecifiers:(id)arg0 planItem:(id)arg1 target:(id)arg2 ;
-(BOOL)isFlowRunning;
-(id)getLogger;
-(id)getPlanCellDataNumber:(id)arg0 ;
-(id)getPlanDetailedStatus:(id)arg0 ;
-(id)getPlanExpireDate:(id)arg0 ;
-(id)getPlanPurchaseDate:(id)arg0 ;
-(id)getPlanStatus:(id)arg0 ;
-(id)getPlanStatusDataOnly:(id)arg0 ;
-(id)getPlanStatusDate:(id)arg0 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)lastUpdatedText;
-(id)localizedManageAccountAlertTitle:(id)arg0 ;
-(id)removeCellularPlanConfirmationMessage:(id)arg0 ;
-(id)removeCellularPlanConfirmationTitle:(id)arg0 ;
-(id)specifiers;
-(void)handleAccountSettingsTapped:(id)arg0 ;
-(void)handleRemovePlanTapped:(id)arg0 ;
-(void)managePlanPressed:(id)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;


@end


#endif