// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCAMSENGAGEMENTEVENTCONSUMER_H
#define MPCAMSENGAGEMENTEVENTCONSUMER_H

@class NSString, AMSEngagement;
@protocol MPCPlaybackEngineEventConsumer, MPCPlaybackEngineEventStreamSubscription;

#import <Foundation/Foundation.h>


@interface MPCAMSEngagementEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AMSEngagement *engagement; // ivar: _engagement
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


+(id)identifier;
-(BOOL)_enqueueDataForPlaybackChangingEvent:(id)arg0 cursor:(id)arg1 ;
-(id)_JSONEncodableEvent:(id)arg0 ;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif