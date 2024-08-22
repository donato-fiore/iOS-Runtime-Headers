// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGCOLORSLIDER_H
#define PREDITINGCOLORSLIDER_H

@class UIControl, UIColor, NSString, UIPanGestureRecognizer, CAShapeLayer, CALayer, UIView, CAGradientLayer;
@protocol PREditorColorPickerColor;


#import "PRPosterColor.h"
#import "PREditingColorVariationStore.h"

@interface PREditingColorSlider : UIControl

@property (retain, nonatomic) UIColor *color1; // ivar: _color1
@property (retain, nonatomic) UIColor *color2; // ivar: _color2
@property (retain, nonatomic) UIColor *color3; // ivar: _color3
@property (retain, nonatomic) NSString *contextIdentifier; // ivar: _contextIdentifier
@property (retain, nonatomic) PRPosterColor *currentColor; // ivar: _currentColor
@property (retain, nonatomic) PRPosterColor *displayCurrentColor; // ivar: _displayCurrentColor
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (copy, nonatomic) NSObject<PREditorColorPickerColor> *pickerColor; // ivar: _pickerColor
@property (nonatomic) NSUInteger pickerContext; // ivar: _pickerContext
@property (nonatomic) CGFloat startPanOffset; // ivar: _startPanOffset
@property (retain, nonatomic) CAShapeLayer *thumbBorderLayer; // ivar: _thumbBorderLayer
@property (retain, nonatomic) CAShapeLayer *thumbClippingLayer; // ivar: _thumbClippingLayer
@property (retain, nonatomic) CALayer *thumbContentLayer; // ivar: _thumbContentLayer
@property (retain, nonatomic) CALayer *thumbSoftShadowLayer; // ivar: _thumbSoftShadowLayer
@property (retain, nonatomic) UIView *thumbView; // ivar: _thumbView
@property (retain, nonatomic) CAGradientLayer *trackLayer; // ivar: _trackLayer
@property (nonatomic) CGFloat value; // ivar: _value
@property (nonatomic) CGFloat variation; // ivar: _variation
@property (retain, nonatomic) PREditingColorVariationStore *variationStore; // ivar: _variationStore


-(id)createThumbView;
-(id)initWithVariationStore:(id)arg0 contextIdentifier:(id)arg1 pickerContext:(NSUInteger)arg2 ;
-(struct CGColor *)trackBorderColor;
-(void)_setSliderValue:(CGFloat)arg0 ;
-(void)commonInit;
-(void)createTrackLayer;
-(void)layoutSubviews;
-(void)layoutThumbView;
-(void)thumbViewDidPan:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCurrentColorForCurrentValue;
-(void)updateThumbForCurrentColor;
-(void)updateTrackLayerColors;
-(void)updateVariationInStore;


@end


#endif