// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONLOCATIONTABLEVIEWCELL_H
#define PKPAYMENTTRANSACTIONLOCATIONTABLEVIEWCELL_H

@class UILabel, UIImageView, PKPaymentTransaction;


#import "PKTableViewCell.h"
#import "PKTransactionMapView.h"

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {
    UILabel *_titleLabel;
    PKTransactionMapView *_mapView;
    UIImageView *_disclosureView;
}


@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (nonatomic) BOOL usesDarkMapAppearance;


-(BOOL)_shouldShowDisclosureIndicator;
-(id)_disclosureView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setTitleLabelColor:(id)arg0 ;


@end


#endif