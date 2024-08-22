// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANINSTORERETURNSECTIONCONTROLLER_H
#define PKPAYLATERFINANCINGPLANINSTORERETURNSECTIONCONTROLLER_H

@class NSDictionary, PKPayLaterFinancingPlan;


#import "PKPayLaterSectionController.h"

@interface PKPayLaterFinancingPlanInStoreReturnSectionController : PKPayLaterSectionController {
    CGFloat _maxIconWidth;
    NSDictionary *_sectionIcons;
}


@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan


-(id)_iconTitleDetailRowForSectionIdentifier:(id)arg0 title:(id)arg1 detail:(id)arg2 ;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 delegate:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureLearnMoreSection:(id)arg0 ;
-(void)_configurePANSection:(id)arg0 ;
-(void)_configureStoreCreditSection:(id)arg0 ;
-(void)_configureTappingPaymentMethodSection:(id)arg0 ;


@end


#endif