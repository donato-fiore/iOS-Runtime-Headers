// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUIMETRICCOLORS_H
#define ARUIMETRICCOLORS_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface ARUIMetricColors : NSObject

@property (retain, nonatomic) UIColor *adjustmentButtonBackgroundColor; // ivar: _adjustmentButtonBackgroundColor
@property (retain, nonatomic) UIColor *buttonDisabledTextColor; // ivar: _buttonDisabledTextColor
@property (retain, nonatomic) UIColor *buttonTextColor; // ivar: _buttonTextColor
@property (retain, nonatomic) UIColor *gradientContrastColor; // ivar: _gradientContrastColor
@property (retain, nonatomic) UIColor *gradientDarkColor; // ivar: _gradientDarkColor
@property (retain, nonatomic) UIColor *gradientLightColor; // ivar: _gradientLightColor
@property (retain, nonatomic) UIColor *lightenedNonGradientColor; // ivar: _lightenedNonGradientColor
@property (retain, nonatomic) UIColor *nonGradientTextColor; // ivar: _nonGradientTextColor
@property (retain, nonatomic) UIColor *platterBackgroundColor; // ivar: _platterBackgroundColor
@property (retain, nonatomic) UIColor *platterInactiveBackgroundColor; // ivar: _platterInactiveBackgroundColor
@property (retain, nonatomic) UIColor *valueDisplayColor; // ivar: _valueDisplayColor
@property (retain, nonatomic) NSString *workoutRingColorIdentifier; // ivar: _workoutRingColorIdentifier


+(id)briskColors;
+(id)clockColors;
+(id)distanceColors;
+(id)elapsedTimeColors;
+(id)energyColors;
+(id)heartRateColors;
+(id)keyColors;
+(id)noMetricColors;
+(id)paceColors;
+(id)sedentaryColors;
+(id)systemGrayTextColor;
+(struct CGGradient *)newGradientForStartColor:(id)arg0 endColor:(id)arg1 ;


@end


#endif