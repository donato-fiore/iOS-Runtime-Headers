// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXBASETYPES_H
#define OAXBASETYPES_H


#import <Foundation/Foundation.h>


@interface OAXBaseTypes : NSObject



+(?)readOptionalAngleFromXmlNodename;
+(?)readOptionalFractionFromXmlNodename;
+(?)readOptionalLengthFromXmlNodename;
+(?)readOptionalLongFromXmlNode:(?)arg0 namedesiredOutputUnit;
+(?)readOptionalLongFromXmlNodename;
+(?)readPoint2DFromXmlNode;
+(?)readRectAlignmentFromXmlNodename;
+(?)readRequiredAngleFromXmlNodename;
+(?)readRequiredFractionFromXmlNodename;
+(?)readRequiredLengthFromXmlNodename;
+(?)readRequiredLongFromXmlNode:(?)arg0 namedesiredOutputUnit;
+(?)readRequiredLongFromXmlNodename;
+(?)readSize2DFromXmlNode;
+(id)readPoint3DFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readRelativeRectFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readRotation3DFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)readVector3DFromXmlNode:(struct _xmlNode *)arg0 ;
+(id)rectAlignmentEnumMap;
+(id)stringForRectAlignment:(int)arg0 ;
+(void)writeRectAlignment:(int)arg0 to:(id)arg1 ;
+(void)writeRelativeRect:(id)arg0 to:(id)arg1 ;


@end


#endif