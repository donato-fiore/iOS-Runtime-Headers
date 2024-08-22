// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONRECEIPTLINEITEMTABLEVIEWCELL_H
#define PKTRANSACTIONRECEIPTLINEITEMTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel, NSString, UIImage;



@interface PKTransactionReceiptLineItemTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_amountLabel;
}


@property (copy, nonatomic) NSString *amountText; // ivar: _amountText
@property (nonatomic) BOOL hasTrailingLineSeparator; // ivar: _hasTrailingLineSeparator
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (nonatomic) BOOL suppressImage; // ivar: _suppressImage
@property (copy, nonatomic) NSString *tertiaryText; // ivar: _tertiaryText


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif