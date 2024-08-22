// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFOPERATION_H
#define CARPFOPERATION_H

@class NSOperation, NSError, NSString, NSUUID, NSDate;
@protocol CARPFLogging, CARPFTimerDelegate, OS_dispatch_queue, OS_voucher;


#import "CARPFActivity.h"
#import "CARPFTimer.h"

@interface CARPFOperation : NSOperation <CARPFLogging, CARPFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _executing;
    BOOL _finished;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
}


@property (retain) CARPFActivity *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, copy) NSDate *timeoutDate;
@property (readonly, nonatomic) CARPFTimer *timer; // ivar: _timer
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(id)logIdentifier;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)finish;
-(void)main;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)start;
-(void)timerDidFire:(id)arg0 ;


@end


#endif