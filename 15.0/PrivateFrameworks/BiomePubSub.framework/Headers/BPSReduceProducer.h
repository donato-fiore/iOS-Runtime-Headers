// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSREDUCEPRODUCER_H
#define BPSREDUCEPRODUCER_H

@class NSString;
@protocol BPSSubscriber;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscriptionStatus.h"

@interface BPSReduceProducer : BMBookmarkableSubscription <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
}


@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) BOOL downstreamRequested; // ivar: _downstreamRequested
@property (nonatomic) BOOL empty; // ivar: _empty
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *initial; // ivar: _initial
@property (copy, nonatomic) id *reduce; // ivar: _reduce
@property (retain, nonatomic) id *result; // ivar: _result
@property (retain, nonatomic) BPSSubscriptionStatus *status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) BOOL upstreamCompleted; // ivar: _upstreamCompleted


+(id)safeMutableCopy:(id)arg0 ;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 initial:(id)arg1 reduce:(id)arg2 ;
-(id)newBookmark;
-(id)receiveNewValue:(id)arg0 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif