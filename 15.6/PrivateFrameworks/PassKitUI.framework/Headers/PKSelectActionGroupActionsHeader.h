// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSELECTACTIONGROUPACTIONSHEADER_H
#define PKSELECTACTIONGROUPACTIONSHEADER_H

@class UIView, UILabel, NSString;



@interface PKSelectActionGroupActionsHeader : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif