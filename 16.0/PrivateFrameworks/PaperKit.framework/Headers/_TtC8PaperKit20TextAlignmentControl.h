// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT20TEXTALIGNMENTCONTROL_H
#define _TTC8PAPERKIT20TEXTALIGNMENTCONTROL_H

@class UIControl;



@interface _TtC8PaperKit20TextAlignmentControl : UIControl {
    ? contentStackView;
    ? regularCornerRadius;
    ? maximumButtonSize;
    ? minimumButtonSize;
    ? leftAlignmentButton;
    ? centerAlignmentButton;
    ? rightAlignmentButton;
    ? justifiedAlignmentButton;
    ? axis;
    ? useCapsuleStyle;
    ? selectedTextAlignment;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapCenterAlignmentButton;
-(void)didTapJustifiedAlignmentButton;
-(void)didTapLeftAlignmentButton;
-(void)didTapRightAlignmentButton;
-(void)layoutSubviews;


@end


#endif