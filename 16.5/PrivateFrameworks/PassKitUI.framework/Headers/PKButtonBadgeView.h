// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBUTTONBADGEVIEW_H
#define PKBUTTONBADGEVIEW_H

@class UIView, UILabel, NSString;



@interface PKButtonBadgeView : UIView {
    UILabel *_valueLabel;
}


@property (copy, nonatomic) NSString *badgeValue; // ivar: _badgeValue


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif