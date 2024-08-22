// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPAYMENTSCHEDULEVIEWCONTROLLER_H
#define PKPAYLATERPAYMENTSCHEDULEVIEWCONTROLLER_H

@class PKPayLaterFinancingOption, NSString;
@protocol PKPayLaterPaymentScheduleSectionControllerDelegate, PKPayLaterSectionControllerDelegate;


#import "PKPayLaterSetupViewController.h"
#import "PKPayLaterPaymentScheduleSectionController.h"

@interface PKPayLaterPaymentScheduleViewController : PKPayLaterSetupViewController <PKPayLaterPaymentScheduleSectionControllerDelegate, PKPayLaterSectionControllerDelegate>

 {
    PKPayLaterPaymentScheduleSectionController *_sectionController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
    NSInteger _setupFlowControllerContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSetupFlowController:(id)arg0 dynamicContentPageType:(NSUInteger)arg1 ;
-(id)pageTag;
-(void)nextButtonTapped;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif