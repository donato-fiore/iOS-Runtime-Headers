// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFOPERATION_H
#define HMFOPERATION_H

@class NSOperation, NSError, NSArray, NSString, NSUUID, NSDate;
@protocol HMFLogging, HMFTimerDelegate, HMFObject, OS_dispatch_queue, OS_voucher;


#import "HMFActivity.h"
#import "HMFTimer.h"

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate, HMFObject>

 {
    os_unfair_lock_s _lock;
    BOOL _executing;
    BOOL _finished;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
}


@property (retain) HMFActivity *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSDate *timeoutDate;
@property (readonly, nonatomic) HMFTimer *timer; // ivar: _timer
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