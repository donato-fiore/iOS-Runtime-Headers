// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXINNERKNOWLEDGESUBSCRIPTION_H
#define _ATXINNERKNOWLEDGESUBSCRIPTION_H

@class BPSSubscription, NSEnumerator, _DKEventQuery;
@protocol BPSSubscriber, _DKKnowledgeQuerying;



@interface _ATXInnerKnowledgeSubscription : BPSSubscription {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (retain, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) id *next; // ivar: _next
@property (nonatomic) NSUInteger numProcessedEvents; // ivar: _numProcessedEvents
@property (nonatomic) NSInteger offset; // ivar: _offset
@property (nonatomic) NSInteger pendingDemand; // ivar: _pendingDemand
@property (retain, nonatomic) _DKEventQuery *query; // ivar: _query
@property (nonatomic) BOOL recursion; // ivar: _recursion


-(id)initWithQuery:(id)arg0 downstream:(id)arg1 store:(id)arg2 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif