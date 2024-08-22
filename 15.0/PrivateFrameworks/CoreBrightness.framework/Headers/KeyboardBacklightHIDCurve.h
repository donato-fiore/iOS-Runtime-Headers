// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KEYBOARDBACKLIGHTHIDCURVE_H
#define KEYBOARDBACKLIGHTHIDCURVE_H

@class NSDictionary;


#import "KeyboardBacklight.h"

@interface KeyboardBacklightHIDCurve : KeyboardBacklight {
    int _color;
    float _curveVersion;
}


@property (readonly) NSDictionary *brightnessCurve;
@property (readonly) float chicletCurveCoefficient; // ivar: _chicletCurveCoefficient
@property (readonly) float chicletCurvePower; // ivar: _chicletCurvePower
@property (readonly) float level;
@property float luxHysteresis; // ivar: _luxHysteresis
@property (readonly) float maxCapableNits;
@property (readonly) float maxCurveNits;
@property (readonly) float maxLevelPercentage;
@property (readonly) float minCapableNits;


-(BOOL)KBBrightnessCurvePropertyHandler:(id)arg0 ;
-(BOOL)KBBrightnessLuxHysteresisPropertyHandler:(id)arg0 ;
-(BOOL)isBrightnessCurveValid:(id)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(float)brightness;
-(float)convertNitsToLevelPercentage:(float)arg0 ;
-(float)convertPWMPercentageToNits:(float)arg0 ;
-(float)currentLuxToAmbient;
-(float)currentLuxToNits;
-(float)maxUserLevel;
-(float)perceptualBrightnessForLevel:(float)arg0 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)defaultBrightnessCurve;
-(id)description;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 device:(id)arg1 ;
-(int)color;
-(void)calculateLevelPercentageAtAmbient:(float)arg0 ;
-(void)dealloc;
-(void)getKeyboardBacklightPreferences;
-(void)handleLuxUpdate:(float)arg0 ;
-(void)reconfiguraSettingsForColor:(int)arg0 ;
-(void)setBrightness:(float)arg0 ;
-(void)setBrightness:(float)arg0 withFadeSpeed:(int)arg1 commit:(BOOL)arg2 ;
-(void)setColor:(int)arg0 ;
-(void)storeKeyboardBacklightCurveToPreferences;
-(void)storeKeyboardBacklightPreferences;
-(void)updateBrightnessCurve:(id)arg0 ;
-(void)updateDefaultBrightnessCurve:(id)arg0 ;
-(void)updateDefaultCurveForColor:(int)arg0 ;
-(void)updateLuxToNitsCurve;


@end


#endif