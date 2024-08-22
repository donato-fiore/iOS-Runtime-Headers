// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTDATETABLEVIEWCELL_H
#define SKUIGIFTDATETABLEVIEWCELL_H

@class UITableViewCell, UIView, UIImageView, UILabel, NSString;



@interface SKUIGiftDateTableViewCell : UITableViewCell {
    UIView *_bottomBorderView;
    UIImageView *_checkmarkView;
    UILabel *_dateLabel;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}


@property (nonatomic, getter=isChecked) BOOL checked; // ivar: _checked
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight
@property (copy, nonatomic) NSString *placeholder;


-(id)_newLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif