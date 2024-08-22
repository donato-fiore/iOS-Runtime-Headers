// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERDISPUTEEXPLANATIONSECTIONCONTROLLER_H
#define PKPAYLATERDISPUTEEXPLANATIONSECTIONCONTROLLER_H

@class PKPayLaterFinancingPlan, UIImageSymbolConfiguration;


#import "PKPayLaterSectionController.h"

@interface PKPayLaterDisputeExplanationSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan *_financingPlan;
    UIImageSymbolConfiguration *_iconFontConfiguration;
    CGFloat _maxIconWidth;
    NSUInteger _layout;
}




-(Class)headerViewClassForSectionIdentifier:(id)arg0 ;
-(id)_firstSectionIdentifier;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 layout:(NSUInteger)arg2 dynamicContentPage:(id)arg3 viewControllerDelegate:(id)arg4 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureDynamicSection:(id)arg0 snapshot:(id)arg1 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)configureHeaderView:(id)arg0 forSectionIdentifier:(id)arg1 ;


@end


#endif