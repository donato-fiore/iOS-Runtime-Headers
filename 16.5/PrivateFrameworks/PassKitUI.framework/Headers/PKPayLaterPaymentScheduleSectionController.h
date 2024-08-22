// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERPAYMENTSCHEDULESECTIONCONTROLLER_H
#define PKPAYLATERPAYMENTSCHEDULESECTIONCONTROLLER_H

@class PKPayLaterFinancingOption, NSDateFormatter;
@protocol PKPayLaterPaymentScheduleSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPayLaterPaymentScheduleSectionController : PKPayLaterSectionController {
    PKPayLaterSetupFlowController *_setupController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
    NSDateFormatter *_dateFormatter;
    id<PKPayLaterPaymentScheduleSectionControllerDelegate> *_delegate;
}




-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithSetupFlowController:(id)arg0 dynamicContentPage:(id)arg1 selectedFinancingOption:(id)arg2 delegate:(id)arg3 ;
-(id)listLayoutConfigurationWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configurePaymentsSectionSnapshot:(id)arg0 ;
-(void)_configureTotalAmountSection:(id)arg0 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)didTapHyperLink:(id)arg0 ;


@end


#endif