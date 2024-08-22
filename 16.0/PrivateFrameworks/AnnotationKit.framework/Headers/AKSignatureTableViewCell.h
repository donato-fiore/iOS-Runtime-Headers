// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKSIGNATURETABLEVIEWCELL_H
#define AKSIGNATURETABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel;


#import "AKSignature.h"

@interface AKSignatureTableViewCell : UITableViewCell

@property (retain, nonatomic) AKSignature *signature; // ivar: _signature
@property (retain, nonatomic) UIImageView *signatureImageView; // ivar: _signatureImageView
@property (retain, nonatomic) UILabel *signatureLabel; // ivar: _signatureLabel


-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_commonInit;
-(void)_setImageFromSignature;
-(void)_setLabelFromSignature;
-(void)layoutSubviews;


@end


#endif