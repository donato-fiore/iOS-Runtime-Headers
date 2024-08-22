// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFTFOOTERLABELTABLEVIEWCELL_H
#define SKUIGIFTFOOTERLABELTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSString;



@interface SKUIGiftFooterLabelTableViewCell : UITableViewCell {
    UILabel *_footerLabel;
}


@property (copy, nonatomic) NSString *footerLabel;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif