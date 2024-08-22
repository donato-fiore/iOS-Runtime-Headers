// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSFLATMAPOUTER_H
#define _BPSFLATMAPOUTER_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol BPSSubscriber, BMBookmark;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscription.h"

@interface _BPSFlatMapOuter : BMBookmarkableSubscription <BPSSubscriber>

 {
    os_unfair_lock_s _outerLock;
    os_unfair_lock_s _lock;
    os_unfair_recursive_lock_s _downstreamLock;
}


@property (retain, nonatomic) NSMutableArray *buffer; // ivar: _buffer
@property (nonatomic) BOOL cancelledOrCompleted; // ivar: _cancelledOrCompleted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) NSInteger downstreamDemand; // ivar: _downstreamDemand
@property (nonatomic) BOOL downstreamRecursive; // ivar: _downstreamRecursive
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL innerRecursive; // ivar: _innerRecursive
@property (copy, nonatomic) id *map; // ivar: _map
@property (nonatomic) NSInteger maxPublishers; // ivar: _maxPublishers
@property (nonatomic) NSInteger nextInnerIndex; // ivar: _nextInnerIndex
@property (retain, nonatomic) NSObject<BMBookmark> *outerBookmark; // ivar: _outerBookmark
@property (nonatomic) BOOL outerFinished; // ivar: _outerFinished
@property (retain, nonatomic) BPSSubscription *outerSubscription; // ivar: _outerSubscription
@property (nonatomic) NSInteger pendingSubscriptions; // ivar: _pendingSubscriptions
@property (retain, nonatomic) NSMutableDictionary *subscriptions; // ivar: _subscriptions
@property (readonly) Class superclass;


-(NSInteger)receiveInnerInput:(id)arg0 index:(NSInteger)arg1 ;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 maxPublishers:(NSInteger)arg1 map:(id)arg2 ;
-(id)newBookmark;
-(id)upstreamSubscriptions;
-(void)_updateBookmarkWhenLocked;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveInnerCompletion:(id)arg0 index:(NSInteger)arg1 ;
-(void)receiveInnerSubscription:(id)arg0 index:(NSInteger)arg1 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif