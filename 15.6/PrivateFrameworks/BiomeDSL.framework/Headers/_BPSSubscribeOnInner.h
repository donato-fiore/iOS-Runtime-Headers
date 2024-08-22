// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSSUBSCRIBEONINNER_H
#define _BPSSUBSCRIBEONINNER_H

@class BPSSubscription, NSString, BPSSubscriptionStatus;
@protocol BPSSubscriber, BPSSubscription;



@interface _BPSSubscribeOnInner : BPSSubscription <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BPSSubscriptionStatus *status; // ivar: _status
@property (retain, nonatomic) NSObject<BPSSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithDownstream:(id)arg0 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif