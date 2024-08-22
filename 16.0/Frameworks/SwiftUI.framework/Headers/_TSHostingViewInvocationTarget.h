// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TSHOSTINGVIEWINVOCATIONTARGET_H
#define _TSHOSTINGVIEWINVOCATIONTARGET_H

@class NSProxy;



@interface _TSHostingViewInvocationTarget : NSProxy {
    id *_handler;
}




-(id)initWithHandler:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif