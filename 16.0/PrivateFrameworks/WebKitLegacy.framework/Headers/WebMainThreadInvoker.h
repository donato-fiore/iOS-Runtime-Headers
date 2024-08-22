// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBMAINTHREADINVOKER_H
#define WEBMAINTHREADINVOKER_H

@class NSProxy;



@interface WebMainThreadInvoker : NSProxy {
    id *target;
    RetainPtr<id> exception;
}




-(id)initWithTarget:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)handleException:(id)arg0 ;


@end


#endif