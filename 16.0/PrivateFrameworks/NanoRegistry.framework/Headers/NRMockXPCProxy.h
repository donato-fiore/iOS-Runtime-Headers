// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRMOCKXPCPROXY_H
#define NRMOCKXPCPROXY_H

@class NSProxy;
@protocol OS_dispatch_queue;



@interface NRMockXPCProxy : NSProxy {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _async;
    id *_target;
}




-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif