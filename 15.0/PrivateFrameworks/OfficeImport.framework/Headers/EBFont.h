// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EBFONT_H
#define EBFONT_H


#import <Foundation/Foundation.h>


@interface EBFont : NSObject



+(id)edFontFromXlDXfFont:(struct XlDXfFont *)arg0 edResources:(id)arg1 ;
+(id)edFontFromXlFont:(struct XlFont *)arg0 edResources:(id)arg1 ;
+(int)convertEDScriptEnumToXl:(int)arg0 ;
+(int)convertEDUnderlineEnumToXl:(int)arg0 ;
+(int)convertXlScriptEnumToED:(int)arg0 ;
+(int)convertXlUnderlineEnumToED:(int)arg0 ;


@end


#endif