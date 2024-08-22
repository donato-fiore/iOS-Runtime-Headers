// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUISETTINGSLABELEDSLIDERCELL_H
#define AXUISETTINGSLABELEDSLIDERCELL_H

@class PSTableCell, UIView, UILabel, UISlider;



@interface AXUISettingsLabeledSliderCell : PSTableCell

@property (retain, nonatomic) UIView *leftView; // ivar: _leftView
@property (retain, nonatomic) UILabel *rightLabel; // ivar: _rightLabel
@property (retain, nonatomic) UIView *rightView; // ivar: _rightView
@property (nonatomic) BOOL segmented; // ivar: _segmented
@property (retain, nonatomic) UISlider *sliderView; // ivar: _sliderView


-(BOOL)isAccessibilityElement;
-(CGFloat)initialValue;
-(CGFloat)maximumValue;
-(CGFloat)minimumValue;
-(Class)sliderCellClass;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)labelTextColor;
-(id)maximumTextSizeString;
-(id)slider;
-(struct CGPoint )accessibilityActivationPoint;
-(void)_updateLabelFont:(id)arg0 ;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)didMoveToSuperview;
-(void)handleSliderBeingDragged:(id)arg0 ;
-(void)handleSliderDidFinishDrag:(id)arg0 ;
-(void)setLabelText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif