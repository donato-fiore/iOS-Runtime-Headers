// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BPSSEQUENCEINNER_H
#define _BPSSEQUENCEINNER_H

@class NSEnumerator;
@protocol BPSSubscriber;


#import "BMBookmarkableSubscription.h"

@interface _BPSSequenceInner : BMBookmarkableSubscription {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (retain, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator
@property (retain, nonatomic) id *next; // ivar: _next
@property (nonatomic) NSInteger pendingDemand; // ivar: _pendingDemand
@property (nonatomic) BOOL recursion; // ivar: _recursion


-(id)initWithDownstream:(id)arg0 enumerator:(id)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif