// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSAUTOCONTENTACCESSINGPROXY_H
#define NSAUTOCONTENTACCESSINGPROXY_H



#import "NSProxy.h"

@interface NSAutoContentAccessingProxy : NSProxy {
    id *_target;
}




+(id)proxyWithTarget:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif