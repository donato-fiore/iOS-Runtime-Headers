// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFOPERATIONBUDGET_H
#define CARPFOPERATIONBUDGET_H

@class NSString;
@protocol CARPFLogging, CARPFTimerDelegate;


#import "CARPFObject.h"
#import "CARPFTimer.h"

@interface CARPFOperationBudget : CARPFObject <CARPFLogging, CARPFTimerDelegate>

 {
    os_unfair_recursive_lock_s _lock;
    CARPFTimer *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, getter=isFull) BOOL full;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) _CARPFRate rate; // ivar: _rate
@property (readonly) Class superclass;
@property (readonly) NSUInteger value; // ivar: _value


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
-(BOOL)decrement;
-(BOOL)decrementByCount:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 rate:(struct _CARPFRate )arg1 ;
-(void)reset;
-(void)timerDidFire:(id)arg0 ;


@end


#endif