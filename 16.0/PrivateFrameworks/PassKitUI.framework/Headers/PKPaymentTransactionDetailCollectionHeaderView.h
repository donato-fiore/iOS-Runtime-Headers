// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONDETAILCOLLECTIONHEADERVIEW_H
#define PKPAYMENTTRANSACTIONDETAILCOLLECTIONHEADERVIEW_H

@class UICollectionViewListCell;


#import "PKPaymentTransactionDetailHeaderView.h"

@interface PKPaymentTransactionDetailCollectionHeaderView : UICollectionViewListCell {
    PKPaymentTransactionDetailHeaderView *_headerView;
}


@property (readonly, nonatomic) PKPaymentTransactionDetailHeaderView *headerView;


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif