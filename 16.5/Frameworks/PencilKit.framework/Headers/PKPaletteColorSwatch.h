// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTECOLORSWATCH_H
#define PKPALETTECOLORSWATCH_H

@class UIView, NSString, UIPointerInteraction, UIColor, CAShapeLayer;
@protocol UIPointerInteractionDelegate;


#import "PKSwatchColor.h"

@interface PKPaletteColorSwatch : UIView <UIPointerInteractionDelegate>



@property (retain, nonatomic) UIView *colorBackgroundView; // ivar: _colorBackgroundView
@property (retain, nonatomic) UIView *colorBulletView; // ivar: _colorBulletView
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly, nonatomic) UIColor *presentationColor;
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) CAShapeLayer *selectionRingMaskLayer; // ivar: _selectionRingMaskLayer
@property (nonatomic) BOOL showsSelectionHighlight; // ivar: _showsSelectionHighlight
@property (readonly) Class superclass;
@property (retain, nonatomic) PKSwatchColor *swatchColor; // ivar: _swatchColor


-(BOOL)wantsBackgroundViewColor;
-(BOOL)wantsColorBulletVisible;
-(NSInteger)_uiColorUserInterfaceStyle;
-(id)_colorBulletOutlineColor;
-(id)_uiColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)newColorBackgroundView;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_updateBackgroundView;
-(void)_updateColorBulletView;
-(void)_updateSelectionHighlight;
-(void)_updateUI;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif