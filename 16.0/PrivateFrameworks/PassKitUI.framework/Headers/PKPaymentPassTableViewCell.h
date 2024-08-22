// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSTABLEVIEWCELL_H
#define PKPAYMENTPASSTABLEVIEWCELL_H

@class UILabel, UIView, UIColor, PKPaymentPass, PKPeerPaymentAccount, PKTransitBalanceModel;


#import "PKTableViewCell.h"

@interface PKPaymentPassTableViewCell : PKTableViewCell {
    UILabel *_mainLabel;
    UILabel *_subTextLabel;
    UIView *_cardSnapshotView;
}


@property (retain, nonatomic) UIColor *disabledMainLabelColor; // ivar: _disabledMainLabelColor
@property (retain, nonatomic) UIColor *disabledSubTextLabelColor; // ivar: _disabledSubTextLabelColor
@property (retain, nonatomic) UIColor *mainLabelColor; // ivar: _mainLabelColor
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (retain, nonatomic) UIColor *subTextLabelColor; // ivar: _subTextLabelColor
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel; // ivar: _transitBalanceModel


+(CGFloat)heightForCellWithMinimum:(CGFloat)arg0 hasSubTitle:(BOOL)arg1 ;
+(id)subTitleFont;
+(id)titleFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateLabelText;
-(void)_updateLabelTextColors;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif