// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OITSUDEFERREDINVOCATIONQUEUE_H
#define OITSUDEFERREDINVOCATIONQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OITSUDeferredInvocationQueue : NSObject {
    NSMutableArray *_invocations;
    id *_target;
}




-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)prepareWithInvocationTarget:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)performInvocations;


@end


#endif