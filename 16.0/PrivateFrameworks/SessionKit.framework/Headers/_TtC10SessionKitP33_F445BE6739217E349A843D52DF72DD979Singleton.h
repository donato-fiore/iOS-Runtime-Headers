// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10SESSIONKITP33_F445BE6739217E349A843D52DF72DD979SINGLETON_H
#define _TTC10SESSIONKITP33_F445BE6739217E349A843D52DF72DD979SINGLETON_H

@protocol _TtP10SessionKit24SessionListenerXPCClient_;

#import <Foundation/Foundation.h>


@interface _TtC10SessionKitP33_F445BE6739217E349A843D52DF72DD979Singleton : NSObject <_TtP10SessionKit24SessionListenerXPCClient_>

 {
    ? _queue_target;
    ? _sessionDescriptorPublisher;
    ? _queue_sessionPayloadPublishers;
    ? serverStartupToken;
    ? _queue_descriptors;
    ? _queue_payloads;
    ? _queue_descriptorSubscriberCount;
    ? _queue_clientSubscriptionIdentifiers;
    ? _queue_sessionSubscriptions;
    ? queue;
    ? calloutQueue;
}




+(id)shared;
-(id)init;
-(void)sessionDescriptorsChangedWithDescriptors:(id)arg0 completion:(id)arg1 ;
-(void)sessionsEndedWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)sessionsUpdatedWithUpdates:(id)arg0 completion:(id)arg1 ;


@end


#endif