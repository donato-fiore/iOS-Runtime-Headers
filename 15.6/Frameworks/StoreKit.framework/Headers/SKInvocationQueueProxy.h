// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKINVOCATIONQUEUEPROXY_H
#define SKINVOCATIONQUEUEPROXY_H

@class NSMutableArray, Protocol;

#import <Foundation/Foundation.h>


@interface SKInvocationQueueProxy : NSObject {
    NSMutableArray *_invocationQueue;
    Protocol *_protocol;
}


@property (retain, nonatomic) id *invocationTarget; // ivar: _invocationTarget


-(id)initWithProtocol:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif