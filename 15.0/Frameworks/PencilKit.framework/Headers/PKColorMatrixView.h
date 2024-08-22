// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCOLORMATRIXVIEW_H
#define PKCOLORMATRIXVIEW_H

@class UIView, NSArray, NSString, UIColor;
@protocol PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation, _PKColorPickerImplementationDelegate;



@interface PKColorMatrixView : UIView <PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation>



@property (retain, nonatomic) NSArray *colorButtons; // ivar: _colorButtons
@property (retain, nonatomic) NSArray *colorMatrix; // ivar: _colorMatrix
@property (weak, nonatomic) NSObject<_PKColorPickerImplementationDelegate> *colorPickerDelegate; // ivar: _colorPickerDelegate
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (retain, nonatomic) NSArray *darkColorMatrix; // ivar: _darkColorMatrix
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *selectedColor; // ivar: selectedColor
@property (readonly) Class superclass;


+(id)_representableColorForColor:(id)arg0 ;
+(id)defaultColorMatrix;
+(id)flippedColorMatrix:(id)arg0 ;
-(NSInteger)_uiColorUserInterfaceStyle;
-(NSUInteger)cornerPositionForColorPickerCrosshairView:(id)arg0 ;
-(id)_boundedPointForPoint:(id)arg0 ;
-(id)_colorForPoint:(id)arg0 ;
-(id)_pointForCGPoint:(struct CGPoint )arg0 ;
-(id)_pointForColor:(id)arg0 ;
-(id)_pointFromButton:(id)arg0 ;
-(id)colorForColorPickerCrosshairView:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)representableColorForColor:(id)arg0 ;
-(id)uiColorMatrix;
-(struct CGRect )_frameForViewWithPoint:(id)arg0 ;
-(struct CGRect )frameForColorPickerCrosshairView:(id)arg0 ;
-(void)colorPickerCrosshairViewShouldUpdateColor:(id)arg0 point:(struct CGPoint )arg1 ;
-(void)colorPickerCrosshairViewShouldUpdateWithColor:(id)arg0 ;
-(void)didTapColorButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif