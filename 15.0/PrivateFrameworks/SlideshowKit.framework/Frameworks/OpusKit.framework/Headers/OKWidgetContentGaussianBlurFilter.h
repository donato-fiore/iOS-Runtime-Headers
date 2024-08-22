// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETCONTENTGAUSSIANBLURFILTER_H
#define OKWIDGETCONTENTGAUSSIANBLURFILTER_H

@class NSNumber;
@protocol JSOKWidgetContentGaussianBlurFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter>



@property (retain, nonatomic) NSNumber *inputRadius; // ivar: _inputRadius


+(id)filterWithInputRadius:(id)arg0 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(id)settingInputRadius;
-(void)dealloc;
-(void)setSettingInputRadius:(id)arg0 ;


@end


#endif