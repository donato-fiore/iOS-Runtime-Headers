// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BPSABSTRACTZIP_H
#define _BPSABSTRACTZIP_H

@class NSMutableArray;
@protocol BPSSubscriber;


#import "BPSSubscription.h"

@interface _BPSAbstractZip : BPSSubscription {
    os_unfair_lock_s _lock;
    os_unfair_recursive_lock_s _downstreamLock;
}


@property (retain, nonatomic) NSMutableArray *buffers; // ivar: _buffers
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) BOOL errored; // ivar: _errored
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) NSInteger pendingDemand; // ivar: _pendingDemand
@property (nonatomic) BOOL recursive; // ivar: _recursive
@property (retain, nonatomic) NSMutableArray *subscriptions; // ivar: _subscriptions
@property (nonatomic) NSInteger upstreamCount; // ivar: _upstreamCount
@property (retain, nonatomic) NSMutableArray *upstreamFinished; // ivar: _upstreamFinished


-(NSInteger)receiveInput:(id)arg0 index:(NSInteger)arg1 ;
-(id)convertValues:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 upstreamCount:(NSInteger)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)lockSendCompletion:(id)arg0 index:(NSInteger)arg1 ;
-(void)receiveCompletion:(id)arg0 index:(NSInteger)arg1 ;
-(void)receiveSubscription:(id)arg0 index:(NSInteger)arg1 ;
-(void)requestDemand:(NSInteger)arg0 ;
-(void)resolvePendingDemandAndUnlock;


@end


#endif