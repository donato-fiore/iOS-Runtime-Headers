// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKWIDGETCONSTANTCOLORGENERATORFILTER_H
#define OKWIDGETCONSTANTCOLORGENERATORFILTER_H

@class CIColor;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: _inputColor


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(void)dealloc;
-(void)setSettingInputColor:(id)arg0 ;


@end


#endif