// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSWINDOWERINNER_H
#define _BPSWINDOWERINNER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol BPSSubscriber, BPSWindowAssigner;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscriptionStatus.h"

@interface _BPSWindowerInner : BMBookmarkableSubscription <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
    BPSSubscriptionStatus *_status;
    NSInteger _demand;
    NSMutableDictionary *_windows;
    NSMutableDictionary *_windowsDemand;
    NSMutableDictionary *_windowsBuffer;
    NSMutableDictionary *_windowsStatus;
    NSMutableArray *_buffer;
    BOOL _recursion;
    BOOL _sideRecursion;
}


@property (readonly, nonatomic) NSObject<BPSWindowAssigner> *assigner; // ivar: _assigner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *key; // ivar: _key
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(NSInteger)receiveInput:(id)arg0 key:(id)arg1 identifier:(id)arg2 ;
-(id)init;
// -(id)initWithDownstream:(id)arg0 key:(id)arg1 assigner:(unk)arg2  ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)cancelWithKey:(id)arg0 identifier:(id)arg1 ;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveCompletion:(id)arg0 key:(id)arg1 identifier:(id)arg2 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 key:(id)arg1 identifier:(id)arg2 ;
-(void)requestDemand:(NSInteger)arg0 ;
-(void)requestDemand:(NSInteger)arg0 key:(id)arg1 identifier:(id)arg2 ;


@end


#endif