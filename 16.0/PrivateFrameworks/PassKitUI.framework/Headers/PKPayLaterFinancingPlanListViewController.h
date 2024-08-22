// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANLISTVIEWCONTROLLER_H
#define PKPAYLATERFINANCINGPLANLISTVIEWCONTROLLER_H

@class NSString;
@protocol PKPayLaterFinancingPlanListSectionControllerDelegate;


#import "PKPayLaterViewController.h"
#import "PKPayLaterFinancingPlanListViewControllerConfiguration.h"
#import "PKPayLaterFinancingPlanListSectionController.h"
#import "PKBusinessChatController.h"

@interface PKPayLaterFinancingPlanListViewController : PKPayLaterViewController <PKPayLaterFinancingPlanListSectionControllerDelegate>

 {
    PKPayLaterFinancingPlanListViewControllerConfiguration *_configuration;
    PKPayLaterFinancingPlanListSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)additionalAnalyticsDictionary;
-(id)initWithPayLaterAccount:(id)arg0 financingPlans:(id)arg1 configuration:(id)arg2 ;
-(id)pageTag;
-(void)openBusinessChatForTopic:(id)arg0 financingPlan:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif