// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DTSCOLORWHEEL_H
#define DTSCOLORWHEEL_H

@class UIView, UIButton;
@protocol DTSColorWheelDelegate;



@interface DTSColorWheel : UIView

@property (nonatomic) CGFloat colorWheelRadius; // ivar: _colorWheelRadius
@property (weak, nonatomic) NSObject<DTSColorWheelDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (nonatomic) CGFloat gradientWidth; // ivar: _gradientWidth
@property (nonatomic) CGFloat hueRotation; // ivar: _hueRotation
@property (retain, nonatomic) UIView *pickerCircle; // ivar: _pickerCircle
@property (nonatomic) CGFloat pickerDiameter; // ivar: _pickerDiameter
@property (nonatomic) CGFloat pickerRotation; // ivar: _pickerRotation


-(id)pickerViewHighlightedColor;
-(void)beganTouches:(id)arg0 ;
-(void)createDoneButtonWithFrame:(struct CGRect )arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)finishedTouches;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updatePickerPositionForPoint:(struct CGPoint )arg0 ;


@end


#endif