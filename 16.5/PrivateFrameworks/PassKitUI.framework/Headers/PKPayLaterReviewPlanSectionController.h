// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERREVIEWPLANSECTIONCONTROLLER_H
#define PKPAYLATERREVIEWPLANSECTIONCONTROLLER_H

@class PKPayLaterFinancingOption;
@protocol PKPayLaterReviewPlanSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPayLaterReviewPlanSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingOption *_financingOption;
    id<PKPayLaterReviewPlanSectionControllerDelegate> *_delegate;
    PKPayLaterSetupFlowController *_setupController;
    BOOL _useDynamicContent;
}




-(id)identifiers;
-(id)initWithSetupFlowController:(id)arg0 dynamicContentPage:(id)arg1 financingOption:(id)arg2 delegate:(id)arg3 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureDynamicSection:(id)arg0 snapshot:(id)arg1 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)didTapHyperLink:(id)arg0 ;


@end


#endif