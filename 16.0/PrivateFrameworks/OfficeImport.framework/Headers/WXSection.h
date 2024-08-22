// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WXSECTION_H
#define WXSECTION_H


#import <Foundation/Foundation.h>


@interface WXSection : NSObject



+(?)mapFooter:(?)arg0 toSectionstate;
+(?)mapHeader:(?)arg0 toSectionstate;
+(?)mapPrinterSettings:(?)arg0 toSectionstate;
+(?)mapProperties:(?)arg0 toSectionstate;
+(?)readFrom:(?)arg0 tostate;
+(float)scaleFromPrinterSettings:(id)arg0 ;
+(id)chapterNumberSeparatorEnumMap;
+(id)lineNumberRestartEnumMap;
+(id)pageBorderDepthEnumMap;
+(id)pageBorderDisplayEnumMap;
+(id)pageBorderOffsetEnumMap;
+(id)pageOrientationEnumMap;
+(id)sectionBreakEnumMap;
+(id)verticalJustificationEnumMap;


@end


#endif