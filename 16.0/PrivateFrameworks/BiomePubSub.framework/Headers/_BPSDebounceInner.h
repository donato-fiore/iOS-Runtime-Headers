// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSDEBOUNCEINNER_H
#define _BPSDEBOUNCEINNER_H

@class NSString, NSDate;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _BPSDebounceInner : NSObject <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
    id *_getTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) CGFloat dueTime; // ivar: _dueTime
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastArrivalTimestamp; // ivar: _lastArrivalTimestamp
@property (retain, nonatomic) id *lastEvent; // ivar: _lastEvent
@property (readonly) Class superclass;


+(id)new;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(id)initWithDownstream:(id)arg0 for:(CGFloat)arg1 getTimestamp:(id)arg2 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif