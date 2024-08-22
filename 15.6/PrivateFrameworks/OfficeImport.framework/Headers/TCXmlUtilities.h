// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCXMLUTILITIES_H
#define TCXMLUTILITIES_H


#import <Foundation/Foundation.h>


@interface TCXmlUtilities : NSObject



+(id)bundlePathForXmlResource:(id)arg0 ;
+(void)checkStreamName:(struct _xmlTextReader *)arg0 name:(char *)arg1 ;
+(void)checkStreamNamespace:(struct _xmlTextReader *)arg0 ns:(id)arg1 ;
+(void)checkStreamNamespaceAndName:(struct _xmlTextReader *)arg0 name:(char *)arg1 ns:(id)arg2 ;


@end


#endif