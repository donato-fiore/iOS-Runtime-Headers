// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONSUPPORTSTATEMENTNAMESECTIONCONTROLLER_H
#define PKTRANSACTIONSUPPORTSTATEMENTNAMESECTIONCONTROLLER_H

@class NSString;


#import "PKPaymentSetupListSectionController.h"

@interface PKTransactionSupportStatementNameSectionController : PKPaymentSetupListSectionController {
    NSString *_merchantStatementName;
}




-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)_decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)initWithMerchantStatementName:(id)arg0 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;


@end


#endif