// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPICSSECTIONCONTROLLER_H
#define PKACCOUNTSUPPORTTOPICSSECTIONCONTROLLER_H

@class PKAccount, NSArray, NSString;
@protocol PKAccountSupportTopicsSectionControllerDelegate;


#import "PKPaymentSetupListSectionController.h"

@interface PKAccountSupportTopicsSectionController : PKPaymentSetupListSectionController {
    id<PKAccountSupportTopicsSectionControllerDelegate> *_delegate;
    PKAccount *_account;
    NSArray *_topics;
    NSString *_sectionTitle;
}




-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)initWithAccount:(id)arg0 topics:(id)arg1 sectionTitle:(id)arg2 delegate:(id)arg3 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif