// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSABSTRACTCOMBINELATEST_H
#define _BPSABSTRACTCOMBINELATEST_H

@class NSMutableArray;
@protocol BMBookmarkableSubscription, BPSSubscriber;


#import "BMBookmarkableSubscription.h"

@interface _BPSAbstractCombineLatest : BMBookmarkableSubscription <BMBookmarkableSubscription>

 {
    os_unfair_lock_s _lock;
    os_unfair_recursive_lock_s _downstreamLock;
}


@property (retain, nonatomic) NSMutableArray *buffers; // ivar: _buffers
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) NSInteger demand; // ivar: _demand
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) BOOL errored; // ivar: _errored
@property (nonatomic) NSUInteger finishCount; // ivar: _finishCount
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) BOOL recursion; // ivar: _recursion
@property (retain, nonatomic) NSMutableArray *subscriptions; // ivar: _subscriptions
@property (nonatomic) NSUInteger upstreamCount; // ivar: _upstreamCount


-(NSInteger)receiveInput:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)convertValues:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 upstreamCount:(NSUInteger)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)receiveSubscription:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif