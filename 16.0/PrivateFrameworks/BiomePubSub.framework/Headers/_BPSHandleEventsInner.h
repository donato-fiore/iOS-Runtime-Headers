// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BPSHANDLEEVENTSINNER_H
#define _BPSHANDLEEVENTSINNER_H

@class NSString;
@protocol BPSSubscriber, BPSCancellable;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscriptionStatus.h"

@interface _BPSHandleEventsInner : BMBookmarkableSubscription <BPSSubscriber, BPSCancellable>

 {
    os_unfair_lock_s _lock;
    BPSSubscriptionStatus *_status;
    id *_receiveSubscription;
    id *_receiveOutput;
    id *_receiveCompletion;
    id *_receiveCancel;
    id *_receiveRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 handleEvents:(id)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif