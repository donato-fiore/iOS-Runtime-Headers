// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPERFORMACTIONSELECTITEMCELL_H
#define PKPERFORMACTIONSELECTITEMCELL_H

@class UITableViewCell, UILabel, NSString;



@interface PKPerformActionSelectItemCell : UITableViewCell {
    UILabel *_descriptionLabel;
    UILabel *_amountLabel;
}


@property (copy, nonatomic) NSString *amountText; // ivar: _amountText
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addSubviews;
-(void)layoutSubviews;


@end


#endif