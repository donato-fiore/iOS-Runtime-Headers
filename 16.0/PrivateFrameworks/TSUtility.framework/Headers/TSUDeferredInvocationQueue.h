// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUDEFERREDINVOCATIONQUEUE_H
#define TSUDEFERREDINVOCATIONQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSUDeferredInvocationQueue : NSObject {
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