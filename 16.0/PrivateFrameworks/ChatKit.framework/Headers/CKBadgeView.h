// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBADGEVIEW_H
#define CKBADGEVIEW_H

@class UIView, UILabel;



@interface CKBadgeView : UIView

@property (readonly, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (nonatomic) NSUInteger value; // ivar: _value


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif