// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSTHROTTLEINNER_H
#define _BPSTHROTTLEINNER_H

@class NSString, NSDate;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _BPSThrottleInner : NSObject <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
    id *_getTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (retain, nonatomic) id *intervalEvent; // ivar: _intervalEvent
@property (nonatomic) BOOL latest; // ivar: _latest
@property (retain, nonatomic) NSDate *nextIntervalBoundary; // ivar: _nextIntervalBoundary
@property (retain, nonatomic) NSDate *startTimestamp; // ivar: _startTimestamp
@property (readonly) Class superclass;


+(id)new;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(id)initWithDownstream:(id)arg0 interval:(CGFloat)arg1 latest:(BOOL)arg2 getTimestamp:(id)arg3 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif