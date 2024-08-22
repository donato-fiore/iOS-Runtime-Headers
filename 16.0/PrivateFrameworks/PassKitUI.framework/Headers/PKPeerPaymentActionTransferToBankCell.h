// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTACTIONTRANSFERTOBANKCELL_H
#define PKPEERPAYMENTACTIONTRANSFERTOBANKCELL_H

@class UITableViewCell, UILabel, UIImageView, NSString;



@interface PKPeerPaymentActionTransferToBankCell : UITableViewCell {
    BOOL _isRTL;
    UILabel *_feeLabel;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_checkmarkImageView;
}


@property (copy, nonatomic) NSString *feeText; // ivar: _feeText
@property (nonatomic) BOOL showCheckmark; // ivar: _showCheckmark
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif