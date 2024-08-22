// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXCOLOR_H
#define OAXCOLOR_H


#import <Foundation/Foundation.h>


@interface OAXColor : NSObject



+(?)readColorFromNode;
+(?)readColorFromParentXmlNode;
+(?)readHslColorFromXmlNode;
+(?)readPresetColorFromXmlNode;
+(?)readSRgbColorFromXmlNodeattribute;
+(?)readScRgbColorFromXmlNode;
+(?)readSchemeColorFromXmlNode;
+(?)readSystemColorFromXmlNode;
+(id)presetColorEnumMap;
+(id)presetColorRGBEnumMap;
+(id)readPresetColorFromAttribute:(id)arg0 ;
+(id)readSchemeColorFromAttribute:(id)arg0 ;
+(id)readSystemColorFromAttribute:(id)arg0 ;
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