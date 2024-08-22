// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBFLOWTIMEOUT_H
#define AMSUIWEBFLOWTIMEOUT_H

@class NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSUIWebFlowTimeout : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) id *enqueuedBlock; // ivar: _enqueuedBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (nonatomic) CGFloat timeRemaining; // ivar: _timeRemaining
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(id)timeoutWithTimeout:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)initWithTimeout:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)pause;
-(void)reset;
-(void)start;


@end


#endif