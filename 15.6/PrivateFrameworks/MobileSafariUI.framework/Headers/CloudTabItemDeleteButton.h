// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLOUDTABITEMDELETEBUTTON_H
#define CLOUDTABITEMDELETEBUTTON_H

@class UIButton, UILabel;



@interface CloudTabItemDeleteButton : UIButton {
    UILabel *_titleLabel;
}




+(id)deleteButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif