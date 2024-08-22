// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONMAPCOLLECTIONVIEWCELL_H
#define PKPAYMENTTRANSACTIONMAPCOLLECTIONVIEWCELL_H

@class UIImageView, UIActivityIndicatorView, UILabel;


#import "PKDashboardCollectionViewCell.h"
#import "PKDashboardTransactionMapItem.h"
#import "PKTransactionMapView.h"

@interface PKPaymentTransactionMapCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinner;
}


@property (retain, nonatomic) PKDashboardTransactionMapItem *item; // ivar: _item
@property (readonly, nonatomic) PKTransactionMapView *mapView; // ivar: _mapView
@property (nonatomic) BOOL showDisclosureIndicator; // ivar: _showDisclosureIndicator
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)maxWidthForTransactionCellInWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateSpinnerAndDisclosureIndicator;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif