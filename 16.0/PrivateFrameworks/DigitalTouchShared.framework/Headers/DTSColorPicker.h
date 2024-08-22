// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTSCOLORPICKER_H
#define DTSCOLORPICKER_H

@class UIView, UILongPressGestureRecognizer, NSArray, UIColor;
@protocol DTSColorPickerDelegate;


#import "ETPaletteCircleView.h"

@interface DTSColorPicker : UIView

@property (readonly, nonatomic) CGFloat colorCircleDiameter;
@property (readonly, nonatomic) CGFloat colorCircleHorizontalSpacing;
@property (nonatomic) NSUInteger colorCircleSize; // ivar: _colorCircleSize
@property (weak, nonatomic) NSObject<DTSColorPickerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // ivar: _longPressRecognizer
@property (retain, nonatomic) NSArray *paletteCircles; // ivar: _paletteCircles
@property (retain, nonatomic) ETPaletteCircleView *selectedCircle; // ivar: _selectedCircle
@property (readonly, nonatomic) UIColor *selectedColor;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)createPaletteCirclesWithParentView:(id)arg0 ;
-(void)didReceiveLongPress:(id)arg0 ;
-(void)paletteCircleTapped:(id)arg0 ;
-(void)selectCircle:(id)arg0 completion:(id)arg1 ;
-(void)showColorWheel;


@end


#endif