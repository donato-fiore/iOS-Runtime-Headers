// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETCONTENTCOLORPOSTERIZEFILTER_H
#define OKWIDGETCONTENTCOLORPOSTERIZEFILTER_H

@class NSNumber;
@protocol JSOKWidgetContentColorPosterizeFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentColorPosterizeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorPosterizeFilter>



@property (retain, nonatomic) NSNumber *inputLevels; // ivar: _inputLevels


+(id)filterWithInputLevels:(id)arg0 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(void)setSettingInputLevels:(id)arg0 ;


@end


#endif