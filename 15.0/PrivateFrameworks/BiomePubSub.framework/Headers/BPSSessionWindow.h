// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSSESSIONWINDOW_H
#define BPSSESSIONWINDOW_H

@class NSString, NSDateInterval;


#import "BPSWindow.h"
#import "BPSSubscriptionStatus.h"

@interface BPSSessionWindow : BPSWindow {
    os_unfair_lock_s _lock;
    BPSSubscriptionStatus *_status;
    NSString *_identifier;
    BOOL _downstreamRequested;
    id *_timestamp;
}


@property (readonly, nonatomic) id *accumulator; // ivar: _accumulator
@property (readonly, nonatomic) id *closure; // ivar: _closure
@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) CGFloat gap; // ivar: _gap


-(NSInteger)receiveInput:(id)arg0 ;
-(id)identifier;
// -(id)initWithDateInterval:(id)arg0 gap:(CGFloat)arg1 timestamp:(id)arg2 aggregator:(unk)arg3 identifier:(id)arg4  ;
-(id)metadata;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif