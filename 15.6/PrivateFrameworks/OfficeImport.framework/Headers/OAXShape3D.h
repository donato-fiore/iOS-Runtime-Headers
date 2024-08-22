// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXSHAPE3D_H
#define OAXSHAPE3D_H


#import <Foundation/Foundation.h>


@interface OAXShape3D : NSObject



+(?)readBevelFromXmlNode;
+(?)readShape3DFromXmlNode:(?)arg0 packagePartdrawingState;
+(BOOL)isEmpty:(id)arg0 ;
+(id)bevelTypeEnumMap;
+(id)materialEnumMap;
+(void)writeBevel:(id)arg0 to:(id)arg1 ;
+(void)writeShape3D:(id)arg0 to:(id)arg1 ;
+(void)writeShape3DMaterialOnly:(id)arg0 to:(id)arg1 ;


@end


#endif