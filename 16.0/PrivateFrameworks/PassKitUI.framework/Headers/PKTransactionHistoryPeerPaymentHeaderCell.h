// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONHISTORYPEERPAYMENTHEADERCELL_H
#define PKTRANSACTIONHISTORYPEERPAYMENTHEADERCELL_H



#import "PKDashboardCollectionViewCell.h"
#import "PKAvatarHeaderView.h"

@interface PKTransactionHistoryPeerPaymentHeaderCell : PKDashboardCollectionViewCell {
    PKAvatarHeaderView *_headerView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureWithPeerPaymentCounterpartHandle:(id)arg0 contact:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif