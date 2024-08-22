// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPPRODUCTCELL_H
#define PKPAYMENTSETUPPRODUCTCELL_H

@class PKPaymentSetupProduct;


#import "PKTableViewCell.h"

@interface PKPaymentSetupProductCell : PKTableViewCell

@property (nonatomic) BOOL drawsTopSeperator; // ivar: _drawsTopSeperator
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (nonatomic) CGFloat textLabelOffset; // ivar: _textLabelOffset


+(id)reuseIdentifier;
-(id)init;
-(id)pk_childrenForAppearance;
-(void)_updateDisplay;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;


@end


#endif