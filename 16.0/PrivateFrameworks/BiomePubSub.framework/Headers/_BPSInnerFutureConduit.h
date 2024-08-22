// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSINNERFUTURECONDUIT_H
#define _BPSINNERFUTURECONDUIT_H

@protocol BPSSubscriber;


#import "BPSSubscription.h"
#import "BPSFuture.h"

@interface _BPSInnerFutureConduit : BPSSubscription {
    os_unfair_lock_s _lock;
    os_unfair_recursive_lock_s _downstreamLock;
}


@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) BOOL hasAnyDemand; // ivar: _hasAnyDemand
@property (nonatomic) NSInteger identifity; // ivar: _identifity
@property (retain, nonatomic) BPSFuture *parent; // ivar: _parent
@property (nonatomic) BOOL released; // ivar: _released


-(id)initWithParent:(id)arg0 downstream:(id)arg1 ;
-(id)upstreamSubscriptions;
-(void)assignIdentity:(NSInteger)arg0 ;
-(void)cancel;
-(void)fulfill:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif