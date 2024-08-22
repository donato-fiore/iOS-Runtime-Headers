// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETCONTENTCOLORCONTROLSFILTER_H
#define OKWIDGETCONTENTCOLORCONTROLSFILTER_H

@class NSNumber;
@protocol JSOKWidgetContentColorControlsFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter <JSOKWidgetContentColorControlsFilter>



@property (retain, nonatomic) NSNumber *inputBrightness; // ivar: _inputBrightness
@property (retain, nonatomic) NSNumber *inputContrast; // ivar: _inputContrast
@property (retain, nonatomic) NSNumber *inputSaturation; // ivar: _inputSaturation


+(id)filterWithInputSaturation:(id)arg0 inputBrightness:(id)arg1 inputContrast:(id)arg2 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(id)settingInputContrast;
-(id)settingInputSaturation;
-(id)setttingInputBrightness;
-(void)dealloc;
-(void)setSettingInputBrightness:(id)arg0 ;
-(void)setSettingInputContrast:(id)arg0 ;
-(void)setSettingInputSaturation:(id)arg0 ;


@end


#endif