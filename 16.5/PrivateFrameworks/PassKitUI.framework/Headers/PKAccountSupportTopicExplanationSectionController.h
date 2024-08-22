// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPICEXPLANATIONSECTIONCONTROLLER_H
#define PKACCOUNTSUPPORTTOPICEXPLANATIONSECTIONCONTROLLER_H

@class NSArray;
@protocol PKAccountSupportTopicExplanationSectionControllerDelegate;


#import "PKPaymentSetupListSectionController.h"

@interface PKAccountSupportTopicExplanationSectionController : PKPaymentSetupListSectionController {
    id<PKAccountSupportTopicExplanationSectionControllerDelegate> *_delegate;
    NSArray *_items;
}




-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)_decorateListCell:(id)arg0 forExplanationLink:(id)arg1 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)initWithExplanation:(id)arg0 delegate:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif