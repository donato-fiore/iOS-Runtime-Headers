// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICELLULARDATAPLANDETAILGROUP_H
#define PSUICELLULARDATAPLANDETAILGROUP_H

@class NSString, PSSpecifier, PSListController;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUICellularDataPlanDetailGroup : NSObject <PSSpecifierGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly) Class superclass;


+(id)accountManageButtonForPlanItem:(id)arg0 target:(id)arg1 ;
+(id)specifiersFromCellularPlanItem:(id)arg0 target:(id)arg1 ;
+(void)configurePlanSpecifiers:(id)arg0 planItem:(id)arg1 target:(id)arg2 ;
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
-(void)managePlanPressed:(id)arg0 ;


@end


#endif