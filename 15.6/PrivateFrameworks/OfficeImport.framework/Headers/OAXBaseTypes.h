// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(?)readPoint3DFromXmlNode;
+(?)readRectAlignmentFromXmlNodename;
+(?)readRelativeRectFromXmlNode;
+(?)readRequiredAngleFromXmlNodename;
+(?)readRequiredFractionFromXmlNodename;
+(?)readRequiredLengthFromXmlNodename;
+(?)readRequiredLongFromXmlNode:(?)arg0 namedesiredOutputUnit;
+(?)readRequiredLongFromXmlNodename;
+(?)readRotation3DFromXmlNode;
+(?)readSize2DFromXmlNode;
+(?)readVector3DFromXmlNode;
+(id)rectAlignmentEnumMap;
+(id)stringForRectAlignment:(int)arg0 ;
+(void)writeRectAlignment:(int)arg0 to:(id)arg1 ;
+(void)writeRelativeRect:(id)arg0 to:(id)arg1 ;


@end


#endif