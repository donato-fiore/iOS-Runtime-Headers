// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTSECTIONCONTROLLER_H
#define PKACCOUNTSUPPORTSECTIONCONTROLLER_H

@class PKAccount;


#import "PKPaymentSetupListSectionController.h"

@interface PKAccountSupportSectionController : PKPaymentSetupListSectionController {
    PKAccount *_account;
}




-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)_decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(id)initWithAccount:(id)arg0 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;


@end


#endif