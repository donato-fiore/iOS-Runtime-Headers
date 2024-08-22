// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONTABLECELL_H
#define PKPAYMENTTRANSACTIONTABLECELL_H

@class NSString, UIColor;
@protocol PKPaymentTransactionCellResponder;


#import "PKTableViewCell.h"
#import "PKPaymentTransactionView.h"

@interface PKPaymentTransactionTableCell : PKTableViewCell <PKPaymentTransactionCellResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTransactionView *transactionView; // ivar: _transactionView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif