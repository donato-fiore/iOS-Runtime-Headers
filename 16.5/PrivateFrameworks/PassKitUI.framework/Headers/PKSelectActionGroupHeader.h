// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTACTIONGROUPHEADER_H
#define PKSELECTACTIONGROUPHEADER_H

@class UIView, UILabel, NSString;



@interface PKSelectActionGroupHeader : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif