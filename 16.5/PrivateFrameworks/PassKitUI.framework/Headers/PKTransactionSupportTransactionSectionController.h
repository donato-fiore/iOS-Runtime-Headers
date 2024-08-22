// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONSUPPORTTRANSACTIONSECTIONCONTROLLER_H
#define PKTRANSACTIONSUPPORTTRANSACTIONSECTIONCONTROLLER_H

@class UICollectionView;


#import "PKPaymentSetupListSectionController.h"
#import "PKDashboardPaymentTransactionItem.h"
#import "PKDashboardPaymentTransactionItemPresenter.h"

@interface PKTransactionSupportTransactionSectionController : PKPaymentSetupListSectionController {
    PKDashboardPaymentTransactionItem *_transactionItem;
    PKDashboardPaymentTransactionItemPresenter *_transactionItemPresenter;
    UICollectionView *_collectionView;
}




-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)initWithTransactionItem:(id)arg0 transactionItemPresenter:(id)arg1 collectionView:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_decorateCell:(id)arg0 forRowItem:(id)arg1 atIndexPath:(id)arg2 ;


@end


#endif