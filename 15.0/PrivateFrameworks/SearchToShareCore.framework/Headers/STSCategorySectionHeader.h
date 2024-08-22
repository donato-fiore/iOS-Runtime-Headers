// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCATEGORYSECTIONHEADER_H
#define STSCATEGORYSECTIONHEADER_H

@class UIView, UILabel, UIButton, NSString;



@interface STSCategorySectionHeader : UIView {
    UILabel *_titleLabel;
    UIButton *_clearButton;
}


@property (nonatomic) BOOL clearButtonHidden; // ivar: _clearButtonHidden
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(void)layoutSubviews;


@end


#endif