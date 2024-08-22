// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGCOLORPICKER_H
#define DOCTAGCOLORPICKER_H

@class UIView, UIGestureRecognizer, NSArray, NSNumber, UIStackView;



@interface DOCTagColorPicker : UIView

@property (readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer; // ivar: _changeColorPanGestureRecognizer
@property (readonly, nonatomic) UIGestureRecognizer *changeColorTapGestureRecognizer; // ivar: _changeColorTapGestureRecognizer
@property (readonly, nonatomic) NSArray *dotViews; // ivar: _dotViews
@property (retain, nonatomic) NSNumber *previousSelectedTagColor; // ivar: _previousSelectedTagColor
@property (nonatomic) NSInteger selectedTagColor; // ivar: _selectedTagColor
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectedTagDotView;
-(struct CGSize )intrinsicContentSize;
-(void)handleChangeColor:(id)arg0 ;
-(void)layoutSubviews;
-(void)setColorDotSpacing;


@end


#endif