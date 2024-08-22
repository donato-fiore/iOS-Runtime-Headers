// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OAXDRAWABLE_H
#define OAXDRAWABLE_H


#import <Foundation/Foundation.h>


@interface OAXDrawable : NSObject



+(?)readDrawableFromXmlNode:(?)arg0 inNamespacedrawingState;
+(?)readDrawablesFromXmlNode:(?)arg0 inNamespacedrawingState;
+(?)readNonVisualPropertiesFromDrawableXmlNode:(?)arg0 inNamespace:(?)arg1 visualNodeName:(?)arg2 toDrawabledrawingState;


@end


#endif