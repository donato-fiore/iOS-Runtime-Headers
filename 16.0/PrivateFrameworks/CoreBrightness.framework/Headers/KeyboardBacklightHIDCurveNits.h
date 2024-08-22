// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KEYBOARDBACKLIGHTHIDCURVENITS_H
#define KEYBOARDBACKLIGHTHIDCURVENITS_H



#import "KeyboardBacklightHIDCurve.h"

@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level;


-(float)brightness;
-(float)convertNitsToLevelPercentage:(float)arg0 ;
-(float)maxCapableNits;
-(float)maxLevelPercentage;
-(float)minCapableNits;
-(id)initWithQueue:(id)arg0 device:(id)arg1 ;
-(void)dealloc;
-(void)setBrightness:(float)arg0 ;
-(void)setBrightness:(float)arg0 withFadeSpeed:(int)arg1 commit:(BOOL)arg2 ;


@end


#endif