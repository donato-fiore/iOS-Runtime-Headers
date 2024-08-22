// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKWIDGETCONTENTBLACKANDWHITEFILTER_H
#define OKWIDGETCONTENTBLACKANDWHITEFILTER_H

@protocol JSOKWidgetContentBlackAndWhiteFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentBlackAndWhiteFilter : OKWidgetBasicFilter <JSOKWidgetContentBlackAndWhiteFilter>





+(id)filter;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)outputImage;


@end


#endif