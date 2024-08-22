// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXCOLORTRANSFORM_H
#define OAXCOLORTRANSFORM_H


#import <Foundation/Foundation.h>


@interface OAXColorTransform : NSObject



+(id)colorTransformTypeEnumMap;
+(id)readColorTransformsFromXmlNode:(struct _xmlNode *)arg0 ;
+(void)write:(id)arg0 to:(id)arg1 ;


@end


#endif