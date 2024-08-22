// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYRETRYTIMER_H
#define SYRETRYTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SYRetryTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _interval;
    CGFloat _backoffFactor;
    int _maxRetries;
    int _numRetries;
}




-(BOOL)incrementBackoff;
-(id)initWithInterval:(CGFloat)arg0 backoffFactor:(CGFloat)arg1 maxRetries:(int)arg2 queue:(id)arg3 callout:(id)arg4 ;
-(void)cancel;


@end


#endif