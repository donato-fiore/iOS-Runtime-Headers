// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDELAYEDPRESENTATIONCONTEXT_H
#define _UIDELAYEDPRESENTATIONCONTEXT_H

@class NSInvocation;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _UIDelayedPresentationContext : NSObject {
    BOOL _enableUserInteraction;
    NSInteger _reqcnt;
    CGFloat _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}


@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (retain, nonatomic) NSInvocation *presentInvocation; // ivar: _presentInvocation


-(NSInteger)decrementRequestCount;
-(NSInteger)incrementRequestCount;
-(NSInteger)requestCount;
-(id)delayingController;
-(id)initWithTimeout:(CGFloat)arg0 cancellationHandler:(id)arg1 ;
-(id)invocationTarget;


@end


#endif