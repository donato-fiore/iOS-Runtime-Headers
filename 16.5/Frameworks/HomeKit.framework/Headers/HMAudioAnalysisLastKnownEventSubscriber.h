// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAUDIOANALYSISLASTKNOWNEVENTSUBSCRIBER_H
#define HMAUDIOANALYSISLASTKNOWNEVENTSUBSCRIBER_H

@class NSString, NSUUID;
@protocol HMEEventConsumer, HMAudioAnalysisLastKnownEventSubscriberDataSource, HMAudioAnalysisLastKnownEventSubscriberDelegate, HMESubscriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMAudioAnalysisLastKnownEventSubscriber : NSObject <HMEEventConsumer>



@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSObject<HMAudioAnalysisLastKnownEventSubscriberDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMAudioAnalysisLastKnownEventSubscriberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (readonly, weak) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithContext:(id)arg0 subscriptionProvider:(id)arg1 dataSource:(id)arg2 workQueue:(id)arg3 ;
-(void)_didReceiveEvent:(id)arg0 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)subscribeLastKnownEventsForAccessory:(id)arg0 completion:(id)arg1 ;


@end


#endif