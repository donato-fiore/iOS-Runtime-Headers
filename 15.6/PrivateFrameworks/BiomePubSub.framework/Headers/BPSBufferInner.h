// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSBUFFERINNER_H
#define BPSBUFFERINNER_H

@class NSString, NSMutableArray;
@protocol BPSSubscriber;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscriptionStatus.h"
#import "BPSCompletion.h"

@interface BPSBufferInner : BMBookmarkableSubscription <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) NSInteger downstreamDemand; // ivar: _downstreamDemand
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger prefetch; // ivar: _prefetch
@property (nonatomic) BOOL recursion; // ivar: _recursion
@property (nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) BPSSubscriptionStatus *status; // ivar: _status
@property (readonly) Class superclass;
@property (retain, nonatomic) BPSCompletion *terminal; // ivar: _terminal
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values
@property (nonatomic) NSUInteger whenFull; // ivar: _whenFull


-(NSInteger)_drain;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)_lockedPopWithDemand:(NSInteger)arg0 ;
-(id)init;
-(id)initWithDownstream:(id)arg0 size:(NSUInteger)arg1 prefetch:(NSUInteger)arg2 whenFull:(NSUInteger)arg3 ;
-(id)newBookmark;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif