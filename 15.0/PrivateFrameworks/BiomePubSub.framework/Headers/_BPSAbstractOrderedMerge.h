// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BPSABSTRACTORDEREDMERGE_H
#define _BPSABSTRACTORDEREDMERGE_H

@class NSMutableArray, NSMutableSet;
@protocol BPSSubscriber;


#import "BMBookmarkableSubscription.h"

@interface _BPSAbstractOrderedMerge : BMBookmarkableSubscription {
    os_unfair_lock_s _lock;
    os_unfair_recursive_lock_s _downstreamLock;
}


@property (retain, nonatomic) NSMutableArray *buffers; // ivar: _buffers
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSMutableSet *completedUpstreamIndexes; // ivar: _completedUpstreamIndexes
@property (nonatomic) NSInteger demand; // ivar: _demand
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) BOOL errored; // ivar: _errored
@property (nonatomic) NSUInteger finishCount; // ivar: _finishCount
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) BOOL recursion; // ivar: _recursion
@property (retain, nonatomic) NSMutableArray *requestsPerSubscription; // ivar: _requestsPerSubscription
@property (retain, nonatomic) NSMutableArray *subscriptions; // ivar: _subscriptions
@property (retain, nonatomic) NSMutableArray *upstreamBookmarks; // ivar: _upstreamBookmarks
@property (nonatomic) NSUInteger upstreamCount; // ivar: _upstreamCount


-(BOOL)_isBuffersEmpty;
-(BOOL)isWaitingForMoreValues;
-(NSInteger)compareFirst:(id)arg0 withSecond:(id)arg1 ;
-(NSInteger)receiveInput:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)initWithDownstream:(id)arg0 upstreamCount:(NSUInteger)arg1 ;
-(id)newBookmark;
-(id)nextValueIndex:(*id)arg0 ;
-(id)upstreamSubscriptions;
-(void)_completeWhileLockedWithCompletion:(id)arg0 ;
-(void)_guardedBecomeTerminal;
-(void)cancel;
-(void)flushBufferAndRequestMoreWhileLocked;
-(void)receiveCompletion:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)receiveSubscription:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)requestDemand:(NSInteger)arg0 ;
-(void)updateBookmarksWhenLockedForIndex:(NSUInteger)arg0 ;


@end


#endif