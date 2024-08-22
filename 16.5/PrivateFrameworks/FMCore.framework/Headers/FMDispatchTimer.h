// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDISPATCHTIMER_H
#define FMDISPATCHTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FMDispatchTimer : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat leewayTimeInterval; // ivar: _leewayTimeInterval
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource


-(id)initWithQueue:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif