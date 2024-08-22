// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETCONTENTSEPIAFILTER_H
#define OKWIDGETCONTENTSEPIAFILTER_H

@class NSNumber;
@protocol JSOKWidgetContentSepiaFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter <JSOKWidgetContentSepiaFilter>



@property (retain, nonatomic) NSNumber *inputIntensity; // ivar: _inputIntensity


+(id)filterWithIntensity:(id)arg0 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(id)settingInputIntensity;
-(void)dealloc;
-(void)setSettingInputIntensity:(id)arg0 ;


@end


#endif