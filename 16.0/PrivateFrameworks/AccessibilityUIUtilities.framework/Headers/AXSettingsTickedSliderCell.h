// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSETTINGSTICKEDSLIDERCELL_H
#define AXSETTINGSTICKEDSLIDERCELL_H

@class NSString, AXDispatchTimer;


#import "AXUISettingsLabeledSliderCell.h"
#import "AccessibilityAirPodSettingsController.h"

@interface AXSettingsTickedSliderCell : AXUISettingsLabeledSliderCell

@property (readonly, nonatomic) NSString *btAddress;
@property (weak, nonatomic) AccessibilityAirPodSettingsController *controller; // ivar: _controller
@property (retain, nonatomic) AXDispatchTimer *valueTimer; // ivar: _valueTimer


-(CGFloat)_defaultSliderValue;
-(CGFloat)_determineDisplayValue:(CGFloat)arg0 ;
-(CGFloat)initialValue;
-(CGFloat)maximumValue;
-(CGFloat)minimumValue;
-(CGFloat)rightViewPadding;
-(Class)sliderCellClass;
-(id)accessibilityLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)maximumTextSizeString;
-(void)_updateRightLabelWithValue:(CGFloat)arg0 ;
-(void)handleSliderBeingDragged:(id)arg0 ;
-(void)handleSliderDidFinishDrag:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif