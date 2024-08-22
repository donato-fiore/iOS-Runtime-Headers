// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITTITLEHEADERVIEW_H
#define MKTRANSITTITLEHEADERVIEW_H

@class UITableViewHeaderFooterView, UILabel, NSString;



@interface MKTransitTitleHeaderView : UITableViewHeaderFooterView {
    UILabel *_titleLabel;
}


@property (retain, nonatomic) NSString *titleText;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;


@end


#endif