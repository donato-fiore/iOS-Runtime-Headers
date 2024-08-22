// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANCOSTVIEWCONTROLLER_H
#define PKPAYLATERFINANCINGPLANCOSTVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan;


#import "PKPayLaterViewController.h"
#import "PKPayLaterFinancingPlanCostSectionController.h"

@interface PKPayLaterFinancingPlanCostViewController : PKPayLaterViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterFinancingPlanCostSectionController *_sectionController;
}




-(id)additionalAnalyticsDictionary;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 ;
-(id)pageTag;
-(void)didUpdateFinancingPlan:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif