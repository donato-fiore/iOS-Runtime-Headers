// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETCOLORWHEELVIEW_H
#define ETCOLORWHEELVIEW_H

@class UIColor;


#import "DTSColorWheel.h"
#import "ETColorGradientView.h"

@interface ETColorWheelView : DTSColorWheel {
    ETColorGradientView *_gradientView;
    CGFloat _originalRotation;
    CGFloat _originalPickerRotation;
    BOOL _handlingTouches;
}


@property (readonly, nonatomic) UIColor *selectedColor; // ivar: _selectedColor


+(CGFloat)colorWheelWidth;
+(CGFloat)pickerDiameter;
+(CGFloat)pickerWidth;
+(struct CGColor *)pickerBorderColor;
-(BOOL)pickerShouldDismissClockwise;
-(CGFloat)colorWheelDismissalRotation;
-(CGFloat)colorWheelRadius;
-(CGFloat)gradientWidth;
-(CGFloat)pickerDiameter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pickerViewHighlightedColor;
-(void)addPickerCircleForPaletteCircle:(id)arg0 ;
-(void)animatePickerToOriginalPosition;
-(void)beganTouches:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)finishedTouches;
-(void)hideColorWheelPickingColor:(BOOL)arg0 ;
-(void)hideDoneButton;
-(void)hideDoneButtonAnimated;
-(void)showColorWheelFromPaletteCircle:(id)arg0 rotation:(CGFloat)arg1 ;
-(void)showDoneButtonAnimated;


@end


#endif