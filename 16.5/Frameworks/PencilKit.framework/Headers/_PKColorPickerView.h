// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKCOLORPICKERVIEW_H
#define _PKCOLORPICKERVIEW_H

@class UIView, UIPanGestureRecognizer, NSString, UIColor;
@protocol _PKColorPickerImplementationDelegate, _PKColorPickerViewDelegate;


#import "PKColorPickerCrosshairView.h"
#import "PKColorMatrixView.h"

@interface _PKColorPickerView : UIView <_PKColorPickerImplementationDelegate>



@property (retain, nonatomic) UIPanGestureRecognizer *crosshairPanGR; // ivar: _crosshairPanGR
@property (retain, nonatomic) PKColorPickerCrosshairView *crosshairView; // ivar: _crosshairView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_PKColorPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKColorMatrixView *gridColorPicker; // ivar: _gridColorPicker
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *initialColor; // ivar: _initialColor
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (readonly) Class superclass;


-(BOOL)pointIsSignificantlyOutside:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)colorPickerImplementationDidChangeSelectedColor:(id)arg0 ;
-(void)colorPickerImplementationUserDidTouchUpInside:(id)arg0 ;
-(void)didPanCrosshair:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif