// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSCORRELATIONPRODUCER_H
#define BPSCORRELATIONPRODUCER_H

@class NSString;
@protocol BPSSubscriber, BPSCorrelateProducer;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscription.h"

@interface BPSCorrelationProducer : BMBookmarkableSubscription <BPSSubscriber, BPSCorrelateProducer>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) BPSSubscription *subscription; // ivar: _subscription
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(NSInteger)receiveInput:(id)arg0 source:(NSInteger)arg1 ;
-(id)initWithDownstream:(id)arg0 ;
-(id)receiveNewValue:(id)arg0 source:(NSInteger)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif