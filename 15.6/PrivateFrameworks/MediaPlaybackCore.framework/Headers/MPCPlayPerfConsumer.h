// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYPERFCONSUMER_H
#define MPCPLAYPERFCONSUMER_H

@class NSString;
@protocol MPCPlaybackEngineEventConsumer, MPCPlaybackEngineEventStreamSubscription;

#import <Foundation/Foundation.h>


@interface MPCPlayPerfConsumer : NSObject <MPCPlaybackEngineEventConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


+(id)coreAnalyticsEventNameWithEventType:(id)arg0 ;
+(id)identifier;
+(void)handleMetrics:(id)arg0 ;
+(void)sendMetrics:(id)arg0 ;
-(void)setupErrorHandlerForEventType:(id)arg0 errorKey:(id)arg1 prefix:(id)arg2 ;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif