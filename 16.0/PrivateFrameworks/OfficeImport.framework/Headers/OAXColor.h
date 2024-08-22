// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXCOLOR_H
#define OAXCOLOR_H


#import <Foundation/Foundation.h>


@interface OAXColor : NSObject



+(?)readSRgbColorFromXmlNodeattribute;
+(id)presetColorEnumMap;
+(id)presetColorRGBEnumMap;
+(id)readColorFromNode:(struct _xmlNode *)arg0 ;
+(id)readColorFromParentXmlNode:(struct _xmlNode *)arg0 ;
+(id)readHslColorFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readPresetColorFromAttribute:(id)arg0 ;
+(id)readPresetColorFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readScRgbColorFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readSchemeColorFromAttribute:(id)arg0 ;
+(id)readSchemeColorFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readSystemColorFromAttribute:(id)arg0 ;
+(id)readSystemColorFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)schemeColorEnumMap;
+(id)stringSRgbColor:(id)arg0 ;
+(id)systemColorEnumMap;
+(void)writeColor:(id)arg0 to:(id)arg1 ;
+(void)writePlaceholderColor:(id)arg0 to:(id)arg1 ;
+(void)writePresetColor:(id)arg0 to:(id)arg1 ;
+(void)writeRgbColor:(id)arg0 to:(id)arg1 ;
+(void)writeSchemeColor:(id)arg0 to:(id)arg1 ;
+(void)writeSystemColor:(id)arg0 to:(id)arg1 ;


@end


#endif