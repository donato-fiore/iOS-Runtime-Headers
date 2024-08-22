// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETCONTENTCOLORINVERTFILTER_H
#define OKWIDGETCONTENTCOLORINVERTFILTER_H

@protocol JSOKWidgetContentColorInvertFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentColorInvertFilter : OKWidgetBasicFilter <JSOKWidgetContentColorInvertFilter>





+(id)filter;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)outputImage;


@end


#endif