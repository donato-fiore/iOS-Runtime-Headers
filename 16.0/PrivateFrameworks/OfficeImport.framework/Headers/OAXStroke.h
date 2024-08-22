// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXSTROKE_H
#define OAXSTROKE_H


#import <Foundation/Foundation.h>


@interface OAXStroke : NSObject



+(?)readCustomDashFromXmlNodedrawingState;
+(?)readStrokeFromXmlNode:(?)arg0 packagePartdrawingState;
+(id)compoundLineEnumMap;
+(id)lineCapEnumMap;
+(id)lineEndLengthEnumMap;
+(id)lineEndTypeEnumMap;
+(id)lineEndWidthEnumMap;
+(id)penAlignmentEnumMap;
+(id)presetDashEnumMap;
+(id)readLineEndFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readPresetDashFromXmlNode:(struct _xmlNode *)arg0 ;


@end


#endif