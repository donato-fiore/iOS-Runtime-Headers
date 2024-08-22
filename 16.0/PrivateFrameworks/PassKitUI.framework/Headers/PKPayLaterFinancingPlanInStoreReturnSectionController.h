// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANINSTORERETURNSECTIONCONTROLLER_H
#define PKPAYLATERFINANCINGPLANINSTORERETURNSECTIONCONTROLLER_H

@class PKPayLaterFinancingPlan;


#import "PKPayLaterSectionController.h"

@interface PKPayLaterFinancingPlanInStoreReturnSectionController : PKPayLaterSectionController

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan


-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 delegate:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureCardNumberSection:(id)arg0 ;


@end


#endif