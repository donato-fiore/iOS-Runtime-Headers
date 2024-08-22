// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXSHAPE3D_H
#define OAXSHAPE3D_H


#import <Foundation/Foundation.h>


@interface OAXShape3D : NSObject



+(?)readShape3DFromXmlNode:(?)arg0 packagePartdrawingState;
+(BOOL)isEmpty:(id)arg0 ;
+(id)bevelTypeEnumMap;
+(id)materialEnumMap;
+(id)readBevelFromXmlNode:(struct _xmlNode *)arg0 ;
+(void)writeBevel:(id)arg0 to:(id)arg1 ;
+(void)writeShape3D:(id)arg0 to:(id)arg1 ;
+(void)writeShape3DMaterialOnly:(id)arg0 to:(id)arg1 ;


@end


#endif