// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMDSLSTATEPUBLISHERINNER_H
#define _BMDSLSTATEPUBLISHERINNER_H

@class BMBookmarkableSubscription, BMBookmarkNode, NSString, BPSSubscriptionStatus;
@protocol BPSSubscriber, BMDSLStateValue;


#import "BMDSLState.h"

@interface _BMDSLStatePublisherInner : BMBookmarkableSubscription <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) BMDSLState *DSLState; // ivar: _DSLState
@property (retain, nonatomic) BMBookmarkNode *completionBookmark; // ivar: _completionBookmark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL sentInitialState; // ivar: _sentInitialState
@property (retain, nonatomic) NSObject<BMDSLStateValue> *state; // ivar: _state
@property (readonly, nonatomic) BPSSubscriptionStatus *status; // ivar: _status
@property (readonly) Class superclass;


+(id)new;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(id)initWithDownstream:(id)arg0 state:(id)arg1 DSLState:(id)arg2 ;
-(id)newBookmark;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif