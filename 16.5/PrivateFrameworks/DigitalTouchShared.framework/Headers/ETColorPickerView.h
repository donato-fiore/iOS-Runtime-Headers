// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETCOLORPICKERVIEW_H
#define ETCOLORPICKERVIEW_H

@class UIView, UITapGestureRecognizer, NSString;
@protocol DTSColorWheelDelegate, ETColorPickerViewDelegate;


#import "DTSColorPicker.h"
#import "ETPaletteCircleView.h"
#import "ETColorWheelView.h"

@interface ETColorPickerView : DTSColorPicker <DTSColorWheelDelegate>

 {
    UIView *_contentView;
    ETPaletteCircleView *_collapsedSelectedCircle;
    UITapGestureRecognizer *_presentTapGestureRecognizer;
    CGRect _expandedFrame;
    CGRect _collapsedFrame;
    ETColorWheelView *_colorWheelView;
    BOOL _dismissingColorPicker;
    CGFloat _selectedCircleRotationAngle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (weak, nonatomic) NSObject<ETColorPickerViewDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;


-(BOOL)_isCenterCircle:(NSUInteger)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 collapsedFrame:(struct CGRect )arg1 ;
-(id)paletteCircleAnimationPairs;
-(void)_addRotationAnimationFromAngle:(CGFloat)arg0 toAngle:(CGFloat)arg1 ;
-(void)_dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)animateOffscreen;
-(void)animateOnscreen;
-(void)animateToGray;
-(void)animateToSelectedColor;
-(void)colorWheel:(id)arg0 didPickColor:(id)arg1 ;
-(void)colorWheel:(id)arg0 willPickColor:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)fadeinPaletteCircle:(id)arg0 delay:(CGFloat)arg1 ;
-(void)fadeinPaletterCirclesInPairs;
-(void)fadeoutPaletteCircle:(id)arg0 delay:(CGFloat)arg1 ;
-(void)fadeoutPaletterCirclesInPairs;
-(void)layoutPaletteCircles;
-(void)movePalettCircleToOriginalLayoutPosition:(id)arg0 ;
-(void)movePaletteCircleTowardsViewCenter:(id)arg0 distance:(CGFloat)arg1 ;
-(void)paletteCircleTapped:(id)arg0 ;
-(void)presentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentTapReceived:(id)arg0 ;
-(void)setDimmed:(BOOL)arg0 ;
-(void)showColorWheel;
-(void)transformPickerCircleToSelectionMarkerWithCompletion:(id)arg0 ;
-(void)transformSelectionMarkerToPickerCircleWithCompletion:(id)arg0 ;


@end


#endif