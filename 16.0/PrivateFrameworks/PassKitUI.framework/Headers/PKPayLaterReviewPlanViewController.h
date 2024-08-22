// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERREVIEWPLANVIEWCONTROLLER_H
#define PKPAYLATERREVIEWPLANVIEWCONTROLLER_H

@class PKPaymentPass, PKPayLaterFinancingOption, NSString;
@protocol PKPayLaterReviewPlanSectionControllerDelegate, PKPayLaterSectionControllerDelegate;


#import "PKPayLaterSetupViewController.h"
#import "PKPayLaterReviewPlanSectionController.h"

@interface PKPayLaterReviewPlanViewController : PKPayLaterSetupViewController <PKPayLaterReviewPlanSectionControllerDelegate, PKPayLaterSectionControllerDelegate>

 {
    PKPaymentPass *_selectedFundingSource;
    PKPayLaterReviewPlanSectionController *_sectionController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSetupFlowController:(id)arg0 ;
-(id)pageTag;
-(void)_createDockView;
-(void)nextButtonTapped;
-(void)viewDidLoad;


@end


#endif