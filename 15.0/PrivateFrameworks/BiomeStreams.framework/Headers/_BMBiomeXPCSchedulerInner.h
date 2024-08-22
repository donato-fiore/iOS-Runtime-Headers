// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BMBIOMEXPCSCHEDULERINNER_H
#define _BMBIOMEXPCSCHEDULERINNER_H

@class BPSSubscription, BMBookmarkablePublisher, NSString, BMDSL, BPSSubscriptionStatus;
@protocol BPSSubscriber, OS_dispatch_queue;


#import "BMStreamsAccessClient.h"
#import "BMComputeXPCSubscriptionBookmarkStorage.h"
#import "BMComputeXPCPublisherClient.h"
#import "BMComputeXPCSubscription.h"

@interface _BMBiomeXPCSchedulerInner : BPSSubscription <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
    BMBookmarkablePublisher *_bpsPublisher;
    CGFloat _latestEventTime;
}


@property (retain, nonatomic) BMStreamsAccessClient *accessClient; // ivar: _accessClient
@property (retain, nonatomic) BMComputeXPCSubscriptionBookmarkStorage *bookmarkStorage; // ivar: _bookmarkStorage
@property (retain, nonatomic) BMComputeXPCPublisherClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger demand; // ivar: _demand
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (retain, nonatomic) BMDSL *graph; // ivar: _graph
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) BPSSubscriptionStatus *status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) BOOL waking; // ivar: _waking
@property (retain, nonatomic) BMComputeXPCSubscription *xpcSubscription; // ivar: _xpcSubscription


+(id)streamIdentifierFromGraph:(id)arg0 ;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 identifier:(id)arg1 graph:(id)arg2 client:(id)arg3 targetQueue:(id)arg4 waking:(BOOL)arg5 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;
-(void)switchToUpdatedPublisherWithBookmark:(id)arg0 ;


@end


#endif