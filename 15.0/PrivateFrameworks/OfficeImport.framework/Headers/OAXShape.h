// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OAXSHAPE_H
#define OAXSHAPE_H


#import <Foundation/Foundation.h>


@interface OAXShape : NSObject



+(?)readCoreFromXmlNode:(?)arg0 inNamespace:(?)arg1 toShapedrawingState;
+(?)readFromXmlNode:(?)arg0 inNamespacedrawingState;
+(?)readNonVisualShapeProperties:(?)arg0 nodeName:(?)arg1 inNamespaceshapeProperties;
+(BOOL)isWritable:(id)arg0 ;


@end


#endif