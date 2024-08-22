// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCIRCULARANALOGDIALVIEW_H
#define NTKCIRCULARANALOGDIALVIEW_H

@class UIView, CLKDevice, CALayer, NSArray;


#import "NTKWhistlerAnalogColorPalette.h"

@interface NTKCircularAnalogDialView : UIView {
    CLKDevice *_device;
    NSUInteger _numberOfTicks;
    CALayer *_dialBackgroundLayer;
    CALayer *_ticksLayer;
    NSArray *_allSmallTicks;
    NSArray *_allHourTicks;
    NSArray *_smallMatchingHourTicks;
    CGFloat _tickPadding;
    NTKWhistlerAnalogColorPalette *_colorPalette;
    ? _options;
}




+(id)_disabledLayerActions;
-(BOOL)isTickIndexForHour:(NSUInteger)arg0 ;
-(CGFloat)_tickOpactiyAtIndex:(NSInteger)arg0 bezelTextWidthInRadius:(CGFloat)arg1 invisibleTicksAlpha:(CGFloat)arg2 ;
-(CGFloat)_tickOpactiyAtIndex:(NSInteger)arg0 bezelTextWidthInRadius:(CGFloat)arg1 invisibleTicksAlpha:(CGFloat)arg2 visibleTicksAlpha:(CGFloat)arg3 ;
-(id)_instantaneousAnimationForKeyPath:(id)arg0 value:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 hideHourTicks:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 smallTicksMatchingMinutes:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(struct ? )arg1 device:(id)arg2 ;
-(void)_toggleRasterization:(BOOL)arg0 ;
-(void)applyColorTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 ;
-(void)applyColorTransitionFraction:(CGFloat)arg0 fromFaceColorPalette:(id)arg1 toFaceColorPalette:(id)arg2 ;
-(void)cleanupAfterEdit;
-(void)fillDialTransitionWithFraction:(CGFloat)arg0 bezelTextWidthRadians:(CGFloat)arg1 ;
-(void)layoutLayerTicks:(id)arg0 rotationAngleInDegree:(CGFloat)arg1 smallTicks:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)prepareForEdit;
-(void)setDialBackgroundColor:(id)arg0 ;
-(void)setHideHourTicks:(BOOL)arg0 ;
-(void)setHourTicksOpacity:(CGFloat)arg0 bezelTextWidthRadians:(CGFloat)arg1 ;
-(void)showAllTicksInDial;
-(void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(CGFloat)arg0 invisbleTicksAlpha:(CGFloat)arg1 ;
-(void)transitTicksWithInitialBezelTextWidthInRadius:(CGFloat)arg0 finalBezelTextWidthInRadius:(CGFloat)arg1 fraction:(CGFloat)arg2 ;


@end


#endif