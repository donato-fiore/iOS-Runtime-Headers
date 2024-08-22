// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFOPERATIONBUDGET_H
#define HMFOPERATIONBUDGET_H

@class NSString;
@protocol HMFLogging, HMFTimerDelegate;


#import "HMFObject.h"
#import "HMFTimer.h"

@interface HMFOperationBudget : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_recursive_lock_s _lock;
    HMFTimer *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, getter=isFull) BOOL full;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) _HMFRate rate; // ivar: _rate
@property (readonly) Class superclass;
@property (readonly) NSUInteger value; // ivar: _value


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
-(BOOL)decrement;
-(BOOL)decrementByCount:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 rate:(struct _HMFRate )arg1 ;
-(void)reset;
-(void)timerDidFire:(id)arg0 ;


@end


#endif