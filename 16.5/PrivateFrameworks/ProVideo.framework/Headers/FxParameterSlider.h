// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXPARAMETERSLIDER_H
#define FXPARAMETERSLIDER_H



#import "FxPinParameter.h"

@interface FxParameterSlider : FxPinParameter {
    *FxParameterSliderPriv _sliderPriv;
}




-(BOOL)isLogarithmic;
-(CGFloat)maxSliderValue;
-(CGFloat)maxValue;
-(CGFloat)minSliderValue;
-(CGFloat)minValue;
-(CGFloat)stepValue;
-(id)init;
-(void)dealloc;
-(void)setIsLogarithmic:(BOOL)arg0 ;
-(void)setMaxSliderValue:(CGFloat)arg0 ;
-(void)setMaxValue:(CGFloat)arg0 ;
-(void)setMinSliderValue:(CGFloat)arg0 ;
-(void)setMinValue:(CGFloat)arg0 ;
-(void)setStepValue:(CGFloat)arg0 ;


@end


#endif