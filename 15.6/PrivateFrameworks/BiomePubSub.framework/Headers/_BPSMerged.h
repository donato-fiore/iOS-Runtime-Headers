// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSMERGED_H
#define _BPSMERGED_H

@class NSMutableArray;
@protocol BPSSubscriber;


#import "BMBookmarkableSubscription.h"

@interface _BPSMerged : BMBookmarkableSubscription {
    os_unfair_lock_s _lock;
    os_unfair_recursive_lock_s _downstreamLock;
}


@property (retain, nonatomic) NSMutableArray *buffers; // ivar: _buffers
@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) NSInteger demand; // ivar: _demand
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) NSInteger pending; // ivar: _pending
@property (nonatomic) BOOL recursive; // ivar: _recursive
@property (retain, nonatomic) NSMutableArray *subscriptions; // ivar: _subscriptions
@property (nonatomic) BOOL terminated; // ivar: _terminated
@property (retain, nonatomic) NSMutableArray *upstreamBookmarks; // ivar: _upstreamBookmarks
@property (nonatomic) NSInteger upstreamFinished; // ivar: _upstreamFinished


-(NSInteger)receiveInput:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)applyDownstreamWhileLocked:(BOOL)arg0 apply:(id)arg1 ;
-(id)initWithDownstream:(id)arg0 count:(NSInteger)arg1 ;
-(id)newBookmark;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)receiveSubscription:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)requestDemand:(NSInteger)arg0 ;
-(void)updateBookmarksWhenLockedForIndex:(NSUInteger)arg0 ;


@end


#endif