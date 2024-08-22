// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKWIDGETCONTENTCOMICEFFECTFILTER_H
#define OKWIDGETCONTENTCOMICEFFECTFILTER_H

@protocol JSOKWidgetContentComicEffectFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentComicEffectFilter : OKWidgetBasicFilter <JSOKWidgetContentComicEffectFilter>





+(id)filter;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)outputImage;


@end


#endif