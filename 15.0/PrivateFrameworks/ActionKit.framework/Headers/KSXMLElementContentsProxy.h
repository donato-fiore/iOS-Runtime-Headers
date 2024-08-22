// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KSXMLELEMENTCONTENTSPROXY_H
#define KSXMLELEMENTCONTENTSPROXY_H

@class NSProxy;


#import "KSXMLWriter.h"

@interface KSXMLElementContentsProxy : NSProxy {
    id *_target;
    KSXMLWriter *_XMLWriter;
    NSUInteger _elementsCount;
}




-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)ks_prepareWithTarget:(id)arg0 XMLWriter:(id)arg1 ;


@end


#endif