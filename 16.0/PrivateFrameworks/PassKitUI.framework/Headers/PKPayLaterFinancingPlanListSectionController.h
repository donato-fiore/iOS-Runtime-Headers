// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANLISTSECTIONCONTROLLER_H
#define PKPAYLATERFINANCINGPLANLISTSECTIONCONTROLLER_H

@class NSArray, NSMutableDictionary, NSNumberFormatter;
@protocol PKPayLaterFinancingPlanListSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPaymentTransactionIconGenerator.h"
#import "PKPayLaterFinancingPlanListViewControllerConfiguration.h"

@interface PKPayLaterFinancingPlanListSectionController : PKPayLaterSectionController {
    NSArray *_financingPlans;
    NSArray *_completedFinancingPlans;
    NSArray *_sortedFinancingPlanIdentifiers;
    NSMutableDictionary *_financingPlanRows;
    NSMutableDictionary *_icons;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKPayLaterFinancingPlanListViewControllerConfiguration *_configuration;
    id<PKPayLaterFinancingPlanListSectionControllerDelegate> *_delegate;
    NSNumberFormatter *_numberFormatter;
}




-(id)_createFinancingPlanRowForPlan:(id)arg0 rowIndex:(NSInteger)arg1 ;
-(id)_createIconTextRowForPlan:(id)arg0 ;
-(id)identifiers;
-(id)initWithPayLaterAccount:(id)arg0 financingPlans:(id)arg1 configuration:(id)arg2 dynamicContentPage:(id)arg3 delegate:(id)arg4 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureCompletedFinancingPlansSection:(id)arg0 ;
-(void)_configureFinancingPlansSection:(id)arg0 ;
-(void)_showTopicExplanationForRow:(id)arg0 topic:(id)arg1 financingPlan:(id)arg2 continueBlock:(id)arg3 ;
-(void)_updateIconForFinancingPlan:(id)arg0 row:(id)arg1 ;


@end


#endif