// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSTIMEWINDOWPRODUCER_H
#define BPSTIMEWINDOWPRODUCER_H

@class NSString, NSDateInterval;


#import "BPSWindow.h"
#import "BPSSubscriptionStatus.h"

@interface BPSTimeWindowProducer : BPSWindow {
    os_unfair_lock_s _lock;
    BPSSubscriptionStatus *_status;
    NSString *_identifier;
    BOOL _downstreamRequested;
}


@property (readonly, nonatomic) id *accumulator; // ivar: _accumulator
@property (readonly, nonatomic) id *closure; // ivar: _closure
@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval


-(NSInteger)receiveInput:(id)arg0 ;
-(id)identifier;
-(id)initWithDateInterval:(id)arg0 aggregator:(id)arg1 identifier:(id)arg2 ;
-(id)metadata;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif