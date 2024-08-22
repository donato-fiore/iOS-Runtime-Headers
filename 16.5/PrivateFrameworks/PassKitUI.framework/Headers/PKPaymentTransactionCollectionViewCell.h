// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONCOLLECTIONVIEWCELL_H
#define PKPAYMENTTRANSACTIONCOLLECTIONVIEWCELL_H

@class NSString;
@protocol PKPaymentTransactionCellResponder;


#import "PKDashboardCollectionViewCell.h"
#import "PKPaymentTransactionView.h"

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell <PKPaymentTransactionCellResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTransactionView *transactionView; // ivar: _transactionView


-(CGFloat)maxWidthForTransactionCellInWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif