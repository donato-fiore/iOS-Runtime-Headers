// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT14LINEENDCONTROL_H
#define _TTC8PAPERKIT14LINEENDCONTROL_H

@class UIControl;



@interface _TtC8PaperKit14LineEndControl : UIControl {
    ? contentStackView;
    ? regularCornerRadius;
    ? noArrowButton;
    ? oneArrowButton;
    ? twoArrowButton;
    ? axis;
    ? useCapsuleStyle;
    ? lineEnds;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapNoArrowButton;
-(void)didTapOneArrowButton;
-(void)didTapTwoArrowButton;
-(void)layoutSubviews;


@end


#endif