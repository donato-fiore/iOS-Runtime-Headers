// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETCONTENTCOLORCUBEFILTER_H
#define OKWIDGETCONTENTCOLORCUBEFILTER_H

@class NSData, NSNumber, UIColor;
@protocol JSOKWidgetContentColorCubeFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorCubeFilter>

 {
    NSData *_cubeData;
}


@property (retain, nonatomic) NSNumber *inputMaxHueAngle; // ivar: _inputMaxHueAngle
@property (retain, nonatomic) NSNumber *inputMinHueAngle; // ivar: _inputMinHueAngle
@property (retain, nonatomic) UIColor *inputReplaceColor; // ivar: _inputReplaceColor


+(id)filterWithMinHueAngle:(id)arg0 inputMaxHueAngle:(id)arg1 inputReplaceColor:(id)arg2 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(void)createCubeWithMinHueAngle:(CGFloat)arg0 maxHueAngle:(CGFloat)arg1 ;
-(void)dealloc;
-(void)rgbToHSV:(*float)arg0 hsv:(*float)arg1 ;
-(void)setSettingInputMaxHueAngle:(id)arg0 ;
-(void)setSettingInputMinHueAngle:(id)arg0 ;
-(void)setSettingInputReplaceColor:(id)arg0 ;


@end


#endif