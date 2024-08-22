// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSFILTERPRODUCER_H
#define BPSFILTERPRODUCER_H

@class NSString;
@protocol BPSSubscriber;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscription.h"

@interface BPSFilterProducer : BMBookmarkableSubscription <BPSSubscriber>

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
-(id)initWithDownstream:(id)arg0 ;
-(id)receiveNewValue:(id)arg0 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif