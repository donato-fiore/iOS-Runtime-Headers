// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDATEPICKERBAR_H
#define STDATEPICKERBAR_H

@class UIView, UIImageView, UILabel, UIImage, UIButton;



@interface STDatePickerBar : UIView

@property (readonly) UIImageView *bottomBorderLine; // ivar: _bottomBorderLine
@property (readonly) UILabel *dateLabel; // ivar: _dateLabel
@property (readonly) UIImage *horizontalLineImage;
@property (readonly) UIButton *leftArrowButton; // ivar: _leftArrowButton
@property (readonly) UIButton *rightArrowButton; // ivar: _rightArrowButton


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureArrowButton:(id)arg0 isLeft:(BOOL)arg1 isLayoutDirectionRightToLeft:(BOOL)arg2 ;
-(void)_stDatePickerBarCommonInit;


@end


#endif