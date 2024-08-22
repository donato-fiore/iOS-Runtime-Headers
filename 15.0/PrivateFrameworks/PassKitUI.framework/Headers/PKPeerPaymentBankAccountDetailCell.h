// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTBANKACCOUNTDETAILCELL_H
#define PKPEERPAYMENTBANKACCOUNTDETAILCELL_H

@class UITableViewCell;



@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell

@property (nonatomic) CGFloat minimumTextLabelWidth; // ivar: _minimumTextLabelWidth
@property (nonatomic) BOOL shouldDrawFullWidthSeperator; // ivar: _shouldDrawFullWidthSeperator
@property (nonatomic) BOOL shouldDrawSeperator; // ivar: _shouldDrawSeperator


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )_separatorFrame;
-(void)layoutSubviews;


@end


#endif